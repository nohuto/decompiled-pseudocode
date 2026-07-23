/*
 * XREFs of RtlHashBytes2 @ 0x140425320
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x1407F2D6C (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x140A9AA90 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHashBytes2(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r8
  unsigned __int128 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int128 v18; // rax
  unsigned __int128 v19; // rax
  __int64 v21; // rcx

  v4 = (a3 ^ 0x2D358DCCAA6C78A5uLL) * (unsigned __int128)0x8BB84B93962EACC9uLL;
  v6 = a3 ^ *((_QWORD *)&v4 + 1) ^ (0x8BB84B93962EACC9uLL * (a3 ^ 0x2D358DCCAA6C78A5LL));
  if ( a2 <= 0x10 )
  {
    if ( a2 < 4 )
    {
      v17 = 0LL;
      if ( a2 )
        v16 = *((unsigned __int8 *)a1 + a2 - 1) | ((((unsigned __int64)*(unsigned __int8 *)a1 << 8) | *((unsigned __int8 *)a1 + (a2 >> 1))) << 8);
      else
        v16 = 0LL;
    }
    else
    {
      v21 = (a2 >> 1) & 0x7FFFFFFFFFFFFFFCLL;
      v16 = ((unsigned __int64)*(unsigned int *)a1 << 32) | *(unsigned int *)((char *)a1 + v21);
      v17 = ((unsigned __int64)*(unsigned int *)((char *)a1 + a2 - 4) << 32) | *(unsigned int *)((char *)a1
                                                                                               + a2
                                                                                               - v21
                                                                                               - 4);
    }
  }
  else
  {
    v7 = a2;
    if ( a2 < 0x30 )
      goto LABEL_6;
    v8 = a3 ^ *((_QWORD *)&v4 + 1) ^ (0x8BB84B93962EACC9uLL * (a3 ^ 0x2D358DCCAA6C78A5LL));
    v9 = v8;
    do
    {
      v7 -= 48LL;
      v10 = a1[5] ^ v9;
      v6 = (((*a1 ^ 0x8BB84B93962EACC9uLL) * (unsigned __int128)(a1[1] ^ v6)) >> 64) ^ ((*a1 ^ 0x8BB84B93962EACC9uLL)
                                                                                      * (a1[1] ^ v6));
      v11 = (a1[2] ^ 0x4B33A62ED433D4A3uLL) * (unsigned __int128)(a1[3] ^ v8);
      v12 = a1[4];
      a1 += 6;
      v8 = *((_QWORD *)&v11 + 1) ^ v11;
      v9 = (((v12 ^ 0x4D5A2DA51DE1AA47uLL) * (unsigned __int128)(unsigned __int64)v10) >> 64) ^ ((v12 ^ 0x4D5A2DA51DE1AA47LL)
                                                                                               * v10);
    }
    while ( v7 >= 0x30 );
    v6 ^= v8 ^ v9;
    if ( v7 > 0x10 )
    {
LABEL_6:
      v13 = ((v7 - 17) >> 4) + 1;
      v7 += -16LL * v13;
      do
      {
        v14 = a1[1] ^ v6;
        v15 = *a1 ^ 0x8BB84B93962EACC9uLL;
        a1 += 2;
        v6 = ((v15 * (unsigned __int128)(unsigned __int64)v14) >> 64) ^ (v15 * v14);
        --v13;
      }
      while ( v13 );
    }
    v16 = *(_QWORD *)((char *)a1 + v7 - 16);
    v17 = *(_QWORD *)((char *)a1 + v7 - 8);
  }
  v18 = (v16 ^ 0x8BB84B93962EACC9uLL) * (unsigned __int128)(v6 ^ v17);
  v19 = (a2 ^ (unsigned __int64)v18 ^ 0x2D358DCCAA6C78A5LL)
      * (unsigned __int128)(*((_QWORD *)&v18 + 1) ^ 0x8BB84B93962EACC9uLL);
  return *((_QWORD *)&v19 + 1) ^ v19;
}
