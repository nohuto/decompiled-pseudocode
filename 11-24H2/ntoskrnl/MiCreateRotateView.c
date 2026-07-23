/*
 * XREFs of MiCreateRotateView @ 0x140A615A8
 * Callers:
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiInitializePartialVad @ 0x14091A104 (MiInitializePartialVad.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402676E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetInPageSupportBlock @ 0x1403DC710 (MiGetInPageSupportBlock.c)
 *     MiInsertVadEvent @ 0x1404EF5E8 (MiInsertVadEvent.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
