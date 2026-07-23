/*
 * XREFs of I_MincryptAddChainInfo @ 0x140827DEC
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     I_MincryptFreeChainInfo @ 0x1408280AC (I_MincryptFreeChainInfo.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall I_MincryptAddChainInfo(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        const void **a8,
        unsigned __int16 *Src,
        const void **a10)
{
  unsigned int v10; // r13d
  unsigned int v11; // ebx
  __int64 v12; // r14
  unsigned int v13; // r12d
  __int64 v14; // rbp
  unsigned int v15; // r15d
  __int64 Pool2; // rax
  __int64 v17; // rsi
  __int64 v19; // rcx
  char *v20; // rdi
  __int64 v21; // rax
  _DWORD *v22; // r15
  __int64 v23; // r12
  char *v24; // r13
  __int64 v25; // rbp
  char *v26; // rbx
  __int64 v27; // rax
  unsigned int v29; // r13d
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r12
  char *v33; // rdi
  __int64 v34; // r14
  const void **v35; // rbx
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // [rsp+20h] [rbp-48h]

  v10 = a5;
  v11 = a2 + 104;
  v12 = a3;
  v13 = a4;
  v14 = a1;
  v15 = a3 + a4;
  if ( a3 + a4 + a5 )
  {
    Pool2 = ExAllocatePool2(0x102uLL, v11, 0x72634943u);
    v17 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    *(_DWORD *)Pool2 = v11;
    v19 = Pool2 + 104;
    *(_DWORD *)(Pool2 + 52) = a6;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 104;
    v20 = (char *)(16LL * v15 + Pool2 + 104);
    v21 = 0LL;
    v38 = v17 + 104;
    *(_DWORD *)(v17 + 32) = v12;
    if ( (_DWORD)v12 )
    {
      v22 = a7;
      v23 = v12;
      v24 = (char *)a7 - v19;
      v25 = v19 - (_QWORD)a7;
      do
      {
        v26 = (char *)v22 + v25;
        memmove(v20, *(const void **)&v24[(_QWORD)v22 + v25 + 8], (unsigned int)*v22);
        *((_QWORD *)v26 + 1) = v20;
        *(_DWORD *)v26 = *v22;
        v27 = (unsigned int)*v22;
        v22 += 4;
        v20 += (v27 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        --v23;
      }
      while ( v23 );
      v14 = a1;
      v21 = v12;
      v13 = a4;
      v10 = a5;
      v19 = v17 + 104;
    }
    *(_DWORD *)(v17 + 16) = v13;
    *(_QWORD *)(v17 + 8) = v19 + 16 * v21;
    if ( v13 )
    {
      v29 = 0;
      do
      {
        memmove(v20, a8[1], *(unsigned int *)a8);
        v30 = (unsigned int)v12 + v29++;
        v30 *= 2LL;
        *(_QWORD *)(v38 + 8 * v30 + 8) = v20;
        *(_DWORD *)(v38 + 8 * v30) = *(_DWORD *)a8;
        v31 = *(unsigned int *)a8;
        a8 += 2;
        v20 += (v31 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
      }
      while ( v29 < v13 );
      v10 = a5;
    }
    if ( a10 )
    {
      memmove(v20, a10[1], *(unsigned int *)a10);
      *(_QWORD *)(v17 + 64) = v20;
      *(_DWORD *)(v17 + 56) = *(_DWORD *)a10;
      v20 += (*(unsigned int *)a10 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    else
    {
      *(_OWORD *)(v17 + 56) = 0LL;
    }
    v32 = v10;
    *(_QWORD *)(v17 + 40) = v20;
    *(_DWORD *)(v17 + 48) = v10;
    memmove(v20, Src, 120LL * v10);
    v33 = &v20[120 * v10];
    if ( v10 )
    {
      v34 = -80LL - (_QWORD)Src;
      v35 = (const void **)(Src + 40);
      do
      {
        if ( *(_WORD *)v35 )
        {
          memmove(v33, *(v35 - 1), *(unsigned __int16 *)v35);
          *(const void **)((char *)v35 + v34 + *(_QWORD *)(v17 + 40) + 72) = v33;
          v33 += *(unsigned __int16 *)v35;
        }
        if ( *((_WORD *)v35 + 8) )
        {
          memmove(v33, v35[1], *((unsigned __int16 *)v35 + 8));
          *(const void **)((char *)v35 + v34 + *(_QWORD *)(v17 + 40) + 88) = v33;
          v33 += *((unsigned __int16 *)v35 + 8);
        }
        v36 = *((_DWORD *)v35 + 6);
        if ( v36 )
        {
          memmove(v33, v35[4], v36);
          *(const void **)((char *)v35 + v34 + *(_QWORD *)(v17 + 40) + 112) = v33;
          v33 += *((unsigned int *)v35 + 6);
        }
        v35 += 15;
        --v32;
      }
      while ( v32 );
    }
    v37 = *(_QWORD *)(v14 + 16);
    if ( v37 )
      I_MincryptFreeChainInfo(v37);
    *(_QWORD *)(v14 + 16) = v17;
  }
  else
  {
    I_MincryptFreeChainInfo(*(_QWORD *)(a1 + 16));
    *(_QWORD *)(v14 + 16) = 0LL;
  }
  return 0LL;
}
