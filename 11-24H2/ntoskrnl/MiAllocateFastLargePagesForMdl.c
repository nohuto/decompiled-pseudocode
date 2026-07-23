/*
 * XREFs of MiAllocateFastLargePagesForMdl @ 0x14026EEC8
 * Callers:
 *     MiFindPagesForMdl @ 0x140394EF4 (MiFindPagesForMdl.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     MiInsertDpcGang @ 0x14026F250 (MiInsertDpcGang.c)
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 *     MiInitializeDpcGang @ 0x14026F77C (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x140270670 (MiStartDpcGang.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiAllocateFastLargePagesForMdl(unsigned __int64 *a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rsi
  int v7; // eax
  int v8; // edx
  unsigned __int64 v9; // r13
  int v10; // ecx
  unsigned __int64 v11; // r15
  bool v12; // zf
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  __int64 result; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  unsigned int i; // ebx
  __int64 v19; // r9
  unsigned int v20; // r11d
  unsigned int *v21; // r8
  __int64 *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 *v25; // r14
  unsigned __int64 v26; // r12
  _QWORD **v27; // rdi
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 j; // r8
  unsigned __int64 v32; // rax
  _QWORD v33[4]; // [rsp+20h] [rbp-E0h] BYREF
  int v34; // [rsp+40h] [rbp-C0h]
  int v35; // [rsp+44h] [rbp-BCh]
  __int64 v36; // [rsp+48h] [rbp-B8h]
  __int128 v37; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v38; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v39; // [rsp+68h] [rbp-98h]
  _QWORD *v40; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2[23]; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+138h] [rbp+38h]
  _QWORD v43[12]; // [rsp+1F0h] [rbp+F0h] BYREF

  v4 = a2;
  memset_0(BugCheckParameter2, 0, 0x168uLL);
  memset_0(v43, 0, sizeof(v43));
  v6 = a1[8];
  v33[0] = 0LL;
  v39 = 0LL;
  v7 = *((_DWORD *)a1 + 36);
  v37 = 0LL;
  if ( v7 )
  {
    if ( v7 == 2 )
    {
      v8 = 28;
    }
    else
    {
      v8 = 4;
      if ( v7 == 3 )
        v8 = 0;
    }
  }
  else
  {
    v8 = 12;
  }
  v9 = a1[6];
  v10 = 8;
  v11 = (unsigned __int64)*(unsigned int *)(v6 + 40) >> 12;
  if ( (a3 & 1) != 0 )
    v10 = 12;
  v12 = a1[1] == 0x100000;
  LODWORD(v33[0]) = v10;
  if ( v12 )
  {
    v10 |= 1u;
    LODWORD(v33[0]) = v10;
  }
  if ( (*((_DWORD *)a1 + 37) & 4) != 0 )
    LODWORD(v33[0]) = v10 | 0x10;
  v33[1] = *a1;
  v13 = a1[4] - v11 * v9;
  v34 = v4;
  v36 = -1LL;
  v33[2] = v13;
  v33[3] = a1[3];
  v38 = a1 + 10;
  v40 = v43;
  v35 = v8;
  while ( 1 )
  {
    v14 = qword_140E2ED30;
    result = *a1;
    if ( a1[2] < *(_QWORD *)(*a1 + 18504) )
      return result;
    v16 = v43;
    v17 = 4LL;
    do
    {
      v16[2] = 0LL;
      v16[1] = v16;
      *v16 = v16;
      v16 += 3;
      --v17;
    }
    while ( v17 );
    result = MiAllocateLargeZeroPages(v33);
    if ( !v39 )
      return result;
    if ( v14 == qword_140E2ED30 )
    {
      v19 = 0LL;
      v20 = 4;
      v21 = (unsigned int *)(*(_QWORD *)(384 * v4 + qword_140E2DC38 + 376) + 128LL);
      while ( 1 )
      {
        v22 = (__int64 *)*((_QWORD *)v21 + 6);
        if ( v22 )
          break;
        ++v19;
        v21 += 42;
        if ( v19 >= 3 )
          goto LABEL_22;
      }
      v23 = *v22;
      v24 = *((_QWORD *)v21 + 1) * *v21;
      if ( !v24 )
      {
LABEL_22:
        v23 = 1216LL;
        v24 = 0x200000LL;
      }
      if ( 48 * v23 * (v39 / v9) / v24 < 0x1388
        || KeGetCurrentIrql() >= 2u
        || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        v20 = 6;
      }
      MiInitializeDpcGang(BugCheckParameter2, (unsigned int)v4, v20);
      v42 |= 0x40u;
      v25 = (unsigned __int64 *)(v6 + 48 + 8 * v11);
      BugCheckParameter2[0] = (ULONG_PTR)a1;
      for ( i = 0; i < 4; ++i )
      {
        if ( i != 3 )
        {
          v26 = MiPageSizes[i];
          v27 = (_QWORD **)&v43[3 * i];
          while ( 1 )
          {
            v28 = *v27;
            if ( *v27 == v27 )
              break;
            if ( (_QWORD **)v28[1] != v27 || (v29 = (_QWORD *)*v28, *(_QWORD **)(*v28 + 8LL) != v28) )
              __fastfail(3u);
            *v27 = v29;
            v29[1] = v27;
            --v43[3 * i + 2];
            v30 = 0LL;
            for ( j = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v28 + 0x44000000000LL) >> 4); v30 < v26; ++v25 )
            {
              v32 = j + v30;
              v30 += v9;
              *v25 = v32;
            }
            MiInsertDpcGang(BugCheckParameter2, v28, j);
          }
        }
      }
      *(_DWORD *)(v6 + 40) += (v39 << 12) / v9;
      MiStartDpcGang((ULONG_PTR)BugCheckParameter2);
      *(_QWORD *)(v6 + 16) = 0LL;
      result = 2LL;
      *(_WORD *)(v6 + 10) |= 2u;
      return result;
    }
    MiFreeLargeZeroPages(*a1, (__int64)v43, (LODWORD(v33[0]) >> 2) & 1);
    v39 = 0LL;
  }
}
