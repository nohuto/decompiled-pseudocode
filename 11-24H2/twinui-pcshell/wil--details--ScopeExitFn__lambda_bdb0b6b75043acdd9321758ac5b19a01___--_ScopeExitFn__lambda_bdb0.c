/*
 * XREFs of wil::details::ScopeExitFn__lambda_bdb0b6b75043acdd9321758ac5b19a01___::_ScopeExitFn__lambda_bdb0b6b75043acdd9321758ac5b19a01___ @ 0x1803F4E20
 * Callers:
 *     _DDAScreenCapture::GetScreenCaptureAsWicBitmapSource_::_1_::dtor$1 @ 0x1806E7736 (_DDAScreenCapture--GetScreenCaptureAsWicBitmapSource_--_1_--dtor$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_bdb0b6b75043acdd9321758ac5b19a01___::_ScopeExitFn__lambda_bdb0b6b75043acdd9321758ac5b19a01___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 112LL))(**(_QWORD **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v1);
  }
}
