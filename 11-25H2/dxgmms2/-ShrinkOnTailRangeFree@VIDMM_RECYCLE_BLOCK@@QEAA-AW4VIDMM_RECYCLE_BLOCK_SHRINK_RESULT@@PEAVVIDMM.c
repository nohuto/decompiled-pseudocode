/*
 * XREFs of ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C69BC
 * Callers:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400C73F4 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z @ 0x1400EC7AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C802C (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CB37C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400ECCC0 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400ECF70 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(_QWORD *a1, struct VIDMM_RECYCLE_RANGE *a2)
{
  __int64 v2; // r14
  __int64 v3; // r9
  struct VIDMM_RECYCLE_RANGE *v4; // rsi
  __int64 v5; // rdi
  VIDMM_RECYCLE_HEAP_MGR *v7; // r12
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r13
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  char v13; // r14
  __int64 v15; // r11
  char v16; // r10
  __int64 v17; // r15
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  char v22; // r15
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v26; // rdx
  struct VIDMM_RECYCLE_RANGE *v27; // r14
  _QWORD *v28; // rcx
  char v29; // di
  __int64 v30; // r8
  struct VIDMM_RECYCLE_RANGE *v31; // rbp
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF
  __int64 v33; // [rsp+78h] [rbp+10h] BYREF

  v2 = a1[4];
  v3 = 1LL;
  v4 = a2;
  v5 = *((_QWORD *)a2 + 17);
  v7 = *(VIDMM_RECYCLE_HEAP_MGR **)(v2 + 8);
  if ( *a1 != 1LL )
  {
    if ( *(_DWORD *)v2 != 2 && *(_DWORD *)v2 != 1 )
      return 0LL;
    if ( (unsigned __int64)qword_1400812D8 <= 0x53333333 )
      v8 = dword_1400814E8;
    else
      v8 = dword_1400814D8;
    v9 = a1[6];
    v10 = a1[5];
    v11 = (unsigned int)(v8 << 20);
    v12 = a1[6] - v10;
    if ( v5 && v12 > v11 && *(_QWORD *)(v5 + 40) == v9 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      if ( !v5 && *((_QWORD *)a2 + 5) == v9 && v12 > v11 )
      {
        v21 = *((_QWORD *)a2 + 4);
        v32 = 0LL;
        goto LABEL_26;
      }
    }
    if ( !v13 )
      return 0LL;
    v15 = *(_QWORD *)(v5 + 64);
    v16 = 0;
    v17 = *(_QWORD *)(v5 + 72);
    v18 = v15;
    v32 = 0LL;
    while ( !v16 )
    {
      if ( *(_DWORD *)(v18 + 64) )
        return 0LL;
      if ( v18 == v17 )
      {
        v16 = 1;
      }
      else
      {
        v19 = *(_QWORD *)(v18 + 120);
        v20 = *(_QWORD *)(v18 + 72);
        v18 = 0LL;
        if ( v19 != v20 + 72 )
          v18 = v19 - 120;
      }
    }
    v21 = *(_QWORD *)(v15 + 32);
    v3 = 1LL;
LABEL_26:
    v32 = v21;
    v33 = v9 - v21;
    if ( v21 == v10 )
    {
      v22 = 1;
    }
    else
    {
      v22 = 0;
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      if ( (*((int (__fastcall **)(__int64, __int64 *, __int64 *, __int64))VirtualMemoryInterface + 2))(
             -1LL,
             &v32,
             &v33,
             0x8000LL) < 0 )
      {
        WdLogSingleEntry4(3LL, v32, a1);
        WdLogGlobalForLineNumber = 7472;
        return 0LL;
      }
      v3 = 1LL;
      a1[6] = v32;
    }
    if ( v13 )
    {
      v26 = *(unsigned int *)(v5 + 88);
      v4 = *(struct VIDMM_RECYCLE_RANGE **)(v5 + 64);
      v27 = *(struct VIDMM_RECYCLE_RANGE **)(v5 + 72);
      if ( (_DWORD)v26 == 2 || !g_IsInternalRelease )
      {
        VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(a1[4], v26, v5);
        VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v7, (struct VIDMM_RECYCLE_MULTIRANGE *)v5);
        v28 = (_QWORD *)*((_QWORD *)v4 + 16);
        v29 = 0;
        *v28 = a1 + 9;
        a1[10] = v28;
        while ( 1 )
        {
          v30 = *((_QWORD *)v4 + 15);
          v31 = 0LL;
          if ( v30 != *((_QWORD *)v4 + 9) + 72LL )
            v31 = (struct VIDMM_RECYCLE_RANGE *)(v30 - 120);
          if ( v4 == v27 )
            v29 = 1;
          VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v7, v4);
          if ( v29 )
            break;
          v4 = v31;
        }
        return (unsigned int)(v22 != 0) + 1;
      }
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
    else
    {
      v23 = *((unsigned int *)v4 + 22);
      if ( (_DWORD)v23 == 2 )
      {
LABEL_30:
        VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(a1[4], v23, v4, v3);
        v24 = (_QWORD *)*((_QWORD *)v4 + 16);
        *v24 = a1 + 9;
        a1[10] = v24;
        VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v7, v4);
        return (unsigned int)(v22 != 0) + 1;
      }
    }
    if ( g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = v3;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
      JUMPOUT(0x1400C6D9ALL);
    }
    goto LABEL_30;
  }
  if ( v5 )
  {
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(a1[4], 2LL, *((_QWORD *)a2 + 17));
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v7, (struct VIDMM_RECYCLE_MULTIRANGE *)v5);
  }
  else
  {
    WdLogSingleEntry2(3LL, a2, 2LL);
    WdLogGlobalForLineNumber = 8455;
    RtlAvlRemoveNode(v2 + 64, v4);
    *((_DWORD *)v4 + 22) = 3;
  }
  VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v7, v4);
  return 2LL;
}
