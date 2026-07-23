/*
 * XREFs of EtwTimeProfileReset @ 0x1407A96EC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeStopProfile @ 0x1405BC7A4 (KeStopProfile.c)
 *     EtwpTimeProfileStart @ 0x1406F455C (EtwpTimeProfileStart.c)
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
