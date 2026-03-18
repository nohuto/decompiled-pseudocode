/*
 * XREFs of HalpResumePoint @ 0x14069AE60
 * Callers:
 *     HalpSecureResumePoint @ 0x14069AD70 (HalpSecureResumePoint.c)
 * Callees:
 *     KasanHibernationResume @ 0x1405A6350 (KasanHibernationResume.c)
 */

__int64 __fastcall HalpResumePoint(ULONG_PTR a1)
{
  _UNKNOWN *retaddr; // [rsp+30h] [rbp+0h] BYREF

  KasanHibernationResume(a1, (ULONG_PTR)&retaddr);
  return 1LL;
}
