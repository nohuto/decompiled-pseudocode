/*
 * XREFs of RtlpCopyXStateChunk @ 0x14025FDF8
 * Callers:
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     RtlpCopyExtendedContext @ 0x14025F9E0 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x14090AD80 (RtlCopyContext.c)
 *     RtlpWow64CtxFromAmd64 @ 0x140A02040 (RtlpWow64CtxFromAmd64.c)
 *     RtlpWow64CtxToAmd64 @ 0x140A51994 (RtlpWow64CtxToAmd64.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  unsigned int v8; // r13d
  unsigned __int64 *v9; // r10
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned int v12; // edi
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // r11
  __int64 v16; // r12
  bool v17; // cl
  unsigned __int64 v18; // rsi
  __int64 v20; // rdx
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
  v27 = *(_DWORD *)(a5 + 20);
  if ( v21 < 0x40 || *(_DWORD *)(a5 + 20) < 0x40u )
    return 2147483653LL;
  v9 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v10 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v24 = v9;
  v25 = v10;
  v11 = *v10 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & v11) != 0 )
    return 3221225485LL;
  v23 = 0LL;
  v12 = 2;
  v13 = 0LL;
  v22 = 0LL;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
  {
    v28 = 0;
LABEL_24:
    v16 = v13;
    memset_0(v9, 0, 0x40uLL);
    v9 = v24;
    v18 = v11;
    v13 = v22;
    v15 = v23;
    v24[1] = v16;
    goto LABEL_11;
  }
  v13 = v10[1];
  v14 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0] | 0x8000000000000003uLL;
  v28 = 1;
  v22 = v13;
  v15 = MEMORY[0xFFFFF780000005F8];
  v23 = MEMORY[0xFFFFF780000005F8];
  if ( (~v14 & v13) != 0 || (~v13 & v11) != 0 || v13 >= 0 )
    return 3221225485LL;
  v16 = v9[1];
  v17 = 0;
  if ( (v16 & v14) == v16 )
    v17 = v16 < 0 && (*v9 & v9[1]) == *v9;
  if ( !v17 )
    goto LABEL_24;
  v18 = v11 & v16;
  v11 &= v16;
LABEL_11:
  *v9 = v11;
  if ( a1 == 1 )
  {
    while ( v18 && v12 < 0x40 )
    {
      if ( v28 )
      {
        v20 = 1LL << v12;
        if ( ((1LL << v12) & v13) != 0 )
        {
          v5 = v6;
          if ( (v20 & v15) != 0 )
            v5 = (v6 + 63) & 0xFFFFFFC0;
          v6 = v5 + *(_DWORD *)(4LL * v12 - 0x87FFFFFF9FCLL);
        }
        if ( (v20 & v16) != 0 )
        {
          v7 = v8;
          if ( (v20 & v15) != 0 )
            v7 = (v8 + 63) & 0xFFFFFFC0;
          v8 = v7 + *(_DWORD *)(4LL * v12 - 0x87FFFFFF9FCLL);
        }
      }
      else
      {
        v5 = *(_DWORD *)(8LL * v12 - 0x87FFFFFFC10LL) - 512;
        v6 = v5 + *(_DWORD *)(8LL * v12 - 0x87FFFFFFC0CLL);
        v7 = v5;
        v8 = v6;
      }
      if ( _bittest64((const __int64 *)&v18, v12) )
      {
        if ( v8 > v21 || v6 > v27 )
          return 2147483653LL;
        memmove((char *)v9 + v7, (char *)v25 + v5, v6 - v5);
        v9 = v24;
        _bittestandreset64((__int64 *)&v18, v12);
      }
      v13 = v22;
      ++v12;
      v15 = v23;
    }
  }
  return 0LL;
}
