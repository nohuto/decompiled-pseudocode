/*
 * XREFs of ?UpdateMMCSSTask@CKst@@EEAAJXZ @ 0x180209390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateMMCSSTask@DWM@KST@InputTraceLogging@@SAX_N@Z @ 0x1802093FC (-UpdateMMCSSTask@DWM@KST@InputTraceLogging@@SAX_N@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1802097C8 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180209828 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CKst::UpdateMMCSSTask(CKst *this)
{
  char v2; // bl
  struct _RTL_CRITICAL_SECTION *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_BYTE *)(*((_QWORD *)this + 6) + 816LL);
  InputTraceLogging::KST::DWM::UpdateMMCSSTask(v2);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    v4 = CMmcssTask::Apply(v3, 1);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else
  {
    CMmcssTask::Revert((CMmcssTask *)v3);
  }
  return 0LL;
}
