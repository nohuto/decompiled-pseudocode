/*
 * XREFs of xxxKELocaleProcs @ 0x14010E8AC
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FB48C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x14010E948 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x14014BCDC (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 */

char __fastcall xxxKELocaleProcs(struct tagKE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 14064) + 80LL) & 1) != 0
    || *(_DWORD *)(W32GetUserSessionState(v2) + 14256) )
  {
    xxxAltGr(a1);
  }
  v4 = *(unsigned int *)(W32GetUserSessionState(v3) + 14184);
  if ( (v4 & 2) == 0 && (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v4) + 14064) + 80LL) & 2) == 0
    || (unsigned int)xxxShiftLock(a1) )
  {
    return 1;
  }
  InputTraceLogging::Keyboard::DropInput();
  return 0;
}
