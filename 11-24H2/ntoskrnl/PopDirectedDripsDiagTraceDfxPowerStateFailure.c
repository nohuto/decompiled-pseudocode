/*
 * XREFs of PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x1405D90E4
 * Callers:
 *     PopFxEnforceDirectedPowerTransition @ 0x1405CEA4C (PopFxEnforceDirectedPowerTransition.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDirectedDripsDiagTraceDfxPowerStateFailure(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // eax
  __int64 v3; // rax
  int v4; // ecx
  unsigned int v5; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  __int64 v7; // [rsp+60h] [rbp+17h]
  int v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+6Ch] [rbp+23h]
  unsigned int *v10; // [rsp+70h] [rbp+27h]
  int v11; // [rsp+78h] [rbp+2Fh]
  int v12; // [rsp+7Ch] [rbp+33h]
  __int64 v13; // [rsp+80h] [rbp+37h]
  int v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+8Ch] [rbp+43h]
  __int64 v16; // [rsp+B0h] [rbp+67h] BYREF

  v16 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_FX_POWER_STATE_FAILURE) )
    {
      v1 = *(_QWORD *)(v16 + 48);
      v2 = *(unsigned __int16 *)(v1 + 40);
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v5 = v2 >> 1;
      UserData.Ptr = (ULONGLONG)&v16;
      UserData.Size = 8;
      v8 = 8;
      v10 = &v5;
      v7 = v16 + 48;
      v11 = 4;
      v3 = *(_QWORD *)(v1 + 48);
      v4 = *(unsigned __int16 *)(v1 + 40);
      v15 = 0;
      v13 = v3;
      v14 = v4;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_FX_POWER_STATE_FAILURE, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
}
