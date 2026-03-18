/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1401CC938
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401ADE38 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1401475E0 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14015BCB8 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 DrvUpdateRemoteGraphicsDeviceList()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 i; // rdi
  __int64 DxgkWin32kInterface; // rax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  char v10; // [rsp+40h] [rbp+8h] BYREF

  if ( !IS_USERCRIT_OWNED_AT_ALL() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10089;
  }
  v1 = *(_QWORD *)(W32GetSessionState(v0) + 88);
  GreCleanupRemoteAdapterContext((struct tagREMOTE_CONTEXT *)(v1 + 2856));
  if ( !*(_DWORD *)(W32GetUserSessionState(v2) + 68960) )
  {
    for ( i = *(_QWORD *)(v1 + 1184); i; i = *(_QWORD *)(i + 128) )
    {
      if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 && !*(_QWORD *)(i + 272) )
      {
        v10 = 0;
        *(_QWORD *)(i + 288) = 0LL;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v3);
        v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, char *))(DxgkWin32kInterface + 392))(
               i + 272,
               i + 288,
               i + 296,
               i + 280,
               &v10);
        if ( v6 >= 0 )
        {
          v7 = *(_DWORD *)(i + 164);
          if ( v10 )
            v8 = v7 | 4;
          else
            v8 = v7 & 0xFFFFFFFB;
          *(_DWORD *)(i + 164) = v8;
          DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)i);
        }
        else
        {
          WdLogSingleEntry2(2LL, i, v6);
          WdLogGlobalForLineNumber = 10125;
        }
      }
    }
  }
  return 1LL;
}
