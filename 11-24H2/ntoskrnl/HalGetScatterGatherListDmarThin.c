/*
 * XREFs of HalGetScatterGatherListDmarThin @ 0x1404539B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetNumberOfSGElementsDmarThin @ 0x140453CA4 (HalpGetNumberOfSGElementsDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x140453D00 (HalpConstructScatterGatherListDmarThin.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalGetScatterGatherListDmarThin(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 *v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v11; // rax
  unsigned int NumberOfSGElementsDmarThin; // eax
  __int64 v13; // rsi
  __int64 Pool2; // rax
  void *v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // ebx

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
    NumberOfSGElementsDmarThin = HalpGetNumberOfSGElementsDmarThin(v7, v8, a5);
    v13 = 3LL * NumberOfSGElementsDmarThin;
    Pool2 = ExAllocatePool2(0x42uLL, 24LL * NumberOfSGElementsDmarThin + 120, 0x446C6148u);
    v15 = (void *)Pool2;
    if ( Pool2 )
    {
      v16 = Pool2 + 8 * v13;
      *(_BYTE *)(v16 + 113) = 1;
      *(_QWORD *)(v16 + 40) = a1;
      *(_QWORD *)(v16 + 48) = a2;
      v17 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(v16 + 104) = 0LL;
      *(_QWORD *)(v16 + 56) = v17;
      *(_QWORD *)(v16 + 80) = a6;
      *(_QWORD *)(v16 + 88) = a7;
      *(_DWORD *)(v16 + 72) = a5;
      *(_QWORD *)(v16 + 64) = v7;
      *(_DWORD *)(v16 + 76) = v8;
      *(_QWORD *)(v16 + 96) = v15;
      *(_BYTE *)(v16 + 112) = 0;
      *(_DWORD *)(v16 + 32) = 1;
      *(_BYTE *)(v16 + 114) = 0;
      v18 = HalpConstructScatterGatherListDmarThin(v16 + 16);
      if ( v18 < 0 && *(_BYTE *)(v16 + 113) )
        ExFreePoolWithTag(v15, 0);
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
  return (unsigned int)v18;
}
