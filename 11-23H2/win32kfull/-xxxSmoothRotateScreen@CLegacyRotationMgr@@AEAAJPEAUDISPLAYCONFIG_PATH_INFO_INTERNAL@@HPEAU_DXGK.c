/*
 * XREFs of ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A7394
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01A6E80 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 * Callees:
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C0090A58 (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C00A3310 (IsCurrentDesktopComposed.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00C7D10 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00C9A30 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00D82E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?IsExtendTopology@@YAHXZ @ 0x1C01A6670 (-IsExtendTopology@@YAHXZ.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C026C9E8 (DwmAsyncNotifyRotationModeChange.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSmoothRotateScreen(
        CLegacyRotationMgr *this,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned int v7; // r15d
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // esi
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // ebx
  void *v26; // rax
  unsigned int v28; // [rsp+60h] [rbp-69h] BYREF
  int v29; // [rsp+64h] [rbp-65h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-61h] BYREF
  _DWORD v31[4]; // [rsp+70h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+80h] [rbp-49h] BYREF
  _DWORD *v33; // [rsp+A0h] [rbp-29h]
  __int64 v34; // [rsp+A8h] [rbp-21h]
  int *v35; // [rsp+B0h] [rbp-19h]
  __int64 v36; // [rsp+B8h] [rbp-11h]
  int *v37; // [rsp+C0h] [rbp-9h]
  __int64 v38; // [rsp+C8h] [rbp-1h]
  int *v39; // [rsp+D0h] [rbp+7h]
  __int64 v40; // [rsp+D8h] [rbp+Fh]

  v7 = ConvertDisplayConfigRotationToDMDO(*((_DWORD *)a2 + 26));
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v31, gRotationProcessLock);
  if ( grpdeskRitInput && (v8 = *(_QWORD *)(grpdeskRitInput + 256LL)) != 0 )
    v9 = *(_DWORD *)(v8 + 56);
  else
    v9 = 0;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v31);
  EtwTraceSmoothRotationStart(v7, a3, v9);
  DrvLogDiagDisplayChange(0LL, 8LL);
  v10 = IsExtendTopology();
  v13 = IsCurrentDesktopComposed();
  if ( v13 && !v10 )
  {
    v14 = (void *)ReferenceDwmApiPort(v12, v11);
    DwmAsyncNotifyRotationModeChange(v14);
    v18 = UserReferenceDwmApiPort(v16, v15, v17);
    UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
    DwmSyncFlushAndWaitForBatch(v18);
    EnterCrit(1LL, 0LL);
  }
  v25 = xxxUserSetDisplayConfig(1LL, a2, 672LL, v13 != 0 ? 24 : 8, 0LL, 0, 0LL, 0LL, 0LL, a4, 0LL);
  if ( v13 && !v10 )
  {
    v26 = (void *)ReferenceDwmApiPort(v24, v23);
    DwmAsyncNotifyRotationModeChange(v26);
  }
  EtwTraceSmoothRotationStop(v7, a3);
  if ( (unsigned int)dword_1C0354098 > 5 && tlgKeywordOn((__int64)&dword_1C0354098, 0x200000000001LL) )
  {
    v28 = v25;
    v39 = (int *)&v28;
    v29 = v13;
    v37 = &v29;
    v30 = a3;
    v35 = (int *)&v30;
    v31[0] = v7;
    v33 = v31;
    v40 = 4LL;
    v38 = 4LL;
    v36 = 4LL;
    v34 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0354098, (unsigned __int8 *)dword_1C0319AF5, 0LL, 0LL, 6u, &v32);
  }
  return v25;
}
