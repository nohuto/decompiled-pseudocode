/*
 * XREFs of MiDeleteEmptyPageTableTail @ 0x1404734A0
 * Callers:
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x14020BAF0 (MiReleaseWalkLocks.c)
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140473714 (MiDeleteEmptyPageTableCommit.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiDeleteEmptyPageTableTail(__int64 a1)
{
  __int64 *v1; // r14
  __int64 v3; // rcx
  _BYTE *v4; // r15
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  char *v9; // rbx
  __int64 i; // r9
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 k; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r9
  _QWORD *v20; // rdx
  __int64 v21; // r8
  _QWORD *j; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  unsigned __int64 *v26; // rax

  v1 = *(__int64 **)(a1 + 184);
  v3 = *v1;
  *(_BYTE *)(v3 + 44) = 17;
  MiDecommitPagesTail(v3);
  v4 = v1 + 2;
  v5 = v1[11] & 0xFFFFFFFFFFFFF000uLL;
  if ( v5 )
  {
    MiReleaseWalkLocks(a1);
    if ( !v1[10] )
      goto LABEL_20;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = v6 & -(__int64)(v6 < 0x200);
      v8 = 511LL;
      while ( 1 )
      {
        if ( v8 - v7 == -1LL )
          goto LABEL_9;
        v9 = &v4[8 * (v7 >> 6)];
        for ( i = ~*(_QWORD *)v9 | ((1LL << (v7 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v9 )
        {
          v9 += 8;
          if ( v9 > &v4[8 * (v8 >> 6)] )
            goto LABEL_9;
        }
        _BitScanForward64(&v18, ~i);
        v11 = v18 + ((v9 - v4) >> 3 << 6);
        if ( v11 > v8 )
        {
LABEL_9:
          v11 = -1LL;
          goto LABEL_10;
        }
        if ( v11 != -1LL )
          break;
LABEL_10:
        if ( !v7 )
          break;
        v12 = v6 + 1;
        if ( v6 + 1 > 0x200 )
          v12 = 512LL;
        v8 = v12 - 1;
        v7 = 0LL;
      }
      if ( v11 >= v6 && v11 != -1LL )
      {
        v15 = 0LL;
        if ( v11 >= 0x200 )
          goto LABEL_38;
        v19 = (unsigned __int64)(v1 + 9);
        v20 = &v4[8 * (v11 >> 6)];
        v21 = ((1LL << (v11 & 0x3F)) - 1) | *v20;
        for ( j = v20 + 1; ; ++j )
        {
          v23 = ~v21;
          if ( v23 )
            break;
          if ( (unsigned __int64)j > v19 )
            goto LABEL_37;
          v21 = *++v20;
        }
        _BitScanForward64((unsigned __int64 *)&v24, v23);
        v25 = (unsigned int)v24 + (((char *)v20 - v4) >> 3 << 6);
        if ( v25 > 0x200 )
        {
LABEL_37:
          v25 = 512LL;
          goto LABEL_18;
        }
        for ( k = ~(v23 | ((1LL << v24) - 1)); !k; k = *v26 )
        {
          v26 = v20 + 1;
          if ( (unsigned __int64)(v20 + 1) > v19 )
          {
            k = 64LL;
            goto LABEL_15;
          }
          ++v20;
        }
        _BitScanForward64(&k, k);
LABEL_15:
        v14 = k + (((char *)v20 - v4) >> 3 << 6);
        if ( v14 > 0x200 )
          v14 = 512LL;
        v15 = v14 - v25;
LABEL_18:
        if ( !v15 )
LABEL_38:
          v25 = 512LL;
        v16 = v25 - v11;
        MiDeleteEmptyPageTableCommit(a1, v5 + 8 * v11, v16);
        v6 = v16 + v15 + v11;
        if ( v6 < 0x200 )
          continue;
      }
LABEL_20:
      v1[11] = 0LL;
      memset_0(v4, 0, 0x40uLL);
      return 0LL;
    }
  }
  return 0LL;
}
