/*
 * XREFs of SepSecureBootValidateBcdDataAgainstBcdRule @ 0x14079441C
 * Callers:
 *     SepSecureBootUpdateBcdDataForRule @ 0x140794274 (SepSecureBootUpdateBcdDataForRule.c)
 *     NtFilterBootOption @ 0x140AD74D0 (NtFilterBootOption.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

__int64 __fastcall SepSecureBootValidateBcdDataAgainstBcdRule(__int64 a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int16 v6; // r9
  int v7; // ecx
  int v8; // ecx
  bool v9; // zf
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // r9
  unsigned __int64 i; // rax

  v3 = 0;
  v5 = qword_140E67D28 + *(unsigned int *)(a1 + 8);
  v6 = *(_WORD *)v5 & 0x1F;
  if ( v6 != 8 )
  {
    v7 = (*(_BYTE *)(a1 + 7) & 0xF) - 2;
    if ( !v7 )
    {
      if ( v6 || (a3 & 1) != 0 )
        return (unsigned int)-1069350910;
      for ( ; a3; a3 -= 2 )
      {
        if ( *(_WORD *)&a2[2 * ((unsigned __int64)a3 >> 1) - 2] )
          break;
      }
      if ( a3 != *(unsigned __int16 *)(v5 + 2) )
        return (unsigned int)-1069350910;
      v9 = memcmp(a2, (const void *)(v5 + 4), a3) == 0;
      goto LABEL_29;
    }
    v8 = v7 - 3;
    if ( v8 )
    {
      if ( v8 != 1 )
        return v3;
      if ( v6 != 1 || a3 - 1 > 1 )
        return (unsigned int)-1069350910;
      v9 = (*(_WORD *)(v5 + 2) != 0) == (*a2 != 0);
LABEL_29:
      if ( v9 )
        return v3;
      return (unsigned int)-1069350910;
    }
    if ( a3 != 8 )
      return (unsigned int)-1069350910;
    v10 = *(_QWORD *)a2;
    v11 = *(_QWORD *)a2;
    if ( (*(_WORD *)v5 & 0x1F) != 5 )
    {
      if ( (*(_WORD *)v5 & 0x1F) == 6 )
      {
        if ( v10 >= *(_QWORD *)(v5 + 10) && v10 <= *(_QWORD *)(v5 + 18) )
          goto LABEL_21;
      }
      else
      {
        if ( (*(_WORD *)v5 & 0x1F) != 7 )
          return (unsigned int)-1069350909;
        v12 = (_QWORD *)(v5 + 12);
        for ( i = 0LL; i < *(unsigned __int16 *)(v5 + 10); ++i )
        {
          if ( *v12 == v10 )
            return v3;
          ++v12;
        }
      }
    }
    v11 = *(_QWORD *)(v5 + 2);
LABEL_21:
    v9 = v10 == v11;
    goto LABEL_29;
  }
  return *(_WORD *)(v5 + 2) == 0 ? 0xC0430002 : 0;
}
