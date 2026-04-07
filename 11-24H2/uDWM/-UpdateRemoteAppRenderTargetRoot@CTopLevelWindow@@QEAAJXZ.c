/*
 * XREFs of ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x180088030
 * Callers:
 *     ?EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z @ 0x180030138 (-EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800929E0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800EE880 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsWCOSContainer@@YA_NXZ @ 0x1800F4EA0 (-IsWCOSContainer@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateRemoteAppRenderTargetRoot(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rsi
  CTopLevelWindow *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 824);
  v3 = this;
  if ( *((_QWORD *)this + 103) )
  {
    v4 = *((_QWORD *)this + 89);
    if ( v4 )
    {
      if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) >= 5 )
      {
        if ( *(_QWORD *)(v4 + 480) && IsWCOSContainer() )
          v3 = *(CTopLevelWindow **)(*(_QWORD *)(*((_QWORD *)v3 + 89) + 480LL) + 24LL);
        v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 24LL))(
               *v2,
               *(_QWORD *)(*((_QWORD *)v3 + 2) + 24LL));
        v1 = v5;
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1873u, 0LL);
        }
        else
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 6)
                                                               + 32LL)
                                                 + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 6)
                                                                    + 32LL));
          v1 = v6;
          if ( v6 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1874u, 0LL);
        }
      }
    }
  }
  return v1;
}
