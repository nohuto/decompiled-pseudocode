/*
 * XREFs of DrvCleanupRemoteGraphicsDevices @ 0x1401C989C
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401ADE38 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 DrvCleanupRemoteGraphicsDevices()
{
  __int64 v0; // rcx
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 i; // rbx
  __int64 DxgkWin32kInterface; // rax

  if ( !IS_USERCRIT_OWNED_AT_ALL() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10510;
  }
  result = W32GetSessionState(v0);
  v2 = *(_QWORD *)(result + 88);
  for ( i = *(_QWORD *)(v2 + 1184); i; i = *(_QWORD *)(i + 128) )
  {
    if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 )
    {
      if ( *(_QWORD *)(i + 296) )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v2);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(DxgkWin32kInterface + 400))(
          *(_QWORD *)(i + 272),
          0LL,
          *(_QWORD *)(i + 280));
        *(_QWORD *)(i + 272) = 0LL;
        result = 0LL;
        *(_QWORD *)(i + 288) = 0LL;
        *(_QWORD *)(i + 296) = 0LL;
      }
    }
  }
  return result;
}
