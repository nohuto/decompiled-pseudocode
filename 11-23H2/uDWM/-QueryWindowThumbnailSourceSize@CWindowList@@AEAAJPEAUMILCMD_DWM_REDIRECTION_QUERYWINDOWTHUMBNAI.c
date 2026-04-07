/*
 * XREFs of ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180007EBC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001AF70 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180033B10 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035620 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18004CE14 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::QueryWindowThumbnailSourceSize(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *a2)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // esi
  struct CWindowData *v6; // rbp
  struct CWindowData *v7; // rax
  struct CWindowData *v8; // rbx
  int v9; // eax
  CBaseObject *v10; // rdi
  int v11; // r8d
  int v12; // r9d
  int v13; // edx
  int v14; // eax
  int v15; // r9d
  int v16; // eax
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rbp
  _DWORD *v25; // rcx
  __int64 v26; // rcx
  void *v27; // [rsp+20h] [rbp-38h]
  CBaseObject *v28; // [rsp+68h] [rbp+10h] BYREF
  struct CWindowData *v29; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+78h] [rbp+20h] BYREF

  v30 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v28 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4), &v29);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x13BEu, 0LL);
    goto LABEL_13;
  }
  v6 = v29;
  if ( !v29 )
  {
    v5 = -2147024809;
    goto LABEL_13;
  }
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                               WPF::g_pProcessHeap,
                               24LL);
  v8 = v7;
  v29 = v7;
  if ( !v7 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x13C7u, 0LL);
    goto LABEL_13;
  }
  *(_OWORD *)v7 = 0LL;
  *((_QWORD *)v7 + 2) = 0LL;
  *((_DWORD *)v7 + 4) = 1;
  *(_QWORD *)v7 = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *((_QWORD *)v7 + 1) = &CSWRListener::`vftable'{for `CBaseObject'};
  LODWORD(v27) = 100;
  v9 = CSecondaryWindowRepresentation::Create(*((_DWORD *)a2 + 3) != 0 ? 6 : 2, (int)v7, (int)v6, 0, v27, (__int64)&v28);
  v5 = v9;
  v10 = v28;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x13CEu, 0LL);
    goto LABEL_10;
  }
  v11 = *((_DWORD *)v28 + 24);
  v12 = *((_DWORD *)v28 + 21);
  v13 = *((_DWORD *)v28 + 25);
  v14 = 0;
  if ( *((_DWORD *)v28 + 20) - *((_DWORD *)v28 + 23) - *((_DWORD *)v28 + 22) >= 0 )
    v14 = *((_DWORD *)v28 + 20) - *((_DWORD *)v28 + 23) - *((_DWORD *)v28 + 22);
  *((_DWORD *)a2 + 4) = v14;
  v15 = v12 - v13 - v11;
  v16 = 0;
  if ( v15 >= 0 )
    v16 = v15;
  *((_DWORD *)a2 + 5) = v16;
  if ( (*((_BYTE *)v6 + 676) & 8) == 0 || *((_DWORD *)a2 + 3) || *((_DWORD *)v10 + 18) != 2 )
    goto LABEL_10;
  v18 = *((_QWORD *)v10 + 8);
  v19 = 0LL;
  if ( *((_DWORD *)v10 + 18) != 1 )
  {
    if ( *((_DWORD *)v10 + 18) == 2 )
    {
      v20 = *(_QWORD *)(v18 + 480);
      if ( v20 )
      {
        v19 = *(_QWORD *)(v20 + 32);
        goto LABEL_27;
      }
    }
    else
    {
      if ( *((_DWORD *)v10 + 18) != 3 )
        goto LABEL_27;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v10 + 8)) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v18 + 488) + 80LL);
        goto LABEL_27;
      }
    }
  }
  v19 = v18;
LABEL_27:
  if ( (*(_DWORD *)(v19 + 116) & 0x1000000) != 0 )
    goto LABEL_37;
  v21 = *((_QWORD *)v10 + 8);
  v22 = 0LL;
  if ( *((_DWORD *)v10 + 18) != 1 )
  {
    if ( *((_DWORD *)v10 + 18) == 2 )
    {
      v23 = *(_QWORD *)(v21 + 480);
      if ( v23 )
      {
        v22 = *(_QWORD *)(v23 + 32);
        goto LABEL_36;
      }
    }
    else
    {
      if ( *((_DWORD *)v10 + 18) != 3 )
        goto LABEL_36;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v10 + 8)) )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(v21 + 488) + 80LL);
        goto LABEL_36;
      }
    }
  }
  v22 = v21;
LABEL_36:
  if ( (*(_BYTE *)(v22 + 677) & 1) != 0 )
  {
LABEL_37:
    v24 = *((_QWORD *)v10 + 8);
    v25 = 0LL;
    if ( *((_DWORD *)v10 + 18) != 1 )
    {
      if ( *((_DWORD *)v10 + 18) == 2 )
      {
        v26 = *(_QWORD *)(v24 + 480);
        if ( v26 )
        {
          v25 = *(_DWORD **)(v26 + 32);
          goto LABEL_45;
        }
      }
      else
      {
        if ( *((_DWORD *)v10 + 18) != 3 )
        {
LABEL_45:
          *((_DWORD *)a2 + 4) -= v25[75] + v25[76];
          *((_DWORD *)a2 + 5) -= v25[77] + v25[78];
          goto LABEL_10;
        }
        if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v10 + 8)) )
        {
          v25 = *(_DWORD **)(*(_QWORD *)(v24 + 488) + 80LL);
          goto LABEL_45;
        }
      }
    }
    v25 = (_DWORD *)v24;
    goto LABEL_45;
  }
LABEL_10:
  if ( v10 )
    CBaseObject::Release(v10);
  CBaseObject::Release((struct CWindowData *)((char *)v8 + 8));
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return v5;
}
