/*
 * XREFs of PopDiagTraceSleepStudyStart @ 0x140756004
 * Callers:
 *     PopSleepstudyScenarioStopWorker @ 0x140AA2AE0 (PopSleepstudyScenarioStopWorker.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     PopGetModernStandbyTransitionReason @ 0x1404AE510 (PopGetModernStandbyTransitionReason.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSleepStudyStart(char a1)
{
  int ModernStandbyTransitionReason; // eax
  char v2; // [rsp+30h] [rbp-59h] BYREF
  int v3; // [rsp+34h] [rbp-55h] BYREF
  __int64 v4; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-49h] BYREF
  char *v6; // [rsp+50h] [rbp-39h]
  int v7; // [rsp+58h] [rbp-31h]
  int v8; // [rsp+5Ch] [rbp-2Dh]
  int *v9; // [rsp+60h] [rbp-29h]
  int v10; // [rsp+68h] [rbp-21h]
  int v11; // [rsp+6Ch] [rbp-1Dh]
  int *v12; // [rsp+70h] [rbp-19h]
  int v13; // [rsp+78h] [rbp-11h]
  int v14; // [rsp+7Ch] [rbp-Dh]
  int *v15; // [rsp+80h] [rbp-9h]
  int v16; // [rsp+88h] [rbp-1h]
  int v17; // [rsp+8Ch] [rbp+3h]
  __int64 *v18; // [rsp+90h] [rbp+7h]
  int v19; // [rsp+98h] [rbp+Fh]
  int v20; // [rsp+9Ch] [rbp+13h]
  unsigned __int64 v21; // [rsp+A0h] [rbp+17h]
  int v22; // [rsp+A8h] [rbp+1Fh]
  int v23; // [rsp+ACh] [rbp+23h]
  __int64 *v24; // [rsp+B0h] [rbp+27h]
  int v25; // [rsp+B8h] [rbp+2Fh]
  int v26; // [rsp+BCh] [rbp+33h]
  char *v27; // [rsp+C0h] [rbp+37h]
  int v28; // [rsp+C8h] [rbp+3Fh]
  int v29; // [rsp+CCh] [rbp+43h]
  char v30; // [rsp+F0h] [rbp+67h] BYREF

  v30 = a1;
  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_START_REASON) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v4 = MEMORY[0xFFFFF78000000014];
      UserData.Ptr = PopWdiCurrentScenario;
      v2 = PopWdiCurrentScenarioInstanceId;
      v6 = &v2;
      UserData.Size = 16;
      v7 = 1;
      ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(1);
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v3 = ModernStandbyTransitionReason;
      v9 = &v3;
      v12 = &PopCsConsumption;
      v15 = &dword_140E27E28;
      v18 = &PopWdiCurrentScenarioInstanceId;
      v21 = 0xFFFFF780000002C4uLL;
      v24 = &v4;
      v27 = &v30;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v19 = 8;
      v22 = 4;
      v25 = 8;
      v28 = 1;
      EtwWrite(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_START_REASON, &PopDiagActivityId, 9u, &UserData);
    }
  }
}
