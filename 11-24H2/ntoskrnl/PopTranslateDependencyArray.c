/*
 * XREFs of PopTranslateDependencyArray @ 0x1404885C8
 * Callers:
 *     PopProcessorQueryPlatformStateNotification @ 0x140488510 (PopProcessorQueryPlatformStateNotification.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 */

void __fastcall PopTranslateDependencyArray(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int i; // r8d

  if ( a5 > a4 )
LABEL_2:
    PopFxBugCheck(0x703uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  for ( i = 0; i < a5; ++i )
  {
    v7 = 2LL * i;
    v8 = *(_QWORD *)(a6 + 16LL * i);
    if ( !v8 )
      goto LABEL_2;
    *(_QWORD *)(a6 + 8 * v7) = *(_QWORD *)(v8 + 192);
  }
}
