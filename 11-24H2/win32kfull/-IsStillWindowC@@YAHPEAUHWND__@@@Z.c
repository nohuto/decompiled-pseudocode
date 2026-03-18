/*
 * XREFs of ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1401719B4
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x140171754 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x14022C22C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall IsStillWindowC(HWND a1, __int64 a2)
{
  unsigned int v2; // edi
  int v3; // esi
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // r14

  v2 = 0;
  v3 = (int)a1;
  if ( !a1 || a1 == (HWND)-2LL || a1 == (HWND)1 || a1 == (HWND)-1LL )
    return 1LL;
  v5 = 0LL;
  W32GetCurrentThreadNonPaged(a1, a2);
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19928);
  if ( (unsigned __int64)(unsigned __int16)v3 < *(_QWORD *)(v9 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19952) * (unsigned int)(unsigned __int16)v3
        + *(_QWORD *)(UserSessionState + 19944);
    v17 = (__int64 *)HMPkheFromPhe(v13);
    LOWORD(v3) = HIWORD(v3) & 0x7FFF;
    if ( ((HIWORD(v3) & 0x7FFF) == *(_WORD *)(v13 + 26)
       || (_WORD)v3 == 0x7FFF
       || !(_WORD)v3 && PsGetCurrentProcessWow64Process(v15, v14, v16))
      && (*(_BYTE *)(v13 + 25) & 1) == 0
      && *(_BYTE *)(v13 + 24) == 1 )
    {
      v5 = *v17;
    }
  }
  LOBYTE(v2) = v5 != 0;
  return v2;
}
