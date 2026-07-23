/*
 * XREFs of PopDirectedDripsDiagTraceDisengageReasonChange @ 0x140A35ED4
 * Callers:
 *     PopDirectedDripsRefreshDisengageState @ 0x140A35E50 (PopDirectedDripsRefreshDisengageState.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDirectedDripsDiagTraceDisengageReasonChange(int a1, int a2)
{
  int v2; // [rsp+30h] [rbp-9h] BYREF
  int v3; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  int *v5; // [rsp+50h] [rbp+17h]
  int v6; // [rsp+58h] [rbp+1Fh]
  int v7; // [rsp+5Ch] [rbp+23h]
  int *v8; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  int *v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]
  int v14; // [rsp+A0h] [rbp+67h] BYREF
  int v15; // [rsp+A8h] [rbp+6Fh] BYREF

  v15 = a2;
  v14 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DISENGAGE_MASK_CHANGED) )
    {
      UserData.Reserved = 0;
      v7 = 0;
      v10 = 0;
      v13 = 0;
      v3 = v14 & (v15 ^ v14);
      UserData.Ptr = (ULONGLONG)&v14;
      v5 = &v15;
      v8 = &v2;
      v11 = &v3;
      v2 = v15 & (v15 ^ v14);
      UserData.Size = 4;
      v6 = 4;
      v9 = 4;
      v12 = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DISENGAGE_MASK_CHANGED, 0LL, 4u, &UserData);
    }
  }
}
