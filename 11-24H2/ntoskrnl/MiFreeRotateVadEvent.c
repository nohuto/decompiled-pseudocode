/*
 * XREFs of MiFreeRotateVadEvent @ 0x140A7DA28
 * Callers:
 *     MiFreeRotateView @ 0x1407EDA3C (MiFreeRotateView.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x1402EEC40 (MiFreeInPageSupportBlock.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 */

unsigned __int64 __fastcall MiFreeRotateVadEvent(__int64 a1)
{
  struct _SLIST_ENTRY *v1; // rcx

  v1 = *(struct _SLIST_ENTRY **)(a1 + 8);
  if ( v1 )
    MiFreeInPageSupportBlock(v1);
  return PsReturnProcessNonPagedPoolQuota((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0x218uLL);
}
