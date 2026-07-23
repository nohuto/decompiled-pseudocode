/*
 * XREFs of VfAvlInitializeTreeEx @ 0x140B85CD8
 * Callers:
 *     VfAvlInitializeTree @ 0x14060ECB4 (VfAvlInitializeTree.c)
 *     VfInitBootDriversLoaded @ 0x140C3D398 (VfInitBootDriversLoaded.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     RtlInitializeGenericTableAvl @ 0x140451510 (RtlInitializeGenericTableAvl.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall VfAvlInitializeTreeEx(
        _QWORD *TableContext,
        __int64 a2,
        int a3,
        void (__cdecl *a4)(_RTL_AVL_TABLE *, PVOID))
{
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  unsigned int MaximumProcessorCount; // eax
  __int64 Pool2; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rdi

  TableContext[1] = 0LL;
  *TableContext = a2;
  v6 = 32LL;
  if ( a3 || !ViAvlInitialized )
  {
    v8 = 16;
    if ( a3 )
      v8 = a3;
    v7 = v8 + 32;
  }
  else
  {
    v7 = 1;
  }
  *((_DWORD *)TableContext + 7) = v7;
  if ( a2 )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( MaximumProcessorCount < 0x40 )
    {
      if ( MaximumProcessorCount < 0x20 )
      {
        *((_DWORD *)TableContext + 6) = 16;
        v6 = 16LL;
      }
      else
      {
        *((_DWORD *)TableContext + 6) = 32;
      }
    }
    else
    {
      *((_DWORD *)TableContext + 6) = 64;
      v6 = 64LL;
    }
  }
  else
  {
    *((_DWORD *)TableContext + 6) = 1;
    v6 = 1LL;
  }
  Pool2 = ExAllocatePool2(0x40uLL, 192 * v6, 0x54416656uLL);
  TableContext[2] = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v12 = 0LL;
  if ( *((_DWORD *)TableContext + 6) )
  {
    v13 = 0LL;
    do
    {
      *(_QWORD *)(v13 + TableContext[2] + 104) = 0LL;
      *(_DWORD *)(v13 + TableContext[2] + 128) = 0;
      *(_QWORD *)(v13 + TableContext[2] + 112) = 0LL;
      *(_QWORD *)(v13 + TableContext[2] + 136) = 0LL;
      RtlInitializeGenericTableAvl(
        (PRTL_AVL_TABLE)(v13 + TableContext[2]),
        (PRTL_AVL_COMPARE_ROUTINE)ViAvlCompareNode,
        (PRTL_AVL_ALLOCATE_ROUTINE)ViAvlAllocateNode,
        a4,
        TableContext);
      ++v12;
      v13 += 192LL;
    }
    while ( v12 < *((unsigned int *)TableContext + 6) );
  }
  return 0LL;
}
