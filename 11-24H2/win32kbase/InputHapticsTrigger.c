/*
 * XREFs of InputHapticsTrigger @ 0x140212DF0
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_MouseHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140212698 (Feature_MouseHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall InputHapticsTrigger(int a1)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 result; // rax
  bool v12; // zf
  _OWORD v13[9]; // [rsp+20h] [rbp-39h] BYREF

  memset((char *)v13 + 4, 0, 0x84uLL);
  LODWORD(v13[0]) = a1;
  UserSessionState = W32GetUserSessionState(v2);
  v4 = *(_OWORD *)(UserSessionState + 18592);
  v13[5] = *(_OWORD *)(UserSessionState + 18576);
  v5 = *(_OWORD *)(UserSessionState + 18608);
  v13[6] = v4;
  *(_QWORD *)&v4 = *(_QWORD *)(UserSessionState + 18624);
  v13[7] = v5;
  *(_QWORD *)&v13[8] = v4;
  v7 = PtiCurrent(v6);
  v8 = *(_OWORD *)((char *)v7 + 1400);
  *(_OWORD *)((char *)v13 + 8) = *(_OWORD *)((char *)v7 + 1384);
  v9 = *(_OWORD *)((char *)v7 + 1416);
  *(_OWORD *)((char *)&v13[1] + 8) = v8;
  v10 = *(_OWORD *)((char *)v7 + 1432);
  *(_OWORD *)((char *)&v13[2] + 8) = v9;
  *(_QWORD *)&v9 = *((_QWORD *)v7 + 181);
  result = *((unsigned int *)v7 + 360);
  *((_QWORD *)&v13[4] + 1) = v9;
  *(_OWORD *)((char *)&v13[3] + 8) = v10;
  if ( (_DWORD)result == 2 )
  {
    result = Feature_MouseHaptics__private_IsEnabledDeviceUsageNoInline();
    if ( !(_DWORD)result )
      return result;
    v12 = DWORD2(v13[7]) == 0;
  }
  else if ( (_DWORD)result == 8 )
  {
    v12 = LODWORD(v13[5]) == 0;
  }
  else
  {
    result = (unsigned int)(result - 16);
    if ( (result & 0xFFFFFFFD) != 0 )
      return result;
    v12 = DWORD2(v13[6]) == 0;
  }
  if ( !v12 )
    return SendMessageTo(22LL, v13, 136LL);
  return result;
}
