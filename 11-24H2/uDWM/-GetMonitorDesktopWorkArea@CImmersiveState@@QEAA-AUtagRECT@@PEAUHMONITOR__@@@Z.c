/*
 * XREFs of ?GetMonitorDesktopWorkArea@CImmersiveState@@QEAA?AUtagRECT@@PEAUHMONITOR__@@@Z @ 0x1800C6580
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x1800451F4 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CImmersiveState::GetMonitorDesktopWorkArea(
        CImmersiveState *this,
        struct tagRECT *__return_ptr retstr,
        HMONITOR a3)
{
  __int64 i; // r9
  __int64 v4; // rax

  *retstr = 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v4 = *((_QWORD *)this + 2);
    if ( *(HMONITOR *)(v4 + 24 * i + 16) == a3 )
    {
      *retstr = *(struct tagRECT *)(v4 + 24 * i);
      return retstr;
    }
  }
  return retstr;
}
