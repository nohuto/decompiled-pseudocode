/*
 * XREFs of ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x14015A008
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x140107EA4 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_OWORD *__fastcall QHelper::GetInputDestFromForegroundFocus(_OWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  _DWORD v13[30]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( *(_QWORD *)(W32GetUserSessionState(v2) + 18944) )
    v4 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v3) + 18944) + 120LL);
  else
    v4 = 0LL;
  if ( v4 )
  {
    v5 = INPUTDEST_FROM_PWND(v13, v4);
    v6 = v5[1];
    *a1 = *v5;
    v7 = v5[2];
    a1[1] = v6;
    v8 = v5[3];
    a1[2] = v7;
    v9 = v5[4];
    a1[3] = v8;
    v10 = v5[5];
    a1[4] = v9;
    v11 = v5[6];
    a1[5] = v10;
    a1[6] = v11;
  }
  return a1;
}
