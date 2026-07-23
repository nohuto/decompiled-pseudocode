/*
 * XREFs of KeFindBiasedSetBitGroupMask @ 0x140407DFC
 * Callers:
 *     KiHeteroSelectIdleProcessorFromNode @ 0x1402A34F0 (KiHeteroSelectIdleProcessorFromNode.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall KeFindBiasedSetBitGroupMask(__int64 *a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  __int64 i; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r11
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  __int64 *v11; // rbx
  __int64 j; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-20h]

  v15 = 32LL;
  v16 = a1;
  v2 = a1;
  for ( i = *a1; ; i = *v2 )
  {
    v4 = ~i;
    if ( v4 != -1 )
      break;
    if ( ++v2 > a1 )
    {
      v5 = -1LL;
      goto LABEL_5;
    }
  }
  _BitScanForward64((unsigned __int64 *)&v4, ~v4);
  v5 = v4 + ((v2 - a1) << 6);
  if ( v5 > 0x1F )
    v5 = -1LL;
LABEL_5:
  v6 = a2 % RtlNumberOfSetBitsEx(&v15);
  if ( v6 )
  {
LABEL_7:
    v8 = v5 + 1;
    v9 = (v5 + 1) & -(__int64)(v5 + 1 < v15);
    v10 = v15 - 1;
    while ( 1 )
    {
      if ( v10 - v9 == -1LL )
        goto LABEL_12;
      v11 = &v16[v9 >> 6];
      for ( j = ~*v11 | ((1LL << (v9 & 0x3F)) - 1); j == -1; j = ~*v11 )
      {
        if ( ++v11 > &v16[v10 >> 6] )
          goto LABEL_12;
      }
      _BitScanForward64(&v14, ~j);
      v5 = v14 + ((v11 - v16) << 6);
      if ( v5 > v10 )
      {
LABEL_12:
        v5 = -1LL;
      }
      else if ( v5 != -1LL )
      {
LABEL_23:
        if ( !--v6 )
          return (unsigned __int16)v5;
        goto LABEL_7;
      }
      if ( !v9 )
        goto LABEL_23;
      v13 = v8 + 1;
      if ( v8 + 1 > v15 )
        v13 = v15;
      v10 = v13 - 1;
      v9 = 0LL;
    }
  }
  return (unsigned __int16)v5;
}
