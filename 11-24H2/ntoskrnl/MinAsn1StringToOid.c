/*
 * XREFs of MinAsn1StringToOid @ 0x140828F08
 * Callers:
 *     I_MinCryptCheckEKURequirements @ 0x140827CF0 (I_MinCryptCheckEKURequirements.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MinAsn1StringToOid(_BYTE *a1, _BYTE **a2)
{
  __int64 v2; // rbx
  int v3; // r8d
  _BYTE *v5; // r9
  int v6; // r10d
  unsigned int v7; // edx
  unsigned int v8; // r10d
  unsigned int v9; // ebx
  char v10; // dl
  int v11; // eax
  unsigned int v12; // edi
  char v13; // cl
  unsigned int v14; // r15d
  char *v15; // r12
  unsigned int v16; // ecx
  __int64 v17; // rax
  char v18; // al
  size_t v19; // r14
  char v20; // r10
  __int64 v21; // rdx
  _BYTE *v22; // rcx
  char Src; // [rsp+20h] [rbp-69h] BYREF
  char v25; // [rsp+21h] [rbp-68h]
  char v26; // [rsp+22h] [rbp-67h]
  char v27; // [rsp+23h] [rbp-66h]
  char v28; // [rsp+24h] [rbp-65h]
  int v29; // [rsp+30h] [rbp-59h]
  unsigned int v30; // [rsp+34h] [rbp-55h]

  v2 = 0LL;
  v3 = 0;
  v5 = a1;
  if ( a1 )
  {
    v29 = 0;
    while ( 1 )
    {
      v6 = (char)*v5;
      if ( !*v5 )
        break;
      if ( (unsigned __int8)(v6 - 48) > 9u )
      {
        if ( (unsigned int)(v3 - 1) > 9 )
          return 0xFFFFFFFFLL;
        if ( (_BYTE)v6 != 46 )
          return 0xFFFFFFFFLL;
        v2 = (unsigned int)(v2 + 1);
        if ( (unsigned int)v2 >= 0x1F )
          return 0xFFFFFFFFLL;
        *(&v29 + v2) = 0;
        v3 = 0;
      }
      else
      {
        v7 = *(&v29 + v2);
        v8 = v6 + 2 * (v7 + 4 * (v7 - 6));
        if ( v8 < v7 )
          return 0xFFFFFFFFLL;
        *(&v29 + v2) = v8;
        ++v3;
      }
      ++v5;
    }
    if ( v3 )
    {
      v9 = v2 + 1;
      if ( v9 >= 2 )
      {
        v10 = v30;
        if ( v30 < 0x28 && v30 + 40 * v29 <= 0x7F && *(_DWORD *)a2 >= 3u )
        {
          v11 = 130;
          v12 = 3;
          if ( *(_DWORD *)a2 < 0x82u )
            v11 = *(_DWORD *)a2;
          v13 = v29;
          *(_DWORD *)a2 = v11;
          v14 = 2;
          *a2[1] = 6;
          a2[1][2] = v10 + 40 * v13;
          v15 = a2[1] + 3;
          while ( 1 )
          {
            if ( v14 >= v9 )
            {
              v22 = a2[1];
              *(_DWORD *)a2 = v12;
              v22[1] = v12 - 2;
              return *(unsigned int *)a2;
            }
            v16 = *(&v29 + v14);
            if ( v16 < 0x80 )
              break;
            if ( v16 < 0x4000 )
            {
              Src = (v16 >> 7) | 0x80;
              v25 = *(_BYTE *)(&v29 + v14) & 0x7F;
              v17 = 2LL;
              goto LABEL_27;
            }
            if ( v16 < 0x200000 )
            {
              v25 = (v16 >> 7) | 0x80;
              v18 = *(_BYTE *)(&v29 + v14) & 0x7F;
              Src = (v16 >> 14) | 0x80;
              v26 = v18;
              v17 = 3LL;
              goto LABEL_27;
            }
            v20 = *(_BYTE *)(&v29 + v14) & 0x7F;
            if ( v16 >= 0x10000000 )
            {
              v26 = (v16 >> 14) | 0x80;
              Src = (v16 >> 28) | 0x80;
              v21 = 5LL;
              v25 = (v16 >> 21) | 0x80;
              v27 = (v16 >> 7) | 0x80;
              v28 = v20;
            }
            else
            {
              v25 = (v16 >> 14) | 0x80;
              v21 = 4LL;
              Src = (v16 >> 21) | 0x80;
              v26 = (v16 >> 7) | 0x80;
              v27 = v20;
            }
            LODWORD(v17) = v21;
            v19 = v21;
LABEL_32:
            v12 += v17;
            if ( v12 > *(_DWORD *)a2 )
              return 0xFFFFFFFFLL;
            memmove(v15, &Src, v19);
            v15 += v19;
            ++v14;
          }
          Src = *(&v29 + v14);
          v17 = 1LL;
LABEL_27:
          v19 = v17;
          goto LABEL_32;
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
