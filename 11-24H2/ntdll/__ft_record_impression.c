/*
 * XREFs of __ft_record_impression @ 0x180146544
 * Callers:
 *     RtlNotifyFeatureToggleUsage @ 0x180145E20 (RtlNotifyFeatureToggleUsage.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     __ft_marker_array_record_impression @ 0x180146310 (__ft_marker_array_record_impression.c)
 */

__int64 __fastcall _ft_record_impression(unsigned int a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  int v4; // ebx
  unsigned int v6; // ebx

  v4 = a3;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&qword_1801D3E10, a2, a3);
  v6 = _ft_marker_array_record_impression(_ft_g_api_info, a1, (__int64)a2, v4);
  RtlReleaseSRWLockExclusive(&qword_1801D3E10);
  return v6;
}
