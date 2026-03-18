/*
 * XREFs of MiCreateRotateView @ 0x140A680A8
 * Callers:
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiInitializePartialVad @ 0x140A246FC (MiInitializePartialVad.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiGetInPageSupportBlock @ 0x1402E42D0 (MiGetInPageSupportBlock.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403CDFC0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiInsertVadEvent @ 0x1404F1B48 (MiInsertVadEvent.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  __int64 Pool; // rbx
  PSLIST_ENTRY v3; // rdi
  void *v5; // rcx

  Pool = MiAllocatePool(0x40uLL, 0x58uLL, 2004315469);
  if ( Pool )
  {
    v3 = MiGetInPageSupportBlock(0, 0LL);
    if ( v3 )
    {
      if ( (int)PsChargeProcessNonPagedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, 0x218uLL) >= 0 )
      {
        *(_DWORD *)(Pool + 80) = 8;
        *(_QWORD *)(Pool + 8) = v3;
        MiInsertVadEvent(a1, (unsigned __int64 *)Pool, 0);
        return 1LL;
      }
      ExFreePoolWithTag((PVOID)Pool, 0);
      v5 = v3;
    }
    else
    {
      v5 = (void *)Pool;
    }
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
