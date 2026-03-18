/*
 * XREFs of ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802B30A8
 * Callers:
 *     ?ProcessStateChanges@CCursorVisual@@QEAAX_K@Z @ 0x18029085C (-ProcessStateChanges@CCursorVisual@@QEAAX_K@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A3F60 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@0@@Z @ 0x1802B0918 (--$_Destroy_range@V-$allocator@V-$shared_ptr@VShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV-.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@1@PEAU01@@Z @ 0x1802B0BEC (--$_Freenode@V-$allocator@U-$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@-$_List_node@.c)
 *     ??$emplace_back@AEAV?$shared_ptr@VShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@VShapeData@CCursorState@@@1@@Z @ 0x1802B156C (--$emplace_back@AEAV-$shared_ptr@VShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@VShapeDa.c)
 *     ??$emplace_back@AEA_KPEAVIBitmapRealization@@AEA_NV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@?$list@UTrailPoint@CCursorState@@V?$allocator@UTrailPoint@CCursorState@@@std@@@std@@QEAA?A_TAEA_K$$QEAPEAVIBitmapRealization@@AEA_N$$QEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@Z @ 0x1802B15B0 (--$emplace_back@AEA_KPEAVIBitmapRealization@@AEA_NV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ??0?$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x1802B16CC (--0-$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1802B1ADC (--4-$shared_ptr@VShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802B269C (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?EnsureShapeRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x1802B2BB8 (-EnsureShapeRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 *     ?HideHardwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z @ 0x1802B2FFC (-HideHardwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802B3C48 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

char __fastcall CCursorState::ProcessStateChanges(CCursorState *this, __int64 a2)
{
  char v2; // si
  char v3; // bl
  char v6; // r13
  int v7; // xmm6_4
  int v8; // xmm7_4
  char v9; // dl
  char v10; // r8
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rsi
  CCursorState *v14; // rcx
  char v15; // r15
  char v16; // al
  unsigned __int64 v17; // rsi
  unsigned int v18; // ecx
  float v19; // xmm0_4
  unsigned __int8 v20; // eax^2
  int v21; // ecx
  int v22; // eax
  __int64 i; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __m128i v27; // xmm0
  float v28; // xmm2_4
  float v29; // xmm3_4
  __int64 v30; // rdx
  __int64 v31; // r8
  char v33; // [rsp+38h] [rbp-39h]
  char v34; // [rsp+39h] [rbp-38h]
  char v35; // [rsp+3Ah] [rbp-37h]
  __int64 v36; // [rsp+40h] [rbp-31h] BYREF
  std::_Ref_count_base *v37; // [rsp+48h] [rbp-29h]
  __int64 v38; // [rsp+50h] [rbp-21h] BYREF
  std::_Ref_count_base *v39[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v40; // [rsp+E0h] [rbp+6Fh] BYREF

  v40 = a2;
  v2 = *((_BYTE *)this + 113);
  v3 = 0;
  v34 = 0;
  v33 = v2;
  v35 = 0;
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(&v36, (_QWORD *)this + 22);
  v6 = *((_BYTE *)this + 81);
  v7 = *((_DWORD *)this + 53);
  v8 = *((_DWORD *)this + 54);
  EnterCriticalSection(&g_CursorManager);
  v9 = 0;
  v10 = 1;
  if ( *((_BYTE *)this + 23) )
  {
    std::shared_ptr<CCursorState::ShapeData>::operator=(&v36, (_QWORD *)this + 5);
    *(_OWORD *)v39 = 0LL;
    std::shared_ptr<CRegion>::operator=((_QWORD *)this + 5, (__int64 *)v39);
    v9 = 0;
    if ( v39[1] )
    {
      std::_Ref_count_base::_Decref(v39[1]);
      v9 = 0;
    }
    v11 = v36;
    v10 = 1;
    v3 = 1;
    v6 = *((_BYTE *)this + 20);
    *((_DWORD *)this + 42) = *((_DWORD *)this + 8);
    *((_BYTE *)this + 21) = 1;
    *((_BYTE *)this + 23) = 0;
    if ( !v11 )
    {
      v12 = *((_QWORD *)this + 12);
      v13 = *((_QWORD *)this + 11);
      if ( v13 != v12 )
      {
        do
        {
          *(_OWORD *)v39 = 0LL;
          std::shared_ptr<CRegion>::operator=((_QWORD *)(v13 + 112), (__int64 *)v39);
          v14 = v39[1];
          if ( v39[1] )
            std::_Ref_count_base::_Decref(v39[1]);
          CCursorState::HideHardwareShape(v14, (struct CCursorState::MonitorData *)v13);
          v13 += 160LL;
        }
        while ( v13 != v12 );
        v9 = 0;
        v10 = 1;
      }
      v2 = v33;
    }
  }
  else
  {
    v11 = v36;
  }
  v15 = v3;
  if ( !*((_BYTE *)this + 18) || !v11 || (v16 = 1, v6) )
    v16 = 0;
  *((_BYTE *)this + 113) = v16;
  if ( v3 || v16 != v2 )
  {
    *((_BYTE *)this + 114) = v16;
    v3 = 1;
  }
  if ( *((_BYTE *)this + 22) )
  {
    if ( v11 )
      v3 = 1;
    *((_DWORD *)this + 48) = *((_DWORD *)this + 7);
    *((_BYTE *)this + 22) = 0;
  }
  if ( *((_BYTE *)this + 21) )
  {
    v7 = *((_DWORD *)this + 14);
    v8 = *((_DWORD *)this + 15);
    v34 = *((_BYTE *)this + 19);
    if ( *((_BYTE *)this + 115) && (v11 || !IsEmpty((const struct D2D_RECT_F *)this + 8)) )
    {
      v35 = v10;
      v3 = v10;
    }
    else if ( *((_BYTE *)this + 112) != v9 )
    {
      v3 = v10;
    }
    *((_BYTE *)this + 21) = v9;
  }
  v17 = *((_QWORD *)this + 34) * *((int *)this + 6);
  if ( *((_BYTE *)this + 16) != v9 )
  {
    v18 = *((_DWORD *)this + 9);
    *((_BYTE *)this + 112) = *((_BYTE *)this + 17);
    *((_BYTE *)this + 16) = v9;
    *(float *)v39 = (float)(unsigned __int8)v18 / 255.0;
    v19 = (float)BYTE1(v18);
    v20 = BYTE2(v18);
    v21 = HIBYTE(v18);
    v22 = v20;
    if ( v11 )
      v3 = v10;
    *((float *)v39 + 1) = v19 / 255.0;
    *(float *)&v39[1] = (float)v22 / 255.0;
    *((float *)&v39[1] + 1) = (float)v21 / 255.0;
    *(_OWORD *)((char *)this + 196) = *(_OWORD *)v39;
  }
  LeaveCriticalSection(&g_CursorManager);
  if ( g_disableHardwareCursors )
  {
    for ( i = *((_QWORD *)this + 11); i != *((_QWORD *)this + 12); i += 160LL )
    {
      if ( *(_DWORD *)(i + 152) == 1 )
      {
        v3 = 1;
        break;
      }
    }
  }
  v24 = *((_QWORD *)this + 33);
  if ( v24 )
  {
    while ( 1 )
    {
      v24 = *((_QWORD *)this + 33);
      if ( !v24 )
        break;
      v25 = **((_QWORD **)this + 32);
      if ( a2 - *(_QWORD *)(v25 + 16) < v17 )
        break;
      v26 = *(_QWORD *)v25;
      *((_QWORD *)this + 33) = v24 - 1;
      **(_QWORD **)(v25 + 8) = v26;
      *(_QWORD *)(v26 + 8) = *(_QWORD *)(v25 + 8);
      std::_List_node<CCursorState::TrailPoint,void *>::_Freenode<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
        v26,
        (_QWORD *)v25);
    }
    v3 = 1;
  }
  if ( v34
    && *((_QWORD *)this + 22)
    && v17
    && (!v24
     || (unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 32) + 8LL) + 16LL)) >= *((_QWORD *)this + 34)) )
  {
    CCursorState::EnsureCompositionResources(this);
    v27 = _mm_loadu_si128((const __m128i *)this + 8);
    v28 = *((float *)this + 53);
    v29 = *((float *)this + 54);
    v38 = *((_QWORD *)this + 15);
    *(float *)v39 = *(float *)v27.m128i_i32 + v28;
    *(float *)&v39[1] = *(float *)&v27.m128i_i32[2] + v28;
    *((float *)v39 + 1) = *(float *)&v27.m128i_i32[1] + v29;
    *((float *)&v39[1] + 1) = *(float *)&v27.m128i_i32[3] + v29;
    std::list<CCursorState::TrailPoint>::emplace_back<unsigned __int64 &,IBitmapRealization *,bool &,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,MILMatrix3x2 &>(
      (__int64 *)this + 32,
      &v40,
      &v38,
      (char *)this + 81,
      (const __m128i *)v39,
      (__int128 *)this + 9);
    v3 = 1;
  }
  if ( *((_QWORD *)this + 33) )
    CCursorState::ScheduleCompositionPass(this);
  *((_DWORD *)this + 53) = v7;
  *((_DWORD *)this + 54) = v8;
  if ( v3 )
  {
    if ( v15 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
      *((_BYTE *)this + 115) = 0;
      v30 = *((_QWORD *)this + 29);
      if ( *((_QWORD *)this + 28) != v30 )
      {
        std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(*((_QWORD *)this + 28), v30);
        *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
      }
      std::shared_ptr<CRegion>::operator=((_QWORD *)this + 22, &v36);
      *((_BYTE *)this + 81) = v6;
      if ( *((_QWORD *)this + 22) )
        std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
          (__int64 *)this + 28,
          (__int64)this + 176,
          v31);
    }
    else
    {
      if ( *((_BYTE *)this + 113) == v33 )
      {
LABEL_64:
        CCursorState::EnsureShapeRectAndTransform(this, v35);
        if ( v37 )
          std::_Ref_count_base::_Decref(v37);
        return 1;
      }
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
      *((_BYTE *)this + 115) = 0;
    }
    ++*((_DWORD *)this + 62);
    goto LABEL_64;
  }
  if ( v37 )
    std::_Ref_count_base::_Decref(v37);
  return 0;
}
