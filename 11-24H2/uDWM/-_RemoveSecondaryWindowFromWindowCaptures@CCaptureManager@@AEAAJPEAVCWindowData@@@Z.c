/*
 * XREFs of ?_RemoveSecondaryWindowFromWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x1800B4188
 * Callers:
 *     ?OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF0B0 (-OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800A8D44 (-ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CCaptureManager::_RemoveSecondaryWindowFromWindowCaptures(
        CCaptureManager *this,
        struct CWindowData *a2)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  CContainerVisualProxy **v5; // rcx
  int v6; // eax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 3) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 2);
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      v5 = (CContainerVisualProxy **)i[6];
      if ( v5 )
      {
        v6 = CapturedWindowRepresentation::ForceRemoveSecondaryWindow(v5, a2);
        v7 = v6;
        if ( v6 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8B8,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v6);
          return v7;
        }
      }
    }
  }
  return 0LL;
}
