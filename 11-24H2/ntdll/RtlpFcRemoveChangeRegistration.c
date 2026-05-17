/*
 * XREFs of RtlpFcRemoveChangeRegistration @ 0x1800F7AF0
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x1800F7AC0 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpFcRemoveChangeRegistration(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  volatile signed __int32 *v4; // rdx
  volatile signed __int32 **v5; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&qword_1801D3D80, (volatile signed __int32 **)a2, a3);
  v4 = *(volatile signed __int32 **)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2
    || (v5 = *(volatile signed __int32 ***)(a2 + 8), *v5 != (volatile signed __int32 *)a2) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  *((_QWORD *)v4 + 1) = v5;
  return RtlReleaseSRWLockExclusive(&qword_1801D3D80);
}
