/*
 * XREFs of ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1400C99B0
 * Callers:
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400C8FDC (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 * Callees:
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CA8A0 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400CAA50 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CAB80 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1400CB188 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CB37C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1400CB4B4 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400ECDD8 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2,
        struct VIDMM_RECYCLE_MULTIRANGE *a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  struct VIDMM_RECYCLE_MULTIRANGE *v6; // rsi
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  char v10; // di
  char *v11; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *v12; // r8
  _QWORD *v13; // rcx
  unsigned __int64 v14; // r9
  _QWORD *v15; // r11
  unsigned __int64 v16; // r10
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // r8
  __int64 v20; // rax
  struct _RTL_BALANCED_NODE *v21; // rbx
  struct _RTL_BALANCED_NODE *v22; // rax
  char *v23; // rcx
  int v24; // r8d
  struct _RTL_BALANCED_NODE *v25; // rax
  struct _RTL_BALANCED_NODE *v26; // rax
  int v27; // edx
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  VIDMM_RECYCLE_MULTIRANGE *Multirange; // rax
  VIDMM_RECYCLE_MULTIRANGE *v34; // rbx
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD v39[2]; // [rsp+30h] [rbp-58h] BYREF
  char v40; // [rsp+40h] [rbp-48h]
  unsigned __int64 v41; // [rsp+98h] [rbp+10h]
  struct VIDMM_RECYCLE_MULTIRANGE *v43; // [rsp+A0h] [rbp+18h]

  v4 = *((_QWORD *)a2 + 5);
  v6 = a2;
  v7 = *((_QWORD *)a3 + 4);
  v8 = *((_QWORD *)a3 + 5);
  v9 = *((int *)a2 + 22);
  v41 = *((_QWORD *)a2 + 4);
  WdLogSingleEntry2(4LL, a2, v9);
  v10 = 0;
  WdLogGlobalForLineNumber = 8567;
  if ( (_DWORD)v9 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v11 = (char *)this + 56;
    }
    else
    {
      if ( (_DWORD)v9 != 2 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v9, 0LL);
        WdLogGlobalForLineNumber = 195;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 15LL, v9, 0LL);
        WdLogGlobalForLineNumber = 195;
        goto LABEL_73;
      }
      v11 = (char *)this + 64;
    }
  }
  else
  {
    v11 = (char *)this + 48;
  }
  RtlAvlRemoveNode(v11, v6);
  *((_DWORD *)v6 + 22) = 3;
  if ( v7 > v41 )
  {
    if ( v8 >= v4 )
    {
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(v6, *((_QWORD *)v6 + 4), v7);
      v12 = v6;
LABEL_8:
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, (unsigned int)v9, v12);
      return;
    }
    v3 = 0LL;
    v30 = *((_QWORD *)v6 + 5);
    v31 = *((_QWORD *)a3 + 9);
    v32 = *(_QWORD *)(v31 + 120);
    if ( v32 != *(_QWORD *)(v31 + 72) + 72LL )
      v3 = v32 - 120;
    v43 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v6 + 9);
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(v6, *((_QWORD *)v6 + 4), v7);
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, (unsigned int)v9, v6);
    Multirange = (VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                               *((_QWORD *)this + 1),
                                               *((unsigned int *)v6 + 50),
                                               *((_QWORD *)v6 + 10),
                                               v8,
                                               v30);
    v6 = v43;
    v34 = Multirange;
    if ( Multirange )
    {
      *((_QWORD *)Multirange + 8) = v3;
      *((_QWORD *)Multirange + 9) = v43;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(Multirange);
      v12 = v34;
      goto LABEL_8;
    }
    while ( 1 )
    {
LABEL_73:
      v35 = *(_DWORD *)(v3 + 64);
      if ( v35 )
      {
        v36 = v35 - 4;
        if ( v36 )
        {
          if ( v36 != 1 )
            goto LABEL_80;
          v37 = 1LL;
        }
        else
        {
          v37 = 0LL;
        }
      }
      else
      {
        v37 = 2LL;
      }
      VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v37, v3);
LABEL_80:
      if ( (struct VIDMM_RECYCLE_MULTIRANGE *)v3 == v6 )
        return;
      v38 = *(_QWORD *)(v3 + 120);
      if ( v38 == *(_QWORD *)(v3 + 72) + 72LL )
        v3 = 0LL;
      else
        v3 = v38 - 120;
    }
  }
  v13 = (_QWORD *)*((_QWORD *)v6 + 8);
  if ( v8 >= v4 )
  {
    while ( 1 )
    {
      v27 = *((_DWORD *)v6 + 50);
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 == 1 )
            v13[19] = 0LL;
        }
        else
        {
          v13[18] = 0LL;
        }
      }
      else
      {
        v13[17] = 0LL;
      }
      if ( v13 == *((_QWORD **)v6 + 9) )
        break;
      v29 = v13[15];
      if ( v29 == v13[9] + 72LL )
        v13 = 0LL;
      else
        v13 = (_QWORD *)(v29 - 120);
    }
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), v6);
    return;
  }
  v14 = *((_QWORD *)v6 + 5);
  v15 = (_QWORD *)*((_QWORD *)v6 + 9);
  while ( 1 )
  {
    v16 = v13[4];
    if ( v16 >= v14 || v13[5] <= v8 )
    {
      v18 = *((_DWORD *)v6 + 50);
      if ( v18 )
      {
        v24 = v18 - 1;
        if ( v24 )
        {
          if ( v24 == 1 )
            v13[19] = 0LL;
        }
        else
        {
          v13[18] = 0LL;
        }
      }
      else
      {
        v13[17] = 0LL;
      }
    }
    if ( v16 == v8 )
      *((_QWORD *)v6 + 8) = v13;
    if ( v13[5] == v14 )
      *((_QWORD *)v6 + 9) = v13;
    if ( v13 == v15 )
      break;
    v17 = v13[15];
    if ( v17 == v13[9] + 72LL )
      v13 = 0LL;
    else
      v13 = (_QWORD *)(v17 - 120);
  }
  *((_QWORD *)v6 + 4) = v8;
  *((_QWORD *)v6 + 5) = v14;
  *((_QWORD *)v6 + 6) = v8;
  WdLogSingleEntry2(4LL, v6, v9);
  v20 = *((_QWORD *)v6 + 7);
  v39[0] = *((_QWORD *)v6 + 5) - *((_QWORD *)v6 + 4);
  WdLogGlobalForLineNumber = 8517;
  v39[1] = v20;
  v40 = 0;
  if ( !(_DWORD)v9 )
  {
    v21 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
    if ( v21 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v39, v21) < 0 )
        {
          v26 = v21->Children[0];
          if ( !v21->Children[0] )
            break;
        }
        else
        {
          v26 = v21->Children[1];
          if ( !v26 )
          {
            v10 = 1;
            break;
          }
        }
        v21 = v26;
      }
    }
    v23 = (char *)this + 48;
    goto LABEL_32;
  }
  if ( (_DWORD)v9 == 1 )
  {
    v21 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
    if ( v21 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v39, v21) < 0 )
        {
          v25 = v21->Children[0];
          if ( !v21->Children[0] )
            break;
        }
        else
        {
          v25 = v21->Children[1];
          if ( !v25 )
          {
            v10 = 1;
            break;
          }
        }
        v21 = v25;
      }
    }
    v23 = (char *)this + 56;
    goto LABEL_32;
  }
  v21 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
  if ( !v21 )
    goto LABEL_31;
  while ( (int)VidMmCompareForInsertAlignedRange(v39, v21) < 0 )
  {
    v22 = v21->Children[0];
    if ( !v21->Children[0] )
      goto LABEL_31;
LABEL_27:
    v21 = v22;
  }
  v22 = v21->Children[1];
  if ( v22 )
    goto LABEL_27;
  v10 = 1;
LABEL_31:
  v23 = (char *)this + 64;
LABEL_32:
  LOBYTE(v19) = v10;
  RtlAvlInsertNodeEx(v23, v21, v19, v6);
  *((_DWORD *)v6 + 22) = v9;
}
