/*
 * XREFs of xxxLoadUserApiHook @ 0x1C00DF860
 * Callers:
 *     NtUserLoadUserApiHook @ 0x1C009C2B0 (NtUserLoadUserApiHook.c)
 *     xxxDefWindowProc @ 0x1C00DF700 (xxxDefWindowProc.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C0122AD0 (xxxLoadHmodIndex.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 CurrentProcess; // rax
  __int64 v6; // rcx

  v3 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess)
    || (unsigned int)PsGetWin32KFilterSet() == 5
    || (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) != 0 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x80u) != 0 )
    v6 = (unsigned int)gihmodUserApiHookWOW;
  else
    v6 = (unsigned int)gihmodUserApiHook;
  LOBYTE(v3) = xxxLoadHmodIndex(v6) != 0;
  return v3;
}
