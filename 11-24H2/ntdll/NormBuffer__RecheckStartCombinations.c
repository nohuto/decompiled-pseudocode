/*
 * XREFs of NormBuffer__RecheckStartCombinations @ 0x1800B64F8
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800B4EFC (Normalization__NormalizeCharacter.c)
 * Callees:
 *     Normalization__CanCombinableCharactersCombine @ 0x1800B61BC (Normalization__CanCombinableCharactersCombine.c)
 *     NormBuffer__GetCurrentOutputChar @ 0x1800B6670 (NormBuffer__GetCurrentOutputChar.c)
 */

unsigned __int64 __fastcall NormBuffer__RecheckStartCombinations(_WORD *a1)
{
  bool v1; // zf
  _WORD *v2; // rbx
  unsigned __int64 result; // rax
  _WORD *v4; // rdi
  char v5; // bp
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // r15
  char v10; // si
  char v11; // dl
  _WORD *v12; // r8
  __int64 v13; // rdi
  _WORD *v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_BYTE *)a1 + 93) == 64;
  v2 = a1;
  result = *((_QWORD *)a1 + 10);
  v16 = result;
  if ( v1 )
  {
    v4 = (_WORD *)*((_QWORD *)a1 + 5);
    v5 = 0;
    if ( (_WORD *)result != v4 )
    {
      while ( 1 )
      {
        result = NormBuffer__GetCurrentOutputChar(a1, &v16);
        v6 = *((_QWORD *)v2 + 14);
        v7 = result & 0x7F;
        v8 = *(_QWORD *)(v6 + 32);
        v9 = *(_QWORD *)(v6 + 40);
        a1 = (_WORD *)(v9 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)result >> 7) + v8) << 7));
        v10 = *((_BYTE *)a1 + v7 - 128) & 0x3F;
        if ( v10 == v5 )
          goto LABEL_14;
        if ( (*((_BYTE *)a1 + v7 - 128) & 0xC0) != 0xC0 )
          break;
        result = Normalization__CanCombinableCharactersCombine(*((_QWORD *)v2 + 14), *((_DWORD *)v2 + 22), result);
        if ( !(_DWORD)result )
          break;
        v11 = *(_BYTE *)((result & 0x7F)
                       + v9
                       + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)result >> 7) + v8) << 7)
                       - 128);
        a1 = (_WORD *)*((_QWORD *)v2 + 10);
        v12 = (_WORD *)v16;
        *(a1 - 1) = result;
        v13 = *((_QWORD *)v2 + 5);
        *((_DWORD *)v2 + 22) = result;
        v4 = (_WORD *)(v13 - 2);
        *((_QWORD *)v2 + 5) = v4;
        *((_BYTE *)v2 + 92) = v11 & 0x3F;
        result = *((_QWORD *)v2 + 8);
        *((_BYTE *)v2 + 93) = v11 & 0xC0;
        v14 = v12;
        if ( (_WORD *)result == v4 )
        {
          if ( (unsigned __int64)v12 < result )
          {
            result -= 2LL;
          }
          else
          {
            v15 = *((_QWORD *)v2 + 3);
            *((_DWORD *)v2 + 14) = 0;
            result = v15 - 2;
            v2[36] = 0;
          }
          *((_QWORD *)v2 + 8) = result;
        }
        if ( v12 != v4 )
        {
          do
          {
            a1 = v14 + 1;
            result = (unsigned __int16)v14[1];
            *v14 = result;
            v14 = a1;
            v4 = (_WORD *)*((_QWORD *)v2 + 5);
          }
          while ( a1 != v4 );
        }
        if ( *((_BYTE *)v2 + 93) != 64 )
          return result;
LABEL_15:
        if ( v12 == v4 )
          return result;
      }
      v5 = v10;
LABEL_14:
      v12 = (_WORD *)(v16 + 2);
      v16 += 2LL;
      goto LABEL_15;
    }
  }
  return result;
}
