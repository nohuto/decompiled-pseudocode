/*
 * XREFs of ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180169400
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18001BE40 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180038C40 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x1800FB0A0 (-Pop@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderM.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180169048 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x180169E50 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18016A364 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18016A418 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x18016A468 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?HasContent@CVisual@@UEBA_NXZ @ 0x18016A490 (-HasContent@CVisual@@UEBA_NXZ.c)
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18016A4A4 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x18016A5F0 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ??0CBspNode@@QEAA@_N@Z @ 0x18016A620 (--0CBspNode@@QEAA@_N@Z.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ @ 0x18016A664 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?HasContent@CSpriteVisual@@UEBA_NXZ @ 0x18016A750 (-HasContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18016A778 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18016A8E4 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ??1CBspPolygonListBuilder@@QEAA@XZ @ 0x1801E2AAC (--1CBspPolygonListBuilder@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBspPreComputeHelper::PreComputePostSubgraph(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        const struct CVisual *a3)
{
  unsigned int v3; // ebx
  _DWORD *v8; // rax
  int v9; // r15d
  int Count; // ebx
  bool v11; // r12
  struct CTreeEffect *(__fastcall *v12)(CLayerVisual *); // rax
  struct CTreeEffect *v13; // rax
  char v14; // r12
  bool v15; // r15
  struct CTreeEffect *(__fastcall *v16)(CLayerVisual *); // rax
  struct CTreeEffect *v17; // rax
  bool v18; // al
  int v19; // r15d
  bool (__fastcall *v20)(CVisual *__hidden); // rax
  bool HasContent; // al
  __int64 v22; // r8
  int v23; // eax
  __m128 *v24; // r9
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  int v29; // eax
  bool IsFacingUser; // al
  int v31; // ecx
  bool v32; // r13
  _DWORD *v33; // rax
  const struct CMILMatrix *TopByReference; // rax
  int v35; // ecx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  char *v39; // rax
  char v40; // bl
  unsigned int *v41; // r9
  __int64 v42; // r8
  int v43; // r10d
  int v44; // r11d
  int PolygonNoRef; // eax
  struct CPolygon *Ptr; // r12
  unsigned __int64 v47; // rcx
  CBspNode *v48; // rbx
  int v49; // eax
  CBspNode *v50; // rax
  int v51; // r9d
  int v52; // eax
  CSparseStorage::AllocatedStorage *v53; // rcx
  float v54; // xmm1_4
  int v55; // eax
  int v56; // eax
  bool v57; // r15
  struct CTreeEffect *(__fastcall *v58)(CLayerVisual *); // rax
  __int64 v59; // rax
  bool v60; // al
  int v61; // eax
  __int64 *v62; // rdx
  __int64 v63; // rdx
  int v64; // eax
  void *v65; // rdi
  HANDLE v66; // rax
  struct CEffect *v67; // rax
  struct CEffect *v68; // rax
  struct CEffect *EffectInternal; // rax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  unsigned int v81; // eax
  __int64 v82; // rcx
  void *v83; // r15
  HANDLE ProcessHeap; // rax
  int v85; // eax
  unsigned int v86; // [rsp+20h] [rbp-99h]
  char v87; // [rsp+60h] [rbp-59h]
  __int128 v88; // [rsp+70h] [rbp-49h] BYREF
  __int128 v89; // [rsp+80h] [rbp-39h]
  __m256i lpMem; // [rsp+90h] [rbp-29h] BYREF
  int v91; // [rsp+B0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+C0h] [rbp+7h] BYREF

  v3 = 0;
  if ( !*((_DWORD *)this + 20) )
    return v3;
  v8 = (_DWORD *)((char *)a3 + 112);
  if ( !a3 || *v8 != 1 )
  {
    if ( *((_DWORD *)a2 + 28) != 1 )
      return v3;
    v15 = a3 && *v8 == 1;
    v16 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *))(*(_QWORD *)a2 + 224LL);
    v17 = v16 == CLayerVisual::GetTreeEffect ? (struct CTreeEffect *)*((_QWORD *)a2 + 86) : v16(a2);
    v18 = 1;
    if ( !v17 )
    {
      if ( (**((_DWORD **)a2 + 29) & 0x800000) == 0
        || (EffectInternal = CVisual::GetEffectInternal(a2),
            !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 64LL))(
               EffectInternal,
               61LL)) )
      {
        v18 = 0;
      }
    }
    if ( v15 )
    {
      if ( !v18 )
        return v3;
    }
    else if ( !(unsigned int)CPtrArray<CVisual>::GetCount((_QWORD *)a2 + 10) )
    {
      return v3;
    }
    if ( !a3 || *((_DWORD *)a3 + 28) != 1 )
      goto LABEL_24;
  }
  v9 = *((_DWORD *)a2 + 28);
  Count = CPtrArray<CVisual>::GetCount((_QWORD *)a2 + 10);
  v11 = 0;
  if ( (**((_DWORD **)a2 + 29) & 0x800000) != 0 )
  {
    v68 = CVisual::GetEffectInternal(a2);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v68 + 64LL))(v68, 61LL) )
      v11 = 1;
  }
  v12 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *))(*(_QWORD *)a2 + 224LL);
  v13 = v12 == CLayerVisual::GetTreeEffect ? (struct CTreeEffect *)*((_QWORD *)a2 + 86) : v12(a2);
  if ( v9 != 1 && Count || v11 || v13 )
    v14 = 1;
  else
LABEL_24:
    v14 = 0;
  v19 = 0;
  v87 = v14;
  v20 = *(bool (__fastcall **)(CVisual *__hidden))(*(_QWORD *)a2 + 256LL);
  if ( v20 == CVisual::HasContent )
  {
    HasContent = CVisual::HasContent(a2);
  }
  else if ( v20 == CSpriteVisual::HasContent )
  {
    HasContent = CSpriteVisual::HasContent(a2);
  }
  else
  {
    HasContent = v20(a2);
  }
  if ( HasContent || v14 )
  {
    v23 = *((_DWORD *)this + 14);
    v24 = (__m128 *)&CMILMatrix::Identity;
    if ( v23 )
      v25 = (_OWORD *)(*((_QWORD *)this + 6) + 68LL * (unsigned int)(v23 - 1));
    else
      v25 = &CMILMatrix::Identity;
    v26 = v25[1];
    v88 = *v25;
    v27 = v25[2];
    v89 = v26;
    v28 = v25[3];
    v91 = *((_DWORD *)v25 + 16);
    v29 = *((_DWORD *)this + 20);
    *(_OWORD *)lpMem.m256i_i8 = v27;
    *(_OWORD *)&lpMem.m256i_u64[2] = v28;
    if ( v29 )
      v24 = (__m128 *)(*((_QWORD *)this + 9) + 68LL * (unsigned int)(v29 - 1));
    CMILMatrix::Multiply(v24, (const struct CMILMatrix *)&v88, (struct CMILMatrix *)&v88);
    IsFacingUser = CMILMatrix::IsFacingUser((CMILMatrix *)&v88);
    v31 = *((_DWORD *)this + 26);
    v32 = IsFacingUser;
    v33 = 0LL;
    if ( v31 )
      v33 = (_DWORD *)(*((_QWORD *)this + 12) + 4LL * (unsigned int)(v31 - 1));
    if ( v32 )
      goto LABEL_36;
    if ( *v33 == 1 && !v14 )
      goto LABEL_62;
    if ( !*v33 )
LABEL_36:
      LOBYTE(v19) = 1;
    TopByReference = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 72));
    v35 = *((_DWORD *)this + 56);
    v92.Ptr = 0LL;
    v36 = *((_OWORD *)TopByReference + 1);
    v88 = *(_OWORD *)TopByReference;
    v37 = *((_OWORD *)TopByReference + 2);
    v89 = v36;
    v38 = *((_OWORD *)TopByReference + 3);
    v91 = *((_DWORD *)TopByReference + 16);
    v39 = 0LL;
    *(_OWORD *)lpMem.m256i_i8 = v37;
    *(_OWORD *)&lpMem.m256i_u64[2] = v38;
    if ( v35 )
      v39 = (char *)(*((_QWORD *)this + 27) + (unsigned int)(v35 - 1));
    v40 = *v39;
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((char *)this + 192);
    PolygonNoRef = CVisual::GetPolygonNoRef(a2, &v88, v42, *v41, v42, v43, v44, (_BYTE)v19, v40, v14, &v92);
    Ptr = (struct CPolygon *)v92.Ptr;
    v19 = PolygonNoRef;
    if ( PolygonNoRef < 0 )
    {
      v86 = 444;
    }
    else
    {
      v48 = *(CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(this);
      if ( !v48 )
      {
        v49 = *((_DWORD *)this + 2);
        if ( v49 )
          *((_DWORD *)this + 2) = v49 - 1;
        v50 = (CBspNode *)CBspNode::operator new(v47);
        if ( !v50 || (v92.Ptr = (ULONGLONG)CBspNode::CBspNode(v50, v32), (v48 = (CBspNode *)v92.Ptr) == 0LL) )
        {
          v19 = -2147024882;
          v51 = -2147024882;
          v86 = 455;
LABEL_45:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, v86, 0LL);
LABEL_46:
          if ( Ptr )
            (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)Ptr + 8LL))(Ptr);
          v3 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x11Eu, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x180u, 0LL);
            return v3;
          }
          v14 = v87;
          goto LABEL_62;
        }
        v52 = CWatermarkStack<CBspNode *,64,2,10>::Push((int)this);
        v19 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0x1C9u, 0LL);
          goto LABEL_46;
        }
      }
      PolygonNoRef = CBspNode::PushPolygon(v48, Ptr, v32);
      v19 = PolygonNoRef;
      if ( PolygonNoRef >= 0 )
        goto LABEL_46;
      v86 = 460;
    }
    v51 = PolygonNoRef;
    goto LABEL_45;
  }
LABEL_62:
  v3 = v19;
  if ( *((_DWORD *)a2 + 28) != 1 )
  {
LABEL_63:
    if ( a3 && *((_DWORD *)a3 + 28) == 1 )
    {
      if ( (*((_BYTE *)a2 + 105) & 0x10) != 0 )
        CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((__int64)this + 216);
      v53 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)a2 + 28);
      if ( (*((_DWORD *)v53 + 1) & 0x8000000) != 0 )
        v54 = *((float *)CSparseStorage::AllocatedStorage::FindSlot(v53, 5) + 1);
      else
        v54 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v54 - 1.0) & _xmm) >= 0.0000011920929 )
        CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((__int64)this + 192);
      if ( (*((_DWORD *)a2 + 24) & 0x8000000) != 0 )
        CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((__int64)this + 168);
      if ( (*((_DWORD *)a2 + 24) & 0x4000000) != 0 )
        CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((__int64)this + 144);
      if ( (*((_DWORD *)a2 + 24) & 0x2000000) != 0 )
        CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((__int64)this + 120);
      if ( (*((_DWORD *)a2 + 24) & 0x20000000) != 0 )
        CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((__int64)this + 96);
      v55 = *((_DWORD *)this + 20);
      if ( v55 )
        *((_DWORD *)this + 20) = v55 - 1;
      v56 = *((_DWORD *)this + 62);
      if ( v56 )
        *((_DWORD *)this + 62) = v56 - 1;
    }
    return v3;
  }
  v57 = a3 && *((_DWORD *)a3 + 28) == 1;
  v58 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *))(*(_QWORD *)a2 + 224LL);
  if ( v58 == CLayerVisual::GetTreeEffect )
    v59 = *((_QWORD *)a2 + 86);
  else
    v59 = (__int64)v58(a2);
  v60 = 1;
  if ( !v59 )
  {
    if ( (**((_DWORD **)a2 + 29) & 0x800000) == 0
      || (v67 = CVisual::GetEffectInternal(a2),
          !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v67 + 64LL))(v67, 61LL)) )
    {
      v60 = 0;
    }
  }
  if ( v57 )
  {
    if ( !v60 )
      goto LABEL_63;
  }
  else if ( !(unsigned int)CPtrArray<CVisual>::GetCount((_QWORD *)a2 + 10) )
  {
    goto LABEL_63;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_P3D_BUILDING_BSPTREE_Stop,
      v22,
      1u,
      &v92);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_P3D_BUILDING_POLYGONLIST_Start,
        v22,
        1u,
        &v92);
  }
  v61 = *((_DWORD *)this + 2);
  v62 = 0LL;
  memset(&lpMem, 0, 24);
  HIDWORD(v89) = 1;
  DWORD1(v88) = 0;
  *((_QWORD *)&v88 + 1) = 0LL;
  *(_QWORD *)&v89 = 0LL;
  lpMem.m256i_i64[3] = (__int64)a2;
  if ( v61 )
    v62 = (__int64 *)(*(_QWORD *)this + 8LL * (unsigned int)(v61 - 1));
  v63 = *v62;
  if ( !v63 )
  {
LABEL_118:
    v70 = *((_DWORD *)this + 62);
    if ( v70 )
      *((_DWORD *)this + 62) = v70 - 1;
    v71 = *((_DWORD *)this + 56);
    if ( v71 )
      *((_DWORD *)this + 56) = v71 - 1;
    v72 = *((_DWORD *)this + 50);
    if ( v72 )
      *((_DWORD *)this + 50) = v72 - 1;
    v73 = *((_DWORD *)this + 44);
    if ( v73 )
      *((_DWORD *)this + 44) = v73 - 1;
    v74 = *((_DWORD *)this + 38);
    if ( v74 )
      *((_DWORD *)this + 38) = v74 - 1;
    v75 = *((_DWORD *)this + 32);
    if ( v75 )
      *((_DWORD *)this + 32) = v75 - 1;
    v76 = *((_DWORD *)this + 26);
    if ( v76 )
      *((_DWORD *)this + 26) = v76 - 1;
    v77 = *((_DWORD *)this + 20);
    if ( v77 )
      *((_DWORD *)this + 20) = v77 - 1;
    v78 = *((_DWORD *)this + 14);
    if ( v78 )
      *((_DWORD *)this + 14) = v78 - 1;
    v79 = *((_DWORD *)this + 8);
    if ( v79 )
      *((_DWORD *)this + 8) = v79 - 1;
    v80 = *((_DWORD *)this + 2);
    if ( v80 )
    {
      v81 = v80 - 1;
      *((_DWORD *)this + 2) = v81;
      v82 = *(_QWORD *)(*(_QWORD *)this + 8LL * v81);
      if ( v82 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 8LL))(v82);
    }
    if ( *((_DWORD *)this + 20) )
    {
      if ( v14 )
      {
        v85 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(this, a2, 1);
        v3 = v85;
        if ( v85 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v85, 0x195u, 0LL);
          CBspPolygonListBuilder::~CBspPolygonListBuilder((CBspPolygonListBuilder *)&v88);
          return v3;
        }
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_P3D_BUILDING_POLYGONLIST_Stop,
        v22,
        1u,
        &v92);
    v83 = (void *)lpMem.m256i_i64[0];
    if ( lpMem.m256i_i64[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v83);
    }
    goto LABEL_63;
  }
  *((_QWORD *)&v88 + 1) = v63;
  DWORD2(v89) = 0;
  v64 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(&v88, v63, v22, &v88);
  v3 = v64;
  if ( v64 >= 0 )
  {
    DWORD1(v88) = 0;
    *((_QWORD *)&v88 + 1) = 0LL;
    *(_QWORD *)&v89 = 0LL;
    lpMem.m256i_i32[2] = 0;
    CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize(&lpMem);
    goto LABEL_118;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v64, 0x2Eu, 0LL);
  DWORD1(v88) = 0;
  *((_QWORD *)&v88 + 1) = 0LL;
  *(_QWORD *)&v89 = 0LL;
  lpMem.m256i_i32[2] = 0;
  CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize(&lpMem);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x17u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x18Du, 0LL);
  v65 = (void *)lpMem.m256i_i64[0];
  if ( lpMem.m256i_i64[0] )
  {
    v66 = GetProcessHeap();
    HeapFree(v66, 0, v65);
  }
  return v3;
}
