/*
 * XREFs of RtlpCopyXStateChunk @ 0x1800DACA0
 * Callers:
 *     RtlpWow64CtxFromAmd64 @ 0x1800D9D20 (RtlpWow64CtxFromAmd64.c)
 *     RtlCopyContext @ 0x1800DA4A0 (RtlCopyContext.c)
 *     RtlpCopyExtendedContext @ 0x180145130 (RtlpCopyExtendedContext.c)
 * Callees:
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // esi
  unsigned int v7; // r10d
  unsigned int v8; // r12d
  _QWORD *v9; // r15
  unsigned __int64 *v10; // rbx
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // rdi
  unsigned __int64 v14; // r8
  __int64 v15; // rbp
  bool v16; // cl
  unsigned __int64 v17; // r14
  unsigned int i; // r13d
  __int64 v20; // rdx
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  unsigned int v23; // ecx
  int v24; // [rsp+20h] [rbp-48h]
  unsigned int v25; // [rsp+24h] [rbp-44h]
  __int64 v26; // [rsp+28h] [rbp-40h]
  char v27; // [rsp+70h] [rbp+8h]
  int v28; // [rsp+80h] [rbp+18h]
  int v29; // [rsp+90h] [rbp+28h]

  v6 = 64;
  v7 = *(_DWORD *)(a3 + 20);
  v25 = v7;
  v29 = 64;
  v8 = *(_DWORD *)(a5 + 20);
  v24 = 64;
  v28 = 64;
  if ( v7 < 0x40 || v8 < 0x40 )
    return 2147483653LL;
  v9 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v10 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v11 = *v9 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (~(MEMORY[0x7FFE05F0] | MEMORY[0x7FFE03D8]) & v11) != 0 )
    return 3221225485LL;
  v12 = 0LL;
  v26 = 0LL;
  v13 = 0LL;
  if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
  {
    v27 = 0;
LABEL_10:
    v10[2] = 0LL;
    v15 = v13;
    v10[3] = 0LL;
    v10[4] = 0LL;
    v10[5] = 0LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    v17 = v11;
    v10[1] = v13;
    goto LABEL_11;
  }
  v13 = v9[1];
  v12 = MEMORY[0x7FFE05F8];
  v14 = MEMORY[0x7FFE05F0] | MEMORY[0x7FFE03D8] | 0x8000000000000003uLL;
  v27 = 1;
  v26 = MEMORY[0x7FFE05F8];
  if ( (~v14 & v13) != 0 || (~v13 & v11) != 0 || v13 >= 0 )
    return 3221225485LL;
  v15 = v10[1];
  v16 = 0;
  if ( (v15 & v14) == v15 )
    v16 = v15 < 0 && (*v10 & v10[1]) == *v10;
  if ( !v16 )
    goto LABEL_10;
  v17 = v11 & v15;
  v11 &= v15;
LABEL_11:
  *v10 = v11;
  for ( i = 2; v17 && i < 0x40; ++i )
  {
    if ( v27 )
    {
      v20 = 1LL << i;
      if ( ((1LL << i) & v13) != 0 )
      {
        v6 = v29;
        if ( (v20 & v12) != 0 )
          v6 = (v29 + 63) & 0xFFFFFFC0;
        v21 = v6 + *(_DWORD *)(4LL * i + 0x7FFE0604);
        v29 = v21;
      }
      else
      {
        v21 = v29;
      }
      if ( (v20 & v15) != 0 )
      {
        v22 = v28;
        v24 = v28;
        if ( (v20 & v12) != 0 )
        {
          v22 = (v28 + 63) & 0xFFFFFFC0;
          v24 = v22;
        }
        v23 = v22 + *(_DWORD *)(4LL * i + 0x7FFE0604);
        v28 = v23;
      }
      else
      {
        v23 = v28;
        v22 = v24;
      }
    }
    else
    {
      v6 = *(_DWORD *)(8LL * i + 0x7FFE03F0) - 512;
      v21 = v6 + *(_DWORD *)(8LL * i + 0x7FFE03F4);
      v24 = v6;
      v23 = v21;
      v29 = v21;
      v28 = v21;
      v22 = v6;
    }
    if ( _bittest64((const __int64 *)&v17, i) )
    {
      if ( v23 > v7 || v21 > v8 )
        return 2147483653LL;
      memmove((char *)v10 + v22, (char *)v9 + v6, v21 - v6);
      v7 = v25;
      _bittestandreset64((__int64 *)&v17, i);
    }
    v12 = v26;
  }
  return 0LL;
}
