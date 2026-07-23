/*
 * XREFs of CcShouldLazyWriteCacheMap @ 0x14040C430
 * Callers:
 *     CcLazyWriteScan @ 0x1402654C8 (CcLazyWriteScan.c)
 *     CcLazyWriteScanVolume @ 0x1404AFE00 (CcLazyWriteScanVolume.c)
 * Callees:
 *     CcCanIWriteStreamEx @ 0x14040C5C0 (CcCanIWriteStreamEx.c)
 */

char __fastcall CcShouldLazyWriteCacheMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // al
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // r9

  if ( a3 )
  {
    if ( a1 != a3 + 72 && a1 != a3 + 96 )
    {
LABEL_4:
      v7 = 0;
      goto LABEL_5;
    }
  }
  else if ( a1 != a2 + 536 && a1 != a2 + 560 )
  {
    goto LABEL_4;
  }
  v7 = 1;
LABEL_5:
  if ( v7 )
    return 0;
  v8 = *(_DWORD *)(a1 + 152);
  if ( (v8 & 0x400020) != 0 )
    return 0;
  if ( (v8 & 0x10000) != 0 )
    return 1;
  if ( *(_DWORD *)(a1 + 524) )
    return 0;
  v9 = *(_DWORD *)(a1 + 4);
  if ( !v9 && (!*(_DWORD *)(a1 + 112) || !*(_QWORD *)(a1 + 8)) || (v8 & 0x40000000) != 0 )
    return 1;
  v10 = *(_DWORD *)(a1 + 112);
  if ( !v10 || !a4 )
    return 0;
  v11 = *(_DWORD *)(a1 + 276) + 1;
  *(_DWORD *)(a1 + 276) = v11;
  if ( (v8 & 0x1000000) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 248);
    return *(_DWORD *)(v12 + 104)
        || MEMORY[0xFFFFF78000000320] > (__int64)(*(_QWORD *)(v12 + 136) + 0x9896800uLL / KeMaximumIncrement)
        || *(_DWORD *)(a1 + 112) >= 0x40u;
  }
  if ( (v8 & 0x200) == 0 )
    return (*(_DWORD *)(a5 + 80) & 0x8000) == 0
        || !v9
        || !(unsigned __int8)CcCanIWriteStreamEx(*(_QWORD *)(a1 + 536), *(_QWORD *)(a1 + 600), a5, 0x1000000, 0, 8, 0LL);
  return (v11 & 0xF) == 0 || v10 >= 0x40 || (_DWORD)a6 == 16;
}
