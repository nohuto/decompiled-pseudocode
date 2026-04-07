/*
 * XREFs of ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180043580
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18000FCB0 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x18001A5A8 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180047370 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180047F08 (--0CWindowData@@QEAA@XZ.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18004D89C (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18004E40C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18004F10C (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CreateSprite(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rsi
  int SyncedWindowData; // eax
  unsigned int v6; // r14d
  struct CWindowData *v7; // rcx
  struct CWindowData **v8; // rax
  __int64 v9; // rax
  char *v10; // rax
  struct CWindowData *v11; // rax
  struct CWindowData **v12; // rcx
  CBaseObject *v13; // rcx
  CAnimationScheduler *v14; // rdi
  char v15; // bl
  char v16; // al
  char v18; // al
  unsigned int i; // r8d
  __int64 v20; // rdx
  struct CWindowData *v21; // rax
  CWindowData *v22; // rax
  int v23; // ebx
  int v24; // r9d
  __int64 v25; // r8
  unsigned int j; // ebx
  CWindowData *v27; // rcx
  unsigned int v28; // [rsp+20h] [rbp-49h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v30; // [rsp+40h] [rbp-29h]
  __int128 v31; // [rsp+50h] [rbp-19h]
  __int128 v32; // [rsp+60h] [rbp-9h]
  __int64 v33; // [rsp+70h] [rbp+7h]
  char v34; // [rsp+78h] [rbp+Fh]
  struct CWindowData *v35; // [rsp+D8h] [rbp+6Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+E0h] [rbp+77h]

  v36 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v4 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v21 = (struct CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                                  WPF::g_pProcessHeap,
                                  864LL);
    v35 = v21;
    if ( !v21 || (v22 = CWindowData::CWindowData(v21), (v4 = v22) == 0LL) )
    {
      v23 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x822u, 0LL);
LABEL_35:
      v6 = v23;
      v28 = 1950;
      goto LABEL_53;
    }
    *((_QWORD *)v22 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v22);
    *((_QWORD *)v4 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v23 = CWindowList::SyncWindowData(this, a2, v4);
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x826u, 0LL);
      goto LABEL_35;
    }
  }
  v35 = v4;
  if ( !v4 )
  {
    if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
      goto LABEL_43;
    SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v35);
    v6 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v28 = 1954;
LABEL_41:
      v24 = SyncedWindowData;
LABEL_54:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, v28, 0LL);
      goto LABEL_23;
    }
    v4 = v35;
    if ( !v35 )
    {
LABEL_43:
      v6 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0x7A6u, 0LL);
      goto LABEL_23;
    }
  }
  if ( (*((_BYTE *)v4 + 672) & 4) != 0 )
    CWindowList::ImmediateDestroySprite(this, v4);
  if ( !(*(unsigned __int8 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2) )
  {
    SyncedWindowData = CWindowData::EnsureClientAreaVisualProxy(v4);
    v6 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v28 = 1970;
      goto LABEL_41;
    }
  }
  SyncedWindowData = CWindowList::SyncWindowData(this, a2, v4);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v28 = 1974;
    goto LABEL_41;
  }
  v7 = *(struct CWindowData **)v4;
  v8 = (struct CWindowData **)*((_QWORD *)v4 + 1);
  if ( *(struct CWindowData **)(*(_QWORD *)v4 + 8LL) != v4 || *v8 != v4 )
    goto LABEL_55;
  *v8 = v7;
  *((_QWORD *)v7 + 1) = v8;
  v9 = *((_QWORD *)v4 + 17);
  Buffer[1] = 0LL;
  v30 = 0LL;
  v33 = -1LL;
  v34 = 0;
  v31 = 0LL;
  v32 = 0LL;
  Buffer[0] = v9;
  v10 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( !v10 || (v11 = (struct CWindowData *)(v10 + 80)) == 0LL )
  {
    v23 = -2147024882;
    v6 = -2147024882;
    v28 = 1986;
LABEL_53:
    v24 = v23;
    goto LABEL_54;
  }
  v12 = (struct CWindowData **)*((_QWORD *)v11 + 1);
  if ( *v12 != v11 )
LABEL_55:
    __fastfail(3u);
  *(_QWORD *)v4 = v11;
  *((_QWORD *)v4 + 1) = v12;
  *v12 = v4;
  *((_QWORD *)v11 + 1) = v4;
  if ( *((_DWORD *)v4 + 33) == 8
    || *((_DWORD *)v4 + 33) == 9
    || (unsigned int)(*((_DWORD *)v4 + 33) - 10) < 2
    || *((char *)v4 + 676) < 0 && !GetPropW(*((HWND *)v4 + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
  {
    v18 = *((_BYTE *)v4 + 676);
    if ( (v18 & 1) != 0 )
    {
      *((_BYTE *)v4 + 676) = v18 | 0x10;
      for ( i = 0; i < *((_DWORD *)v4 + 158); ++i )
      {
        v20 = *(_QWORD *)(*((_QWORD *)v4 + 76) + 8LL * i);
        *(_BYTE *)(v20 + 676) |= 0x10u;
      }
    }
  }
  v13 = (CBaseObject *)*((_QWORD *)v4 + 60);
  if ( v13 )
  {
    CBaseObject::Release(v13);
    *((_QWORD *)v4 + 60) = 0LL;
    for ( j = 0; j < *((_DWORD *)v4 + 158); ++j )
    {
      v27 = *(CWindowData **)(*((_QWORD *)v4 + 76) + 8LL * j);
      if ( (*((_DWORD *)v27 + 29) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v27, 1, v25, 1);
    }
    CWindowData::NotifyRepresentationChanged(v4);
  }
  SyncedWindowData = CWindowList::ClipChange(this, a2);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v28 = 1995;
    goto LABEL_41;
  }
  if ( (*((_BYTE *)v4 + 672) & 1) != 0 )
  {
    LOBYTE(v35) = 0;
    v14 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    v15 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
    v16 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
    CAnimationScheduler::OnWindowCloakChange(v14, v4, v16, v15, (bool *)&v35);
    if ( !(_BYTE)v35 )
    {
      SyncedWindowData = CWindowList::ShowHide(this, v4, 1);
      v6 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v28 = 2004;
        goto LABEL_41;
      }
    }
  }
LABEL_23:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
