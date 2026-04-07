/*
 * XREFs of ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180075908
 * Callers:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032388 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800758E0 (-IgnoreCurrentThread@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A66D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::StopWatching(
        wil::details::ThreadFailureCallbackHolder *this)
{
  wil::details::ThreadFailureCallbackHolder *v2; // rax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) != GetCurrentThreadId() )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x3BE,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
      (const char *)0x8007029CLL,
      v3);
  *((_DWORD *)this + 6) = 0;
  while ( 1 )
  {
    v2 = **(wil::details::ThreadFailureCallbackHolder ***)this;
    if ( !v2 )
      break;
    if ( v2 == this )
    {
      **(_QWORD **)this = *((_QWORD *)this + 2);
      break;
    }
    *(_QWORD *)this = (char *)v2 + 16;
  }
  *(_QWORD *)this = 0LL;
}
