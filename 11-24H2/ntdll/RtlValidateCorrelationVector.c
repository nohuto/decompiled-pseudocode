/*
 * XREFs of RtlValidateCorrelationVector @ 0x1800F0A30
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1800F0940 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1800F0B1C (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800F0B60 (RtlpGetLastContiguosBase64Position.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800F0BD4 (RtlpGetCorrelationVectorBufferLength.c)
 *     strncmp @ 0x180166330 (strncmp.c)
 */

DWORD __cdecl RtlValidateCorrelationVector(PCORRELATION_VECTOR Vector)
{
  int LastContiguosBase64Position; // esi
  int CorrelationVectorEndPosition; // eax
  bool v4; // zf
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rbp
  int v8; // ecx
  __int64 v9; // r8
  CHAR *v11; // rdx

  if ( !Vector )
    return -1073741811;
  if ( (int)RtlpGetCorrelationVectorBufferLength() < 0 )
    return -1073741811;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position();
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition(Vector);
  if ( CorrelationVectorEndPosition < 0 )
    return -1073741811;
  if ( Vector->Version == 1 )
  {
    v4 = LastContiguosBase64Position == 15;
  }
  else
  {
    if ( Vector->Version != 2 )
      goto LABEL_8;
    v4 = LastContiguosBase64Position == 21;
  }
  if ( !v4 )
    return -1073741811;
LABEL_8:
  v5 = LastContiguosBase64Position + 1;
  v6 = v5;
  if ( Vector->Vector[v5] != 46 )
    return -1073741811;
  v7 = CorrelationVectorEndPosition;
  while ( v6 < v7 )
  {
    if ( Vector->Vector[v6] == 46 )
    {
      ++v5;
      ++v6;
      v8 = 0;
      v9 = v5;
      if ( v6 < v7 )
      {
        v11 = &Vector->Vector[v6];
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
        if ( v8 && v8 <= 10 && (v8 != 10 || strncmp(&Vector->Vector[v9], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return -1073741811;
  }
  return 0;
}
