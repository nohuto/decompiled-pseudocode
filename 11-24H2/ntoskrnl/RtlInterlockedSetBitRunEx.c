/*
 * XREFs of RtlInterlockedSetBitRunEx @ 0x1404151B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetBitRunEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  volatile signed __int32 *v5; // r11
  __int64 result; // rax
  unsigned __int64 v7; // rdx

  v3 = a3;
  v4 = a2 & 0x1F;
  v5 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (a2 >> 5));
  result = v4 + a3;
  if ( v4 + a3 <= 0x20 )
  {
    if ( a3 == 32 )
    {
      *v5 = -1;
      return result;
    }
    result = (unsigned int)(((1 << a3) - 1) << v4);
    goto LABEL_4;
  }
  result = 1LL;
  if ( (a2 & 0x1F) != 0 )
  {
    _InterlockedOr(v5, ((1 << (32 - (a2 & 0x1F))) - 1) << v4);
    v3 = a3 - (32 - (unsigned int)(a2 & 0x1F));
    ++v5;
  }
  if ( v3 >= 0x20 )
  {
    v7 = v3 >> 5;
    v3 += -32LL * (v3 >> 5);
    do
    {
      *v5++ = -1;
      --v7;
    }
    while ( v7 );
  }
  if ( v3 )
  {
    result = (unsigned int)((1 << v3) - 1);
LABEL_4:
    _InterlockedOr(v5, result);
  }
  return result;
}
