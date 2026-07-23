/*
 * XREFs of MiExamineZeroChunks @ 0x140333040
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiExamineZeroChunks(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v5; // r13
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned int v9; // r14d
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // [rsp+20h] [rbp-128h]
  __int64 i; // [rsp+28h] [rbp-120h]
  char v16[208]; // [rsp+40h] [rbp-108h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 56);
  v5 = *(unsigned int *)(a1 + 12);
  for ( i = v3; (unsigned int)v2 < *(_DWORD *)(v1 + 280); v2 = (unsigned int)(v2 + 1) )
  {
    v14 = (__int64 *)(*(_QWORD *)(a1 + 64) + 8 * v2 + 24);
    v6 = *v14;
    if ( (*v14 & 0x20) != 0 )
    {
      if ( (v6 & 1) != 0 )
      {
        ++dword_140EF4EF4[v5];
      }
      else if ( !v3 || (++*(_DWORD *)(v3 + 576), *(_DWORD *)(v3 + 576) == 512) )
      {
        v7 = *(_QWORD *)(v1 + 288);
        if ( (_DWORD)v2 )
          v7 += 8 * MiPtesToSupportLargePageSizes[v5] * (unsigned int)v2;
        memset_0(v16, 0, 0xC8uLL);
        for ( ; v7 >= 0xFFFFF68000000000uLL; v7 = (__int64)(v7 << 25) >> 16 )
        {
          if ( v7 > 0xFFFFF6FFFFFFFFFFuLL )
            break;
        }
        v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( (unsigned int)v5 <= 1 )
        {
          v13 = (unsigned int)(2 - v5);
          do
          {
            v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v13;
          }
          while ( v13 );
        }
        v9 = 0;
        v10 = MiPtesToSupportLargePageSizes[v5];
        if ( v10 )
        {
          v11 = 0LL;
          do
          {
            v12 = (_QWORD *)(v8 + 8 * v11);
            if ( *v12 )
            {
              if ( (unsigned int)v5 <= 1 )
                MiRewritePteWithLockBit(0LL, 0LL, v12, CLFS_LSN_NULL_EXT);
              else
                *v12 = CLFS_LSN_NULL_EXT;
            }
            v11 = ++v9;
          }
          while ( v9 < v10 );
        }
        v3 = i;
        *v14 = v6 | 0x40;
        ++dword_140EF4EE4[v5];
      }
    }
  }
}
