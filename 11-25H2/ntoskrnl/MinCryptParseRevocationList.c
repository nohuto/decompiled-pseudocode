/*
 * XREFs of MinCryptParseRevocationList @ 0x140815CCC
 * Callers:
 *     MinCrypK_ParseRevocationList @ 0x140693E78 (MinCrypK_ParseRevocationList.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x14081756C (MinAsn1ParseSingleExtensionValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MinCryptParseRevocationList(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *v4; // rdi
  int v5; // ebx
  unsigned int i; // r14d
  unsigned __int64 v7; // rsi
  unsigned int j; // r15d
  unsigned int v9; // eax
  char *v10; // rcx
  _DWORD *Pool2; // rax
  __int128 Size; // [rsp+40h] [rbp-48h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h] BYREF
  int v15; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v16; // [rsp+A0h] [rbp+18h]

  v16 = a3;
  v15 = a2;
  Size = 0LL;
  LOBYTE(v15) = 0;
  v14 = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( (int)MinAsn1ParseSingleExtensionValue(&qword_140B2CB68, a1, &v15, &Size) >= 0
    && (_BYTE)v15
    && (_DWORD)Size == 2
    && **((_WORD **)&Size + 1) == 0x8664 )
  {
    if ( (int)MinAsn1ParseSingleExtensionValue(&qword_140B2CB78, a1, &v15, &Size) >= 0
      && (_BYTE)v15
      && (_DWORD)Size == 4
      && !**((_DWORD **)&Size + 1) )
    {
      for ( i = 0; i < 2; ++i )
      {
        v7 = 0LL;
        for ( j = 0; j < 0xD; ++j )
        {
          LODWORD(v14) = *((_DWORD *)&off_140B2F360 + 4 * j + 2);
          *((_QWORD *)&v14 + 1) = *(&off_140B2F360 + 2 * j);
          if ( (int)MinAsn1ParseSingleExtensionValue(&v14, a1, &v15, &Size) < 0 )
            goto LABEL_15;
          if ( (_BYTE)v15 )
          {
            if ( i )
            {
              v9 = Size;
              v4[4 * j] = Size;
              v10 = (char *)v4 + v7 + 208;
              *(_QWORD *)&v4[4 * j + 2] = v10;
              memmove(v10, *((const void **)&Size + 1), v9);
            }
            if ( v7 + (unsigned int)Size < v7 )
            {
              v7 = -1LL;
              v5 = -1073741675;
            }
            else
            {
              v7 += (unsigned int)Size;
              v5 = 0;
            }
            if ( v5 < 0 )
              goto LABEL_38;
          }
        }
        if ( !i )
        {
          if ( v7 + 208 < v7 )
            v5 = -1073741675;
          else
            v5 = 0;
          if ( v5 < 0 )
            goto LABEL_38;
          Pool2 = (_DWORD *)ExAllocatePool2(0x102uLL);
          v4 = Pool2;
          if ( !Pool2 )
          {
            v5 = -1073741801;
            goto LABEL_38;
          }
          memset_0(Pool2, 0, 0xD0uLL);
        }
      }
      if ( (v4[44] & 0xFFFFFFF7) != 0 )
      {
        v5 = -1069350909;
      }
      else if ( (v4[48] & 0x1F) != 0 )
      {
LABEL_15:
        v5 = -1073740760;
      }
      else
      {
        *v16 = v4;
        v4 = 0LL;
      }
    }
    else
    {
      v5 = -1073741788;
    }
  }
  else
  {
    v5 = -1073741735;
  }
LABEL_38:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72634943u);
  return (unsigned int)v5;
}
