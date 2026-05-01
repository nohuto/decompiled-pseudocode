/*
 * XREFs of ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUHWND__@@UtagPOINT@@@Z @ 0x180145600
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x18024B870 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801456DC (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall ImmersiveMonitorHelper::ConnectToMonitor(ImmersiveMonitorHelper *this, HWND a2, struct tagPOINT a3)
{
  __int64 (*v4)(void); // rbx
  int v5; // eax
  bool v6; // bl
  struct IImmersiveMonitor *v7; // rcx
  bool result; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IImmersiveMonitor *v10; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  MapWindowPoints(a2, 0LL, &v11, 1u);
  v10 = 0LL;
  v4 = *(__int64 (**)(void))(**((_QWORD **)this + 9) + 96LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14D,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
        (const char *)(unsigned int)v5,
        (int)&v10);
    v6 = ImmersiveMonitorHelper::ConnectToMonitor(this, v10);
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    result = v6;
  }
  catch ( ... )
  {
    return 0;
  }
  return result;
}
