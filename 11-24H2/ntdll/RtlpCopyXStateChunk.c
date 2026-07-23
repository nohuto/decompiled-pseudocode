/*
 * XREFs of RtlpCopyXStateChunk @ 0x1800D9290
 * Callers:
 *     RtlpWow64CtxFromAmd64 @ 0x1800D85C0 (RtlpWow64CtxFromAmd64.c)
 *     RtlCopyContext @ 0x1800D8D40 (RtlCopyContext.c)
 *     RtlpCopyExtendedContext @ 0x180141DF0 (RtlpCopyExtendedContext.c)
 * Callees:
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // esi
  unsigned int v9; // r15d
  unsigned int v10; // r11d
  _QWORD *v11; // rdi
  unsigned __int64 *v12; // r13
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // rdx
  char v17; // cl
  __int64 v18; // r12
  unsigned __int64 v19; // r14
  unsigned int v20; // edi
  __int64 v21; // rdx
  __int64 v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+28h] [rbp-50h]
  _QWORD *v25; // [rsp+30h] [rbp-48h]
  char v26; // [rsp+80h] [rbp+8h]
  unsigned int v27; // [rsp+90h] [rbp+18h]
  unsigned int v28; // [rsp+A0h] [rbp+28h]

  v6 = 64;
  v7 = 64;
  v27 = *(_DWORD *)(a3 + 20);
  v8 = 64;
  v9 = 64;
  v10 = *(_DWORD *)(a5 + 20);
  v28 = v10;
  if ( v27 < 0x40 || v10 < 0x40 )
    return 2147483653LL;
  v11 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v12 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v25 = v11;
  v13 = *v11 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (~(MEMORY[0x7FFE05F0] | MEMORY[0x7FFE03D8]) & v13) != 0 )
    return 3221225485LL;
  v14 = 0LL;
  v23 = 0LL;
  v15 = 0LL;
  v24 = 0LL;
  if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
  {
    v17 = 0;
    v26 = 0;
LABEL_13:
    v12[2] = 0LL;
    v18 = v15;
    v12[3] = 0LL;
    v12[4] = 0LL;
    v12[5] = 0LL;
    v12[6] = 0LL;
    v12[7] = 0LL;
    v19 = v13;
    v12[1] = v15;
    goto LABEL_14;
  }
  v15 = v11[1];
  v14 = MEMORY[0x7FFE05F8];
  v16 = MEMORY[0x7FFE05F0] | MEMORY[0x7FFE03D8] | 0x8000000000000003uLL;
  v23 = MEMORY[0x7FFE05F8];
  v24 = v15;
  v17 = 1;
  v26 = 1;
  if ( (~v16 & v15) != 0 || v15 >= 0 || (~v15 & v13) != 0 )
    return 3221225485LL;
  v18 = v12[1];
  if ( v18 >= 0 || (*v12 & v18) != *v12 || (v18 & v16) != v18 )
    goto LABEL_13;
  v19 = v13 & v18;
  v13 &= v18;
LABEL_14:
  *v12 = v13;
  v20 = 2;
  if ( v19 )
  {
    while ( v20 < 0x40 )
    {
      if ( v17 )
      {
        v21 = 1LL << v20;
        if ( ((1LL << v20) & v15) != 0 )
        {
          v6 = v7;
          if ( (v21 & v14) != 0 )
            v6 = (v7 + 63) & 0xFFFFFFC0;
          v7 = v6 + *(_DWORD *)(4LL * v20 + 0x7FFE0604);
        }
        if ( (v21 & v18) != 0 )
        {
          v8 = v9;
          if ( (v21 & v14) != 0 )
            v8 = (v9 + 63) & 0xFFFFFFC0;
          v9 = v8 + *(_DWORD *)(4LL * v20 + 0x7FFE0604);
        }
      }
      else
      {
        v6 = *(_DWORD *)(8LL * v20 + 0x7FFE03F0) - 512;
        v7 = v6 + *(_DWORD *)(8LL * v20 + 0x7FFE03F4);
        v8 = v6;
        v9 = v7;
      }
      if ( _bittest64((const __int64 *)&v19, v20) )
      {
        if ( v9 > v27 || v7 > v10 )
          return 2147483653LL;
        memmove((char *)v12 + v8, (char *)v25 + v6, v7 - v6);
        v10 = v28;
        _bittestandreset64((__int64 *)&v19, v20);
      }
      v14 = v23;
      ++v20;
      v15 = v24;
      v17 = v26;
      if ( !v19 )
        return 0LL;
    }
  }
  return 0LL;
}
