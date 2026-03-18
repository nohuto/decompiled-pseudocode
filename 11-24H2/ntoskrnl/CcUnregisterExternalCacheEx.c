/*
 * XREFs of CcUnregisterExternalCacheEx @ 0x14057ACC0
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x1402CC0E0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCacheEx @ 0x14057ABB4 (CcRemoveExternalCacheEx.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnregisterExternalCacheEx(_QWORD *P)
{
  CcRemoveExternalCacheEx(P);
  CcDeductDirtyPagesFromExternalCache((__int64)P, P[1]);
  ExFreePoolWithTag(P, 0x43456343u);
}
