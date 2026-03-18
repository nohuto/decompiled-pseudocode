/*
 * XREFs of KiInitializeProcessorXSaveStructures @ 0x1405B8BB4
 * Callers:
 *     KiCompleteKernelInit @ 0x140B55C50 (KiCompleteKernelInit.c)
 * Callees:
 *     ExInitializeSystemLookasideList @ 0x140B6E3BC (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KiInitializeProcessorXSaveStructures(__int64 a1)
{
  int v1; // eax
  __int16 v3; // si
  __int64 result; // rax
  void *v5; // rbx

  v1 = KiXStateContextLookasidePerProcMaxDepth;
  *(_QWORD *)(a1 + 2200) = &KiXStateContextLookasideList;
  v3 = 16;
  if ( v1 )
    v3 = v1;
  result = ExAllocatePool2(0x40uLL);
  v5 = (void *)result;
  if ( result )
    result = ExInitializeSystemLookasideList(
               result,
               512,
               MEMORY[0xFFFFF780000003E8] + 63,
               1281446744,
               v3,
               (__int64)&ExSystemLookasideListHead);
  else
    v5 = &KiXStateContextLookasideList;
  *(_QWORD *)(a1 + 2192) = v5;
  return result;
}
