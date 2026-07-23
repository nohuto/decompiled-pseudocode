/*
 * XREFs of CcUnregisterExternalCacheEx @ 0x140578150
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x140496AE0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCacheEx @ 0x140578044 (CcRemoveExternalCacheEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnregisterExternalCacheEx(_QWORD *P)
{
  CcRemoveExternalCacheEx(P);
  CcDeductDirtyPagesFromExternalCache((__int64)P, P[1]);
  ExFreePoolWithTag(P, 0x43456343u);
}
