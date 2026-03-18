/*
 * XREFs of ExpAllocatePoolWithTagFromNode @ 0x1402ACCF0
 * Callers:
 *     MiStoreGetWriteSupport @ 0x1402ABB24 (MiStoreGetWriteSupport.c)
 *     MiGetInPageAutoBoostLock @ 0x1402ABE68 (MiGetInPageAutoBoostLock.c)
 *     ExAllocatePoolWithTagFromNode @ 0x1402AC224 (ExAllocatePoolWithTagFromNode.c)
 *     CcFlushCachePriv @ 0x1402AC810 (CcFlushCachePriv.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402ACBC0 (ExAllocatePoolMm.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B72670 (ExpAllocatePoolWithQuotaTag.c)
 *     ExAllocatePool3 @ 0x140B746D0 (ExAllocatePool3.c)
 * Callees:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 */

__int64 __fastcall ExpAllocatePoolWithTagFromNode(
        ULONG_PTR BugCheckParameter2,
        size_t Size,
        ULONG_PTR BugCheckParameter4,
        int a4)
{
  unsigned int v4; // edi
  int v7; // r14d
  int v8; // ebx
  int v9; // r15d
  unsigned int v10; // eax
  __int64 result; // rax

  v4 = BugCheckParameter4;
  if ( a4 >= 0 )
    v7 = 1;
  else
    v7 = (unsigned __int16)KeNumberNodes;
  v8 = a4 & 0x7FFFFFFF;
  if ( a4 >= 0 )
    v8 = a4;
  v9 = 0;
  v10 = v8;
  while ( 1 )
  {
    result = ExAllocateHeapPool(BugCheckParameter2, Size, v4, v10);
    if ( result )
      break;
    if ( --v7 )
    {
      if ( ++v9 != (unsigned __int16)KeNumberNodes )
      {
        v10 = *(_DWORD *)(qword_140E2DAD0 + 4LL * (v9 + v8 * (unsigned int)(unsigned __int16)KeNumberNodes));
        if ( v10 != -1 )
          continue;
      }
    }
    ++ExPoolFailures;
    return 0LL;
  }
  return result;
}
