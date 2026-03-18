/*
 * XREFs of ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x140218280
 * Callers:
 *     xxxInjectTouchInput @ 0x140234EBC (xxxInjectTouchInput.c)
 *     NtUserInitializeTouchInjection @ 0x140298BC0 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x140277F64 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 */

void __fastcall CheckCurrentInjectionConfiguration(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct tagPROCESSINFO *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = 0;
  v3 = (struct tagPROCESSINFO *)*((_QWORD *)PtiCurrent(a1, a2) + 58);
  v4 = *((_QWORD *)v3 + 111);
  if ( *(_DWORD *)(W32GetUserSessionState(v6, v5) + 19328) == 1 || v4 && *(_DWORD *)(v4 + 52) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 19328) )
    {
      v2 = 1;
      *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19328) = 0;
    }
    RealizePendingRecreateTouchInjectionDevices(v3, v2);
  }
}
