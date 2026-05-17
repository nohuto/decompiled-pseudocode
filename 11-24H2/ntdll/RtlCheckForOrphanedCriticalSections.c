/*
 * XREFs of RtlCheckForOrphanedCriticalSections @ 0x1800F3170
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckHeldCriticalSections @ 0x1800F31A0 (RtlCheckHeldCriticalSections.c)
 */

__int64 __fastcall RtlCheckForOrphanedCriticalSections(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  return RtlCheckHeldCriticalSections(a1, &v2);
}
