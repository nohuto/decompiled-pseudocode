/*
 * XREFs of EtwpUpdateContextRegisterTraceEvents @ 0x1407A93F8
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 *     EtwpInitializeApcPool @ 0x140454140 (EtwpInitializeApcPool.c)
 *     EtwpPreallocateApcPool @ 0x1409CF784 (EtwpPreallocateApcPool.c)
 */

__int64 __fastcall EtwpUpdateContextRegisterTraceEvents(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 i; // rdx
  int UsedProcessorCount; // eax
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // eax
  int v11; // r9d
  __int64 v12; // rbx
  signed __int32 v14[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( a4 > 8 || a2 != 3 )
    return 3221225485LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v14[8] = i;
    if ( (unsigned int)i >= a4 )
      break;
    *(_WORD *)(a1 + 2 * i + 1288) = *(_WORD *)(a3 + 4 * i);
  }
  *(_DWORD *)(a1 + 1280) = a2;
  _InterlockedOr(v14, 0);
  *(_DWORD *)(a1 + 1284) = a4;
  if ( (*(_DWORD *)(a1 + 820) & 2) == 0 )
  {
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1, i);
    v9 = 4 * UsedProcessorCount;
    v10 = 16 * UsedProcessorCount;
    v11 = 16;
    if ( v9 < 0x10 )
      v9 = 16;
    v12 = v8 + 1088;
    if ( v10 >= 0x10 )
      v11 = v10;
    EtwpInitializeApcPool(v8 + 1088, a1, v9, v11);
    EtwpPreallocateApcPool(v12);
    _InterlockedOr((volatile signed __int32 *)(a1 + 820), 2u);
  }
  return 0LL;
}
