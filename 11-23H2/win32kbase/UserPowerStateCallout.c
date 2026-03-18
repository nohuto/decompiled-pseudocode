/*
 * XREFs of UserPowerStateCallout @ 0x1C0010460
 * Callers:
 *     W32CalloutDispatch @ 0x1C00DE800 (W32CalloutDispatch.c)
 * Callees:
 *     ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x1C0010860 (-AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z.c)
 *     QueuePowerRequest @ 0x1C00108E0 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0010ADC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0010BBC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserPowerStateCallout(char *a1)
{
  unsigned int v1; // esi
  char v3; // bp
  int v4; // r12d
  int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  unsigned int v32; // eax
  unsigned int v33; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // ebx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  _QWORD v108[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_DWORD *)a1 + 4);
  v3 = *a1;
  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 3);
  AddPowerStateLogEntry(1LL, v1);
  if ( !v1 )
  {
    v32 = UserSessionSwitchBlock_Start();
    goto LABEL_15;
  }
  if ( v1 == 7 )
  {
    UserSessionSwitchBlock_End();
    if ( *(_DWORD *)(SGDGetUserSessionState(v36, v35, v37, v38) + 2884) )
    {
      if ( *(_BYTE *)SGDGetUserGdiSessionState() )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2987LL);
      v108[0] = 4LL;
      *(_DWORD *)(SGDGetUserSessionState(v93, v92, v94, v95) + 2884) = 0;
      v100 = *(int *)(SGDGetUserSessionState(v97, v96, v98, v99) + 2888);
      v108[1] = v100;
      v104 = SGDGetUserSessionState(v100, v101, v102, v103);
      v30 = 0LL;
      v31 = v108;
      *(_DWORD *)(v104 + 2888) = 0;
      goto LABEL_14;
    }
    goto LABEL_21;
  }
  if ( !gbVideoInitialized || !*(_DWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 2936) || !gWinLogonRpcHandle )
  {
    AddPowerStateLogEntry(2LL, 2151546887LL);
    return 2151546887LL;
  }
  v15 = SGDGetUserSessionState(v12, v11, v13, v14);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v15 + 696));
  v20 = SGDGetUserSessionState(v17, v16, v18, v19);
  if ( v1 == 1 )
  {
    v45 = *(_DWORD *)(v20 + 3152);
    if ( v3 )
    {
      if ( (v45 & 1) != 0 )
        goto LABEL_24;
    }
    else if ( (v45 & 1) == 0 )
    {
LABEL_24:
      v46 = SGDGetUserSessionState(v22, v21, v23, v24);
      v47 = *(_DWORD *)(v46 + 3152) | 1u;
      *(_DWORD *)(v46 + 3152) = v47;
      v51 = SGDGetUserSessionState(v47, v48, v49, v50);
      v52 = v6 & 4;
      v53 = (unsigned int)v52 | *(_DWORD *)(v51 + 3152) & 0xFFFFFFFB;
      *(_DWORD *)(v51 + 3152) = v53;
      v56 = SGDGetUserSessionState(v52, v53, v54, v55);
      v57 = (v6 >> 30) & 2;
      v58 = (unsigned int)v57 | *(_DWORD *)(v56 + 3152) & 0xFFFFFFFD;
      *(_DWORD *)(v56 + 3152) = v58;
      v61 = SGDGetUserSessionState(v57, v58, v59, v60);
      v62 = *(_DWORD *)(v61 + 3152) & 0xFFFFFFF7;
      v63 = (unsigned int)v62 | (8 * (v6 & 1));
      *(_DWORD *)(v61 + 3152) = v63;
      v66 = SGDGetUserSessionState(v62, v63, v64, v65);
      v67 = 8 * (v6 & 2);
      v68 = (unsigned int)v67 | *(_DWORD *)(v66 + 3152) & 0xFFFFFFEF;
      *(_DWORD *)(v66 + 3152) = v68;
      *(_DWORD *)(SGDGetUserSessionState(v67, v68, v69, v70) + 3208) = v4;
      *(_DWORD *)(SGDGetUserSessionState(v72, v71, v73, v74) + 3212) = v5;
      *(_DWORD *)(SGDGetUserSessionState(v76, v75, v77, v78) + 3216) = v6;
      if ( (*(_DWORD *)(SGDGetUserSessionState(v80, v79, v81, v82) + 3152) & 4) != 0 )
        *(_DWORD *)(SGDGetUserSessionState(v84, v83, v85, v86) + 3172) = 40;
      if ( (*(_DWORD *)(SGDGetUserSessionState(v84, v83, v85, v86) + 3152) & 2) != 0 )
        *(_DWORD *)(SGDGetUserSessionState(v88, v87, v89, v90) + 3172) = 9;
      if ( *(_QWORD *)(SGDGetUserSessionState(v88, v87, v89, v90) + 3160) )
      {
        v106 = SGDGetUserSessionState(v22, v21, v23, v24);
        KeSetEvent(*(PRKEVENT *)(v106 + 3160), 1, 0);
      }
LABEL_30:
      if ( !v3 )
      {
LABEL_11:
        if ( v1 == 2 || v1 == 13 )
        {
          v91 = *((_DWORD *)a1 + 5);
          *(_DWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 3228) = v91;
        }
        *(_DWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 3224) = v1;
        v29 = SGDGetUserSessionState(v26, v25, v27, v28);
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v29 + 696));
        LOBYTE(v30) = 1;
        v31 = 0LL;
LABEL_14:
        v32 = QueuePowerRequest(v31, v30);
LABEL_15:
        v33 = v32;
        AddPowerStateLogEntry(2LL, v32);
        return v33;
      }
      goto LABEL_20;
    }
    v105 = SGDGetUserSessionState(v22, v21, v23, v24);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v105 + 696));
    AddPowerStateLogEntry(2LL, 2151546888LL);
    return 2151546888LL;
  }
  if ( v1 == 14 )
  {
    *(_DWORD *)(v20 + 3212) = v5;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)(v20 + 3152) & 1) != 0 )
  {
    if ( !v3 )
    {
      if ( v1 != 8 )
        goto LABEL_11;
      v39 = SGDGetUserSessionState(v22, v21, v23, v24);
      v40 = *(_DWORD *)(v39 + 3152) & 0xFFFFFFFE;
      *(_DWORD *)(v39 + 3152) = v40;
      *(_QWORD *)(SGDGetUserSessionState(v40, v41, v42, v43) + 3160) = 0LL;
    }
LABEL_20:
    v44 = SGDGetUserSessionState(v22, v21, v23, v24);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v44 + 696));
LABEL_21:
    AddPowerStateLogEntry(2LL, 0LL);
    return 0LL;
  }
  v107 = SGDGetUserSessionState(v22, v21, v23, v24);
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v107 + 696));
  AddPowerStateLogEntry(2LL, 2151546889LL);
  return 2151546889LL;
}
