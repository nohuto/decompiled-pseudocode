/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x180046188
 * Callers:
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18000D9E0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall EtwpRemoveRegistrationFromTable(unsigned __int64 *a1)
{
  __m128i si128; // xmm0

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&EtwpProvLock);
  RtlRbRemoveNode((unsigned __int64)&EtwpRegistrationTable, a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  *(__m128i *)a1 = si128;
  a1[2] = si128.m128i_i64[0];
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
