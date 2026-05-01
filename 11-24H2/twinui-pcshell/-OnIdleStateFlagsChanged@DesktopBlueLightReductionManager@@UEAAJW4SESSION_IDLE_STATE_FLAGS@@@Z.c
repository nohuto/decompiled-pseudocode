/*
 * XREFs of ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1801CBDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099770 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellC.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z @ 0x1801CBFE8 (--$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z.c)
 *     ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesktopBlueLightReductionManager@@@Z @ 0x1801CC1E8 (--0-$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesk.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fde1e3dd508437221a89b1c19fd2671f___ @ 0x18029DE34 (Windows--Internal--ComTaskPool--QueueTask__lambda_fde1e3dd508437221a89b1c19fd2671f___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DesktopBlueLightReductionManager::OnIdleStateFlagsChanged(__int64 a1, int a2)
{
  int v4; // ebx
  volatile int *v5; // rdx
  const char *v6; // r9
  __int64 result; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  volatile int *v15; // rdx
  int v16; // edi
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // [rsp+20h] [rbp-28h]
  __int64 v21; // [rsp+30h] [rbp-18h] BYREF
  __int64 v22; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF
  int v25; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a1 + 88) ^ a2;
  v25 = v4;
  LODWORD(v24) = a2;
  DesktopBlueLightReductionManagerTelemetry::IdleStateFlagsChanged<unsigned int,unsigned int>(&v24, &v25);
  try
  {
    if ( v4 )
    {
      *(_DWORD *)(a1 + 88) = a2;
      if ( (v4 & 0xD) != 0 )
      {
        if ( (a2 & 0xD) == 0 )
        {
          if ( *(_DWORD *)(a1 + 72) )
          {
            v11 = a1 - 120;
          }
          else
          {
            v24 = 0LL;
            v8 = *(__int64 **)(a1 + 56);
            v9 = *v8;
            v24 = 0LL;
            v10 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v9 + 24))(
                    v8,
                    &IID_IImmersiveWindowMessageService,
                    &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
                    &v24);
            if ( v10 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x127,
                (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                (const char *)(unsigned int)v10,
                v20);
            v11 = a1 - 120;
            v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v24 + 24LL))(
                    v24,
                    30LL,
                    (a1 - 16) & -(__int64)(a1 != 120),
                    a1 + 72);
            if ( v12 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x128,
                (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                (const char *)(unsigned int)v12,
                v20);
            if ( v24 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          if ( v11 )
            Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v11 + 164), v5);
          v21 = v11;
          wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
            &v22,
            v11);
          v16 = Windows::Internal::ComTaskPool::QueueTask__lambda_fde1e3dd508437221a89b1c19fd2671f___(
                  v14,
                  v13,
                  *(unsigned int *)(a1 + 84),
                  &v21);
          if ( v22 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(
              v22,
              v15);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x131,
              (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
              (const char *)(unsigned int)v16);
          if ( v11 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(
              v11,
              v15);
        }
      }
      else if ( *(_DWORD *)(a1 + 72) )
      {
        v24 = 0LL;
        v17 = *(__int64 **)(a1 + 56);
        v18 = *v17;
        v24 = 0LL;
        v19 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v18 + 24))(
                v17,
                &IID_IImmersiveWindowMessageService,
                &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
                &v24);
        if ( v19 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x13A,
            (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
            (const char *)(unsigned int)v19);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 32LL))(v24, *(unsigned int *)(a1 + 72));
          *(_DWORD *)(a1 + 72) = 0;
        }
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x145,
                           (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v6);
  }
  return result;
}
