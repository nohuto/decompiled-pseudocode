/*
 * XREFs of MiCreatePlaceholderStorage @ 0x1408DC630
 * Callers:
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiInitializePartialVad @ 0x14091A104 (MiInitializePartialVad.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402676E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiInsertVadEvent @ 0x1404EF5E8 (MiInsertVadEvent.c)
 *     MiAllocateVad @ 0x1408DC6F8 (MiAllocateVad.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
