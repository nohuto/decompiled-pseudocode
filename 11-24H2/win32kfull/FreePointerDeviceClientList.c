/*
 * XREFs of FreePointerDeviceClientList @ 0x14021924C
 * Callers:
 *     InitializePointerDevicesPresenceState @ 0x140219210 (InitializePointerDevicesPresenceState.c)
 * Callees:
 *     <none>
 */

void __fastcall FreePointerDeviceClientList(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbp
  _QWORD *v5; // rsi
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  v2 = (_QWORD **)(W32GetUserSessionState(a1, a2) + 16712);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = v3 - 2;
    v5 = v3;
    HMAssignmentUnlock(v3 - 2);
    v6 = (_QWORD *)*v3;
    v3 = v6;
    if ( (_QWORD *)v6[1] != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    Win32FreePool(v4);
  }
}
