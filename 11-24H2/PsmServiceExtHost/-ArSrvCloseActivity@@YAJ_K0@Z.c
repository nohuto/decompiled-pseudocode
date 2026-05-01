/*
 * XREFs of ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x1800782FC
 * Callers:
 *     HamRpcSrvCloseDesktopBridgeActivity @ 0x18009D3F0 (HamRpcSrvCloseDesktopBridgeActivity.c)
 * Callees:
 *     CemRcTableFind @ 0x180004230 (CemRcTableFind.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005988 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800059D8 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArReleaseGlobalLockShared@@YAXXZ @ 0x180005EE4 (-ArReleaseGlobalLockShared@@YAXXZ.c)
 *     ?ArAcquireGlobalLockShared@@YAXXZ @ 0x180005F38 (-ArAcquireGlobalLockShared@@YAXXZ.c)
 *     ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180006790 (-ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800067DC (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18000683C (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall ArSrvCloseActivity(__int64 a1, __int64 a2)
{
  struct _ACTIVITY_RESTARTER *v4; // rbx
  int v5; // edi
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v10[144]; // [rsp+30h] [rbp-A8h] BYREF

  memset_0(v10, 0, 0x88uLL);
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v10);
  ArAcquireGlobalLockShared();
  v4 = ArGlobals;
  ArReleaseGlobalLockShared();
  if ( v4 )
  {
    v9 = a1;
    v6 = (_QWORD *)CemRcTableFind(
                     (__int64)v4,
                     (__int64)&v9,
                     (__int64 (__fastcall *)(__int64, __int64))ArHostCompareByHostId);
    if ( !v6 )
      goto LABEL_16;
    v7 = v6[75];
    if ( v7 && *(_QWORD *)(v7 + 8) == a2 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)v7) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v7 = 0LL;
    }
    CemRcObjectDereference(v6);
    if ( v7 )
    {
      ArHostWaitForAndSetChangeInProgress(*(struct _AR_ACTIVITY_HOST **)(v7 + 16));
      if ( *(_BYTE *)(v7 + 32) == 3 )
        v5 = -2147483638;
      else
        v5 = ArActClose((struct _AR_ACTIVITY *)v7);
      ArHostClearChangeInProgress(*(struct _AR_ACTIVITY_HOST **)(v7 + 16));
      if ( v5 >= 0 )
        v5 = 0;
      ArActDereference((struct _AR_ACTIVITY *)v7);
    }
    else
    {
LABEL_16:
      v5 = -1073741275;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  CempLockTrackerClearForThread(ArLockTrackerId);
  return (unsigned int)v5;
}
