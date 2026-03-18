/*
 * XREFs of MiReadyStandbyPageForActive @ 0x14020E430
 * Callers:
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 */

unsigned __int64 __fastcall MiReadyStandbyPageForActive(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // r8
  int v5; // ecx
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v7; // rbx
  unsigned __int64 result; // rax
  int v9; // [rsp+30h] [rbp+8h]
  int v10; // [rsp+30h] [rbp+8h]

  v2 = (_QWORD *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  v9 = *(_DWORD *)(a1 + 32);
  LOWORD(v9) = v9 + 1;
  *(_DWORD *)(a1 + 32) = v9;
  v10 = *(_DWORD *)(a1 + 32);
  BYTE2(v10) = BYTE2(v10) & 0xF8 | 6;
  *(_DWORD *)(a1 + 32) = v10;
  v4 = (*(_DWORD *)(a1 + 16) >> 5) & 7;
  v5 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
  if ( v5 != 1 )
  {
    if ( v5 )
    {
      if ( v5 == 2 )
        v4 = (unsigned int)v4 | 0x18;
    }
    else
    {
      v4 = (unsigned int)v4 | 8;
    }
  }
  LODWORD(v4) = v4 | 0x20000000;
  ValidPte = MiMakeValidPte(a2, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), v4);
  v7 = ValidPte;
  if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v2 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v2, ValidPte);
  *v2 = v7;
  result = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
