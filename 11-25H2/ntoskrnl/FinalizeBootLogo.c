/*
 * XREFs of FinalizeBootLogo @ 0x14058BF4C
 * Callers:
 *     StartFirstUserProcess @ 0x140C4F72C (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x14058BA4C (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x14058BC2C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14058BCDC (InbvReleaseLock.c)
 */

__int64 __fastcall FinalizeBootLogo(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  InbvAcquireLock(a1);
  if ( !(unsigned int)InbvGetDisplayState(v1) )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock(v2);
}
