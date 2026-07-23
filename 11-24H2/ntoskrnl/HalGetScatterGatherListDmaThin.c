/*
 * XREFs of HalGetScatterGatherListDmaThin @ 0x1403FA7B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpConstructScatterGatherListDmaThin @ 0x1403FA980 (HalpConstructScatterGatherListDmaThin.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalGetScatterGatherListDmaThin(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 *v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // r9d
  int v14; // ecx
  __int64 *v15; // rdx
  __int64 v16; // r14
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // r10d
  __int64 *v20; // r11
  _DWORD *Pool2; // rax
  void *v22; // r14
  int v23; // edi
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // r10d
  _DWORD *v28; // rbx

  v7 = a3;
  v8 = a4 - *((unsigned int *)a3 + 11) - a3[4];
  do
  {
    v11 = *((unsigned int *)v7 + 10);
    if ( v8 < v11 )
      break;
    v7 = (__int64 *)*v7;
    v8 -= v11;
  }
  while ( v7 );
  if ( v7 )
  {
    v12 = 0LL;
    v13 = a5;
    v14 = v8;
    v15 = v7;
    if ( a5 )
    {
      v16 = 0LL;
      do
      {
        if ( !v15 )
          break;
        v17 = v13;
        if ( *((_DWORD *)v15 + 10) - v14 <= v13 )
          v17 = *((_DWORD *)v15 + 10) - v14;
        v18 = *((_DWORD *)v15 + 11) + v14;
        v19 = v18 & 0xFFF;
        v13 -= v17;
        v20 = &v15[((unsigned __int64)v18 >> 12) + 6];
        while ( v17 )
        {
          v24 = v19 + (*v20 << 12);
          v25 = 4096 - v19;
          v26 = v17;
          if ( v25 <= v17 )
            v26 = v25;
          if ( v24 != v16 + 1 || !(_DWORD)v12 )
            v12 = (unsigned int)(v12 + 1);
          v17 -= v26;
          ++v20;
          v16 = v24 + v26 - 1LL;
          v19 = 0;
        }
        v15 = (__int64 *)*v15;
        v14 = 0;
      }
      while ( v13 );
    }
    Pool2 = (_DWORD *)ExAllocatePool2(0x42uLL, 24 * v12 + 120, 0x446C6148u);
    v22 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v12;
      v28 = &Pool2[6 * v12];
      *((_BYTE *)v28 + 113) = 1;
      *((_QWORD *)v28 + 5) = a1;
      *((_QWORD *)v28 + 6) = a2;
      *((_QWORD *)v28 + 7) = *(_QWORD *)(a2 + 32);
      *((_QWORD *)v28 + 10) = a6;
      v28[19] = v8;
      *((_QWORD *)v28 + 11) = a7;
      v28[18] = a5;
      *((_QWORD *)v28 + 8) = v7;
      *((_QWORD *)v28 + 12) = Pool2;
      *((_BYTE *)v28 + 112) = 0;
      v28[8] = 2;
      *((_BYTE *)v28 + 114) = 0;
      *((_QWORD *)v28 + 13) = 0LL;
      v23 = HalpConstructScatterGatherListDmaThin(v28 + 4);
      if ( v23 < 0 && *((_BYTE *)v28 + 113) )
        ExFreePoolWithTag(v22, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v23;
}
