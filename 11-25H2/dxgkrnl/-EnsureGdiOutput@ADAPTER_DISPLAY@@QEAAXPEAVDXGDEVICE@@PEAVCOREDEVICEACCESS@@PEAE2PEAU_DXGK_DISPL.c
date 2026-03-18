/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140310950
 * Callers:
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401B7D90 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140285A10 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140340CE0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0ADAPTEROWNERTRACKER@@QEAA@PEAVDXGADAPTER@@0@Z @ 0x140028F44 (--0ADAPTEROWNERTRACKER@@QEAA@PEAVDXGADAPTER@@0@Z.c)
 *     ?PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ @ 0x1400292E0 (-PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140041DBC (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004FDB4 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030CA78 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140310DD0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x140311258 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkInvalidateQdcCache @ 0x14031B098 (DxgkInvalidateQdcCache.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1403EEE1C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140409A9C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
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
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v38; // [rsp+20h] [rbp-A9h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v39; // [rsp+20h] [rbp-A9h]
  _BYTE v41[8]; // [rsp+60h] [rbp-69h] BYREF
  DXGADAPTER *v42; // [rsp+68h] [rbp-61h]
  DXGADAPTER *v43; // [rsp+70h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-51h] BYREF
  char v45; // [rsp+A8h] [rbp-21h]
  __int128 v46; // [rsp+B0h] [rbp-19h] BYREF

  v46 = 0LL;
  v9 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2687;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pSessionData != NULL", 2687LL, 0LL, 0LL, 0LL, 0LL);
  }
  v45 = 0;
  v13 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2332);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v11) != v13 )
  {
    KeStackAttachProcess(v13, &ApcState);
    v45 = 1;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
  {
    if ( ADAPTER_DISPLAY::IsPartOfDesktop(this, i) )
    {
      v15 = *((_QWORD *)this + 16);
      v16 = (unsigned int)i;
      v17 = 3984LL * (unsigned int)i;
      if ( *(_QWORD *)(v17 + v15 + 728) )
      {
        v18 = *(_DWORD *)(v17 + v15 + 736) == 3;
      }
      else
      {
        Current = DXGPROCESS::GetCurrent(v15);
        v18 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 11) + 320LL))(0LL) == 0;
      }
      *((_BYTE *)&v46 + i) = v18;
      if ( v18 )
      {
        if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, i, 0) || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, i) )
        {
          v9 = 1;
          v28 = DmmEnablePathsFromVidPnSource(a2, i, 1, a3, a6);
          if ( v28 < 0 )
          {
            v33 = (unsigned int)i;
            v34 = v28;
            WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v33, v28);
            v35 = *((_QWORD *)this + 2);
            WdLogGlobalForLineNumber = 2752;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Failed to restore CDD mode on adapter 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
              v35,
              v16,
              v34,
              0LL,
              0LL);
LABEL_42:
            ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
            goto LABEL_32;
          }
          DxgkInvalidateQdcCache(v30, v29, v31, v32);
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
      (ADAPTEROWNERTRACKER *)v41,
      *((struct DXGADAPTER **)this + 2),
      *(struct DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL));
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL)
                                                                                        + 208LL))(
            *((_QWORD *)this + 2),
            &v46,
            *((unsigned int *)this + 24),
            a5) )
    {
      WdLogSingleEntry4(4LL, a2, (unsigned __int8)v46, BYTE1(v46), *((unsigned int *)this + 24));
      WdLogGlobalForLineNumber = 2791;
    }
    for ( j = 0; j < *((_DWORD *)this + 24); ++j )
    {
      v20 = j;
      if ( !*((_BYTE *)&v46 + j) )
      {
        if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, j, 1u) )
        {
          v24 = DmmDisablePathsFromVidPnSource(a2, j);
          if ( v24 < 0 )
          {
            v25 = j;
            v26 = v24;
            WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v25, v24);
            v38 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)*((_QWORD *)this + 2);
            WdLogGlobalForLineNumber = 2811;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Failed to disable CDD mode on adapter 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
              (__int64)v38,
              v20,
              v26,
              0LL,
              0LL);
            v27 = v42;
            if ( v42 )
              DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v42);
            if ( v43 && v27 != v43 )
              DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v43);
            goto LABEL_42;
          }
        }
      }
    }
    if ( v45 )
    {
      KeUnstackDetachProcess(&ApcState);
      v45 = 0;
    }
    for ( k = 0; k < *((_DWORD *)this + 24); ++k )
    {
      if ( *((_BYTE *)&v46 + k) )
      {
        v36 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(this, k);
        if ( v36 < 0 )
        {
          v37 = v36;
          WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), k, v36);
          v39 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)*((_QWORD *)this + 2);
          WdLogGlobalForLineNumber = 2839;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed in restoring copy protection on adapter 0x%I64x VidPnSourceId 0x%I64x %08I64x (Status = 0x%I64x)",
            (__int64)v39,
            k,
            v37,
            0LL,
            0LL);
        }
      }
    }
    v22 = v42;
    if ( v42 )
      DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v42);
    if ( v43 && v22 != v43 )
      DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v43);
  }
  *a4 = v9;
LABEL_32:
  if ( v45 )
    KeUnstackDetachProcess(&ApcState);
}
