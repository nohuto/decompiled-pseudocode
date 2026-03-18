/*
 * XREFs of ?EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_NAEBVCMILMatrix@@@Z @ 0x1802B2818
 * Callers:
 *     ?UpdateHardwareCursor@COverlayContext@@AEAA_NXZ @ 0x18026D0CC (-UpdateHardwareCursor@COverlayContext@@AEAA_NXZ.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800F06F0 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18019F17C (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A3F60 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@VMonitorData@CCursorState@@@?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@AEAAPEAVMonitorData@CCursorState@@QEAV23@$$QEAV23@@Z @ 0x1802B0AA0 (--$_Emplace_reallocate@VMonitorData@CCursorState@@@-$vector@VMonitorData@CCursorState@@V-$alloca.c)
 *     ??0MonitorData@CCursorState@@QEAA@$$QEAV01@@Z @ 0x1802B1814 (--0MonitorData@CCursorState@@QEAA@$$QEAV01@@Z.c)
 *     ?FindMonitorData@CCursorState@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VMonitorData@CCursorState@@@std@@@std@@@std@@U_LUID@@I@Z @ 0x1802B2E40 (-FindMonitorData@CCursorState@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@VMonito.c)
 *     ?ForceSoftwareShape@CCursorState@@AEAA_NPEAVMonitorData@1@@Z @ 0x1802B2E80 (-ForceSoftwareShape@CCursorState@@AEAA_NPEAVMonitorData@1@@Z.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z @ 0x1802B47F4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4.c)
 */

