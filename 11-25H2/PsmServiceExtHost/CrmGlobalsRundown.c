/*
 * XREFs of CrmGlobalsRundown @ 0x18002F9BC
 * Callers:
 *     CrmSessionUserNotification @ 0x180068FE0 (CrmSessionUserNotification.c)
 *     CrmGlobalsPeriodicRundown @ 0x1800709A0 (CrmGlobalsPeriodicRundown.c)
 * Callees:
 *     CrmGlobalsRegistrationRundownHelper @ 0x18002FB4C (CrmGlobalsRegistrationRundownHelper.c)
 *     CrmLogActivityCoordinatorTelemetry @ 0x18002FCA0 (CrmLogActivityCoordinatorTelemetry.c)
 *     CrmLogStateMonitorRundown @ 0x180030504 (CrmLogStateMonitorRundown.c)
 */

__int64 CrmGlobalsRundown()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  char v3; // dl
  unsigned __int64 v4; // rcx
  void **v5; // rbx
  __int64 v6; // rdi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  RtlAcquireSRWLockShared(&unk_1800E9A20);
  v0 = xmmword_1800E9A30;
  if ( (_QWORD)xmmword_1800E9A30 )
  {
    while ( 1 )
    {
LABEL_11:
      if ( (int)CrmGlobalsRegistrationRundownHelper(v0, &v8) < 0 )
        goto LABEL_12;
      v1 = *(_QWORD *)v0;
      if ( !*(_QWORD *)v0 )
      {
        v1 = *(_QWORD *)(v0 + 8);
        if ( !v1 )
          break;
      }
      if ( (BYTE8(xmmword_1800E9A30) & 1) != 0 )
        v0 ^= v1;
      else
        v0 = v1;
    }
    v2 = v0;
    v3 = BYTE8(xmmword_1800E9A30) & 1;
    while ( 1 )
    {
      v2 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v3 )
      {
        if ( !v2 )
          break;
        v2 ^= v0;
      }
      if ( !v2 )
        break;
      v4 = *(_QWORD *)(v2 + 8);
      if ( v3 )
      {
        if ( !v4 )
          goto LABEL_17;
        v4 ^= v2;
      }
      if ( v4 && v4 != v0 )
      {
        v0 = v4;
        goto LABEL_11;
      }
LABEL_17:
      v0 = v2;
    }
  }
LABEL_12:
  RtlReleaseSRWLockShared(&unk_1800E9A20);
  RtlAcquireSRWLockShared(&unk_1800E9AF0);
  CrmLogActivityCoordinatorTelemetry(&unk_1800E9B00, L"CrmAggregateActivityTelemetry", MEMORY[0x7FFE0008]);
  RtlReleaseSRWLockShared(&unk_1800E9AF0);
  RtlAcquireSRWLockShared(&CrmGlobals);
  v5 = &qword_1800E98B0;
  v6 = 44LL;
  do
  {
    if ( *v5 )
      CrmLogStateMonitorRundown();
    ++v5;
    --v6;
  }
  while ( v6 );
  return RtlReleaseSRWLockShared(&CrmGlobals);
}
