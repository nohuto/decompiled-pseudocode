/*
 * XREFs of ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x1802BD8E8
 * Callers:
 *     ?TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@_N@Z @ 0x18029ACB8 (-TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801B3BAC (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180229D14 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAPEAUMonitorData@CCursorState@@QEAU23@$$QEAU23@@Z @ 0x1802BA5E0 (--$_Emplace_reallocate@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$alloca.c)
 *     ??0MonitorData@CCursorState@@QEAA@$$QEAU01@@Z @ 0x1802BB410 (--0MonitorData@CCursorState@@QEAA@$$QEAU01@@Z.c)
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x1802BC558 (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 *     ?FindMonitorData@CCursorState@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@std@@U_LUID@@I@Z @ 0x1802BC5C8 (-FindMonitorData@CCursorState@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UMonito.c)
 *     ?GetScaleAndRotation@CCursorState@@CA_NAEBVCMILMatrix@@PEAMPEAW4DXGI_MODE_ROTATION@@@Z @ 0x1802BC608 (-GetScaleAndRotation@CCursorState@@CA_NAEBVCMILMatrix@@PEAMPEAW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x1802BDBC4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 *     ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x1802BDDAC (-UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z.c)
 */

bool __fastcall CCursorState::TryEnableHardwareCursor(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int128 *a4,
        struct CMILMatrix *a5,
        char a6)
{
  struct CCursorState::MonitorData *v10; // rbx
  __int64 v11; // rcx
  __int128 v12; // xmm1
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  float v17; // xmm2_4
  enum DXGI_MODE_ROTATION v18; // r14d
  CCursorState *v19; // rcx
  int v20; // eax
  int v21; // edi
  __int64 *Shape; // rax
  bool v23; // zf
  bool v24; // bl
  float v26; // [rsp+30h] [rbp-99h] BYREF
  enum DXGI_MODE_ROTATION v27; // [rsp+34h] [rbp-95h] BYREF
  struct CCursorState::MonitorData *v28[2]; // [rsp+38h] [rbp-91h] BYREF
  __int64 v29; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-71h]
  int v31; // [rsp+90h] [rbp-39h]
  __int64 v32; // [rsp+9Ch] [rbp-2Dh]
  __int64 v33; // [rsp+A4h] [rbp-25h]
  int v34; // [rsp+ACh] [rbp-1Dh]
  std::_Ref_count_base *v35[2]; // [rsp+B0h] [rbp-19h]
  int v36; // [rsp+C8h] [rbp-1h]
  __int16 v37; // [rsp+CCh] [rbp+3h]

  EnterCriticalSection(&g_CursorManager);
  v26 = 0.0;
  v27 = DXGI_MODE_ROTATION_UNSPECIFIED;
  CCursorState::FindMonitorData(a1, v28, a2, a3);
  v10 = v28[0];
  if ( v28[0] == *(struct CCursorState::MonitorData **)(a1 + 96) )
  {
    v11 = *(_QWORD *)(a1 + 96);
    v29 = a2;
    v30 = a3;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0;
    *(_OWORD *)v35 = 0LL;
    v36 = 0;
    v37 = 0;
    if ( v11 == *(_QWORD *)(a1 + 104) )
    {
      std::vector<CCursorState::MonitorData>::_Emplace_reallocate<CCursorState::MonitorData>(
        (__int64 *)(a1 + 88),
        v11,
        (__int64)&v29);
    }
    else
    {
      CCursorState::MonitorData::MonitorData(v11, (__int64)&v29);
      *(_QWORD *)(a1 + 96) += 128LL;
    }
    if ( v35[1] )
      std::_Ref_count_base::_Decref(v35[1]);
    v10 = (struct CCursorState::MonitorData *)(*(_QWORD *)(a1 + 96) - 128LL);
  }
  v12 = *((_OWORD *)a5 + 1);
  v13 = *((_DWORD *)a5 + 16);
  *(_OWORD *)((char *)v10 + 12) = *(_OWORD *)a5;
  v14 = *((_OWORD *)a5 + 2);
  *(_OWORD *)((char *)v10 + 28) = v12;
  v15 = *((_OWORD *)a5 + 3);
  *(_OWORD *)((char *)v10 + 44) = v14;
  v16 = *a4;
  *(_OWORD *)((char *)v10 + 60) = v15;
  *((_DWORD *)v10 + 19) = v13;
  *((_OWORD *)v10 + 5) = v16;
  *((_BYTE *)v10 + 125) = a6;
  v17 = *(float *)(a1 + 192);
  if ( COERCE_FLOAT(LODWORD(v17) & _xmm) >= 0.0000011920929 )
  {
    v28[0] = 0LL;
    v31 = 0;
    LODWORD(v28[1]) = 1065353216;
    CMILMatrix::SetRotation((CMILMatrix *)&v29, (const struct Windows::Foundation::Numerics::float3 *)v28, v17);
    CMILMatrix::Multiply(a5, (const struct CMILMatrix *)&v29);
  }
  if ( g_disableHardwareCursors || !CCursorState::GetScaleAndRotation(a5, &v26, &v27) )
  {
    *(_OWORD *)v28 = 0LL;
    std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)v10 + 12, (__int64 *)v28);
    v19 = v28[1];
    if ( v28[1] )
      std::_Ref_count_base::_Decref(v28[1]);
    *((_DWORD *)v10 + 30) = 0;
  }
  else
  {
    v18 = v27;
    v19 = (CCursorState *)*(unsigned int *)(*(_QWORD *)(a1 + 176) + 12LL);
    v20 = *(_DWORD *)(a1 + 248);
    v26 = (float)((float)(v26 / *(float *)(a1 + 168)) * (float)(int)v19) + 6291456.25;
    v21 = (int)(LODWORD(v26) << 10) >> 11;
    if ( *((_DWORD *)v10 + 30) != v20 || *((_DWORD *)v10 + 28) != v21 || *((_DWORD *)v10 + 29) != v27 )
    {
      Shape = (__int64 *)CCursorState::TryGetShape(a1, (unsigned int)v28, v21, v27, *(_BYTE *)(a1 + 113));
      std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)v10 + 12, Shape);
      v19 = v28[1];
      if ( v28[1] )
        std::_Ref_count_base::_Decref(v28[1]);
      if ( *((_QWORD *)v10 + 12) )
        CCursorState::UpdateHardwareCursorOverlay((CCursorState *)a1, v10, 1);
      *((_DWORD *)v10 + 30) = *(_DWORD *)(a1 + 248);
      *((_DWORD *)v10 + 28) = v21;
      *((_DWORD *)v10 + 29) = v18;
    }
  }
  v23 = *((_QWORD *)v10 + 12) == 0LL;
  if ( !*((_QWORD *)v10 + 12) )
  {
    CCursorState::EnsureHardwareOverlayCleared(v19, v10);
    v23 = *((_QWORD *)v10 + 12) == 0LL;
  }
  v24 = !v23;
  LeaveCriticalSection(&g_CursorManager);
  return v24;
}
