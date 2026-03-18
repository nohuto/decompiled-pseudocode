/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401136F0
 * Callers:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x14005D9E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     GreTextInitialized @ 0x140113698 (GreTextInitialized.c)
 *     FinishStockFontInit @ 0x140151750 (FinishStockFontInit.c)
 *     NtGdiExtEscape @ 0x14025E9E0 (NtGdiExtEscape.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(__int64 a1, __int64 a2, __int64 a3)
{
  struct W32_PUSH_LOCK *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  bool v8; // bl

  v3 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 24256LL);
  GreAcquirePushLockShared(v3);
  v7 = *(_QWORD *)(W32GetSessionState(v5, v4, v6) + 96);
  v8 = *(_QWORD *)(v7 + 24192) == PsGetCurrentProcess();
  if ( v3 )
    GreReleasePushLockShared(v3);
  return v8;
}
