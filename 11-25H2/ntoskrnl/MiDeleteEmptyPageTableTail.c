/*
 * XREFs of MiDeleteEmptyPageTableTail @ 0x140479EC0
 * Callers:
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 * Callees:
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 *     MiReleaseWalkLocks @ 0x1402BBAD0 (MiReleaseWalkLocks.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14047A134 (MiDeleteEmptyPageTableCommit.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiDeleteEmptyPageTableTail(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // r14
  __int64 v4; // rcx
  _BYTE *v5; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx
  char *v10; // rbx
  __int64 i; // r9
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 k; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r9
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _QWORD *j; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned __int64 *v27; // rax

  v2 = *(__int64 **)(a1 + 184);
  v4 = *v2;
  *(_BYTE *)(v4 + 44) = 17;
  MiDecommitPagesTail(v4, a2);
  v5 = v2 + 2;
  v6 = v2[11] & 0xFFFFFFFFFFFFF000uLL;
  if ( v6 )
  {
    MiReleaseWalkLocks(a1);
    if ( !v2[10] )
      goto LABEL_20;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = v7 & -(__int64)(v7 < 0x200);
      v9 = 511LL;
      while ( 1 )
      {
        if ( v9 - v8 == -1LL )
          goto LABEL_9;
        v10 = &v5[8 * (v8 >> 6)];
        for ( i = ~*(_QWORD *)v10 | ((1LL << (v8 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v10 )
        {
          v10 += 8;
          if ( v10 > &v5[8 * (v9 >> 6)] )
            goto LABEL_9;
        }
        _BitScanForward64(&v19, ~i);
        v12 = v19 + ((v10 - v5) >> 3 << 6);
        if ( v12 > v9 )
        {
LABEL_9:
          v12 = -1LL;
          goto LABEL_10;
        }
        if ( v12 != -1LL )
          break;
LABEL_10:
        if ( !v8 )
          break;
        v13 = v7 + 1;
        if ( v7 + 1 > 0x200 )
          v13 = 512LL;
        v9 = v13 - 1;
        v8 = 0LL;
      }
      if ( v12 >= v7 && v12 != -1LL )
      {
        v16 = 0LL;
        if ( v12 >= 0x200 )
          goto LABEL_39;
        v20 = (unsigned __int64)(v2 + 9);
        v21 = &v5[8 * (v12 >> 6)];
        v22 = ((1LL << (v12 & 0x3F)) - 1) | *v21;
        for ( j = v21 + 1; ; ++j )
        {
          v24 = ~v22;
          if ( v24 )
            break;
          if ( (unsigned __int64)j > v20 )
            goto LABEL_37;
          v22 = *++v21;
        }
        _BitScanForward64((unsigned __int64 *)&v25, v24);
        v26 = (unsigned int)v25 + (((char *)v21 - v5) >> 3 << 6);
        if ( v26 > 0x200 )
        {
LABEL_37:
          v26 = 512LL;
          goto LABEL_18;
        }
        for ( k = ~(v24 | ((1LL << v25) - 1)); !k; k = *v27 )
        {
          v27 = v21 + 1;
          if ( (unsigned __int64)(v21 + 1) > v20 )
          {
            k = 64LL;
            goto LABEL_15;
          }
          ++v21;
        }
        _BitScanForward64(&k, k);
LABEL_15:
        v15 = k + (((char *)v21 - v5) >> 3 << 6);
        if ( v15 > 0x200 )
          v15 = 512LL;
        v16 = v15 - v26;
LABEL_18:
        if ( !v16 )
LABEL_39:
          v26 = 512LL;
        v17 = v26 - v12;
        MiDeleteEmptyPageTableCommit(a1, v6 + 8 * v12, v17);
        v7 = v17 + v16 + v12;
        if ( v7 < 0x200 )
          continue;
      }
LABEL_20:
      v2[11] = 0LL;
      memset_0(v5, 0, 0x40uLL);
      return 0LL;
    }
  }
  return 0LL;
}
