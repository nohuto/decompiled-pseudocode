/*
 * XREFs of DpiLdaPowerDownAllAdaptersInChain @ 0x140403104
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1403B9530 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DpiIsPowerRuntimeDStateTransition @ 0x1402CA5B8 (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiFdoSetAdapterPowerState @ 0x1404032B8 (DpiFdoSetAdapterPowerState.c)
 */

__int64 __fastcall DpiLdaPowerDownAllAdaptersInChain(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // edi
  __int64 v4; // rcx
  bool v5; // r12
  __int64 v6; // r14
  int v7; // ebx
  int v8; // r13d
  __int64 v9; // rbp
  __int64 v10; // rax
  char IsPowerRuntimeDStateTransition; // al
  __int64 i; // rsi
  POWER_STATE v13; // r10d
  __int64 v14; // r15
  char v16; // [rsp+60h] [rbp+8h]

  v2 = *(_DWORD **)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = (int)v2[6];
  v7 = v2[2];
  v8 = v2[8];
  if ( *(_BYTE *)(v4 + 508) == 1 )
  {
    v9 = v4;
    v5 = *(_DWORD *)(v4 + 236) == 2;
  }
  else
  {
    v10 = *(_QWORD *)(v4 + 2832);
    if ( !v10 )
    {
      v3 = DpiFdoSetAdapterPowerState(*(PDEVICE_OBJECT *)(v4 + 24), (POWER_STATE)v6, v8);
      if ( v3 < 0 )
      {
        WdLogSingleEntry1(3LL, v6);
        WdLogGlobalForLineNumber = 420;
      }
      return (unsigned int)v3;
    }
    v9 = *(_QWORD *)(v10 + 64);
  }
  IsPowerRuntimeDStateTransition = DpiIsPowerRuntimeDStateTransition(v4);
  v16 = IsPowerRuntimeDStateTransition;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v9 + 2840); i = (unsigned int)(i + 1) )
  {
    v13.SystemState = v6;
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 2832) + 8 * i) + 64LL);
    if ( !IsPowerRuntimeDStateTransition )
      v13.SystemState = *(SYSTEM_POWER_STATE *)(v14 + 4LL * ((unsigned __int16)v7 >> 12) + 1336);
    v3 = DpiFdoSetAdapterPowerState(*(PDEVICE_OBJECT *)(v14 + 24), v13, v8);
    if ( v3 < 0 )
    {
      v3 = -1071774666;
      WdLogSingleEntry3(0LL, 275LL, 21LL, -1071774666LL);
      WdLogGlobalForLineNumber = 472;
      return (unsigned int)v3;
    }
    if ( *(_DWORD *)(v14 + 236) != 2 && v5 )
    {
      v3 = -1071774666;
      WdLogSingleEntry3(0LL, 275LL, 21LL, -1071774666LL);
      WdLogGlobalForLineNumber = 488;
      return (unsigned int)v3;
    }
    IsPowerRuntimeDStateTransition = v16;
  }
  return (unsigned int)v3;
}
