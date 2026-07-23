/*
 * XREFs of RtlpGetLastContiguosBase64Position @ 0x1800F0B60
 * Callers:
 *     RtlValidateCorrelationVector @ 0x1800F0A30 (RtlValidateCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800F0BD4 (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 __fastcall RtlpGetLastContiguosBase64Position(__int64 a1, __int64 a2)
{
  int CorrelationVectorBufferLength; // eax
  int v3; // ecx
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  __int64 v6; // r11
  __int64 v7; // rdx
  unsigned int v8; // r10d
  __int64 v9; // rdi

  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1, a2, 0LL);
  v7 = 0LL;
  do
  {
    v8 = v4;
    if ( v7 >= CorrelationVectorBufferLength )
      break;
    LOBYTE(v3) = *(_BYTE *)(v6 + v7 + 1);
    if ( !(_BYTE)v3 )
      break;
    if ( (unsigned __int8)(v3 - 43) <= 0x2Fu && (v9 = 0xFFFFFFC07FF1LL, _bittest64(&v9, (unsigned int)(v3 - 43)))
      || (unsigned __int8)(v3 - 97) <= 0x19u )
    {
      v5 = v4;
    }
    ++v4;
    ++v7;
  }
  while ( v5 == v8 );
  return v5;
}
