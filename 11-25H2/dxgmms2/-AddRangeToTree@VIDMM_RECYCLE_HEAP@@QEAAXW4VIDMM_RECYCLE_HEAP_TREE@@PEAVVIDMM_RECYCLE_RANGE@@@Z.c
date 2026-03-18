/*
 * XREFs of ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400ECDD8
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x14008F008 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C9138 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1400C99B0 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1400CAC40 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1400ECAA8 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400CAA50 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP::AddRangeToTree(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v6; // r8
  char v7; // bl
  ULONG_PTR v8; // r9
  ULONG_PTR v9; // rax
  _QWORD *v10; // r14
  struct _RTL_BALANCED_NODE *v11; // rdi
  struct _RTL_BALANCED_NODE *v12; // rax
  __int64 result; // rax
  struct _RTL_BALANCED_NODE *v14; // rax
  struct _RTL_BALANCED_NODE *v15; // rax
  ULONG_PTR v16[2]; // [rsp+30h] [rbp-38h] BYREF
  char v17; // [rsp+40h] [rbp-28h]

  v4 = a2;
  WdLogSingleEntry2(3LL, a3, a2);
  v7 = 0;
  v8 = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v9 = *(_QWORD *)(a3 + 56);
  WdLogGlobalForLineNumber = 8403;
  v16[0] = v8;
  v16[1] = v9;
  v17 = 0;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v10 = a1 + 7;
      v11 = (struct _RTL_BALANCED_NODE *)a1[7];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v16, v11) < 0 )
          {
            v14 = v11->Children[0];
            if ( !v11->Children[0] )
              break;
          }
          else
          {
            v14 = v11->Children[1];
            if ( !v14 )
              goto LABEL_8;
          }
          v11 = v14;
        }
      }
    }
    else
    {
      if ( (_DWORD)v4 != 2 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 13LL, v4, 0LL);
        WdLogGlobalForLineNumber = 195;
      }
      v10 = a1 + 8;
      v11 = (struct _RTL_BALANCED_NODE *)a1[8];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v16, v11) < 0 )
          {
            v15 = v11->Children[0];
            if ( !v11->Children[0] )
              break;
          }
          else
          {
            v15 = v11->Children[1];
            if ( !v15 )
            {
LABEL_8:
              v7 = 1;
              break;
            }
          }
          v11 = v15;
        }
      }
    }
  }
  else
  {
    v10 = a1 + 6;
    v11 = (struct _RTL_BALANCED_NODE *)a1[6];
    if ( v11 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v16, v11) < 0 )
        {
          v12 = v11->Children[0];
          if ( !v11->Children[0] )
            break;
        }
        else
        {
          v12 = v11->Children[1];
          if ( !v12 )
            goto LABEL_8;
        }
        v11 = v12;
      }
    }
  }
  LOBYTE(v6) = v7;
  result = RtlAvlInsertNodeEx(v10, v11, v6, a3);
  *(_DWORD *)(a3 + 88) = v4;
  return result;
}
