/*
 * XREFs of AuthzBasepQueryTokenAttributeAndValues @ 0x1403239D8
 * Callers:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140323790 (AuthzBasepQuerySecurityAttributeAndValues.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1403B8930 (AuthzBasepEqualUnicodeString.c)
 *     SepCopyTokenIntegrity @ 0x140409240 (SepCopyTokenIntegrity.c)
 */

__int64 __fastcall AuthzBasepQueryTokenAttributeAndValues(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rax
  unsigned int i; // ebp
  __int64 **v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rdx
  unsigned int v9; // r8d
  int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rax
  _QWORD *v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int128 v18; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v18 = 0LL;
  v2 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 36) = 0;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 8) == 1 )
    {
      v13 = *(_QWORD *)(a1 + 8);
      v14 = (_QWORD *)(a1 + 64);
      v15 = *(_DWORD *)(a1 + 64);
      while ( ++v15 <= 0x24 )
      {
        v16 = *(_QWORD *)(v13 + 72);
        if ( _bittest64(&v16, v15) )
        {
          *v14 = v15;
          *(_QWORD *)(a1 + 48) = v14;
          return v1;
        }
      }
    }
    return (unsigned int)-2147483622;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 4 )
        return (unsigned int)-1073741275;
      v5 = &(&TokenAttributeLookupTable)[2 * i];
      if ( (unsigned __int8)AuthzBasepEqualUnicodeString(a1 + 16, *v5) )
        break;
    }
    if ( v5 )
    {
      *(_QWORD *)(a1 + 56) = v5;
      *(_WORD *)(a1 + 32) = *((_WORD *)v5 + 6);
      if ( *((_DWORD *)v5 + 2) == 1 )
      {
        v8 = (__int64 *)(a1 + 64);
        v9 = 2;
        v10 = 0;
        v11 = 2LL;
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
        *(_QWORD *)(a1 + 64) = 0LL;
        do
        {
          if ( _bittest64(&v12, v9) )
          {
            ++v10;
            if ( !*v8 )
              *v8 = v11;
          }
          ++v9;
          ++v11;
        }
        while ( v9 <= 0x24 );
        *(_DWORD *)(a1 + 40) = v10;
        if ( v10 )
          goto LABEL_23;
      }
      else
      {
        if ( *((_DWORD *)v5 + 2) == 2 )
        {
          SepCopyTokenIntegrity(*(_QWORD *)(a1 + 8), &v18);
          v8 = (__int64 *)(a1 + 64);
          *(_QWORD *)(a1 + 64) = *(unsigned int *)(v18 + 8);
          goto LABEL_13;
        }
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1104LL);
        if ( *((_DWORD *)v5 + 2) == 3 )
        {
          if ( v6 )
          {
            v7 = *(unsigned int *)(v6 + 8);
            goto LABEL_12;
          }
        }
        else if ( v6 )
        {
          v7 = *(unsigned int *)(v6 + 12);
LABEL_12:
          v8 = (__int64 *)(a1 + 64);
          *(_QWORD *)(a1 + 64) = v7;
LABEL_13:
          *(_DWORD *)(a1 + 40) = 1;
LABEL_23:
          *(_QWORD *)(a1 + 48) = v8;
          return v1;
        }
      }
    }
    return (unsigned int)-1073741275;
  }
}
