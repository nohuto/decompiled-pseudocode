/*
 * XREFs of DpQueueDpc @ 0x140033500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall DpQueueDpc(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rcx

  v1 = 0;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 && *(_DWORD *)(v2 + 16) == 1953656900 && (unsigned int)(*(_DWORD *)(v2 + 20) - 2) <= 1 )
    {
      return KeInsertQueueDpc((PRKDPC)(v2 + 1408), 0LL, 0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 2651;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2638;
  }
  return v1;
}
