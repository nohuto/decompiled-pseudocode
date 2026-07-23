/*
 * XREFs of KasanHibernationResume @ 0x1405A6C50
 * Callers:
 *     HalpResumePoint @ 0x1406A70C0 (HalpResumePoint.c)
 *     PopSaveHiberContextWrapper @ 0x1406B4620 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KasanHibernationResume(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // r8
  __int64 result; // rax
  size_t v4; // r8
  void *v5; // rcx

  if ( byte_140FCECA8 )
  {
    v2 = BugCheckParameter4 - BugCheckParameter3;
    if ( (((_BYTE)BugCheckParameter4 - (_BYTE)BugCheckParameter3) & 7) != 0 )
      KeBugCheckEx(0x1F1u, 4uLL, 4uLL, BugCheckParameter3, BugCheckParameter4);
    if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
    if ( (BugCheckParameter3 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
    if ( BugCheckParameter4 < BugCheckParameter3 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, v2);
    result = 0x800000000000LL;
    v4 = v2 >> 3;
    v5 = (void *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3));
    if ( v4 )
      return (__int64)memset_0(v5, 0, v4);
  }
  return result;
}
