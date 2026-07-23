/*
 * XREFs of RtlpCopyXStateChunk @ 0x1403D5270
 * Callers:
 *     RtlpCopyExtendedContext @ 0x1403D4F10 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x140921110 (RtlCopyContext.c)
 *     RtlpWow64CtxFromAmd64 @ 0x1409FD4A8 (RtlpWow64CtxFromAmd64.c)
 *     RtlpWow64CtxToAmd64 @ 0x140A47CC4 (RtlpWow64CtxToAmd64.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // esi
  unsigned int v6; // r13d
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // r11d
  _QWORD *v10; // rcx
  unsigned __int64 *v11; // r9
  unsigned __int64 v12; // rbp
  unsigned int v13; // edi
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v17; // r14
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned int v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  unsigned __int64 *v24; // [rsp+38h] [rbp-50h]
  _QWORD *v25; // [rsp+40h] [rbp-48h]
  unsigned int v27; // [rsp+A0h] [rbp+18h]
  char v28; // [rsp+B0h] [rbp+28h]

  v5 = 64;
  v21 = *(_DWORD *)(a3 + 20);
  v6 = 64;
  v7 = 64;
  v8 = 64;
  v9 = *(_DWORD *)(a5 + 20);
  v27 = v9;
  if ( v21 < 0x40 || v9 < 0x40 )
    return 2147483653LL;
  v10 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v11 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v25 = v10;
  v24 = v11;
  v12 = *v10 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & v12) != 0 )
    return 3221225485LL;
  v23 = 0LL;
  v13 = 2;
  v14 = 0LL;
  v22 = 0LL;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
  {
    v28 = 0;
    goto LABEL_13;
  }
  v14 = v10[1];
  v15 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0] | 0x8000000000000003uLL;
  v28 = 1;
  v22 = v14;
  v16 = MEMORY[0xFFFFF780000005F8];
  v23 = MEMORY[0xFFFFF780000005F8];
  if ( (~v15 & v14) != 0 || v14 >= 0 || (~v14 & v12) != 0 )
    return 3221225485LL;
  v17 = v11[1];
  if ( v17 < 0 && (*v11 & v17) == *v11 && (v17 & v15) == v17 )
  {
    v18 = v12 & v17;
    v12 &= v17;
    goto LABEL_14;
  }
LABEL_13:
  v17 = v14;
  memset_0(v11, 0, 0x40uLL);
  v11 = v24;
  v18 = v12;
  v14 = v22;
  v16 = v23;
  v9 = v27;
  v24[1] = v17;
LABEL_14:
  *v11 = v12;
  if ( a1 == 1 && v18 )
  {
    while ( v13 < 0x40 )
    {
      if ( v28 )
      {
        v19 = 1LL << v13;
        if ( ((1LL << v13) & v14) != 0 )
        {
          v5 = v6;
          if ( (v19 & v16) != 0 )
            v5 = (v6 + 63) & 0xFFFFFFC0;
          v6 = v5 + *(_DWORD *)(4LL * v13 - 0x87FFFFFF9FCLL);
        }
        if ( (v19 & v17) != 0 )
        {
          v7 = v8;
          if ( (v19 & v16) != 0 )
            v7 = (v8 + 63) & 0xFFFFFFC0;
          v8 = v7 + *(_DWORD *)(4LL * v13 - 0x87FFFFFF9FCLL);
        }
      }
      else
      {
        v5 = *(_DWORD *)(8LL * v13 - 0x87FFFFFFC10LL) - 512;
        v6 = v5 + *(_DWORD *)(8LL * v13 - 0x87FFFFFFC0CLL);
        v7 = v5;
        v8 = v6;
      }
      if ( _bittest64((const __int64 *)&v18, v13) )
      {
        if ( v8 > v21 || v6 > v9 )
          return 2147483653LL;
        memmove((char *)v11 + v7, (char *)v25 + v5, v6 - v5);
        v11 = v24;
        _bittestandreset64((__int64 *)&v18, v13);
      }
      v14 = v22;
      ++v13;
      v16 = v23;
      v9 = v27;
      if ( !v18 )
        return 0LL;
    }
  }
  return 0LL;
}
