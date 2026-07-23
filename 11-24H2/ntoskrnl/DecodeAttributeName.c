/*
 * XREFs of DecodeAttributeName @ 0x140863E34
 * Callers:
 *     GetAttributeName @ 0x140864C40 (GetAttributeName.c)
 *     LocalGetRelativeAttributeForString @ 0x140AAA374 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     GetDigitFromChar2 @ 0x14079712C (GetDigitFromChar2.c)
 *     IsEncodedAttributeChar @ 0x1407973D4 (IsEncodedAttributeChar.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 */

__int64 __fastcall DecodeAttributeName(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // r15d
  __int64 v7; // r13
  unsigned int v8; // r12d
  unsigned int v9; // edi
  unsigned int v10; // esi
  wint_t v11; // cx
  unsigned int v12; // r10d
  int v13; // r8d
  unsigned int v14; // edx
  char v15; // r9
  unsigned int v16; // r8d
  wint_t v17; // ax
  unsigned __int8 v19; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int8 v20; // [rsp+21h] [rbp-Fh] BYREF
  wint_t v21; // [rsp+22h] [rbp-Eh]
  int v22; // [rsp+24h] [rbp-Ch]
  unsigned int v23; // [rsp+28h] [rbp-8h]
  int v24; // [rsp+2Ch] [rbp-4h]
  unsigned __int8 v25; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v26; // [rsp+80h] [rbp+50h]
  unsigned __int8 v27; // [rsp+88h] [rbp+58h] BYREF

  v26 = a3;
  v3 = 0;
  v22 = 0;
  v21 = 0;
  v25 = 0;
  v27 = 0;
  v19 = 0;
  v20 = 0;
  if ( !a1 || !a2 || !a3 )
    return 87LL;
  if ( (a2 & 1) != 0 )
  {
    return 1336;
  }
  else
  {
    v6 = 2;
    v7 = SddlpAlloc(a2 + 2LL);
    if ( v7 )
    {
      v8 = 4;
      v9 = a2 >> 1;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 3;
      v14 = 1;
      while ( 1 )
      {
        v23 = v14;
        v24 = v13;
        if ( v10 >= v9 )
          break;
        v15 = 0;
        if ( *(_WORD *)(a1 + 2LL * v10) == 37 )
        {
          if ( v8 >= v9
            || !GetDigitFromChar2(*(_WORD *)(a1 + 2LL * v14), &v25)
            || !GetDigitFromChar2(*(_WORD *)(a1 + 2LL * v6), &v27)
            || !GetDigitFromChar2(*(_WORD *)(a1 + 2LL * v16), &v19)
            || !GetDigitFromChar2(*(_WORD *)(a1 + 2LL * v8), &v20)
            || (v21 = v20 | (unsigned __int16)(16 * (v19 | (unsigned __int16)(16 * (v27 | (unsigned __int16)(16 * v25))))),
                (v15 = IsEncodedAttributeChar(v21)) == 0) )
          {
            v3 = 1336;
            SddlpFree(v7);
            return v3;
          }
          v11 = v21;
          v13 = v24;
          v14 = v23;
          v12 = v22;
        }
        if ( v15 )
        {
          v10 += 4;
          v14 += 4;
          v6 += 4;
          v13 += 4;
          v8 += 4;
          v17 = v11;
        }
        else
        {
          v17 = *(_WORD *)(a1 + 2LL * v10);
        }
        *(_WORD *)(v7 + 2LL * v12) = v17;
        ++v10;
        ++v14;
        ++v6;
        ++v13;
        ++v8;
        v22 = ++v12;
      }
      *v26 = v7;
    }
    else
    {
      return 8;
    }
  }
  return v3;
}
