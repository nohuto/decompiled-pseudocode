/*
 * XREFs of PopCheckDisabledReason @ 0x14099E710
 * Callers:
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x14099FFEC (PopGetReasonListByReasonCode.c)
 */

char PopCheckDisabledReason()
{
  __int64 ReasonListByReasonCode; // rcx
  char v1; // r10
  char v2; // al

  ReasonListByReasonCode = PopGetReasonListByReasonCode();
  if ( ReasonListByReasonCode )
  {
    v2 = v1;
    if ( *(_BYTE *)(ReasonListByReasonCode + 19) != v1 )
      return v1 + 1;
    return v2;
  }
  return v1;
}
