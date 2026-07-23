/*
 * XREFs of MiAllocateSkipPagesForMdl @ 0x1403968B8
 * Callers:
 *     MiFindPagesForMdl @ 0x140394EF4 (MiFindPagesForMdl.c)
 * Callees:
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiInitializeBestCandidatesContext @ 0x1403973B0 (MiInitializeBestCandidatesContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiAllocateSkipPagesForMdl(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  _BYTE *v10; // r10
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  _QWORD *i; // r10
  ULONG_PTR v19; // r8
  ULONG_PTR v20; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-C0h]
  _DWORD *v22; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE *v23; // [rsp+88h] [rbp-B0h]
  _BYTE v24[96]; // [rsp+90h] [rbp-A8h] BYREF

  memset_0(v24, 0, 0x58uLL);
  v20 = -1LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_BYTE **)(a1 + 8);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = v8 * ((unsigned __int64)*(unsigned int *)(v7 + 40) >> 12);
  v23 = v10;
  v21 = v11;
  v22 = 0LL;
  if ( v9 )
  {
    MiInitializeBestCandidatesContext((unsigned int)&v22, (unsigned int)v24, v9, (*(_QWORD *)(a1 + 32) - v12) / v9, v9);
    v6 = v22;
    v14 = 0LL;
    v11 = v21;
    v10 = v23;
    if ( v8 == 1 )
      v14 = v7;
    v7 = v14;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 32) - v12;
  }
  v13 = a3 | 0x60000000;
  do
  {
    if ( (int)MiFindContiguousPagesEx(
                *(_QWORD *)a1,
                v10,
                v11,
                *(_QWORD *)(a1 + 24),
                0,
                v9,
                *(_DWORD *)(a1 + 144),
                a2,
                255,
                v13,
                0,
                v7,
                (__int64)v6,
                &v20) < 0 )
      break;
    if ( !v7 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      v16 = *(_QWORD *)(a1 + 48);
      v17 = 0LL;
      for ( i = (_QWORD *)(v15 + 8 * (((unsigned __int64)*(unsigned int *)(v15 + 40) >> 12) + 6));
            v17 < v9 / v16;
            v16 = *(_QWORD *)(a1 + 48) )
      {
        v19 = v20 + v17 * v16;
        ++v17;
        *i++ = v19;
      }
      *(_DWORD *)(v15 + 40) += (_DWORD)v17 << 12;
    }
    v12 += v9;
    if ( v12 == *(_QWORD *)(a1 + 32) )
      break;
    if ( v6 && v6[3] )
    {
      v11 = v21;
    }
    else
    {
      v11 = v20 - 1;
      v21 = v20 - 1;
    }
    v10 = v23;
  }
  while ( v20 - (unsigned __int64)v23 >= v9 );
  if ( v6 )
  {
    if ( v6 != (_DWORD *)v24 )
      ExFreePoolWithTag(v6, 0);
  }
}
