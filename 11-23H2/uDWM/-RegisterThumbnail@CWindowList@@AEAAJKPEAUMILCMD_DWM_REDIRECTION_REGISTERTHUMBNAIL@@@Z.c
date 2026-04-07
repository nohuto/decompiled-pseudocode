/*
 * XREFs of ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x18010BBD8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001AF70 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18000EBB4 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18004CE14 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x1800E6340 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterThumbnail(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v7; // ebx
  int v8; // r9d
  struct CWindowData *v9; // rsi
  struct CWindowData *v10; // r15
  char IsBaseThumbnailDestinationReachable; // al
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // r8d
  int v15; // edi
  int v16; // r9d
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r8d
  int v20; // r9d
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // r8d
  int v25; // r9d
  unsigned int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v30; // [rsp+20h] [rbp-20h]
  struct CWindowData *v31; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+38h] [rbp-8h] BYREF
  DWORD dwProcessId; // [rsp+90h] [rbp+50h] BYREF
  struct CWindowData *v34; // [rsp+98h] [rbp+58h] BYREF

  v32 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v34 = 0LL;
  v31 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 12), &v34);
  v7 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v30 = 4536;
LABEL_3:
    v8 = SyncedWindowDataByHwnd;
LABEL_4:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v30);
    goto LABEL_45;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 20), &v31);
  v7 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v30 = 4537;
    goto LABEL_3;
  }
  dwProcessId = 0;
  v9 = v34;
  if ( v34
    && GetWindowThreadProcessId(*((HWND *)v34 + 5), &dwProcessId)
    && (v10 = v31) != 0LL
    && a2 == dwProcessId
    && (!*((_DWORD *)a3 + 7) || a2 == GetCurrentProcessId())
    && (*((_QWORD *)this + 52) = v9,
        IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                                (struct CWindowData **)this,
                                                v10),
        *((_QWORD *)this + 52) = 0LL,
        !IsBaseThumbnailDestinationReachable) )
  {
    v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            96LL);
    if ( v12 )
    {
      *(_QWORD *)v12 = &CThumbnailData::`vftable';
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_QWORD *)(v12 + 24) = 0LL;
      *(_DWORD *)(v12 + 32) = 0;
      *(_OWORD *)(v12 + 36) = 0LL;
      *(_OWORD *)(v12 + 52) = 0LL;
      *(_QWORD *)(v12 + 68) = 0LL;
      *(_DWORD *)(v12 + 76) = 0;
      *(_BYTE *)(v12 + 80) = 0;
      *(_QWORD *)(v12 + 88) = 0LL;
      v34 = (struct CWindowData *)v12;
      *(_QWORD *)(v12 + 8) = *(_QWORD *)((char *)a3 + 4);
      *((_QWORD *)v34 + 2) = v9;
      *((_QWORD *)v34 + 3) = v10;
      *((_BYTE *)v34 + 32) = *((_DWORD *)a3 + 7) != 0;
      *((_BYTE *)v34 + 33) = *((_DWORD *)a3 + 8) != 0;
      *((_BYTE *)v34 + 34) = 0;
      v13 = *((_DWORD *)this + 102);
      v14 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
        v15 = -2147024362;
        v7 = -2147024362;
        v16 = -2147024362;
        v17 = 181;
LABEL_24:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v17);
        v30 = 4583;
LABEL_25:
        v8 = v15;
        goto LABEL_4;
      }
      if ( v14 > *((_DWORD *)this + 101) )
      {
        v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 384, 8, 1, &v34);
        v15 = v22;
        v7 = v22;
        if ( v22 < 0 )
        {
          v16 = v22;
          v17 = 192;
          goto LABEL_24;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 48) + 8LL * *((unsigned int *)this + 102)) = v34;
        *((_DWORD *)this + 102) = v14;
      }
      v18 = *((_DWORD *)v9 + 140);
      v19 = v18 + 1;
      if ( v18 + 1 < v18 )
      {
        v15 = -2147024362;
        v7 = -2147024362;
        v20 = -2147024362;
        v21 = 181;
LABEL_32:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, v21);
        v30 = 4590;
        goto LABEL_25;
      }
      if ( v19 > *((_DWORD *)v9 + 139) )
      {
        v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9 + 536, 8, 1, &v34);
        v15 = v27;
        v7 = v27;
        if ( v27 < 0 )
        {
          v20 = v27;
          v21 = 192;
          goto LABEL_32;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v9 + 67) + 8LL * *((unsigned int *)v9 + 140)) = v34;
        *((_DWORD *)v9 + 140) = v19;
      }
      v23 = *((_DWORD *)v10 + 148);
      v24 = v23 + 1;
      if ( v23 + 1 < v23 )
      {
        v15 = -2147024362;
        v7 = -2147024362;
        v25 = -2147024362;
        v26 = 181;
LABEL_40:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, v26);
        v30 = 4591;
        goto LABEL_25;
      }
      v15 = 0;
      if ( v24 > *((_DWORD *)v10 + 147) )
      {
        v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10 + 568, 8, 1, &v34);
        v15 = v28;
        v7 = v28;
        if ( v28 < 0 )
        {
          v25 = v28;
          v26 = 192;
          goto LABEL_40;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v10 + 71) + 8LL * *((unsigned int *)v10 + 148)) = v34;
        *((_DWORD *)v10 + 148) = v24;
      }
      v7 = v15;
      if ( *((_QWORD *)v9 + 55) )
      {
        SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(struct CWindowData *))(*(_QWORD *)v34 + 8LL))(v34);
        v7 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v30 = 4599;
          goto LABEL_3;
        }
        SyncedWindowDataByHwnd = CTopLevelWindow::OnThumbnailAdded(
                                   *((CTopLevelWindow **)v9 + 55),
                                   *((struct CVisual **)v34 + 11));
        v7 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v30 = 4601;
          goto LABEL_3;
        }
      }
    }
    else
    {
      v34 = 0LL;
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x11DEu);
    }
  }
  else
  {
    v7 = -2147024809;
  }
LABEL_45:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v32);
  return v7;
}
