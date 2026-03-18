/*
 * XREFs of MiCreatePlaceholderStorage @ 0x1408F8210
 * Callers:
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 *     MiInitializePartialVad @ 0x140A246FC (MiInitializePartialVad.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403CDFC0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiInsertVadEvent @ 0x1404F1B48 (MiInsertVadEvent.c)
 *     MiAllocateVad @ 0x1408F82D8 (MiAllocateVad.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePlaceholderStorage(__int64 a1)
{
  _KPROCESS *Process; // rsi
  int v3; // ebx
  __int64 Pool; // rax
  unsigned __int64 *v5; // rdi
  __int64 Vad; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = PsChargeProcessNonPagedPoolQuota((__int64)Process, 0x98uLL);
  if ( v3 >= 0 )
  {
    Pool = MiAllocatePool(0x40uLL, 0x58uLL, 1936747853);
    v5 = (unsigned __int64 *)Pool;
    if ( Pool )
    {
      *(_DWORD *)(Pool + 80) = 128;
      Vad = MiAllocateVad(0LL, 0LL, 2LL);
      v5[1] = Vad;
      if ( Vad )
      {
        MiInsertVadEvent(a1, v5, 0);
        return 0LL;
      }
      v3 = -1073741670;
      ExFreePoolWithTag(v5, 0);
    }
    else
    {
      v3 = -1073741670;
    }
    PsReturnProcessNonPagedPoolQuota((ULONG_PTR)Process, 0x98uLL);
  }
  return (unsigned int)v3;
}
