/*
 * XREFs of WakeRITForShutdown @ 0x14021BE70
 * Callers:
 *     NtUserWakeRITForShutdown @ 0x1402A1D70 (NtUserWakeRITForShutdown.c)
 * Callees:
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401DFCE4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     WakeRIT @ 0x1401E1108 (WakeRIT.c)
 */

__int64 __fastcall WakeRITForShutdown(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v1 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v2) != v1 || !*(_QWORD *)(W32GetUserSessionState(v4, v3) + 18736) )
    return 3221225473LL;
  HYDRA_HINT(0x2000000LL, v5);
  WakeRIT(2LL, v6);
  ShutdownImWorker();
  return 0LL;
}
