/*
 * XREFs of DrvNeedToSwitchAdapterForRemoteSession @ 0x1401564FC
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401ADE38 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DrvIsUsedByRemoteGraphicsDevices@@YAHPEAX@Z @ 0x1401C84D0 (-DrvIsUsedByRemoteGraphicsDevices@@YAHPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvNeedToSwitchAdapterForRemoteSession(void *a1)
{
  unsigned int v1; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 v4; // rcx
  __int64 i; // rdx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 && (unsigned int)DrvIsUsedByRemoteGraphicsDevices(a1) )
    return 1LL;
  v6 = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  if ( (*(int (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _QWORD))(DxgkWin32kInterface + 392))(
         0LL,
         &v6,
         0LL,
         0LL,
         0LL) < 0 )
    return 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v4) + 88) + 1184LL); i; i = *(_QWORD *)(i + 128) )
  {
    if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 && *(_QWORD *)(i + 288) != v6 )
      return 1;
  }
  return v1;
}
