/*
 * XREFs of RtlFindSetBitsEx @ 0x140400DC0
 * Callers:
 *     MmQueryMemoryRanges @ 0x1407DB570 (MmQueryMemoryRanges.c)
 *     MiDeleteAweInfoPages @ 0x1407E9850 (MiDeleteAweInfoPages.c)
 *     MiUnlockDriverPages @ 0x140A3A2AC (MiUnlockDriverPages.c)
 * Callees:
 *     <none>
 */

ULONG64 __cdecl RtlFindSetBitsEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // r9
  ULONG64 v4; // rax
  unsigned __int64 *Buffer; // rdi
  unsigned __int64 v7; // rdx
  ULONG64 v9; // r15
  unsigned __int64 *v10; // r14
  unsigned __int64 *v11; // r11
  signed __int64 v12; // rbx
  ULONG64 v13; // rsi
  ULONG64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 *v17; // r12
  bool v18; // zf
  __int64 v19; // rdx
  unsigned int v20; // ebp
  unsigned __int64 v21; // rsi
  unsigned __int64 *v22; // rbp
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // r14d
  unsigned __int64 *v26; // rdx
  unsigned __int64 *v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  signed __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 v38; // rbx

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = 0LL;
  Buffer = BitMapHeader->Buffer;
  if ( HintIndex < BitMapHeader->SizeOfBitMap )
    v4 = HintIndex;
  v7 = SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v4 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( 1 )
  {
    if ( v7 - v4 + 1 < NumberToFind )
    {
LABEL_11:
      v13 = -1LL;
      goto LABEL_12;
    }
    v9 = v7 - NumberToFind + 1;
    v10 = &Buffer[v9 >> 6];
    v11 = &Buffer[v4 >> 6];
    v12 = ~*v11 | ((1LL << (v4 & 0x3F)) - 1);
    if ( NumberToFind > 0x7F )
    {
      v22 = v10 + 1;
      if ( (v9 & 0x3F) == 0 )
        v22 = &Buffer[(v7 - NumberToFind + 1) >> 6];
      if ( v12 )
      {
        v23 = v11[1];
        ++v11;
        if ( v23 != -1LL )
          goto LABEL_49;
        v18 = !_BitScanReverse64((unsigned __int64 *)&v24, v12);
        if ( v18 )
          v25 = 64;
        else
          v25 = 63 - v24;
      }
      else
      {
        v25 = 0;
      }
      while ( 1 )
      {
        v13 = ((v11 - Buffer) << 6) - v25;
        if ( v13 > v9 )
          goto LABEL_11;
        v26 = &v11[(NumberToFind - v25) >> 6];
        while ( ++v11 != v26 )
        {
          if ( *v11 != -1LL )
            goto LABEL_49;
        }
        if ( (((_BYTE)NumberToFind - (_BYTE)v25) & 0x3F) == 0 )
          goto LABEL_18;
        v18 = !_BitScanForward64((unsigned __int64 *)&v29, ~*v11);
        if ( v18 )
          LODWORD(v29) = 64;
        if ( (unsigned int)v29 >= (((_BYTE)NumberToFind - (_BYTE)v25) & 0x3Fu) )
          goto LABEL_18;
        do
        {
LABEL_49:
          v27 = v11;
          if ( v11 > v22 )
            goto LABEL_11;
          v28 = v11[1];
          ++v11;
        }
        while ( v28 != -1LL );
        v18 = !_BitScanReverse64((unsigned __int64 *)&v27, ~*v27);
        if ( v18 )
          v25 = 64;
        else
          v25 = 63 - (_DWORD)v27;
      }
    }
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v12 < 0 )
          {
            if ( ++v11 > v10 )
              goto LABEL_11;
            v12 = ~*v11;
          }
          v18 = !_BitScanReverse64((unsigned __int64 *)&v30, v12);
          if ( v18 )
            v31 = 64LL;
          else
            v31 = (unsigned int)(63 - v30);
          v13 = ((v11 - Buffer + 1) << 6) - v31;
          if ( v13 > v9 )
            goto LABEL_11;
          v32 = NumberToFind - v31;
          if ( NumberToFind == v31 )
            goto LABEL_18;
          v33 = v11[1];
          ++v11;
          v34 = ~v33;
          v12 = v34;
          if ( v32 >= 0x40 )
            break;
LABEL_67:
          v18 = !_BitScanForward64(&v36, v12);
          if ( v18 )
            v36 = 64LL;
          if ( v36 >= v32 )
            goto LABEL_18;
        }
        if ( !v34 )
        {
          v32 -= 64LL;
          if ( !v32 )
            goto LABEL_18;
          v35 = v11[1];
          ++v11;
          v12 = ~v35;
          goto LABEL_67;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v16 = 0LL;
      v17 = &Buffer[v7 >> 6];
      while ( v12 != -1 )
      {
LABEL_23:
        v18 = !_BitScanForward64((unsigned __int64 *)&v19, v12);
        if ( v18 )
          LODWORD(v19) = 64;
        if ( (unsigned int)(v16 + v19) >= NumberToFind )
        {
          v21 = -v16;
LABEL_30:
          v13 = ((v11 - Buffer) << 6) + v21;
          goto LABEL_17;
        }
        v20 = NumberToFind;
        v21 = ~v12;
        while ( 1 )
        {
          v21 &= v21 >> (v20 >> 1);
          if ( !v21 )
            break;
          v20 -= v20 >> 1;
          if ( v20 <= 1 )
          {
            _BitScanForward64(&v21, v21);
            goto LABEL_30;
          }
        }
        if ( v11 == v17 )
          goto LABEL_11;
        v18 = !_BitScanReverse64((unsigned __int64 *)&v37, v12);
        if ( v18 )
        {
          v38 = v11[1];
          ++v11;
          v12 = ~v38;
          v16 = 64LL;
        }
        else
        {
          v16 = (unsigned int)(63 - v37);
          v12 = ~v11[1];
          ++v11;
        }
      }
      while ( 1 )
      {
        if ( ++v11 > v10 )
          goto LABEL_11;
        v12 = ~*v11;
        if ( *v11 )
        {
          v16 = 0LL;
          goto LABEL_23;
        }
      }
    }
    while ( v12 == -1 )
    {
      if ( ++v11 > v10 )
        goto LABEL_11;
      v12 = ~*v11;
    }
    _BitScanForward64(&v15, ~v12);
    v13 = v15 + ((v11 - Buffer) << 6);
LABEL_17:
    if ( v13 > v9 )
    {
      v13 = -1LL;
    }
    else
    {
LABEL_18:
      if ( v13 != -1LL )
        return v13;
    }
LABEL_12:
    if ( !v4 )
      return v13;
    v14 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v14 = SizeOfBitMap;
    v7 = v14 - 1;
    v4 = 0LL;
  }
}