char __fastcall CCursorState::EnsureMonitorData(
        CCursorState *this,
        __int64 a2,
        unsigned int a3,
        __int128 *a4,
        char a5,
        __int128 *a6)
{
  char v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rcx
  int Rotation; // edi
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  int v16; // eax
  float v17; // xmm2_4
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  CCursorState *v20; // rcx
  int v21; // eax
  float v22; // xmm0_4
  __int64 *Shape; // rax
  int v24; // edx
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+38h] [rbp-C8h]
  float v28; // [rsp+40h] [rbp-C0h]
  _OWORD v29[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+90h] [rbp-70h]
  _BYTE v31[64]; // [rsp+A0h] [rbp-60h] BYREF
  int v32; // [rsp+E0h] [rbp-20h]
  std::_Ref_count_base *v33[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v34; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v35; // [rsp+108h] [rbp+8h]
  __int64 v36; // [rsp+14Ch] [rbp+4Ch]
  __int64 v37; // [rsp+154h] [rbp+54h]
  int v38; // [rsp+15Ch] [rbp+5Ch]
  __int128 v39; // [rsp+160h] [rbp+60h]
  std::_Ref_count_base *v40[2]; // [rsp+170h] [rbp+70h]
  __int64 v41; // [rsp+18Ch] [rbp+8Ch]
  int v42; // [rsp+194h] [rbp+94h]
  int v43; // [rsp+198h] [rbp+98h]
  char v44; // [rsp+19Ch] [rbp+9Ch]

  v10 = 0;
  EnterCriticalSection(&g_CursorManager);
  CCursorState::FindMonitorData(this, &v26, a2, a3);
  v11 = v26;
  if ( v26 == *((_QWORD *)this + 12) )
  {
    v12 = *((_QWORD *)this + 12);
    v34 = a2;
    Rotation = 0;
    v35 = a3;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0;
    v39 = 0LL;
    *(_OWORD *)v40 = 0LL;
    v41 = 0LL;
    v42 = 0;
    v43 = 2;
    v44 = 0;
    if ( v12 == *((_QWORD *)this + 13) )
    {
      std::vector<CCursorState::MonitorData>::_Emplace_reallocate<CCursorState::MonitorData>(
        (__int64 *)this + 11,
        v12,
        (__int64)&v34);
    }
    else
    {
      CCursorState::MonitorData::MonitorData(v12, (__int64)&v34);
      *((_QWORD *)this + 12) += 160LL;
    }
    if ( v40[1] )
      std::_Ref_count_base::_Decref(v40[1]);
    v11 = *((_QWORD *)this + 12) - 160LL;
    v10 = 1;
  }
  else
  {
    Rotation = 0;
  }
  *(_OWORD *)(v11 + 12) = *a6;
  *(_OWORD *)(v11 + 28) = a6[1];
  *(_OWORD *)(v11 + 44) = a6[2];
  *(_OWORD *)(v11 + 60) = a6[3];
  *(_DWORD *)(v11 + 76) = *((_DWORD *)a6 + 16);
  v14 = *a4;
  *(_BYTE *)(v11 + 156) = a5;
  *(_OWORD *)(v11 + 80) = v14;
  *(_OWORD *)(v11 + 96) = *((_OWORD *)this + 8);
  if ( !*((_QWORD *)this + 22) )
  {
    if ( *(_QWORD *)(v11 + 112) )
    {
      *(_OWORD *)v33 = 0LL;
      std::shared_ptr<CRegion>::operator=((_QWORD *)(v11 + 112), (__int64 *)v33);
      if ( v33[1] )
        std::_Ref_count_base::_Decref(v33[1]);
      v10 = 1;
    }
    v24 = *((_DWORD *)this + 62);
    v26 = 0LL;
    *(_DWORD *)(v11 + 148) = v24;
    *(_QWORD *)(v11 + 132) = v26;
    goto LABEL_28;
  }
  v15 = *a6;
  v16 = *((_DWORD *)a6 + 16);
  v17 = *((float *)this + 48);
  v29[1] = a6[1];
  v18 = a6[3];
  v29[0] = v15;
  v19 = a6[2];
  v29[3] = v18;
  v29[2] = v19;
  v30 = v16;
  if ( COERCE_FLOAT(LODWORD(v17) & _xmm) >= 0.0000011920929 )
  {
    v26 = 0LL;
    v32 = 0;
    v27 = 1065353216;
    CMILMatrix::SetRotation((CMILMatrix *)v31, (const struct Windows::Foundation::Numerics::float3 *)&v26, v17);
    CMILMatrix::Multiply((CMILMatrix *)v29, (const struct CMILMatrix *)v31);
  }
  Rotation = CMILMatrix::GetRotation((CMILMatrix *)v29);
  if ( Rotation )
  {
    *(_OWORD *)v33 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v29, (const struct D2D_RECT_F *)this + 8, (float *)v33);
    v21 = *((_DWORD *)this + 62);
    v22 = (float)(*(float *)&v33[1] - *(float *)v33) + 6291456.25;
    LODWORD(v26) = (int)(LODWORD(v22) << 10) >> 11;
    v28 = (float)(*((float *)&v33[1] + 1) - *((float *)v33 + 1)) + 6291456.25;
    HIDWORD(v26) = (int)(LODWORD(v28) << 10) >> 11;
    if ( *(_DWORD *)(v11 + 148) != v21
      || *(_DWORD *)(v11 + 132) != (int)(LODWORD(v22) << 10) >> 11
      || *(_DWORD *)(v11 + 136) != (int)(LODWORD(v28) << 10) >> 11
      || *(_DWORD *)(v11 + 128) != Rotation )
    {
      Shape = (__int64 *)CCursorState::TryGetShape(this, *((_BYTE *)this + 113));
      std::shared_ptr<CRegion>::operator=((_QWORD *)(v11 + 112), Shape);
      if ( v33[1] )
        std::_Ref_count_base::_Decref(v33[1]);
      v10 = 1;
      *(_DWORD *)(v11 + 148) = *((_DWORD *)this + 62);
      *(_QWORD *)(v11 + 132) = v26;
LABEL_28:
      *(_DWORD *)(v11 + 128) = Rotation;
    }
  }
  else
  {
    if ( *(int *)(v11 + 152) >= 1 )
      CCursorState::ForceSoftwareShape(v20, (struct CCursorState::MonitorData *)v11);
    *(_DWORD *)(v11 + 148) = 0;
  }
  LeaveCriticalSection(&g_CursorManager);
  return v10;
}
