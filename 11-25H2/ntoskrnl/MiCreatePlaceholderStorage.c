/*
 * XREFs of MiCreatePlaceholderStorage @ 0x1408F9230
 * Callers:
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiInitializePartialVad @ 0x140902310 (MiInitializePartialVad.c)
 *     MiAllocateChildVads @ 0x140A40978 (MiAllocateChildVads.c)
 * Callees:
 *     MiInsertVadEvent @ 0x1402A33D8 (MiInsertVadEvent.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C5810 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiAllocateVad @ 0x1408F92F8 (MiAllocateVad.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
