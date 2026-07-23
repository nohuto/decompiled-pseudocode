/*
 * XREFs of HalpQueryAcpiResourceRequirements @ 0x1407002E8
 * Callers:
 *     HalpQueryResources @ 0x1406FCB70 (HalpQueryResources.c)
 *     HalpDispatchPnp @ 0x140A73220 (HalpDispatchPnp.c)
 * Callees:
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptGetIrtInfo @ 0x1406FB9E4 (HalpInterruptGetIrtInfo.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpQueryAcpiResourceRequirements(unsigned int **a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // ebp
  __int64 result; // rax
  unsigned int v9; // r14d
  unsigned int v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // ebp
  unsigned int *Pool2; // rax
  char *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+28h] [rbp-20h]

  v16 = 0LL;
  v17 = 0;
  v2 = HalpInterruptModel() - 1;
  if ( v2 && (v3 = v2 - 1) != 0 && (v4 = v3 - 1) != 0 && (v5 = v4 - 1) != 0 && v5 != 4092 )
  {
    v6 = 0;
    v7 = 0;
  }
  else
  {
    result = HalpInterruptGetIrtInfo((int *)&v16);
    if ( (int)result < 0 )
      return result;
    v7 = 205;
    v6 = 205 - HIDWORD(v16) / (unsigned int)HalQueryMaximumProcessorCount();
  }
  if ( SecondaryIcServicesEnabled )
  {
    v9 = v7;
    v10 = 256;
  }
  else
  {
    v9 = -1;
    v10 = 0;
  }
  v11 = v7 + v10 - v6;
  v12 = 32 * (v11 - 1) + 72;
  Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, v12, 0x416C6148u);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[2] = -1;
  *Pool2 = v12;
  Pool2[7] = 1;
  Pool2[1] = 15;
  Pool2[8] = 65537;
  Pool2[9] = v11;
  if ( v11 )
  {
    v14 = (char *)Pool2 + 42;
    v15 = v11;
    do
    {
      if ( v6 >= v9 && v6 < v10 )
        v6 = v10;
      *(_DWORD *)(v14 + 6) = v6;
      *(_DWORD *)(v14 + 10) = v6++;
      *(_WORD *)(v14 - 1) = 258;
      v14 += 32;
      --v15;
    }
    while ( v15 );
  }
  *a1 = Pool2;
  return 0LL;
}
