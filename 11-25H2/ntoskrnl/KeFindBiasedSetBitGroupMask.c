/*
 * XREFs of KeFindBiasedSetBitGroupMask @ 0x1404BAF00
 * Callers:
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     KiHeteroSelectIdleProcessorFromNode @ 0x14032E630 (KiHeteroSelectIdleProcessorFromNode.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall KeFindBiasedSetBitGroupMask(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 *v3; // rbx
  __int64 i; // rax
  __int64 v5; // rax
  unsigned __int64 j; // r11
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 *v10; // rbx
  __int64 k; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-20h]

  v15 = 32LL;
  v16 = a1;
  v3 = a1;
  for ( i = *a1; ; i = *v3 )
  {
    v5 = ~i;
    if ( v5 != -1 )
      break;
    if ( ++v3 > a1 )
    {
      v2 = -1LL;
      goto LABEL_8;
    }
  }
  _BitScanForward64((unsigned __int64 *)&v5, ~v5);
  v2 = v5 + ((v3 - a1) << 6);
  if ( v2 > 0x1F )
    v2 = -1LL;
LABEL_8:
  for ( j = a2 % RtlNumberOfSetBitsEx((__int64 *)&v15); j; --j )
  {
    v7 = v2 + 1;
    v8 = (v2 + 1) & -(__int64)(v2 + 1 < v15);
    v9 = v15 - 1;
    while ( 1 )
    {
      if ( v9 - v8 == -1LL )
        goto LABEL_11;
      v10 = &v16[v8 >> 6];
      for ( k = ~*v10 | ((1LL << (v8 & 0x3F)) - 1); k == -1; k = ~*v10 )
      {
        if ( ++v10 > &v16[v9 >> 6] )
          goto LABEL_11;
      }
      _BitScanForward64(&v12, ~k);
      v2 = v12 + ((v10 - v16) << 6);
      if ( v2 > v9 )
      {
LABEL_11:
        v2 = -1LL;
      }
      else if ( v2 != -1LL )
      {
        break;
      }
      if ( !v8 )
        break;
      v13 = v7 + 1;
      if ( v7 + 1 > v15 )
        v13 = v15;
      v9 = v13 - 1;
      v8 = 0LL;
    }
  }
  return (unsigned __int16)v2;
}
