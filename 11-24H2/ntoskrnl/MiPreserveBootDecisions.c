/*
 * XREFs of MiPreserveBootDecisions @ 0x140690C48
 * Callers:
 *     MiNodeZeroConductor @ 0x1407FFF00 (MiNodeZeroConductor.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPreserveBootDecisions(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // r14
  __int64 v5; // rcx
  _OWORD *v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  ULONG_PTR v11; // r15
  void *Pool; // r12
  unsigned int *v13; // r13
  unsigned int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 ***v18; // rax
  KIRQL v19; // al
  _QWORD *v20; // r8
  char *v21; // r10
  char *v22; // rcx
  char *v23; // r9
  char **v24; // rax
  __int128 *v25; // rdx
  __int64 v26; // r11
  __int128 *v27; // rax
  __int128 v28; // xmm0
  char **v29; // rax
  __int64 *v30; // rcx
  __int64 *v31; // rax
  __int64 *v32; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v33; // [rsp+28h] [rbp-8h]
  unsigned int i; // [rsp+80h] [rbp+50h]
  unsigned __int8 v36; // [rsp+80h] [rbp+50h]
  __int64 v37; // [rsp+88h] [rbp+58h]

  result = MiAllocatePool(0x40uLL, 0x418uLL, 538996045);
  v4 = result;
  if ( result )
  {
    v5 = 8LL;
    v6 = (_OWORD *)result;
    v7 = a2;
    do
    {
      *v6 = *v7;
      v6[1] = v7[1];
      v6[2] = v7[2];
      v6[3] = v7[3];
      v6[4] = v7[4];
      v6[5] = v7[5];
      v6[6] = v7[6];
      v6 += 8;
      v8 = v7[7];
      v7 += 8;
      *(v6 - 1) = v8;
      --v5;
    }
    while ( v5 );
    v37 = 0LL;
    v9 = (_QWORD *)a2 + 41;
    *v6 = *v7;
    v10 = v4 - (_QWORD)a2;
    *((_QWORD *)v6 + 2) = *((_QWORD *)v7 + 2);
    do
    {
      v11 = 0LL;
      v33 = &v32;
      Pool = 0LL;
      v32 = (__int64 *)&v32;
      *(_QWORD *)((char *)v9 + v10 + 8) = (char *)v9 + v10;
      *(_QWORD *)((char *)v9 + v10) = (char *)v9 + v10;
      v13 = (unsigned int *)v9[13];
      if ( v13 && v13[2] > 1 )
      {
        v11 = 16LL * *v13;
        Pool = (void *)MiAllocatePool(0x40uLL, v11, 538996045);
      }
      v14 = *((_DWORD *)v9 - 47);
      v15 = 0;
      for ( i = v14; v15 < v14; v14 = i )
      {
        v16 = MiAllocatePool(0x40uLL, 0x2B0uLL, 538996045);
        if ( !v16 )
          break;
        v17 = v33;
        v18 = (__int64 ***)(v16 + 416);
        if ( *v33 != (__int64 *)&v32 )
LABEL_32:
          __fastfail(3u);
        v18[1] = v33;
        *v18 = &v32;
        ++v15;
        *v17 = v18;
        v33 = (__int64 **)v18;
      }
      v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 15280));
      v20 = (_QWORD *)*v9;
      v21 = (char *)v9 + v10;
      v22 = (char *)v32;
      v36 = v19;
      while ( v22 != (char *)&v32 && v20 != v9 )
      {
        v23 = *(char **)v22;
        if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 )
          goto LABEL_32;
        v24 = (char **)*((_QWORD *)v22 + 1);
        if ( *v24 != v22 )
          goto LABEL_32;
        *v24 = v23;
        v25 = (__int128 *)(v20 - 52);
        *((_QWORD *)v23 + 1) = v24;
        v26 = 5LL;
        v27 = (__int128 *)(v22 - 416);
        do
        {
          v28 = *v25;
          v25 += 8;
          *v27 = v28;
          v27 += 8;
          *(v27 - 7) = *(v25 - 7);
          *(v27 - 6) = *(v25 - 6);
          *(v27 - 5) = *(v25 - 5);
          *(v27 - 4) = *(v25 - 4);
          *(v27 - 3) = *(v25 - 3);
          *(v27 - 2) = *(v25 - 2);
          *(v27 - 1) = *(v25 - 1);
          --v26;
        }
        while ( v26 );
        *v27 = *v25;
        v27[1] = v25[1];
        v27[2] = v25[2];
        v29 = (char **)*((_QWORD *)v21 + 1);
        if ( *v29 != v21 )
          goto LABEL_32;
        *(_QWORD *)v22 = v21;
        *((_QWORD *)v22 + 1) = v29;
        *v29 = v22;
        *((_QWORD *)v21 + 1) = v22;
        v22 = v23;
        v20 = (_QWORD *)*v20;
      }
      if ( Pool )
        memmove(Pool, v13, v11);
      *(_QWORD *)((char *)v9 + v10 + 104) = Pool;
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 15280), v36);
      while ( 1 )
      {
        v30 = v32;
        if ( v32 == (__int64 *)&v32 )
          break;
        if ( (__int64 **)v32[1] != &v32 )
          goto LABEL_32;
        v31 = (__int64 *)*v32;
        if ( *(__int64 **)(*v32 + 8) != v32 )
          goto LABEL_32;
        v32 = (__int64 *)*v32;
        v31[1] = (__int64)&v32;
        ExFreePoolWithTag(v30 - 52, 0);
      }
      v9 += 38;
      ++v37;
    }
    while ( v37 < 3 );
    result = a1;
    *(_QWORD *)(a1 + 15264) = v4;
  }
  return result;
}
