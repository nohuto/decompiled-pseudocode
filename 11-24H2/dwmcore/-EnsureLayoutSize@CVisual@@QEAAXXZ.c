/*
 * XREFs of ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x1801859C0
 * Callers:
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18003B380 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x18003B800 (-DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18001BE40 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800BF1FC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18010FDE0 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@_J@Z @ 0x180186518 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@_J@std@@YA-A_TAEAV-$.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180266EC0 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall CVisual::EnsureLayoutSize(CVisual *this)
{
  _BYTE *v1; // rbx
  __int64 v2; // r12
  CVisual **v3; // r8
  CVisual *v4; // r13
  char *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  HANDLE ProcessHeap; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r8
  SIZE_T v15; // r9
  unsigned __int64 v16; // r14
  SIZE_T v17; // rax
  LPVOID v18; // rax
  void *v19; // rbx
  void *v20; // rsi
  size_t v21; // rdi
  void *v22; // rax
  _BYTE *v23; // rax
  void *v24; // rcx
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  __int64 v27; // r11
  CVisual **v28; // rdi
  __int64 v29; // rcx
  CVisual **v30; // rax
  float v31; // xmm7_4
  float v32; // xmm4_4
  float v33; // xmm8_4
  float v34; // xmm5_4
  float v35; // xmm9_4
  float v36; // xmm10_4
  __int64 v37; // r9
  float v38; // xmm2_4
  float v39; // xmm3_4
  __int64 v40; // rax
  float v41; // xmm1_4
  float v42; // xmm0_4
  bool v43; // si
  char v44; // r14
  int *v45; // r8
  unsigned int v46; // edx
  _BYTE *v47; // rcx
  unsigned int i; // eax
  __int64 v49; // rcx
  _QWORD ***v50; // rsi
  _QWORD **v51; // rsi
  _QWORD *j; // r14
  int *v53; // r8
  unsigned int v54; // edx
  _BYTE *v55; // rcx
  unsigned int k; // eax
  __int64 v57; // rcx
  _QWORD ***v58; // rax
  _QWORD **v59; // rax
  _QWORD *m; // rcx
  __int64 v61; // rax
  int v62; // ecx
  int *v63; // r9
  __int128 v64; // [rsp+20h] [rbp-E0h]
  __int64 v65; // [rsp+20h] [rbp-E0h]
  __int128 v66; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B0h]
  void *Src; // [rsp+60h] [rbp-A0h]
  CVisual **v69; // [rsp+68h] [rbp-98h]
  char *v70; // [rsp+70h] [rbp-90h]
  _BYTE Mem[512]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v72; // [rsp+278h] [rbp+178h] BYREF

  v1 = Mem;
  v2 = 0LL;
  Src = Mem;
  v3 = (CVisual **)Mem;
  v4 = this;
  v69 = (CVisual **)Mem;
  v5 = (char *)&v72;
  v70 = (char *)&v72;
  if ( g_pComposition )
    v2 = *((_QWORD *)g_pComposition + 111);
  if ( this )
  {
    while ( 1 )
    {
      v6 = 1LL;
      if ( *((_QWORD *)v4 + 40) == v2 )
        break;
      v13 = ((char *)v3 - v1) >> 3;
      if ( !((v5 - (char *)v3) >> 3) )
      {
        v14 = v13 + 1;
        if ( v13 + 1 < v13 )
        {
          std::_Xoverflow_error("overflow");
          __debugbreak();
        }
        v16 = detail::liberal_expansion_policy::expand(this, (v5 - v1) >> 3, v14);
        v17 = 8 * v16;
        if ( !is_mul_ok(v16, 8uLL) )
          v17 = v15;
        v18 = operator new[](v17);
        v19 = Src;
        v20 = v18;
        *(_QWORD *)&v64 = v18;
        v21 = (char *)v69 - (_BYTE *)Src;
        *((_QWORD *)&v64 + 1) = v13;
        v66 = v64;
        v67 = 0LL;
        v22 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<D2D_POINT_2F *> &,__int64>(
                        &v66,
                        ((char *)v69 - (_BYTE *)Src) >> 3);
        memmove_0(v22, v19, v21);
        v23 = Src;
        v24 = 0LL;
        Src = v20;
        if ( v23 != Mem )
          v24 = v23;
        operator delete(v24);
        v1 = Src;
        v6 = 1LL;
        v3 = (CVisual **)((char *)Src + 8 * v13);
        v69 = v3;
        v70 = (char *)Src + 8 * v16;
      }
      v25 = ((char *)v3 - v1) >> 3;
      v26 = v25 - v13;
      v27 = 8 * v25;
      v28 = (CVisual **)&v1[8 * v25];
      if ( !v28 )
LABEL_33:
        _invalid_parameter_noinfo_noreturn();
      v29 = (((char *)v3 - v1) >> 3) - v13;
      if ( v26 > 1 )
        v29 = 1LL;
      this = (CVisual *)(8 * v29);
      v30 = (CVisual **)((char *)v3 - (char *)this);
      if ( v3 != (CVisual **)((char *)v3 - (char *)this) )
      {
        do
        {
          --v3;
          if ( !v6 )
            goto LABEL_33;
          if ( --v6 )
            goto LABEL_33;
          this = *v3;
          *v28 = *v3;
        }
        while ( v3 != v30 );
        v3 = v69;
      }
      if ( v26 > 1 )
      {
        if ( v25 && (!v1 || v25 < 0)
          || (__int64)(v27 - 8 * v13 - 8) >> 3 > 0 && v25 < (unsigned __int64)((__int64)(v27 - 8 * v13 - 8) >> 3)
          || (__int64)(v27 - 8 * v13 - 8) >> 3 < 0 )
        {
          goto LABEL_33;
        }
        memmove_0(&v1[8 * v13 + 8], &v1[8 * v13], v27 - 8 * v13 - 8);
        v3 = v69;
      }
      v69 = v3 + 1;
      *(_QWORD *)&v1[8 * v13] = v4;
      v4 = (CVisual *)*((_QWORD *)v4 + 11);
      v3 = v69;
      v1 = Src;
      if ( !v4 )
        break;
      v5 = v70;
    }
  }
  v7 = ((char *)v3 - v1) >> 3;
  v8 = (int)v7;
  if ( (int)v7 <= 0 )
    goto LABEL_6;
  do
  {
    v11 = *(_QWORD *)&v1[8 * v8 - 8];
    v12 = *(_QWORD *)(v11 + 88);
    if ( !v12 || (*(_BYTE *)(v12 + 96) & 1) != 0 )
    {
      v31 = *(float *)(v11 + 128);
      v32 = 0.0;
      v33 = *(float *)(v11 + 132);
      v34 = 0.0;
      v35 = *(float *)(v11 + 144);
      v36 = *(float *)(v11 + 148);
      if ( v12 )
      {
        v32 = *(float *)(v12 + 144);
        v34 = *(float *)(v12 + 148);
      }
      v37 = *(_QWORD *)(v11 + 224);
      if ( (*(_DWORD *)(v37 + 4) & 0x10000000) != 0 )
        v65 = *(_QWORD *)((char *)CSparseStorage::AllocatedStorage::FindSlot(
                                    *(CSparseStorage::AllocatedStorage **)(v11 + 224),
                                    4)
                        + 4);
      else
        v65 = 0LL;
      v38 = (float)(*(float *)&v65 * v32) + *(float *)(v11 + 116);
      v39 = (float)(*((float *)&v65 + 1) * v34) + *(float *)(v11 + 120);
      *(float *)(v11 + 128) = v38;
      *(float *)(v11 + 132) = v39;
      if ( (*(_DWORD *)(v37 + 4) & 0x20000000) != 0 )
      {
        v62 = *(_DWORD *)(v37 + 12);
        v63 = (int *)(v37 + 12);
        if ( (v62 & 0x7F000000) != 0x3000000 )
        {
          do
          {
            v63 = (int *)((char *)v63 + (v62 & 0xFFFFFF) + 4);
            v62 = *v63;
          }
          while ( (*v63 & 0x7F000000) != 0x3000000 );
        }
        v40 = *(_QWORD *)(v63 + 1);
      }
      else
      {
        v40 = 0LL;
      }
      v41 = (float)(*(float *)&v40 * v32) + *(float *)(v11 + 136);
      v42 = (float)(*((float *)&v40 + 1) * v34) + *(float *)(v11 + 140);
      *(float *)(v11 + 148) = v42;
      *(float *)(v11 + 144) = v41;
      if ( v41 < 0.0 )
      {
        *(_DWORD *)(v11 + 144) = 0;
        v41 = 0.0;
      }
      if ( v42 < 0.0 )
      {
        *(_DWORD *)(v11 + 148) = 0;
        v42 = 0.0;
      }
      v43 = v31 != v38 || v33 != v39;
      if ( v35 == v41 && v36 == v42 )
      {
        v44 = 0;
      }
      else
      {
        v61 = *(_QWORD *)(v11 + 248);
        v44 = 1;
        if ( v61 && *(_BYTE *)(v61 + 132) )
          CVisual::OnClipChanged((CVisual *)v11);
        CVisual::OnLayoutChanged((CVisual *)v11);
      }
      if ( v43 )
      {
        CTreeData::InvalidateWorldTransform((CTreeData *)(v11 + 328));
        v45 = *(int **)(v11 + 232);
        if ( *v45 < 0 )
        {
          v46 = v45[1];
          v47 = v45 + 2;
          for ( i = 0; i < v46; ++v47 )
          {
            if ( *v47 == 1 )
              break;
            ++i;
          }
          v49 = (unsigned int)v45[1];
          if ( i >= (unsigned int)v49 )
            v50 = 0LL;
          else
            v50 = (_QWORD ***)((char *)v45 + v49 + 8LL * i - (((_BYTE)v49 + 15) & 7) + 15);
          v51 = *v50;
          if ( v51 )
          {
            for ( j = *v51; j != v51; j = (_QWORD *)*j )
              CTreeData::InvalidateWorldTransform((CTreeData *)(j - 44));
          }
        }
        *(_BYTE *)(v11 + 465) = 1;
        v53 = *(int **)(v11 + 232);
        if ( *v53 < 0 )
        {
          v54 = v53[1];
          v55 = v53 + 2;
          for ( k = 0; k < v54; ++v55 )
          {
            if ( *v55 == 1 )
              break;
            ++k;
          }
          v57 = (unsigned int)v53[1];
          if ( k >= (unsigned int)v57 )
            v58 = 0LL;
          else
            v58 = (_QWORD ***)((char *)v53 + 8LL * k - (((_BYTE)v57 + 15) & 7) + v57 + 15);
          v59 = *v58;
          if ( v59 )
          {
            for ( m = *v59; m != v59; m = (_QWORD *)*m )
              *((_BYTE *)m - 215) = 1;
          }
        }
LABEL_69:
        *(_BYTE *)(v11 + 96) |= 1u;
        goto LABEL_14;
      }
      if ( v44 )
        goto LABEL_69;
    }
LABEL_14:
    --v8;
    *(_QWORD *)(v11 + 320) = v2;
    v1 = Src;
  }
  while ( v8 > 0 );
  v3 = v69;
LABEL_6:
  v9 = ((char *)v3 - v1) >> 3;
  if ( v9 )
    v69 = &v3[-v9];
  Src = 0LL;
  if ( v1 != Mem )
  {
    if ( v1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v1);
    }
  }
}
