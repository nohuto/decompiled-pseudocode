/*
 * XREFs of ?OnAutoParentingChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AEDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800AD280 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 */

__int64 __fastcall CCaptureManager::OnAutoParentingChanged(CCaptureManager *this, struct CWindowData *a2)
{
  _QWORD *v4; // rdi
  _QWORD *i; // rbx
  HWND *v6; // rax
  HWND v7; // rdx
  int v8; // eax
  unsigned int v9; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 115) && (*((_BYTE *)a2 + 742) & 0x10) != 0 )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 18);
    for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
    {
      v6 = (HWND *)i[11];
      if ( v6 != (HWND *)i[12] )
      {
        v7 = (HWND)*((_QWORD *)a2 + 5);
        while ( *v6 != v7 )
        {
          v6 += 2;
          if ( v6 == (HWND *)i[12] )
            goto LABEL_11;
        }
        v12 = i[2];
        v8 = CCaptureManager::AddRemoveWindowToFilteredDisplayCapture(
               this,
               v7,
               0,
               (const struct DWM_CAPTURE_TOKEN *)&v12);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4F4,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v8);
          return v9;
        }
      }
LABEL_11:
      ;
    }
  }
  return 0LL;
}
