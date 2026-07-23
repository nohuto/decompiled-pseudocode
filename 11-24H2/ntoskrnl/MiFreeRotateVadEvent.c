/*
 * XREFs of MiFreeRotateVadEvent @ 0x140A77D28
 * Callers:
 *     MiFreeRotateView @ 0x1407EE00C (MiFreeRotateView.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 */

unsigned __int64 __fastcall MiFreeRotateVadEvent(__int64 a1)
{
  _SLIST_ENTRY *v1; // rcx

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v1 )
    MiFreeInPageSupportBlock(v1);
  return PsReturnProcessNonPagedPoolQuota((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0x218uLL);
}
