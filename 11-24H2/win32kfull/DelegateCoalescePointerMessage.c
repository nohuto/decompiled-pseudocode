/*
 * XREFs of DelegateCoalescePointerMessage @ 0x14008EFBC
 * Callers:
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x14008B318 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x14008D9B8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x14008EF5C (DelegateReleasePointerMessage.c)
 * Callees:
 *     DelQEntry @ 0x14008E870 (DelQEntry.c)
 */

__int64 __fastcall DelegateCoalescePointerMessage(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  int v6; // ebx
  int v7; // esi
  __int64 UserSessionState; // rax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rcx

  v4 = a2;
  v6 = -__CFSHR__(*(_DWORD *)(a3 + 100), 6);
  v7 = -__CFSHR__(*(_DWORD *)(a3 + 100), 7);
  if ( __CFSHR__(*(_DWORD *)(a3 + 100), 7) )
  {
    if ( !__CFSHR__(*(_DWORD *)(a3 + 100), 6) )
      goto LABEL_3;
  }
  else if ( __CFSHR__(*(_DWORD *)(a3 + 100), 6) )
  {
    goto LABEL_3;
  }
  if ( !(_DWORD)a2 )
    return 0LL;
LABEL_3:
  if ( *(_DWORD *)(a3 + 24) == 595 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v9 = CTouchProcessor::DelegateCoalescePointerMessage(
         *(CTouchProcessor **)(UserSessionState + 3264),
         *(_QWORD *)(a3 + 40),
         v4,
         v6,
         v7,
         *(_DWORD *)(a3 + 24));
  v10 = v9;
  if ( v4 && v9 )
  {
    v12 = *(_QWORD *)(a1 + 472);
    if ( *(_QWORD *)(v12 + 88) == a3 )
      *(_QWORD *)(v12 + 88) = 0LL;
    DelQEntry(*(_QWORD *)(a1 + 472) + 24LL, (__int64 *)a3, 1);
  }
  return v10;
}
