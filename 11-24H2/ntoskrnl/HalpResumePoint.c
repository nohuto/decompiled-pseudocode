/*
 * XREFs of HalpResumePoint @ 0x1406A6090
 * Callers:
 *     HalpSecureResumePoint @ 0x1406A5FA0 (HalpSecureResumePoint.c)
 * Callees:
 *     KasanHibernationResume @ 0x1405A9CE0 (KasanHibernationResume.c)
 */

__int64 __fastcall HalpResumePoint(ULONG_PTR a1)
{
  _UNKNOWN *retaddr; // [rsp+30h] [rbp+0h] BYREF

  KasanHibernationResume(a1, (ULONG_PTR)&retaddr);
  return 1LL;
}
