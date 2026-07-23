/*
 * XREFs of RtlValidateCorrelationVector @ 0x1406EFCE0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x140A9C7D0 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1405E200C (RtlpGetCorrelationVectorEndPosition.c)
 *     strncmp @ 0x1406B4820 (strncmp.c)
 *     RtlpGetLastContiguosBase64Position @ 0x14077521C (RtlpGetLastContiguosBase64Position.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x140A9C8B8 (RtlpGetCorrelationVectorBufferLength.c)
 */

DWORD __cdecl RtlValidateCorrelationVector(PCORRELATION_VECTOR Vector)
{
  int LastContiguosBase64Position; // esi
  __int64 v3; // rdx
  int CorrelationVectorEndPosition; // eax
  bool v5; // zf
  int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rbp
  int v9; // ecx
  __int64 v10; // r8
  CHAR *v11; // rdx

  if ( !Vector )
    return -1073741811;
  if ( (int)RtlpGetCorrelationVectorBufferLength(Vector) < 0 )
    return -1073741811;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position(Vector);
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition((__int64)Vector, v3);
  if ( CorrelationVectorEndPosition < 0 )
    return -1073741811;
  if ( Vector->Version == 1 )
  {
    v5 = LastContiguosBase64Position == 15;
  }
  else
  {
    if ( Vector->Version != 2 )
      goto LABEL_9;
    v5 = LastContiguosBase64Position == 21;
  }
  if ( !v5 )
    return -1073741811;
LABEL_9:
  v6 = LastContiguosBase64Position + 1;
  v7 = v6;
  if ( Vector->Vector[v6] != 46 )
    return -1073741811;
  v8 = CorrelationVectorEndPosition;
  while ( v7 < v8 )
  {
    if ( Vector->Vector[v7] == 46 )
    {
      ++v6;
      ++v7;
      v9 = 0;
      v10 = v6;
      if ( v7 < v8 )
      {
        v11 = &Vector->Vector[v7];
        do
        {
          if ( (unsigned __int8)(*v11 - 48) > 9u )
            break;
          ++v6;
          ++v7;
          ++v11;
          ++v9;
        }
        while ( v7 < v8 );
        if ( v9 && v9 <= 10 && (v9 != 10 || strncmp(&Vector->Vector[v10], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return -1073741811;
  }
  return 0;
}
