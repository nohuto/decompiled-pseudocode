/*
 * XREFs of CcUnregisterExternalCacheEx @ 0x1405779B0
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x1403A72C0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCacheEx @ 0x1405778A0 (CcRemoveExternalCacheEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnregisterExternalCacheEx(_QWORD *P)
{
  CcRemoveExternalCacheEx(P);
  CcDeductDirtyPagesFromExternalCache((__int64)P, P[1]);
  ExFreePoolWithTag(P, 0x43456343u);
}
