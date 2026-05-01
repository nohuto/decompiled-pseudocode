/*
 * XREFs of ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x1800B7DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18008C694 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18008C6BC (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1800B6CBC (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ??$HitTestPartNotifyEvent@AEB_KAEBHAEBE@CSnapComponentTelemetry@@SAXAEB_KAEBHAEBE@Z @ 0x1800B7F24 (--$HitTestPartNotifyEvent@AEB_KAEBHAEBE@CSnapComponentTelemetry@@SAXAEB_KAEBHAEBE@Z.c)
 *     ?ShowFlyoutAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z @ 0x180209D0C (-ShowFlyoutAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z.c)
 */

__int64 __fastcall CShellSnapComponent::OnHitTestPartNotifyEvent(
        CShellSnapComponent *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        ApplicationViewHelpers **a3)
{
  ApplicationViewHelpers *v6; // rsi
  BOOL v7; // ebx
  HWND v8; // rdx
  bool CanResizeWindow; // r14
  HWND v10; // rdx
  bool CanMaximizeWindow; // al
  const char *v12; // r9
  tagCURSORINFO pci; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int pvParam; // [rsp+50h] [rbp+8h] BYREF

  CSnapComponentTelemetry::HitTestPartNotifyEvent<unsigned __int64 const &,int const &,unsigned char const &>(
    a3,
    a3 + 1,
    (char *)a3 + 19);
  if ( *((_BYTE *)this + 920) && *((_DWORD *)a3 + 2) == 9 )
  {
    if ( *((_BYTE *)a3 + 19) )
    {
      v6 = *a3;
      pvParam = 0;
      if ( SystemParametersInfoW(0x82u, 0, &pvParam, 0) )
      {
        if ( pvParam )
        {
          v7 = IsWindowEnabled((HWND)v6);
          CanResizeWindow = ApplicationViewHelpers::CanResizeWindow(v6, v8);
          CanMaximizeWindow = ApplicationViewHelpers::CanMaximizeWindow(v6, v10);
          if ( v7 )
          {
            if ( CanResizeWindow && CanMaximizeWindow )
            {
              pci.cbSize = 24;
              memset(&pci.flags, 0, 20);
              if ( GetCursorInfo(&pci) )
              {
                if ( (pci.flags & 1) != 0 )
                {
                  try
                  {
                    SnapFlyoutHost::ShowFlyoutAsync(*((_QWORD *)this + 114), &pvParam, v6);
                  }
                  catch ( ... )
                  {
                    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                           retaddr,
                                           (void *)0x75F,
                                           (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                           v12);
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      SnapFlyoutHost::HideAsync(*((_QWORD *)this + 114), (__int64)&pvParam, 0);
    }
  }
  return 0LL;
}
