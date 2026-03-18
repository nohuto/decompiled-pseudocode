/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403800D0
 * Callers:
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401BA340 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C9B44 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0ADAPTEROWNERTRACKER@@QEAA@PEAVDXGADAPTER@@0@Z @ 0x1400296EC (--0ADAPTEROWNERTRACKER@@QEAA@PEAVDXGADAPTER@@0@Z.c)
 *     ?PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ @ 0x140029A88 (-PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004174C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004F834 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x14028EE4C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkInvalidateQdcCache @ 0x140349C08 (DxgkInvalidateQdcCache.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037C1F0 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140380550 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403809D8 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140401EB8 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall ADAPTER_DISPLAY::EnsureGdiOutput(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned __int8 v9; // r15
  DXGGLOBAL *Global; // rax
  __int64 v11; // rcx
  struct DXGSESSIONDATA *SessionData; // rbx
  struct _KPROCESS *v13; // rbx
  __int64 i; // rbx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  bool v18; // zf
  unsigned int j; // ebx
  __int64 v20; // rsi
  unsigned int k; // esi
  DXGADAPTER *v22; // rbx
  struct DXGPROCESS *Current; // rax
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rbx
  DXGADAPTER *v27; // rbx
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v34; // [rsp+20h] [rbp-A9h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v35; // [rsp+20h] [rbp-A9h]
  _BYTE v37[8]; // [rsp+60h] [rbp-69h] BYREF
  DXGADAPTER *v38; // [rsp+68h] [rbp-61h]
  DXGADAPTER *v39; // [rsp+70h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-51h] BYREF
  char v41; // [rsp+A8h] [rbp-21h]
  __int128 v42; // [rsp+B0h] [rbp-19h] BYREF

  v42 = 0LL;
  v9 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2678;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pSessionData != NULL", 2678LL, 0LL, 0LL, 0LL, 0LL);
  }
  v41 = 0;
  v13 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2332);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v11) != v13 )
  {
    KeStackAttachProcess(v13, &ApcState);
    v41 = 1;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
  {
    if ( ADAPTER_DISPLAY::IsPartOfDesktop(this, i) )
    {
      v15 = *((_QWORD *)this + 16);
      v16 = (unsigned int)i;
      v17 = 4024LL * (unsigned int)i;
      if ( *(_QWORD *)(v17 + v15 + 728) )
      {
        v18 = *(_DWORD *)(v17 + v15 + 736) == 3;
      }
      else
      {
        Current = DXGPROCESS::GetCurrent(v15);
        v18 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 11) + 320LL))(0LL) == 0;
      }
      *((_BYTE *)&v42 + i) = v18;
      if ( v18 )
      {
        if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, i, 0) || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, i) )
        {
          v9 = 1;
          v28 = DmmEnablePathsFromVidPnSource(a2, i, 1, a3, a6);
          if ( v28 < 0 )
          {
            v29 = (unsigned int)i;
            v30 = v28;
            WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v29, v28);
            v31 = *((_QWORD *)this + 2);
            WdLogGlobalForLineNumber = 2743;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to restore CDD mode on adapter 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
              v31,
              v16,
              v30,
              0LL,
              0LL);
LABEL_42:
            ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
            goto LABEL_32;
          }
          DxgkInvalidateQdcCache();
        }
      }
      else
      {
        v9 = 1;
      }
    }
  }
  if ( v9 )
  {
    ADAPTEROWNERTRACKER::ADAPTEROWNERTRACKER(
      (ADAPTEROWNERTRACKER *)v37,
      *((struct DXGADAPTER **)this + 2),
      *(struct DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL));
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL)
                                                                                        + 208LL))(
            *((_QWORD *)this + 2),
            &v42,
            *((unsigned int *)this + 24),
            a5) )
    {
      WdLogSingleEntry4(4LL, a2, (unsigned __int8)v42, BYTE1(v42), *((unsigned int *)this + 24));
      WdLogGlobalForLineNumber = 2782;
    }
    for ( j = 0; j < *((_DWORD *)this + 24); ++j )
    {
      v20 = j;
      if ( !*((_BYTE *)&v42 + j) )
      {
        if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, j, 1u) )
        {
          v24 = DmmDisablePathsFromVidPnSource(a2, j);
          if ( v24 < 0 )
          {
            v25 = j;
            v26 = v24;
            WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v25, v24);
            v34 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)*((_QWORD *)this + 2);
            WdLogGlobalForLineNumber = 2802;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to disable CDD mode on adapter 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
              (__int64)v34,
              v20,
              v26,
              0LL,
              0LL);
            v27 = v38;
            if ( v38 )
              DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v38);
            if ( v39 && v27 != v39 )
              DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v39);
            goto LABEL_42;
          }
        }
      }
    }
    if ( v41 )
    {
      KeUnstackDetachProcess(&ApcState);
      v41 = 0;
    }
    for ( k = 0; k < *((_DWORD *)this + 24); ++k )
    {
      if ( *((_BYTE *)&v42 + k) )
      {
        v32 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(this, k);
        if ( v32 < 0 )
        {
          v33 = v32;
          WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), k, v32);
          v35 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)*((_QWORD *)this + 2);
          WdLogGlobalForLineNumber = 2830;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed in restoring copy protection on adapter 0x%I64x VidPnSourceId 0x%I64x %08I64x (Status = 0x%I64x)",
            (__int64)v35,
            k,
            v33,
            0LL,
            0LL);
        }
      }
    }
    v22 = v38;
    if ( v38 )
      DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v38);
    if ( v39 && v22 != v39 )
      DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v39);
  }
  *a4 = v9;
LABEL_32:
  if ( v41 )
    KeUnstackDetachProcess(&ApcState);
}
