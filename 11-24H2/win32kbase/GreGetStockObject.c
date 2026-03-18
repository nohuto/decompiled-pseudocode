/*
 * XREFs of GreGetStockObject @ 0x140043F10
 * Callers:
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 *     bInitICM @ 0x1402E4910 (bInitICM.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400451F0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GreGetStockObject(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // esi
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 result; // rax

  v1 = (int)a1;
  LOBYTE(v2) = 18;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1);
  if ( CurrentThreadNonPaged )
  {
    v5 = *CurrentThreadNonPaged;
    if ( *CurrentThreadNonPaged )
    {
      if ( *(_QWORD *)(v5 + 408) )
        CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadNonPaged);
      if ( *(_DWORD *)(v5 + 400) )
      {
        LOBYTE(v2) = *(_DWORD *)(v5 + 400);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
          v2 = *(_DWORD *)(CurrentProcessWin32Process + 268);
      }
    }
  }
  v7 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  if ( (unsigned int)v1 > 0x10
    || (v8 = 74752, !_bittest(&v8, v1))
    || (v2 & 0xF) != 0
    || (result = *(_QWORD *)(*(_QWORD *)(v7 + 3016) + 8 * v1)) == 0 )
  {
    if ( (_DWORD)v1 == 17 || (unsigned int)v1 > 0x15 )
      return 0LL;
    else
      return *(_QWORD *)(*(_QWORD *)(v7 + 3008) + 8 * v1);
  }
  return result;
}
