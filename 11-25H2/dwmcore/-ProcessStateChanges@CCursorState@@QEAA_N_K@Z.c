/*
 * XREFs of ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802BC708
 * Callers:
 *     ?ProcessStateChanges@CCursorVisual@@QEAAX_K@Z @ 0x18029A8FC (-ProcessStateChanges@CCursorVisual@@QEAAX_K@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180229D14 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x1802BA468 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV-.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@1@PEAU01@@Z @ 0x1802BA71C (--$_Freenode@V-$allocator@U-$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@-$_List_node@.c)
 *     ??$emplace_back@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@UShapeData@CCursorState@@@1@@Z @ 0x1802BB170 (--$emplace_back@AEAV-$shared_ptr@UShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@UShapeDa.c)
 *     ??$emplace_back@AEA_KPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@?$list@UTrailPoint@CCursorState@@V?$allocator@UTrailPoint@CCursorState@@@std@@@std@@QEAA?A_TAEA_K$$QEAPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@Z @ 0x1802BB1B4 (--$emplace_back@AEA_KPEAVIBitmapRealization@@AEA_NAEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x1802BB2BC (--0-$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1802BB668 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802BC170 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x1802BC2D4 (-EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802BD18C (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

char __fastcall CCursorState::ProcessStateChanges(CCursorState *this, __int64 a2)
{
  char v2; // r13
  char v5; // bl
  char v6; // r12
  char v7; // r15
  int v8; // xmm6_4
  int v9; // xmm7_4
  char v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  char v13; // al
  unsigned __int64 v14; // rsi
  unsigned int v15; // ecx
  float v16; // xmm0_4
  unsigned __int8 v17; // eax^2
  int v18; // ecx
  int v19; // eax
  __int64 i; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  bool v26; // zf
  __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v29; // [rsp+38h] [rbp-40h]
  std::_Ref_count_base *v30[2]; // [rsp+40h] [rbp-38h] BYREF
  char v31; // [rsp+C0h] [rbp+48h]
  __int64 v32; // [rsp+C8h] [rbp+50h] BYREF
  char v33; // [rsp+D0h] [rbp+58h]
  __int64 v34; // [rsp+D8h] [rbp+60h] BYREF

  v32 = a2;
  v2 = *((_BYTE *)this + 113);
  v31 = 0;
  v5 = 0;
  v6 = 0;
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(&v28, (_QWORD *)this + 22);
  v7 = *((_BYTE *)this + 81);
  v8 = *((_DWORD *)this + 53);
  v9 = *((_DWORD *)this + 54);
  EnterCriticalSection(&g_CursorManager);
  v10 = 1;
  if ( *((_BYTE *)this + 23) )
  {
    std::shared_ptr<CCursorState::ShapeData>::operator=(&v28, (_QWORD *)this + 5);
    *(_OWORD *)v30 = 0LL;
    std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)this + 5, (__int64 *)v30);
    if ( v30[1] )
      std::_Ref_count_base::_Decref(v30[1]);
    v11 = *((_DWORD *)this + 8);
    v10 = 1;
    v7 = *((_BYTE *)this + 20);
    v5 = 1;
    *((_BYTE *)this + 21) = 1;
    *((_DWORD *)this + 42) = v11;
    *((_BYTE *)this + 23) = 0;
  }
  v12 = v28;
  v33 = v5;
  if ( !*((_BYTE *)this + 18) || !v28 || (v13 = 1, v7) )
    v13 = 0;
  *((_BYTE *)this + 113) = v13;
  if ( v5 || v13 != v2 )
  {
    *((_BYTE *)this + 114) = v13;
    v5 = 1;
  }
  if ( *((_BYTE *)this + 22) )
  {
    if ( v12 )
      v5 = 1;
    *((_DWORD *)this + 48) = *((_DWORD *)this + 7);
    *((_BYTE *)this + 22) = 0;
  }
  if ( *((_BYTE *)this + 21) )
  {
    v8 = *((_DWORD *)this + 14);
    v9 = *((_DWORD *)this + 15);
    v6 = *((_BYTE *)this + 19);
    if ( *((_BYTE *)this + 115) && (v12 || !IsEmpty((const struct D2D_RECT_F *)this + 8)) )
    {
      v31 = v10;
      v5 = v10;
    }
    else if ( *((_BYTE *)this + 112) )
    {
      v5 = v10;
    }
    *((_BYTE *)this + 21) = 0;
  }
  v14 = *((_QWORD *)this + 34) * *((int *)this + 6);
  if ( *((_BYTE *)this + 16) )
  {
    v15 = *((_DWORD *)this + 9);
    *((_BYTE *)this + 112) = *((_BYTE *)this + 17);
    *((_BYTE *)this + 16) = 0;
    *(float *)v30 = (float)(unsigned __int8)v15 / 255.0;
    v16 = (float)BYTE1(v15);
    v17 = BYTE2(v15);
    v18 = HIBYTE(v15);
    v19 = v17;
    if ( v12 )
      v5 = v10;
    *((float *)v30 + 1) = v16 / 255.0;
    *(float *)&v30[1] = (float)v19 / 255.0;
    *((float *)&v30[1] + 1) = (float)v18 / 255.0;
    *(_OWORD *)((char *)this + 196) = *(_OWORD *)v30;
  }
  LeaveCriticalSection(&g_CursorManager);
  if ( g_disableHardwareCursors )
  {
    for ( i = *((_QWORD *)this + 11); i != *((_QWORD *)this + 12); i += 128LL )
    {
      if ( *(_BYTE *)(i + 124) )
      {
        v5 = 1;
        break;
      }
    }
  }
  v21 = *((_QWORD *)this + 33);
  if ( v21 )
  {
    while ( 1 )
    {
      v21 = *((_QWORD *)this + 33);
      if ( !v21 )
        break;
      v22 = **((_QWORD **)this + 32);
      if ( a2 - *(_QWORD *)(v22 + 16) < v14 )
        break;
      v23 = *(_QWORD *)v22;
      *((_QWORD *)this + 33) = v21 - 1;
      **(_QWORD **)(v22 + 8) = v23;
      *(_QWORD *)(v23 + 8) = *(_QWORD *)(v22 + 8);
      std::_List_node<CCursorState::TrailPoint,void *>::_Freenode<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
        v23,
        (_QWORD *)v22);
    }
    v5 = 1;
  }
  if ( v6
    && *((_QWORD *)this + 22)
    && v14
    && (!v21
     || (unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 32) + 8LL) + 16LL)) >= *((_QWORD *)this + 34)) )
  {
    CCursorState::EnsureCompositionResources(this);
    v34 = *((_QWORD *)this + 15);
    std::list<CCursorState::TrailPoint>::emplace_back<unsigned __int64 &,IBitmapRealization *,bool &,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> &,MILMatrix3x2 &>(
      (__int64 *)this + 32,
      &v32,
      &v34,
      (char *)this + 81,
      (const __m128i *)this + 8,
      (__int128 *)this + 9);
    v5 = 1;
  }
  if ( *((_QWORD *)this + 33) )
    CCursorState::ScheduleCompositionPass(this);
  *((_DWORD *)this + 53) = v8;
  *((_DWORD *)this + 54) = v9;
  if ( v5 )
  {
    if ( v33 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
      *((_BYTE *)this + 115) = 0;
      v24 = *((_QWORD *)this + 29);
      if ( *((_QWORD *)this + 28) != v24 )
      {
        std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(*((_QWORD *)this + 28), v24);
        *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
      }
      std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)this + 22, &v28);
      v26 = *((_QWORD *)this + 22) == 0LL;
      *((_BYTE *)this + 81) = v7;
      if ( !v26 )
        std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
          (__int64 *)this + 28,
          (__int64)this + 176,
          v25);
    }
    else
    {
      if ( *((_BYTE *)this + 113) == v2 )
      {
LABEL_56:
        CCursorState::EnsureDestRectAndTransform(this, v31);
        if ( v29 )
          std::_Ref_count_base::_Decref(v29);
        return 1;
      }
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
      *((_BYTE *)this + 115) = 0;
    }
    ++*((_DWORD *)this + 62);
    goto LABEL_56;
  }
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  return 0;
}
