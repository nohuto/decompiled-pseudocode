/*
 * XREFs of RtlNumberOfSetBitsEx @ 0x1801082D0
 * Callers:
 *     RtlNumberOfClearBitsEx @ 0x18013BBB0 (RtlNumberOfClearBitsEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlNumberOfSetBitsEx(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned __int64 *v2; // r8
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // r10
  int v6; // r9d
  unsigned __int64 v7; // r11
  int v8; // r14d
  int v9; // ebx
  unsigned __int64 v10; // rdx
  int i; // r9d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  int v15; // edx
  char v16; // cl
  unsigned __int64 v17; // r11
  int v18; // edi
  char v19; // cl

  v1 = *a1;
  v2 = (unsigned __int64 *)a1[1];
  v3 = *a1 & 7;
  v4 = (unsigned __int64)*a1 >> 3;
  v5 = 0LL;
  v6 = (unsigned __int8)v2 & 7;
  v7 = v4 + (v3 != 0);
  if ( 8 - (unsigned __int64)(a1[1] & 7) <= v4 )
  {
    v9 = 8 - v6;
    v15 = ((_BYTE)v4 - (8 - (_BYTE)v6)) & 7;
    v8 = v15 + 1;
    if ( !v3 )
      v8 = v15;
    v10 = v7 - (unsigned int)(v8 + v9);
  }
  else
  {
    v8 = 0;
    v9 = v4 + (v3 != 0);
    v10 = 0LL;
  }
  for ( i = 0; v9; --v9 )
  {
    v16 = *(_BYTE *)v2;
    v2 = (unsigned __int64 *)((char *)v2 + 1);
    if ( i == v7 - 1 && v3 )
      v16 &= byte_180191058[v3];
    ++i;
    v5 += RtlpBitsClearTotal[(unsigned __int8)~v16];
  }
  if ( v10 )
  {
    v12 = ((v10 - 1) >> 3) + 1;
    i += 8 * v12;
    do
    {
      v13 = *v2++;
      v5 += (unsigned int)__popcnt(v13);
      --v12;
    }
    while ( v12 );
  }
  if ( v8 )
  {
    v17 = v7 - 1;
    v18 = v1 & 7;
    do
    {
      v19 = *(_BYTE *)v2;
      v2 = (unsigned __int64 *)((char *)v2 + 1);
      if ( i == v17 && v18 )
        v19 &= byte_180191058[v18];
      ++i;
      v5 += RtlpBitsClearTotal[(unsigned __int8)~v19];
      --v8;
    }
    while ( v8 );
  }
  return v5;
}
