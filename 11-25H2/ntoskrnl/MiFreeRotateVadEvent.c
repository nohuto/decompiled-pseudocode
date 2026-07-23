/*
 * XREFs of MiFreeRotateVadEvent @ 0x140A7A77C
 * Callers:
 *     MiFreeRotateView @ 0x1407DDB9C (MiFreeRotateView.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 */

unsigned __int64 __fastcall MiFreeRotateVadEvent(__int64 a1)
{
  _SLIST_ENTRY *v1; // rcx

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v1 )
    MiFreeInPageSupportBlock(v1);
  return PsReturnProcessNonPagedPoolQuota((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0x218uLL);
}
