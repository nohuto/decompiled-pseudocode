/*
 * XREFs of SleepstudyHelperSetBlockerVisible @ 0x140767B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SleepstudyHelperSetBlockerVisible(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a1 )
  {
    *(_BYTE *)(a1 + 88) = a2;
    return 0LL;
  }
  return result;
}
