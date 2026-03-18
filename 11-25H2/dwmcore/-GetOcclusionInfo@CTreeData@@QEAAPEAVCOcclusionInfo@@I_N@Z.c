/*
 * XREFs of ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x1800CC750
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800829B0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BA220 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z @ 0x1800CBAF0 (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x1800C33AC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ??1?$unique_ptr@VCVisualOcclusionInfo@@U?$default_delete@VCVisualOcclusionInfo@@@std@@@std@@QEAA@XZ @ 0x1800CC150 (--1-$unique_ptr@VCVisualOcclusionInfo@@U-$default_delete@VCVisualOcclusionInfo@@@std@@@std@@QEAA.c)
 *     ??$make_unique@VCVisualOcclusionInfo@@PEAVCVisual@@AEAI$0A@@std@@YA?AV?$unique_ptr@VCVisualOcclusionInfo@@U?$default_delete@VCVisualOcclusionInfo@@@std@@@0@$$QEAPEAVCVisual@@AEAI@Z @ 0x1800CC170 (--$make_unique@VCVisualOcclusionInfo@@PEAVCVisual@@AEAI$0A@@std@@YA-AV-$unique_ptr@VCVisualOcclu.c)
 *     ??$?4U?$default_delete@VCOcclusionInfo@@@std@@$0A@@?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CCD7C (--$-4U-$default_delete@VCOcclusionInfo@@@std@@$0A@@-$unique_ptr@VCOcclusionInfo@@U-$default_dele.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??$destruct_range@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@detail@@YAXPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@0@Z @ 0x1800CE5E0 (--$destruct_range@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@@.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x1801F36F0 (--$uninitialized_move@V-$move_iterator@PEAV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcc.c)
 *     ?AllocateOcclusionInfo@CWindowNode@@MEAA?AV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@I@Z @ 0x1801F8D00 (-AllocateOcclusionInfo@CWindowNode@@MEAA-AV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcc.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct COcclusionInfo *__fastcall CTreeData::GetOcclusionInfo(CTreeData *this, unsigned int a2, char a3)
{
  CSurfaceDrawListBrush **v3; // rax
  char v4; // r13
  CSurfaceDrawListBrush *v5; // r8
  CTreeData *v6; // rsi
  void *(__fastcall *v7)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int); // r11
  __int64 v8; // r15
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(); // rax
  CSurfaceDrawListBrush **v12; // rax
  CSurfaceDrawListBrush *v13; // rcx
  __int64 *v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 v17; // r14
  CSurfaceDrawListBrush *v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  void *(__fastcall ****v22)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int); // rdi
  void *(__fastcall ****v23)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int); // rbx
  __int64 v24; // rdx
  bool v25; // cc
  __int64 v26; // rsi
  void *(__fastcall ***v27)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int); // rax
  CSurfaceDrawListBrush *v28; // rcx
  void *(__fastcall *v29)(CWindowOcclusionInfo *__hidden, unsigned int); // rax
  void *(__fastcall ****v30)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int); // rbx
  void *(__fastcall ***v31)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int); // rcx
  void *(__fastcall *v32)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int); // rax
  __int64 v33; // rbx
  __int64 v34; // rsi
  void *(__fastcall ****v35)(CSurfaceDrawListBrush *__hidden, unsigned int); // rdi
  void *(__fastcall ****v36)(CSurfaceDrawListBrush *__hidden, unsigned int); // rbx
  void *(__fastcall ***v37)(CSurfaceDrawListBrush *__hidden, unsigned int); // rcx
  void *(__fastcall *v38)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  CSurfaceDrawListBrush *v39; // rax
  void *(__fastcall *v40)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // r9
  void *(__fastcall ****v43)(CSurfaceDrawListBrush *__hidden, unsigned int); // r12
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 *v46; // r10
  __int64 v47; // r11
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rdi
  void *v51; // rax
  __int64 v52; // r8
  __int64 v53; // rdx
  void *v54; // rbx
  char *v55; // rcx
  __int64 v56; // rax
  CSurfaceDrawListBrush *v57; // [rsp+28h] [rbp-39h] BYREF
  __int64 v58; // [rsp+30h] [rbp-31h] BYREF
  __int64 (__fastcall ***v59[2])(_QWORD, __int64); // [rsp+38h] [rbp-29h] BYREF
  __int128 v60; // [rsp+48h] [rbp-19h] BYREF
  __int64 v61; // [rsp+58h] [rbp-9h]
  __int128 v62; // [rsp+68h] [rbp+7h] BYREF
  __int64 v63; // [rsp+78h] [rbp+17h]
  CSurfaceDrawListBrush *v66; // [rsp+E0h] [rbp+7Fh] BYREF

  v3 = (CSurfaceDrawListBrush **)*((_QWORD *)this + 22);
  v4 = a3;
  v5 = 0LL;
  v6 = this;
  while ( 1 )
  {
    v7 = CMultiPrimitiveDrawListBrush::`vector deleting destructor';
    if ( v3 == *((CSurfaceDrawListBrush ***)this + 23) )
      goto LABEL_9;
    if ( *((_DWORD *)*v3 + 8) == a2 )
      break;
    ++v3;
  }
  v5 = *v3;
  if ( *v3 )
  {
LABEL_5:
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 31) + 24LL) + 888LL);
    if ( v4 || *((_QWORD *)v6 + 27) == v8 )
      return v5;
    goto LABEL_15;
  }
LABEL_9:
  if ( !v4 )
    goto LABEL_5;
  v10 = *((_QWORD *)this + 31);
  v11 = *(__int64 (__fastcall **)())(*(_QWORD *)v10 + 360LL);
  if ( v11 == CVisual::AllocateOcclusionInfo )
  {
    LODWORD(v66) = a2;
    v58 = v10;
    v12 = (CSurfaceDrawListBrush **)std::make_unique<CVisualOcclusionInfo,CVisual *,unsigned int &,0>(
                                      v59,
                                      &v58,
                                      (int *)&v66);
    v13 = *v12;
    *v12 = 0LL;
    v57 = v13;
    std::unique_ptr<CVisualOcclusionInfo>::~unique_ptr<CVisualOcclusionInfo>(v59);
  }
  else if ( (char *)v11 == (char *)CWindowNode::AllocateOcclusionInfo )
  {
    CWindowNode::AllocateOcclusionInfo(v10, &v57, a2);
  }
  else
  {
    ((void (__fastcall *)(__int64, CSurfaceDrawListBrush **, _QWORD))v11)(v10, &v57, a2);
  }
  v14 = (__int64 *)*((_QWORD *)v6 + 23);
  v15 = *((_QWORD *)v6 + 24);
  v8 = *((_QWORD *)v6 + 22);
  v66 = v57;
  v16 = ((__int64)v14 - v8) >> 3;
  if ( !((v15 - (__int64)v14) >> 3) )
  {
    if ( v16 + 1 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_15:
      *((_QWORD *)v6 + 27) = v8;
      v17 = *((_QWORD *)v6 + 22);
      if ( (unsigned __int64)((*((_QWORD *)v6 + 23) - v17) >> 3) <= 1 )
        return v5;
      while ( 1 )
      {
        while ( 1 )
        {
          v18 = v5;
          if ( v17 == *((_QWORD *)v6 + 23) )
            return v5;
          if ( *(CSurfaceDrawListBrush **)v17 != v5 )
          {
            v19 = *(_QWORD *)(*(_QWORD *)v17 + 16LL);
            if ( v19 )
            {
              if ( (unsigned __int64)(v8 - v19) >= 0xA )
                break;
            }
          }
LABEL_22:
          v17 += 8LL;
        }
        v20 = *((_QWORD *)v6 + 22);
        v17 = (v17 - v20) >> 3;
        v21 = (*((_QWORD *)v6 + 23) - v20) >> 3;
        v59[0] = (__int64 (__fastcall ***)(_QWORD, __int64))v17;
        if ( v17 + 1 > v21 )
        {
          std::_Xoverflow_error("overflow");
          __debugbreak();
          goto LABEL_22;
        }
        v22 = (void *(__fastcall ****)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int))(v20 + 8 * v21);
        v66 = v18;
        if ( v17 + 1 != v21 )
        {
          if ( v17 && (!v20 || v17 < 0 || v21 < v17) )
            goto LABEL_30;
          v23 = (void *(__fastcall ****)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int))(v20 + 8 * (v17 + 1));
          v24 = v22 - v23;
          v25 = v24 <= 0;
          if ( v24 < 0 )
          {
            if ( v17 < (unsigned __int64)-v24 )
              goto LABEL_30;
            v25 = v24 <= 0;
          }
          if ( !v25 && v21 - v17 < v24 )
LABEL_30:
            _invalid_parameter_noinfo_noreturn();
          v58 = v8;
          v66 = v18;
          v26 = 8 * v17 - 8 * (v17 + 1);
          while ( 1 )
          {
LABEL_35:
            if ( v23 == v22 )
            {
              v17 = (__int64)v59[0];
              v8 = v58;
              goto LABEL_45;
            }
            v27 = *v23;
            *v23 = 0LL;
            v28 = *(CSurfaceDrawListBrush **)((char *)v23 + v26);
            *(void *(__fastcall ****)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int))((char *)v23 + v26) = v27;
            if ( !v28 )
              goto LABEL_39;
            v29 = **(void *(__fastcall ***)(CWindowOcclusionInfo *__hidden, unsigned int))v28;
            if ( v29 == CWindowOcclusionInfo::`vector deleting destructor' )
              break;
            if ( v29 == CSurfaceDrawListBrush::`vector deleting destructor' )
            {
              CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1u);
              ++v23;
              v7 = CMultiPrimitiveDrawListBrush::`vector deleting destructor';
            }
            else
            {
              if ( v29 != v7 )
              {
                v29(v28, 1u);
                goto LABEL_39;
              }
              CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v28, 1u);
              ++v23;
              v7 = CMultiPrimitiveDrawListBrush::`vector deleting destructor';
            }
          }
          operator delete(v28, 0x38uLL);
LABEL_39:
          ++v23;
          v7 = CMultiPrimitiveDrawListBrush::`vector deleting destructor';
          goto LABEL_35;
        }
LABEL_45:
        v30 = v22 - 1;
        do
        {
          v31 = *v30;
          if ( *v30 )
          {
            v32 = **v31;
            if ( v32 == CWindowOcclusionInfo::`vector deleting destructor' )
            {
              operator delete(v31, 0x38uLL);
            }
            else if ( v32 == CSurfaceDrawListBrush::`vector deleting destructor' )
            {
              CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v31, 1u);
            }
            else if ( v32 == v7 )
            {
              CMultiPrimitiveDrawListBrush::`vector deleting destructor'((CMultiPrimitiveDrawListBrush *)v31, 1u);
            }
            else
            {
              v32((CMultiPrimitiveDrawListBrush *)v31, 1u);
            }
          }
          ++v30;
          v7 = CMultiPrimitiveDrawListBrush::`vector deleting destructor';
        }
        while ( v30 != v22 );
        v6 = this;
        *((_QWORD *)this + 23) -= 8LL;
        v7 = CMultiPrimitiveDrawListBrush::`vector deleting destructor';
        v5 = v66;
        v17 = *((_QWORD *)this + 22) + 8 * v17;
      }
    }
    v50 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)((v15 - v8) >> 3),
            (v15 - v8) >> 3,
            v16 + 1);
    v51 = operator new[](saturated_mul(v50, 8uLL));
    v52 = *((_QWORD *)v6 + 23);
    v53 = *((_QWORD *)v6 + 22);
    *(_QWORD *)&v60 = v51;
    v54 = v51;
    *((_QWORD *)&v60 + 1) = v16;
    v61 = 0LL;
    v62 = v60;
    v63 = 0LL;
    std::uninitialized_move<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>(
      &v60,
      v53,
      v52,
      &v62,
      v57,
      v58,
      v59[0]);
    detail::destruct_range<std::unique_ptr<COcclusionInfo>>(*((_QWORD *)v6 + 22), *((_QWORD *)v6 + 23));
    v55 = (char *)*((_QWORD *)v6 + 22);
    *((_QWORD *)v6 + 22) = v54;
    if ( v55 == (char *)v6 + 200 )
      v55 = 0LL;
    operator delete(v55);
    v8 = *((_QWORD *)v6 + 22);
    v14 = (__int64 *)(v8 + 8 * v16);
    *((_QWORD *)v6 + 23) = v14;
    *((_QWORD *)v6 + 24) = v8 + 8 * v50;
  }
  *((_QWORD *)&v60 + 1) = 1LL;
  v61 = 0LL;
  v41 = ((__int64)v14 - v8) >> 3;
  v63 = 0LL;
  v42 = v41 - v16;
  v43 = (void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))(v8 + 8 * v41);
  *(_QWORD *)&v60 = v43;
  if ( !v43 )
    goto LABEL_83;
  v63 = 1LL;
  v44 = (((__int64)v14 - v8) >> 3) - v16;
  if ( v42 > 1 )
    v44 = 1LL;
  v61 = 1LL;
  v45 = 8 * v44;
  v46 = &v14[v45 / 0xFFFFFFFFFFFFFFF8uLL];
  if ( v14 != &v14[v45 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v47 = v60;
    v48 = 1LL;
    v49 = v61;
    do
    {
      --v14;
      if ( !v47 )
        goto LABEL_83;
      if ( !v48 )
        goto LABEL_83;
      v48 = v49 - 1;
      v49 = v48;
      if ( v48 >= *((_QWORD *)&v60 + 1) )
        goto LABEL_83;
      v56 = *v14;
      *v14 = 0LL;
      *(_QWORD *)(v47 + 8 * v48) = v56;
    }
    while ( v14 != v46 );
  }
  if ( v42 <= 1 )
    goto LABEL_68;
  if ( v41 && (!v8 || v41 < 0) )
LABEL_83:
    _invalid_parameter_noinfo_noreturn();
  *((_QWORD *)&v60 + 1) = v41;
  v61 = v41;
  *(_QWORD *)&v60 = v8;
  v33 = v8 + 8 * (v41 - 1);
  v34 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
          &v60,
          -((__int64)(8 * (v41 - 1) - 8 * v16) >> 3))
      - v33;
  while ( v8 + 8 * v16 != v33 )
  {
    v33 -= 8LL;
    std::unique_ptr<COcclusionInfo>::operator=<std::default_delete<COcclusionInfo>,0>(v34 + v33, v33);
  }
  v6 = this;
LABEL_68:
  v35 = (void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))(v8 + 8 * (v16 + 1));
  v36 = (void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))(v8 + 8 * v16);
  if ( v43 < v35 )
    v35 = v43;
  if ( v36 != v35 )
  {
    do
    {
      v37 = *v36;
      if ( *v36 )
      {
        v38 = **v37;
        if ( v38 == CWindowOcclusionInfo::`vector deleting destructor' )
        {
          operator delete(v37, 0x38uLL);
        }
        else if ( v38 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v37, 1u);
        }
        else if ( v38 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
        {
          CMultiPrimitiveDrawListBrush::`vector deleting destructor'((CMultiPrimitiveDrawListBrush *)v37, 1u);
        }
        else
        {
          v38((CSurfaceDrawListBrush *)v37, 1u);
        }
      }
      ++v36;
    }
    while ( v36 != v35 );
    v4 = a3;
    v6 = this;
  }
  v39 = v57;
  *((_QWORD *)v6 + 23) += 8LL;
  v57 = 0LL;
  *(_QWORD *)(v8 + 8 * v16) = v39;
  if ( !v57 )
  {
    v5 = v66;
    v7 = CMultiPrimitiveDrawListBrush::`vector deleting destructor';
    goto LABEL_5;
  }
  v40 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v57;
  if ( v40 == CWindowOcclusionInfo::`vector deleting destructor' )
  {
    operator delete(v57, 0x38uLL);
    return v66;
  }
  else if ( v40 == CSurfaceDrawListBrush::`vector deleting destructor' )
  {
    CSurfaceDrawListBrush::`vector deleting destructor'(v57, 1u);
    return v66;
  }
  else
  {
    if ( v40 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v57, 1u);
    else
      v40(v57, 1u);
    return v66;
  }
}
