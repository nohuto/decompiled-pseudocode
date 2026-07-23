/*
 * XREFs of CcTelemetryBucketizeLatency @ 0x140ABE8C0
 * Callers:
 *     CcCopyWriteEx @ 0x14049CDC0 (CcCopyWriteEx.c)
 *     CcCopyReadEx @ 0x1404D5990 (CcCopyReadEx.c)
 *     CcCompleteAsyncRead @ 0x1404D929C (CcCompleteAsyncRead.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CcTelemetryBucketizeLatency(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 *result; // rax
  __int64 v5; // r9
  __int64 v6; // rdx

  result = CcLatencyBuckets;
  v5 = 0LL;
  while ( a1 > *result )
  {
    if ( a1 <= result[1] )
    {
      v5 = (unsigned int)(v5 + 1);
LABEL_15:
      if ( (unsigned int)v5 >= 0xC )
        return result;
      break;
    }
    if ( a1 <= result[2] )
    {
      v5 = (unsigned int)(v5 + 2);
      goto LABEL_15;
    }
    if ( a1 <= result[3] )
    {
      v5 = (unsigned int)(v5 + 3);
      goto LABEL_15;
    }
    if ( a1 <= result[4] )
    {
      v5 = (unsigned int)(v5 + 4);
      goto LABEL_15;
    }
    if ( a1 <= result[5] )
    {
      v5 = (unsigned int)(v5 + 5);
      goto LABEL_15;
    }
    result += 6;
    v5 = (unsigned int)(v5 + 6);
    if ( (unsigned int)v5 >= 0xC )
      return result;
  }
  v6 = 8 * v5;
  *(_QWORD *)(v6 + a2) = *(_QWORD *)(8 * v5 + a2) + 1LL;
  result = *(__int64 **)(8 * v5 + a3);
  *(_QWORD *)(v6 + a3) = (char *)result + a1;
  return result;
}
