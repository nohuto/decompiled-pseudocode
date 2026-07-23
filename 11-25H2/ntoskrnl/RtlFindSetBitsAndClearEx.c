/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x1402A9760
 * Callers:
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1402A9FB0 (RtlClearBitsEx.c)
 */

ULONG64 __cdecl RtlFindSetBitsAndClearEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // rbp
  unsigned __int64 *Buffer; // r14
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbx
  ULONG64 i; // r15
  ULONG64 v12; // rsi
  unsigned __int64 *v13; // rdi
  unsigned __int64 *v14; // rdx
  signed __int64 v15; // r8
  ULONG64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned int v18; // r10d
  unsigned __int64 *v19; // rbx
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // r9
  __int64 v24; // rbx
  unsigned __int64 *v25; // r9
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned __int64 *v28; // r8
  unsigned __int64 *v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // eax
  ULONG64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rax

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v9 = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap) & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_3;
  }
  for ( i = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap); ; i = 0LL )
  {
    if ( v8 - i + 1 < NumberToFind )
    {
LABEL_13:
      v9 = -1LL;
      goto LABEL_14;
    }
    v12 = v8 - NumberToFind + 1;
    v13 = &Buffer[v12 >> 6];
    v14 = &Buffer[i >> 6];
    v15 = ~*v14 | ((1LL << (i & 0x3F)) - 1);
    if ( NumberToFind > 0x7F )
    {
      v25 = v13 + 1;
      if ( (v12 & 0x3F) == 0 )
        v25 = &Buffer[v12 >> 6];
      if ( !v15 )
      {
        v27 = 0;
        goto LABEL_46;
      }
      if ( *++v14 != -1LL )
        goto LABEL_50;
      v20 = !_BitScanReverse64((unsigned __int64 *)&v26, v15);
      if ( !v20 )
      {
        v27 = 63 - v26;
        goto LABEL_46;
      }
LABEL_72:
      v27 = 64;
LABEL_46:
      while ( 1 )
      {
        v9 = ((v14 - Buffer) << 6) - v27;
        if ( v9 > v12 )
          goto LABEL_13;
        v28 = &v14[(NumberToFind - v27) >> 6];
        while ( ++v14 != v28 )
        {
          if ( *v14 != -1LL )
            goto LABEL_50;
        }
        v31 = ((_BYTE)NumberToFind - (_BYTE)v27) & 0x3F;
        if ( (((_BYTE)NumberToFind - (_BYTE)v27) & 0x3F) == 0 )
          goto LABEL_21;
        v20 = !_BitScanForward64((unsigned __int64 *)&v32, ~*v14);
        if ( v20 )
          LODWORD(v32) = 64;
        if ( (unsigned int)v32 >= v31 )
          goto LABEL_21;
        do
        {
LABEL_50:
          v29 = v14;
          if ( v14 > v25 )
            goto LABEL_13;
          ++v14;
        }
        while ( *v14 != -1LL );
        v20 = !_BitScanReverse64((unsigned __int64 *)&v30, ~*v29);
        if ( v20 )
          goto LABEL_72;
        v27 = 63 - v30;
      }
    }
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v15 < 0 )
          {
            if ( ++v14 > v13 )
              goto LABEL_13;
            v15 = ~*v14;
          }
          v20 = !_BitScanReverse64((unsigned __int64 *)&v33, v15);
          if ( v20 )
            v34 = 64;
          else
            v34 = 63 - v33;
          v9 = ((v14 - Buffer + 1) << 6) - v34;
          if ( v9 > v12 )
            goto LABEL_13;
          v35 = NumberToFind - v34;
          if ( NumberToFind == v34 )
            goto LABEL_21;
          v15 = ~*++v14;
          if ( v35 >= 0x40 )
            break;
LABEL_68:
          v20 = !_BitScanForward64(&v36, v15);
          if ( v20 )
            v36 = 64LL;
          if ( v36 >= v35 )
            goto LABEL_21;
        }
        if ( *v14 == -1LL )
        {
          v35 -= 64LL;
          if ( !v35 )
            goto LABEL_21;
          v15 = ~*++v14;
          goto LABEL_68;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v18 = 0;
      v19 = &Buffer[v8 >> 6];
      while ( v15 != -1 )
      {
LABEL_25:
        v20 = !_BitScanForward64((unsigned __int64 *)&v21, v15);
        if ( v20 )
          LODWORD(v21) = 64;
        if ( v18 + (unsigned int)v21 >= NumberToFind )
        {
          v24 = -(__int64)v18;
LABEL_32:
          v9 = ((v14 - Buffer) << 6) + v24;
          goto LABEL_20;
        }
        v22 = NumberToFind;
        v23 = ~v15;
        while ( 1 )
        {
          v23 &= v23 >> (v22 >> 1);
          if ( !v23 )
            break;
          v22 -= v22 >> 1;
          if ( v22 <= 1 )
          {
            _BitScanForward64((unsigned __int64 *)&v24, v23);
            goto LABEL_32;
          }
        }
        if ( v14 == v19 )
          goto LABEL_13;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v37, v15);
        if ( v20 )
          v18 = 64;
        else
          v18 = 63 - v37;
        v15 = ~*++v14;
      }
      while ( 1 )
      {
        if ( ++v14 > v13 )
          goto LABEL_13;
        v15 = ~*v14;
        if ( v15 != -1 )
        {
          v18 = 0;
          goto LABEL_25;
        }
      }
    }
    while ( v15 == -1 )
    {
      if ( ++v14 > v13 )
        goto LABEL_13;
      v15 = ~*v14;
    }
    _BitScanForward64(&v17, ~v15);
    v9 = v17 + ((v14 - Buffer) << 6);
LABEL_20:
    if ( v9 > v12 )
      goto LABEL_13;
LABEL_21:
    if ( v9 != -1LL )
      goto LABEL_4;
LABEL_14:
    if ( !i )
      break;
    v16 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v16 = SizeOfBitMap;
    v8 = v16 - 1;
  }
LABEL_3:
  if ( v9 != -1LL )
LABEL_4:
    RtlClearBitsEx(BitMapHeader, v9, NumberToFind);
  return v9;
}
