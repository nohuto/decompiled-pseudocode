/*
 * XREFs of ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x1800F2600
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x180078338 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180098768 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterThumbnail(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *a3)
{
  struct CWindowData *v6; // rsi
  struct CWindowData *v7; // r14
  char IsBaseThumbnailDestinationReachable; // al
  const struct std::nothrow_t *v9; // rdx
  char *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // r8d
  int v13; // edi
  unsigned int v14; // ebx
  int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // r8d
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // eax
  int v22; // r9d
  unsigned int v23; // eax
  unsigned int v24; // r8d
  int v25; // r9d
  unsigned int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned int v31; // [rsp+20h] [rbp-20h]
  struct CWindowData *v32; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+38h] [rbp-8h] BYREF
  DWORD dwProcessId; // [rsp+80h] [rbp+40h] BYREF
  struct CWindowData *v35; // [rsp+88h] [rbp+48h] BYREF

  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v35 = 0LL;
  v32 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 12), &v35);
  CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 20), &v32);
  dwProcessId = 0;
  v6 = v35;
  if ( !v35
    || !GetWindowThreadProcessId(*((HWND *)v35 + 5), &dwProcessId)
    || (v7 = v32) == 0LL
    || a2 != dwProcessId
    || *((_DWORD *)a3 + 7) && a2 != GetCurrentProcessId()
    || (*((_QWORD *)this + 52) = v6,
        IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                                (struct CWindowData **)this,
                                                v7),
        *((_QWORD *)this + 52) = 0LL,
        IsBaseThumbnailDestinationReachable) )
  {
    v14 = -2147024809;
    goto LABEL_40;
  }
  v10 = (char *)operator new[](0x60uLL, v9);
  if ( !v10 )
  {
    v35 = 0LL;
    v14 = -2147024882;
    v31 = 4879;
    v22 = -2147024882;
    goto LABEL_38;
  }
  *(_QWORD *)v10 = &CThumbnailData::`vftable';
  *((_QWORD *)v10 + 1) = 0LL;
  *((_QWORD *)v10 + 2) = 0LL;
  *((_QWORD *)v10 + 3) = 0LL;
  *((_DWORD *)v10 + 8) = 0;
  *(_OWORD *)(v10 + 36) = 0LL;
  *(_OWORD *)(v10 + 52) = 0LL;
  *(_QWORD *)(v10 + 68) = 0LL;
  *((_DWORD *)v10 + 19) = 0;
  v10[80] = 0;
  *((_QWORD *)v10 + 11) = 0LL;
  v35 = (struct CWindowData *)v10;
  *((_QWORD *)v10 + 1) = *(_QWORD *)((char *)a3 + 4);
  *((_QWORD *)v35 + 2) = v6;
  *((_QWORD *)v35 + 3) = v7;
  *((_BYTE *)v35 + 32) = *((_DWORD *)a3 + 7) != 0;
  *((_BYTE *)v35 + 33) = *((_DWORD *)a3 + 8) != 0;
  *((_BYTE *)v35 + 34) = 0;
  v11 = *((_DWORD *)this + 102);
  v12 = v11 + 1;
  if ( v11 + 1 < v11 )
  {
    v13 = -2147024362;
    v14 = -2147024362;
    v15 = -2147024362;
    v16 = 179;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v16, 0LL);
    v31 = 4888;
LABEL_18:
    v22 = v13;
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, v31, 0LL);
    goto LABEL_40;
  }
  if ( v12 > *((_DWORD *)this + 101) )
  {
    v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 384, 8, 1, &v35);
    v13 = v21;
    v14 = v21;
    if ( v21 < 0 )
    {
      v15 = v21;
      v16 = 190;
      goto LABEL_17;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 48) + 8LL * *((unsigned int *)this + 102)) = v35;
    *((_DWORD *)this + 102) = v12;
  }
  v17 = *((_DWORD *)v6 + 140);
  v18 = v17 + 1;
  if ( v17 + 1 < v17 )
  {
    v13 = -2147024362;
    v14 = -2147024362;
    v19 = -2147024362;
    v20 = 179;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v20, 0LL);
    v31 = 4895;
    goto LABEL_18;
  }
  if ( v18 > *((_DWORD *)v6 + 139) )
  {
    v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v6 + 536, 8, 1, &v35);
    v13 = v27;
    v14 = v27;
    if ( v27 < 0 )
    {
      v19 = v27;
      v20 = 190;
      goto LABEL_25;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v6 + 67) + 8LL * *((unsigned int *)v6 + 140)) = v35;
    *((_DWORD *)v6 + 140) = v18;
  }
  v23 = *((_DWORD *)v7 + 148);
  v24 = v23 + 1;
  if ( v23 + 1 < v23 )
  {
    v13 = -2147024362;
    v14 = -2147024362;
    v25 = -2147024362;
    v26 = 179;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, v26, 0LL);
    v31 = 4896;
    goto LABEL_18;
  }
  v13 = 0;
  if ( v24 > *((_DWORD *)v7 + 147) )
  {
    v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7 + 568, 8, 1, &v35);
    v13 = v28;
    v14 = v28;
    if ( v28 < 0 )
    {
      v25 = v28;
      v26 = 190;
      goto LABEL_36;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v7 + 71) + 8LL * *((unsigned int *)v7 + 148)) = v35;
    *((_DWORD *)v7 + 148) = v24;
  }
  v14 = v13;
  if ( *((_QWORD *)v6 + 55) )
  {
    v29 = (*(__int64 (__fastcall **)(struct CWindowData *))(*(_QWORD *)v35 + 8LL))(v35);
    v14 = v29;
    if ( v29 < 0 )
    {
      v31 = 4904;
      goto LABEL_34;
    }
    v29 = CTopLevelWindow::OnThumbnailAdded(*((CContainerVisual ***)v6 + 55), *((struct CVisual **)v35 + 11));
    v14 = v29;
    if ( v29 < 0 )
    {
      v31 = 4906;
LABEL_34:
      v22 = v29;
      goto LABEL_38;
    }
  }
LABEL_40:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return v14;
}
