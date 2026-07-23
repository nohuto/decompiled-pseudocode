/*
 * XREFs of RtlpFcInsertChangeRegistration @ 0x18002CAF4
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18002C970 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpFcInsertChangeRegistration(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  RtlAcquireSRWLockExclusive(&SRWLock);
  v3 = (_QWORD *)qword_1801D2D90;
  if ( *(__int64 **)qword_1801D2D90 != &qword_1801D2D88 )
    __fastfail(3u);
  *a2 = &qword_1801D2D88;
  a2[1] = v3;
  *v3 = a2;
  qword_1801D2D90 = (__int64)a2;
  RtlReleaseSRWLockExclusive(&SRWLock);
}
