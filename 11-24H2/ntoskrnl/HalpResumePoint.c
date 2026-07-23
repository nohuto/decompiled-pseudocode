/*
 * XREFs of HalpResumePoint @ 0x1406A70C0
 * Callers:
 *     HalpSecureResumePoint @ 0x1406A6FD0 (HalpSecureResumePoint.c)
 * Callees:
 *     KasanHibernationResume @ 0x1405A6C50 (KasanHibernationResume.c)
 */

__int64 __fastcall HalpResumePoint(ULONG_PTR a1)
{
  _UNKNOWN *retaddr; // [rsp+30h] [rbp+0h] BYREF

  KasanHibernationResume(a1, (ULONG_PTR)&retaddr);
  return 1LL;
}
