/*
 * XREFs of CitDisplayPowerChange @ 0x1400B59E4
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x140090AE4 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401AE764 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x1400B3CFC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1400B5EF4 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x140151F2C (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitDisplayPowerChange(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // edx
  unsigned __int64 v5; // rdi
  struct _CIT_IMPACT_CONTEXT *v6; // rcx
  struct tagPROCESSINFO *v7; // r8

  if ( CitIsEnabled(a1) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v2) + 18968) + 32LL);
    v4 = *(_DWORD *)(a1 + 72);
    if ( (*(_DWORD *)(v3 + 200) == 0) == (v4 == 0) )
    {
      *(_DWORD *)(v3 + 200) = v4;
    }
    else
    {
      v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( !*(_DWORD *)(a1 + 72) )
      {
        CitpSetForegroundProcess((struct _CIT_IMPACT_CONTEXT *)v3, v5, 0LL, 0LL);
        CitpContextFlush((struct _CIT_IMPACT_CONTEXT *)v3, v5);
      }
      *(_DWORD *)(v3 + 200) = *(_DWORD *)(a1 + 72);
      if ( *(_DWORD *)(a1 + 72) && (unsigned int)CitpAllowForegroundProcess((const struct _CIT_IMPACT_CONTEXT *)v3) )
      {
        v7 = *(struct tagPROCESSINFO **)(v3 + 128);
        if ( v7 )
          CitpSetForegroundProcess(v6, v5, v7, 0LL);
      }
    }
  }
}
