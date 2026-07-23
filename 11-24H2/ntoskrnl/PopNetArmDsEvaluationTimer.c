/*
 * XREFs of PopNetArmDsEvaluationTimer @ 0x140A94C14
 * Callers:
 *     PopNetResiliencyPhaseStateChanged @ 0x14075B9E8 (PopNetResiliencyPhaseStateChanged.c)
 *     PopNetResiliencyStateChanged @ 0x140AC71C0 (PopNetResiliencyStateChanged.c)
 * Callees:
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 */

__int64 PopNetArmDsEvaluationTimer()
{
  __int64 v0; // rdx
  __int64 v1; // r9

  v0 = 0LL;
  v1 = 10000000LL * (unsigned int)PopStandbyConnectivityGracePeriod;
  if ( MEMORY[0xFFFFF78000000008] < (unsigned __int64)(qword_140E27D48 + v1) )
    v0 = v1 + qword_140E27D48 - MEMORY[0xFFFFF78000000008];
  return KeSetTimer2((__int64)&PopNetEvaluationTimer, (LARGE_INTEGER)-v0, 0LL, 0LL);
}
