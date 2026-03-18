/*
 * XREFs of HMValidateCatHandleNoSecure @ 0x1C024B0B4
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01FA884 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateCatHandleNoSecure(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r14

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v3 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1;
    v7 = HMPkheFromPhe(v3);
    LOWORD(a1) = HIWORD(a1) & 0x7FFF;
    if ( ((HIWORD(a1) & 0x7FFF) == *(_WORD *)(v3 + 26)
       || (_WORD)a1 == 0x7FFF
       || !(_WORD)a1 && PsGetCurrentProcessWow64Process(v5, v4, v6))
      && *(_BYTE *)(v3 + 24) == 1 )
    {
      return *(_QWORD *)v7;
    }
  }
  return v2;
}
