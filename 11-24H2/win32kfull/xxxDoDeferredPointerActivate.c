/*
 * XREFs of xxxDoDeferredPointerActivate @ 0x140224E28
 * Callers:
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x140159868 (INPUTDEST_FROM_PWND.c)
 */

__int64 __fastcall xxxDoDeferredPointerActivate(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rbx
  _OWORD *v7; // rax
  __int64 v8; // r8
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD v15[7]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v16[28]; // [rsp+90h] [rbp-78h] BYREF

  result = ValidateHwnd(*(_QWORD *)(a1 + 16));
  v5 = result;
  if ( result )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 3264);
    v7 = INPUTDEST_FROM_PWND(v16, v5);
    v8 = *(_QWORD *)(a1 + 40);
    v9 = v7[1];
    v15[0] = *v7;
    v10 = v7[2];
    v15[1] = v9;
    v11 = v7[3];
    v15[2] = v10;
    v12 = v7[4];
    v15[3] = v11;
    v13 = v7[5];
    v15[4] = v12;
    v14 = v7[6];
    v15[5] = v13;
    v15[6] = v14;
    return CTouchProcessor::DoDeferredPointerActivate(v6, v15, v8);
  }
  return result;
}
