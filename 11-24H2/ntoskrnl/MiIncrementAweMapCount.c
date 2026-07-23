/*
 * XREFs of MiIncrementAweMapCount @ 0x140683750
 * Callers:
 *     MiReferenceIncomingPhysicalPages @ 0x140683C60 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     MiValidateAndLockAweMapCountPage @ 0x1404AE114 (MiValidateAndLockAweMapCountPage.c)
 *     MiResolveAwePageConflict @ 0x1406840F8 (MiResolveAwePageConflict.c)
 */

__int64 __fastcall MiIncrementAweMapCount(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // ebx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int128 v20; // [rsp+20h] [rbp-10h] BYREF

  v20 = 0LL;
  while ( 1 )
  {
    if ( !(unsigned int)MiValidateAndLockAweMapCountPage(a1, a2, 1, (__int64)&v20) )
      return 3221225496LL;
    if ( !DWORD2(v20) )
    {
      if ( a4 == 1 )
      {
        if ( (*(_QWORD *)v20 & 0x7FFFFE0000uLL) < 0xE0000 )
        {
          v19 = v20;
          *(_QWORD *)v20 = ((*(_QWORD *)v20 & 0xFFFFFFFFFFFE0000uLL) + 0x20000) ^ (*(_QWORD *)v20 ^ ((*(_QWORD *)v20 & 0xFFFFFFFFFFFE0000uLL) + 0x20000)) & 0xFFFFFF800001FFFFuLL;
          _InterlockedAnd(
            (volatile signed __int32 *)(qword_140E30108 + 4 * ((((v19 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << (((v19 - qword_140E30100) >> 3) & 0x1F)));
          return 0LL;
        }
        v17 = 1 << ((((__int64)v20 - qword_140E30100) >> 3) & 0x1F);
        v18 = (((__int64)v20 - qword_140E30100) >> 3) & 0x3FFFFF;
      }
      else
      {
        v17 = 1 << ((((__int64)v20 - qword_140E30100) >> 3) & 0x1F);
        v18 = (((__int64)v20 - qword_140E30100) >> 3) & 0x3FFFFF;
      }
      _InterlockedAnd((volatile signed __int32 *)(qword_140E30108 + 4 * (v18 >> 5)), ~v17);
      return 3221225496LL;
    }
    v10 = v20;
    if ( (*(_QWORD *)(v20 + 24) & 0x4000000000000000LL) != 0 && (*(_DWORD *)(a1 + 8) & 1) != 0 )
      goto LABEL_16;
    v11 = v20;
    if ( (*(_BYTE *)(v20 + 34) & 0x20) == 0 && (unsigned __int8)BYTE2(*(_DWORD *)(v20 + 32)) >> 6 == a4 )
      break;
    LOBYTE(v9) = a3;
    result = MiResolveAwePageConflict(a1, v20, a4, v9);
    if ( (int)result >= 0 )
      break;
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225496LL;
  }
  v10 = v20;
  if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0x3FFFFFFFFFFFFFFFLL )
  {
LABEL_16:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225496LL;
  }
  *(_QWORD *)(v20 + 8) = a5;
  v13 = *(_QWORD *)(v10 + 24);
  v14 = v13 + 1;
  v15 = (v13 ^ (v13 + 1)) & 0xC000000000000000uLL;
  v16 = v20;
  *(_QWORD *)(v20 + 24) = v14 ^ v15;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
