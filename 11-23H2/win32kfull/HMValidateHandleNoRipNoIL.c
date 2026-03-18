/*
 * XREFs of HMValidateHandleNoRipNoIL @ 0x1C024B168
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01FA884 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRipNoIL(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // r14
  __int16 v7; // ax

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v3 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1;
    v6 = (__int64 *)HMPkheFromPhe(v3);
    v7 = WORD1(a1) & 0x7FFF;
    if ( ((WORD1(a1) & 0x7FFF) == *(_WORD *)(v3 + 26)
       || v7 == 0x7FFF
       || !v7 && PsGetCurrentProcessWow64Process(0x7FFFLL, v4, v5))
      && (*(_BYTE *)(v3 + 25) & 1) == 0
      && *(_BYTE *)(v3 + 24) == 11 )
    {
      v2 = *v6;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 1LL) != 0) & v2;
  return v2;
}
