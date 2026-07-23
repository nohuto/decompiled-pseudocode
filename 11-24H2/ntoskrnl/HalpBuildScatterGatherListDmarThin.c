/*
 * XREFs of HalpBuildScatterGatherListDmarThin @ 0x140453AF8
 * Callers:
 *     HalBuildScatterGatherListDmarThinEx @ 0x140453880 (HalBuildScatterGatherListDmarThinEx.c)
 *     HalBuildScatterGatherListDmarThin @ 0x140453930 (HalBuildScatterGatherListDmarThin.c)
 *     HalGetScatterGatherListDmarThinEx @ 0x14054F4A0 (HalGetScatterGatherListDmarThinEx.c)
 * Callees:
 *     HalpGetNumberOfSGElementsDmarThin @ 0x140453CA4 (HalpGetNumberOfSGElementsDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x140453D00 (HalpConstructScatterGatherListDmarThin.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpBuildScatterGatherListDmarThin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        int a10,
        char *P,
        unsigned int a12,
        _QWORD *a13)
{
  __int64 *v13; // rbx
  unsigned __int64 v16; // rax
  unsigned int NumberOfSGElementsDmarThin; // eax
  __int64 v18; // rdi
  ULONG_PTR v19; // rdx
  char *Pool2; // rbp
  char *v21; // rdi
  int v22; // ebx

  v13 = a4;
  if ( !a4 )
    return (unsigned int)-1073741811;
  if ( a13 )
    *a13 = 0LL;
  while ( 1 )
  {
    v16 = *((unsigned int *)v13 + 10);
    if ( a5 < v16 )
      break;
    v13 = (__int64 *)*v13;
    a5 -= v16;
    if ( !v13 )
      return (unsigned int)-1073741811;
  }
  NumberOfSGElementsDmarThin = HalpGetNumberOfSGElementsDmarThin(v13, a5, a6);
  v18 = 3LL * NumberOfSGElementsDmarThin;
  v19 = 24LL * NumberOfSGElementsDmarThin + 120;
  if ( P )
  {
    if ( a12 < v19 )
      return (unsigned int)-1073741789;
    Pool2 = P;
  }
  else
  {
    Pool2 = (char *)ExAllocatePool2(0x42uLL, v19, 0x446C6148u);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
  }
  v21 = &Pool2[8 * v18 + 16];
  v21[97] = P == 0LL;
  *((_QWORD *)v21 + 3) = a1;
  *((_QWORD *)v21 + 4) = a2;
  *((_QWORD *)v21 + 5) = *(_QWORD *)(a2 + 32);
  *((_QWORD *)v21 + 8) = a8;
  *((_QWORD *)v21 + 9) = a9;
  *((_DWORD *)v21 + 15) = a5;
  *((_DWORD *)v21 + 14) = a6;
  *((_QWORD *)v21 + 6) = v13;
  *((_QWORD *)v21 + 10) = Pool2;
  v21[96] = a7 & 1;
  *((_DWORD *)v21 + 4) = 1;
  v21[98] = 0;
  *((_QWORD *)v21 + 11) = 0LL;
  if ( a3 )
  {
    *(_QWORD *)(a3 + 88) = v21;
    *((_QWORD *)v21 + 11) = a3 + 8;
  }
  v22 = HalpConstructScatterGatherListDmarThin(v21);
  if ( v22 < 0 )
  {
    if ( v21[97] )
      ExFreePoolWithTag(Pool2, 0);
  }
  else if ( a13 )
  {
    *a13 = Pool2;
  }
  return (unsigned int)v22;
}
