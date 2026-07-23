/*
 * XREFs of PopFxLogSocSubsystemBlockingTimes @ 0x14096E81C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopDiagTraceSleepStudyBlocker @ 0x140494FCC (PopDiagTraceSleepStudyBlocker.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x14096E9D4 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14096EBC0 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 */

__int64 __fastcall PopFxLogSocSubsystemBlockingTimes(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int i; // esi
  __int64 v7; // r14
  unsigned __int16 *v8; // r12
  int v9; // ecx
  char v11; // [rsp+20h] [rbp-A9h] BYREF
  int v12; // [rsp+24h] [rbp-A5h] BYREF
  __int64 v13; // [rsp+28h] [rbp-A1h] BYREF
  __int64 v14; // [rsp+30h] [rbp-99h] BYREF
  __int64 v15; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-89h] BYREF
  int v17; // [rsp+44h] [rbp-85h]
  __int64 v18; // [rsp+48h] [rbp-81h]
  unsigned __int16 *v19; // [rsp+50h] [rbp-79h]
  __int64 v20; // [rsp+58h] [rbp-71h]
  int v21; // [rsp+60h] [rbp-69h]
  int v22; // [rsp+64h] [rbp-65h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-59h] BYREF
  __int64 v24; // [rsp+80h] [rbp-49h]
  __int64 v25; // [rsp+88h] [rbp-41h]
  int *v26; // [rsp+90h] [rbp-39h]
  __int64 v27; // [rsp+98h] [rbp-31h]
  __int64 v28; // [rsp+A0h] [rbp-29h]
  int v29; // [rsp+A8h] [rbp-21h]
  int v30; // [rsp+ACh] [rbp-1Dh]
  __int64 v31; // [rsp+B0h] [rbp-19h]
  __int64 v32; // [rsp+B8h] [rbp-11h]
  __int64 *v33; // [rsp+C0h] [rbp-9h]
  __int64 v34; // [rsp+C8h] [rbp-1h]
  __int64 *v35; // [rsp+D0h] [rbp+7h]
  __int64 v36; // [rsp+D8h] [rbp+Fh]
  __int64 *v37; // [rsp+E0h] [rbp+17h]
  __int64 v38; // [rsp+E8h] [rbp+1Fh]

  v2 = 0;
  v14 = PopWnfCsEnterScenarioId;
  v15 = 0LL;
  v17 = 0;
  v13 = 0LL;
  v11 = 0;
  v12 = 0;
  v5 = PopFxLookupSocSubsystemsByPlatformIdleState(a2);
  if ( v5 )
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 20); ++i )
    {
      v17 = 0;
      v22 = 0;
      v16 = a2;
      v7 = 344LL * i;
      v8 = (unsigned __int16 *)(v7 + v5 + 40);
      v18 = *(_QWORD *)(v7 + v5 + 64);
      v19 = v8;
      v20 = 0LL;
      v21 = 0;
      if ( !(unsigned __int8)PopPluginQuerySocSubsystemBlockingTime(v4, *(unsigned int *)(v7 + v5 + 60), &v16) )
        return (unsigned int)-1073741595;
      v13 = v20;
      v11 = v14;
      UserData.Ptr = (ULONGLONG)&v11;
      *(_QWORD *)&UserData.Size = 1LL;
      v24 = v7 + v5 + 88;
      v25 = 16LL;
      v12 = *v8 >> 1;
      v26 = &v12;
      v27 = 4LL;
      v9 = *v8;
      v28 = *(_QWORD *)(v7 + v5 + 48);
      v29 = v9;
      v31 = v7 + v5 + 72;
      v30 = 0;
      v33 = &v13;
      v35 = &v14;
      v37 = &v15;
      v32 = 16LL;
      v34 = 8LL;
      v36 = 8LL;
      v15 = 0LL;
      v38 = 8LL;
      PopDiagTraceSleepStudyBlocker(&UserData);
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v2;
}
