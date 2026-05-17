/*
 * XREFs of RtlpFcInsertChangeRegistration @ 0x180097CA4
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180097B20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpFcInsertChangeRegistration(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v4; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&qword_1801D3D80, (volatile signed __int32 **)a2, a3);
  v4 = (__int64 *)qword_1801D3D90;
  if ( *(__int64 **)qword_1801D3D90 != &qword_1801D3D88 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_1801D3D88;
  *(_QWORD *)(a2 + 8) = v4;
  *v4 = a2;
  qword_1801D3D90 = a2;
  return RtlReleaseSRWLockExclusive(&qword_1801D3D80);
}
