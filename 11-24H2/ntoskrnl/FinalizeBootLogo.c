/*
 * XREFs of FinalizeBootLogo @ 0x14058F72C
 * Callers:
 *     StartFirstUserProcess @ 0x140C5FF68 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x14058F22C (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x14058F40C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14058F4BC (InbvReleaseLock.c)
 */

__int64 __fastcall FinalizeBootLogo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  InbvAcquireLock(a1, a2, a3, a4);
  if ( !(unsigned int)InbvGetDisplayState(v5, v4, v6, v7) )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock(v9, v8, v10, v11);
}
