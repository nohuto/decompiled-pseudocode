/*
 * XREFs of PopAdaptiveStandbyTraceSessionMetadata @ 0x140761FD0
 * Callers:
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x140761CB0 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x14076215C (PopAdaptiveStandbyTraceSessionSettings.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 */

NTSTATUS __fastcall PopAdaptiveStandbyTraceSessionMetadata(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r9d
  unsigned int v7; // r11d
  unsigned int v8; // ebx
  _QWORD *v9; // r8
  char *v10; // rax
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  char *v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+58h] [rbp+10h] BYREF
  char v27; // [rsp+68h] [rbp+20h] BYREF

  v26 = a2;
  v25 = a1;
  v27 = a1;
  *(_QWORD *)(a4 + 8) = 1LL;
  *(_QWORD *)a4 = &v27;
  *(_QWORD *)(a4 + 16) = &v26;
  *(_QWORD *)(a4 + 24) = 4LL;
  v5 = 2;
  v7 = 0;
  if ( a2 )
  {
    v8 = 4;
    do
    {
      v9 = (_QWORD *)(a3 + 240LL * v7);
      v10 = (char *)*v9;
      if ( !*v9 )
      {
        v10 = (char *)v9 + 12;
        *v9 = (char *)v9 + 12;
      }
      v11 = v9 + 1;
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)&v10[2 * v12] );
      v13 = (char *)v9[20];
      *v11 = v12;
      if ( !v13 )
      {
        v13 = (char *)v9 + 172;
        v9[20] = (char *)v9 + 172;
      }
      v14 = v9 + 21;
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)&v13[2 * v15] );
      *v14 = v15;
      ++v7;
      v16 = 2LL * v5;
      v5 += 5;
      *(_QWORD *)(a4 + 8 * v16) = &GUID_SPR_SESSION_METADATA_CONTAINER;
      *(_QWORD *)(a4 + 8 * v16 + 8) = 16LL;
      v17 = 2LL * (v8 - 1);
      *(_QWORD *)(a4 + 8 * v17) = v11;
      *(_QWORD *)(a4 + 8 * v17 + 8) = 4LL;
      v18 = (char *)*v9;
      v19 = 2LL * v8;
      *(_DWORD *)(a4 + 8 * v19 + 8) = 2 * *v11;
      *(_QWORD *)(a4 + 8 * v19) = v18;
      *(_DWORD *)(a4 + 8 * v19 + 12) = 0;
      v20 = 2LL * (v8 + 1);
      *(_QWORD *)(a4 + 8 * v20) = v14;
      *(_QWORD *)(a4 + 8 * v20 + 8) = 4LL;
      v21 = 2LL * (v8 + 2);
      v22 = 2 * *v14;
      v8 += 5;
      *(_QWORD *)(a4 + 8 * v21) = v9[20];
      *(_QWORD *)(a4 + 8 * v21 + 8) = v22;
    }
    while ( v7 < v26 );
  }
  v23 = 2LL * v5;
  *(_QWORD *)(a4 + 8 * v23) = &v25;
  *(_QWORD *)(a4 + 8 * v23 + 8) = 8LL;
  return EtwWrite(
           PopDiagSleepStudyHandle,
           &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA,
           0LL,
           v5 + 1,
           (PEVENT_DATA_DESCRIPTOR)a4);
}
