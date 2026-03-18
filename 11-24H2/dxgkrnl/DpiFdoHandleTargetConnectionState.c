/*
 * XREFs of DpiFdoHandleTargetConnectionState @ 0x140242850
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027BD0 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x140028BA8 (DpiFdoGetChildDescriptor.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DpiFdoCreateChildDescriptor @ 0x14023D098 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptor @ 0x140245178 (DpiFdoRemoveChildDescriptor.c)
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025D6A4 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025D764 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025D82C (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiPdoHandleChildConnectionChange @ 0x14042B7C0 (DpiPdoHandleChildConnectionChange.c)
 */

__int64 __fastcall DpiFdoHandleTargetConnectionState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // edi
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v10; // r13
  int v11; // edx
  _QWORD *ChildDescriptor; // rax
  int v13; // r9d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v14; // r10d
  int v15; // r9d
  unsigned int *Pool2; // r14
  unsigned int v17; // r15d
  int v18; // edx
  _QWORD *v19; // rax
  __int64 v20; // r9
  _QWORD *v21; // rbx
  int v22; // eax
  int v23; // edx
  int v24; // r9d
  int v25; // r11d
  int v26; // eax
  unsigned __int64 v27; // rdx
  int v29; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+30h] [rbp-D0h]
  int v32; // [rsp+38h] [rbp-C8h]
  unsigned int v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-9Ch] BYREF
  int v35; // [rsp+68h] [rbp-98h] BYREF
  _DXGK_CHILD_CAPABILITIES v36; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v37[2]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v38[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int128 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+C0h] [rbp-40h]
  int v44; // [rsp+C4h] [rbp-3Ch]
  int v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+CCh] [rbp-34h]
  __int64 v47; // [rsp+D0h] [rbp-30h]
  _DWORD v48[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int128 v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+110h] [rbp+10h]
  unsigned int v54; // [rsp+114h] [rbp+14h]
  int v55; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+11Ch] [rbp+1Ch]
  __int64 v57; // [rsp+120h] [rbp+20h]

  v33 = 0;
  LOBYTE(v37[0]) = 0;
  v6 = 1;
  v35 = 1;
  v7 = 0;
  v36 = 0LL;
  CDisplayScenarioContextScope::ContextScopeConstructor(v37, (const struct _GUID *)(a3 + 40), 0x3Cu, 0);
  v8 = *(_DWORD *)(a3 + 8);
  v9 = *(_QWORD *)(a1 + 5888);
  v10 = v37[1];
  v39 = 0LL;
  v45 = v8 & 0xFFFFFF;
  v44 = HIBYTE(v8) & 0xF;
  v46 = *(_DWORD *)(a3 + 16);
  v47 = *(_QWORD *)(a1 + 2696);
  v42 = 0LL;
  v38[0] = 30;
  v38[1] = 72;
  v41 = 0LL;
  v40 = 0LL;
  v43 = 92;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v38, v9);
  v11 = *(_DWORD *)(a3 + 8) & 0xFFFFFF;
  v36.Type.Other.MustBeZero = *(_DWORD *)(a3 + 12);
  v36.Type.VideoOutput.MonitorOrientationAwareness = D3DKMDT_MOA_NONE;
  v36.Type.VideoOutput.SupportsSdtvModes = 0;
  v36.HpdAwareness = HpdAwarenessInterruptible;
  ChildDescriptor = DpiFdoGetChildDescriptor(a1, v11);
  if ( !ChildDescriptor )
  {
    v7 = -1073741810;
    v33 = 1;
    WdLogSingleEntry1(2LL, -1073741810LL);
    WdLogGlobalForLineNumber = 20076;
LABEL_30:
    v52 = 0LL;
    v27 = *(_QWORD *)(a1 + 5888);
    v49 = 0LL;
    v57 = *(_QWORD *)(a1 + 2696);
    v48[0] = 30;
    v48[1] = 72;
    v51 = 0LL;
    v50 = 0LL;
    v53 = 93;
    v54 = v6;
    v55 = v7;
    v56 = 0;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v48, v27);
    goto LABEL_31;
  }
  v15 = v13 & 0xF000000;
  if ( v15 == 83886080 || v15 == 100663296 )
  {
    if ( ChildDescriptor[6] )
    {
      v6 = 2;
      v7 = -1073741811;
      v33 = 2;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 20096;
      goto LABEL_30;
    }
    if ( IsInternalVideoOutput(v14) )
    {
      v6 = 4;
      v7 = -1073741811;
      v33 = 4;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 20111;
      goto LABEL_30;
    }
    if ( DpiFdoGetChildDescriptor(a1, *(_DWORD *)(a3 + 16)) )
    {
      if ( v24 == v25 )
      {
        v6 = 3;
        v7 = -1073741811;
        v33 = 3;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 20128;
        goto LABEL_30;
      }
    }
    else
    {
      v7 = DpiFdoCreateChildDescriptor(a1, v23, 0, &v35, (__int64)&v36, 0);
      if ( v7 < 0 )
      {
        v6 = 0x80000000;
        goto LABEL_29;
      }
      LOBYTE(v6) = 0;
    }
    v26 = DmmCreateDynamicVideoPresentTarget(
            *(void **)(a1 + 4032),
            *(_DWORD *)(a3 + 16),
            *(_DWORD *)(a3 + 8) & 0xFFFFFF,
            &v36,
            v6,
            (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v33);
    v6 = v33;
    v7 = v26;
  }
  else
  {
    if ( v15 != 0x4000000 )
      goto LABEL_31;
    v34 = *(_DWORD *)(a1 + 3616);
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, 4LL * v34, 1953656900LL);
    if ( !Pool2 )
    {
      v6 = 0x80000000;
      v7 = -1073741801;
      v33 = 0x80000000;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 20186;
      goto LABEL_30;
    }
    v7 = DmmBuildDynamicVideoPresentTargetChildRelations(
           *(void **)(a1 + 4032),
           *(_DWORD *)(a3 + 8) & 0xFFFFFF,
           &v34,
           Pool2,
           (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v33);
    if ( v7 >= 0 )
    {
      v17 = v34;
      while ( v17 )
      {
        v18 = Pool2[--v17];
        v19 = DpiFdoGetChildDescriptor(a1, v18);
        v21 = v19;
        if ( v19[6] != v20 )
        {
          LOBYTE(v32) = v20;
          LOBYTE(v31) = v20;
          LOBYTE(v30) = v20;
          LOBYTE(v29) = v20;
          v22 = DpiPdoHandleChildConnectionChange(
                  *(_QWORD *)(a1 + 24),
                  *((unsigned int *)v19 + 6),
                  *((unsigned int *)v19 + 1),
                  0LL,
                  v29,
                  v30,
                  v31,
                  v32,
                  v20,
                  a2,
                  v10);
          v7 = v22;
          if ( v22 < 0 )
          {
            v6 = 2;
            v33 = 2;
            WdLogSingleEntry1(2LL, v22);
            WdLogGlobalForLineNumber = 20238;
            goto LABEL_17;
          }
        }
        v7 = DmmDestroyDynamicVideoPresentTarget(
               *(void **)(a1 + 4032),
               *((_DWORD *)v21 + 6),
               (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v33);
        if ( v7 < 0 )
          break;
        DpiFdoRemoveChildDescriptor(a1, v21);
      }
    }
    v6 = v33;
LABEL_17:
    ExFreePoolWithTag(Pool2, 0);
  }
LABEL_29:
  if ( v7 < 0 )
    goto LABEL_30;
LABEL_31:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v37);
  return (unsigned int)v7;
}
