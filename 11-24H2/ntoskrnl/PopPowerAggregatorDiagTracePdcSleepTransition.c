/*
 * XREFs of PopPowerAggregatorDiagTracePdcSleepTransition @ 0x140A9692C
 * Callers:
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140A96860 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopPowerAggregatorDiagTracePdcSleepTransition(
        unsigned __int8 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  char *v5; // rax
  int v7; // [rsp+30h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-11h] BYREF
  int *v9; // [rsp+50h] [rbp-1h]
  int v10; // [rsp+58h] [rbp+7h]
  int v11; // [rsp+5Ch] [rbp+Bh]
  __int64 v12; // [rsp+60h] [rbp+Fh]
  int v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+6Ch] [rbp+1Bh]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+7Ch] [rbp+2Bh]
  char *v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+8Ch] [rbp+3Bh]
  int v21; // [rsp+B8h] [rbp+67h] BYREF

  v21 = a2;
  UserData.Reserved = 0;
  v11 = 0;
  v14 = 0;
  v17 = 0;
  v20 = 0;
  v7 = a1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = &v21;
  v5 = &a5;
  v18 = &a5;
  UserData.Size = 4;
  v10 = 4;
  v12 = a3;
  v13 = 4;
  v15 = a4;
  v16 = 4;
  v19 = 4;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_PDC_SLEEP_TRANSITION);
    if ( (_BYTE)v5 )
      LOBYTE(v5) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_PDC_SLEEP_TRANSITION, 0LL, 5u, &UserData);
  }
  return (char)v5;
}
