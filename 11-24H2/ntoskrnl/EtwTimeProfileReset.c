/*
 * XREFs of EtwTimeProfileReset @ 0x1407A95AC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeStopProfile @ 0x1405BF174 (KeStopProfile.c)
 *     EtwpTimeProfileStart @ 0x1406F655C (EtwpTimeProfileStart.c)
 */

__int64 EtwTimeProfileReset()
{
  __int64 result; // rax

  result = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 2) != 0 )
  {
    KeStopProfile((ULONG_PTR)&EtwpProfileObject);
    return EtwpTimeProfileStart();
  }
  return result;
}
