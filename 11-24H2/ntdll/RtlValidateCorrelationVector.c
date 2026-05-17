/*
 * XREFs of RtlValidateCorrelationVector @ 0x1800F64D0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1800F63E0 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1800F65BC (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800F6600 (RtlpGetLastContiguosBase64Position.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800F6674 (RtlpGetCorrelationVectorBufferLength.c)
 *     strncmp @ 0x180167F70 (strncmp.c)
 */

__int64 __fastcall RtlValidateCorrelationVector(_BYTE *a1)
{
  int LastContiguosBase64Position; // esi
  int CorrelationVectorEndPosition; // eax
  bool v4; // zf
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rbp
  int v8; // ecx
  __int64 v9; // r8
  _BYTE *v11; // rdx

  if ( !a1 )
    return 3221225485LL;
  if ( (int)RtlpGetCorrelationVectorBufferLength() < 0 )
    return 3221225485LL;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position();
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition(a1);
  if ( CorrelationVectorEndPosition < 0 )
    return 3221225485LL;
  if ( *a1 == 1 )
  {
    v4 = LastContiguosBase64Position == 15;
  }
  else
  {
    if ( *a1 != 2 )
      goto LABEL_8;
    v4 = LastContiguosBase64Position == 21;
  }
  if ( !v4 )
    return 3221225485LL;
LABEL_8:
  v5 = LastContiguosBase64Position + 1;
  v6 = v5;
  if ( a1[v5 + 1] != 46 )
    return 3221225485LL;
  v7 = CorrelationVectorEndPosition;
  while ( v6 < v7 )
  {
    if ( a1[v6 + 1] == 46 )
    {
      ++v5;
      ++v6;
      v8 = 0;
      v9 = v5;
      if ( v6 < v7 )
      {
        v11 = &a1[v6 + 1];
        do
        {
          if ( (unsigned __int8)(*v11 - 48) > 9u )
            break;
          ++v5;
          ++v6;
          ++v11;
          ++v8;
        }
        while ( v6 < v7 );
        if ( v8 && v8 <= 10 && (v8 != 10 || strncmp(&a1[v9 + 1], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return 3221225485LL;
  }
  return 0LL;
}
