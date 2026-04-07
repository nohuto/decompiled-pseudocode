/*
 * XREFs of ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180048060
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x18000A698 (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18000FB08 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18000FCB0 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180049AF0 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18004F10C (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C65F8 (-Activate@CLivePreview@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CloakChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3, bool a4)
{
  int SyncedWindowData; // eax
  unsigned int v9; // edi
  CWindowData *v10; // rsi
  CAnimationScheduler *v11; // rbx
  char v12; // al
  __int64 v13; // rdx
  char v14; // cl
  __int64 v15; // r8
  char v16; // al
  struct CWindowData *v18; // rbx
  CLivePreview *v19; // rcx
  int v20; // r9d
  int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-58h]
  bool v23; // [rsp+30h] [rbp-48h] BYREF
  CWindowData *v24[3]; // [rsp+38h] [rbp-40h] BYREF

  v24[1] = (CWindowData *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v24[0] = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, v24);
  v9 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v22 = 6340;
    goto LABEL_21;
  }
  v10 = v24[0];
  if ( !v24[0] )
    goto LABEL_9;
  v23 = 0;
  v11 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
  CAnimationScheduler::OnWindowCloakChange(v11, v10, v12, a4, &v23);
  if ( !v23 )
  {
    v14 = *((_BYTE *)v10 + 676) ^ (*((_BYTE *)v10 + 676) ^ (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2)) & 1;
    *((_BYTE *)v10 + 676) = v14;
    if ( *((_QWORD *)v10 + 55) && *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 5 )
    {
      if ( (v14 & 1) != 0 )
        CWindowData::SnapshotWindow(v10, v13, v15);
      else
        CWindowData::ClearSnapshot(v10, 0, v15, 0);
      CTopLevelWindow::UpdateRemoteAppRenderTargetRoot(*((CTopLevelWindow **)v10 + 55));
    }
    if ( !a4 )
    {
      SyncedWindowData = CWindowList::ShowHide(this, v10, 1);
      v9 = SyncedWindowData;
      if ( SyncedWindowData >= 0 )
        goto LABEL_7;
      v22 = 6372;
      goto LABEL_21;
    }
    if ( a3 )
    {
      v24[0] = 0LL;
      SyncedWindowData = CWindowList::GetSyncedWindowData(this, a3, 1, v24);
      v9 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v22 = 6377;
        goto LABEL_21;
      }
      v18 = v24[0];
      if ( v24[0] )
      {
        SyncedWindowData = CLivePreview::OnWindowShowHide(
                             *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
                             v24[0],
                             0LL,
                             1);
        v9 = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v22 = 6382;
          goto LABEL_21;
        }
        SyncedWindowData = CLivePreview::OnWindowShowHide(
                             *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
                             v18,
                             0LL,
                             0);
        v9 = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v22 = 6383;
          goto LABEL_21;
        }
        v19 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
        if ( *((_BYTE *)v19 + 288) )
        {
          v21 = CLivePreview::Activate(v19);
          v9 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x42Au, 0LL);
            v22 = 6384;
            v20 = v9;
            goto LABEL_22;
          }
        }
        SyncedWindowData = CWindowList::ShowHide(this, v18, 1);
        v9 = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v22 = 6385;
LABEL_21:
          v20 = SyncedWindowData;
LABEL_22:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v22, 0LL);
          goto LABEL_9;
        }
      }
    }
  }
LABEL_7:
  v16 = *((_BYTE *)v10 + 676);
  if ( (v16 & 9) == 0 )
    *((_BYTE *)v10 + 676) = v16 & 0xEF;
LABEL_9:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
