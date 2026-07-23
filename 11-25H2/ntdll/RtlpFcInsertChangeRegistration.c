/*
 * XREFs of RtlpFcInsertChangeRegistration @ 0x180003314
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180003190 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpFcInsertChangeRegistration(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  RtlAcquireSRWLockExclusive(&SRWLock);
  v3 = (_QWORD *)qword_1801D5DF0;
  if ( *(__int64 **)qword_1801D5DF0 != &qword_1801D5DE8 )
    __fastfail(3u);
  *a2 = &qword_1801D5DE8;
  a2[1] = v3;
  *v3 = a2;
  qword_1801D5DF0 = (__int64)a2;
  RtlReleaseSRWLockExclusive(&SRWLock);
}
