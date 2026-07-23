/*
 * XREFs of MiInitializeSlabAllocator @ 0x1406890BC
 * Callers:
 *     MiInitializeNuma @ 0x140669F98 (MiInitializeNuma.c)
 *     MiInitializeSlabIdentities @ 0x140689438 (MiInitializeSlabIdentities.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiInitializeSlabAllocator(volatile LONG *a1, int a2, unsigned int a3, __int64 a4)
{
  KIRQL v5; // si
  __int64 v6; // r14
  __int64 v8; // rbp
  volatile LONG *v9; // rdi
  __int64 *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rdx
  int v15; // r12d
  __int64 v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // r8
  __int64 *v19; // r13
  unsigned __int8 v20; // bp
  __int64 v21; // rsi
  __int64 v22; // r15
  unsigned __int64 v23; // r14
  __int64 v24; // rbx
  unsigned int v25; // [rsp+20h] [rbp-58h]
  char v27; // [rsp+88h] [rbp+10h]
  _QWORD *v28; // [rsp+98h] [rbp+20h]

  v5 = 17;
  v6 = a2;
  v8 = *(_QWORD *)(a4 + 16) + 57216LL * a3;
  v9 = a1;
  v27 = 17;
  v10 = (__int64 *)(v8 + 57008);
  if ( a2 == 8 && *v10 )
  {
    v5 = ExAcquireSpinLockExclusive(a1 + 4);
    goto LABEL_7;
  }
  memset_0((void *)a1, 0, 0xE8uLL);
  v11 = *((_DWORD *)v9 + 34);
  *((_QWORD *)v9 + 3) = a4;
  *((_DWORD *)v9 + 32) = v6;
  *((_DWORD *)v9 + 34) = v11 & 0xFFFFFFCF | 0x10;
  *((_DWORD *)v9 + 33) = a3;
  *((_QWORD *)v9 + 28) = v9 + 54;
  *((_QWORD *)v9 + 27) = v9 + 54;
  *((_QWORD *)v9 + 26) = 0LL;
  *((_QWORD *)v9 + 23) = 0LL;
  *((_QWORD *)v9 + 25) = MiReplenishSlabAllocatorWorker;
  if ( (_DWORD)v6 == 7 )
  {
    *((_DWORD *)v9 + 34) |= 0xCu;
    *((_QWORD *)v9 + 13) = 512LL;
  }
  v12 = v8 + 88 * v6 + 56192;
  *((_QWORD *)v9 + 10) = v12;
  *(_QWORD *)v12 = 0LL;
  *(_DWORD *)(v12 + 12) = 2;
  *(_QWORD *)(v12 + 16) = 0x3FFFFFFFFFLL;
  *(_QWORD *)(v12 + 24) = 0x3FFFFFFFFFLL;
  *(_DWORD *)(v12 + 32) = 0;
  if ( (_DWORD)v6 == 8 )
  {
LABEL_7:
    *((_DWORD *)v9 + 34) |= 4u;
    result = *v10;
    v27 = v5;
    if ( *v10 )
    {
      *((_QWORD *)v9 + 4) = result + 312000;
      *((_QWORD *)v9 + 5) = *v10 + 312512;
      v14 = 0LL;
      *((_QWORD *)v9 + 11) = *v10 + 313024;
      v15 = 65;
      v25 = 65;
      v16 = 65LL;
      do
      {
        v17 = (_QWORD *)(v14 + *((_QWORD *)v9 + 11));
        v14 += 16LL;
        v17[1] = v17;
        *v17 = v17;
        --v16;
      }
      while ( v16 );
      v18 = v9 + 16;
      *((_QWORD *)v9 + 8) = *(_QWORD *)(v8 + 57008);
      v19 = (__int64 *)(v9 + 18);
      result = *(_QWORD *)(v8 + 57008) + 266240LL;
      *((_QWORD *)v9 + 9) = result;
    }
    else
    {
      v15 = 0;
      v19 = (__int64 *)(v9 + 18);
      v25 = 0;
      v18 = v9 + 16;
    }
    v20 = 0;
    v28 = v18;
    if ( !v15 )
      goto LABEL_19;
    goto LABEL_15;
  }
  v19 = (__int64 *)(v9 + 18);
  v28 = v9 + 16;
  *((_QWORD *)v9 + 9) = v8 + 704 * v6 + 50560;
  *((_QWORD *)v9 + 8) = v8 + (v6 << 12) + 17792;
  v20 = 0;
  v25 = 1;
  do
  {
LABEL_15:
    v21 = 8LL;
    v22 = 704LL * v20;
    v23 = (unsigned __int64)v20 << 12;
    do
    {
      v24 = *v19;
      memset_0((void *)(v23 + *v28), -1, 0x200uLL);
      *(_QWORD *)(v22 + v24) = 0LL;
      v23 += 512LL;
      *(_DWORD *)(v22 + v24 + 12) = 2;
      *(_QWORD *)(v22 + v24 + 16) = 0x3FFFFFFFFFLL;
      *(_QWORD *)(v22 + v24 + 24) = 0x3FFFFFFFFFLL;
      *(_DWORD *)(v22 + v24 + 32) = 0;
      v22 += 88LL;
      --v21;
    }
    while ( v21 );
    result = ++v20;
  }
  while ( v20 < v25 );
  v9 = a1;
  v5 = v27;
LABEL_19:
  if ( v5 != 17 )
    return MiReleaseSpinLockExclusive((_DWORD *)v9 + 4, v5);
  return result;
}
