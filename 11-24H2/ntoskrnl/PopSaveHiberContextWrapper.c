/*
 * XREFs of PopSaveHiberContextWrapper @ 0x1406B4620
 * Callers:
 *     <none>
 * Callees:
 *     VslSwapHiberShadowStacks @ 0x14058B870 (VslSwapHiberShadowStacks.c)
 *     KasanHibernationGetStackLow @ 0x1405A6BA0 (KasanHibernationGetStackLow.c)
 *     KasanHibernationResume @ 0x1405A6C50 (KasanHibernationResume.c)
 *     KeSaveStateForHibernate @ 0x1406ABD10 (KeSaveStateForHibernate.c)
 *     PopHiberCheckResume @ 0x140B709E0 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 */

__int64 __fastcall PopSaveHiberContextWrapper(ULONG_PTR BugCheckParameter3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v5; // zf
  __int64 result; // rax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+20h] [rbp-18h]

  __asm { rdsspq  rcx }
  VslSwapHiberShadowStacks(_RCX);
  if ( __readgsdword(0x1A4u)
    || (BugCheckParameter3a = (ULONG_PTR)KasanHibernationGetStackLow(v4, v3),
        KeSaveStateForHibernate((__int64)&PoWakeState),
        KasanHibernationResume(BugCheckParameter3a, (ULONG_PTR)&v7),
        v5 = (unsigned __int8)PopHiberCheckResume() == 0,
        result = 1073742484LL,
        v5) )
  {
    result = PopSaveHiberContext(BugCheckParameter3);
  }
  if ( (int)result < 0 )
  {
    BugCheckParameter3a = result;
    VslSwapHiberShadowStacks(0LL);
    return BugCheckParameter3a;
  }
  return result;
}
