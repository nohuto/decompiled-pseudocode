/*
 * XREFs of ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180027100
 * Callers:
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x1800091E4 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180009594 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B2C4 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800277F0 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009DF0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@K@Z @ 0x180016A90 (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall HampAppCommitStateSummary(struct _HAM_APPLICATION *a1, union _HAM_EXTERNAL_STATE_SUMMARY *a2)
{
  __int64 v4; // rcx
  _OWORD *v5; // rax
  _OWORD *v6; // r8
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // edx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  int v19; // r8d
  char v20; // r9
  __int16 v21; // dx
  __int64 v22; // rcx
  char v23; // r8
  _DWORD v24[2]; // [rsp+20h] [rbp-238h] BYREF
  _BYTE v25[464]; // [rsp+28h] [rbp-230h] BYREF
  __int128 v26; // [rsp+1F8h] [rbp-60h]
  __int128 v27; // [rsp+208h] [rbp-50h]
  __int128 v28; // [rsp+218h] [rbp-40h]
  __int128 v29; // [rsp+228h] [rbp-30h]
  int v30; // [rsp+238h] [rbp-20h]
  int v31; // [rsp+23Ch] [rbp-1Ch]

  memset_0(v25, 0, 0x214uLL);
  v4 = 3LL;
  v5 = (_OWORD *)((char *)a1 + 96);
  v6 = v25;
  do
  {
    v7 = v5[1];
    *v6 = *v5;
    v8 = v5[2];
    v6[1] = v7;
    v9 = v5[3];
    v6[2] = v8;
    v10 = v5[4];
    v6[3] = v9;
    v11 = v5[5];
    v6[4] = v10;
    v12 = v5[6];
    v6[5] = v11;
    v13 = v5[7];
    v5 += 8;
    v6[6] = v12;
    v6 += 8;
    *(v6 - 1) = v13;
    --v4;
  }
  while ( v4 );
  v14 = *((_DWORD *)a1 + 155);
  v15 = v5[1];
  *v6 = *v5;
  v16 = v5[2];
  v6[1] = v15;
  v17 = v5[3];
  v6[2] = v16;
  v18 = v5[4];
  v6[3] = v17;
  v6[4] = v18;
  v19 = *(_DWORD *)a2;
  v24[0] = 0;
  v20 = (((unsigned __int8)v19 ^ (unsigned __int8)v14) & 0xE0) != 0;
  if ( (((unsigned __int8)v19 ^ (unsigned __int8)v14) & 7) != 0
    || (((unsigned __int8)v19 ^ (unsigned __int8)v14) & 0x18) != 0
    || (((unsigned __int16)v19 ^ (unsigned __int16)v14) & 0x100) != 0
    || (((unsigned __int16)v19 ^ (unsigned __int16)v14) & 0x200) != 0 )
  {
    v20 |= 2u;
  }
  *((_DWORD *)a1 + 155) = v19;
  v21 = v19 ^ v14;
  v22 = *((_QWORD *)a1 + 11);
  v24[1] = v19;
  v23 = v20 | 4;
  if ( (v21 & 0x400) == 0 )
    v23 = v20;
  v26 = *(_OWORD *)(v22 + 228);
  v27 = *(_OWORD *)(v22 + 244);
  v28 = *(_OWORD *)(v22 + 260);
  v29 = *(_OWORD *)(v22 + 276);
  v30 = *(_DWORD *)(v22 + 292);
  v31 = *(_DWORD *)(v22 + 296);
  HampManagerIssueStateChangeNotifications(
    (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                    - 392),
    (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)v24,
    v23);
  HampPkgPushUpdate(*((struct _HAM_PACKAGE **)a1 + 11));
}
