/*
 * XREFs of ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x14014DF74
 * Callers:
 *     CHidInput_CreateInstance @ 0x14014E430 (CHidInput_CreateInstance.c)
 *     ??0CMouseSensor@@IEAA@XZ @ 0x1401543E0 (--0CMouseSensor@@IEAA@XZ.c)
 *     CKeyboardSensor_CreateInstance @ 0x140210AC0 (CKeyboardSensor_CreateInstance.c)
 * Callees:
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1400CEE9C (--0CRIMBase@@IEAA@K@Z.c)
 *     ??0CIVChannel@@QEAA@PEAXKP6AXPEBXUCONTAINER_ID@@@ZP6A_N1KK00@ZP6APEAX1@Z@Z @ 0x14014E104 (--0CIVChannel@@QEAA@PEAXKP6AXPEBXUCONTAINER_ID@@@ZP6A_N1KK00@ZP6APEAX1@Z@Z.c)
 */

__int64 __fastcall CBaseInput::CBaseInput(__int64 a1, int a2, unsigned int a3, int a4)
{
  void *v4; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 result; // rax

  v4 = (void *)a4;
  CRIMBase::CRIMBase((CRIMBase *)a1, a2);
  *(_QWORD *)a1 = &CBaseInput::`vftable';
  *(_QWORD *)(a1 + 1232) = W32GetUserSessionState(v7) + 3072;
  *(_QWORD *)(a1 + 1240) = W32GetUserSessionState(v8) + 3080;
  UserSessionState = W32GetUserSessionState(v9);
  *(_QWORD *)(a1 + 1256) = 0LL;
  *(_QWORD *)(a1 + 1248) = UserSessionState + 3088;
  CIVChannel::CIVChannel(
    (CIVChannel *)(a1 + 1264),
    v4,
    a3,
    (void (__high *)(const void *, struct CONTAINER_ID))&CBaseInput::ivOnChildPartitionConnected,
    (bool (*)(const void *, unsigned int, unsigned int, void *, void *))CBaseInput::ivOnPacketReceived,
    (void *(*)(const void *))CBaseInput::ivPreReceiveCallback);
  *(_DWORD *)(a1 + 1320) = 0;
  result = a1;
  *(_DWORD *)(a1 + 1324) = 0;
  *(_QWORD *)(a1 + 1312) = 0LL;
  return result;
}
