/*
 * XREFs of ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801525DC
 * Callers:
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x180072170 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?ClipRectAndEdgeFlags@@YA?AW4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@W41@01PEAU2@PEAW41@@Z @ 0x180152340 (-ClipRectAndEdgeFlags@@YA-AW4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@W41@01PEAU2@PEAW41@@Z.c)
 *     ?HasAntialiasEdgeFlags@@YA_NW4D2D1_EDGE_FLAGS@@@Z @ 0x1801528A0 (-HasAntialiasEdgeFlags@@YA_NW4D2D1_EDGE_FLAGS@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180152900 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x18016E700 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801B3A00 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertWARP(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  bool v6; // zf
  unsigned int v8; // esi
  bool v9; // r14
  int appended; // eax
  int v12; // eax
  CCpuClip *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+20h] [rbp-E0h]
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+48h] [rbp-B8h] BYREF
  struct CShape *v22; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v23[64]; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+A0h] [rbp-60h]
  _BYTE v25[72]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v26; // [rsp+F8h] [rbp-8h] BYREF

  v4 = 0;
  v6 = *((_DWORD *)this + 3) == 1;
  v21 = *(_OWORD *)a2;
  if ( v6 )
    v8 = 0;
  else
    v8 = *((_DWORD *)a2 + 4);
  v9 = 0;
  v20 = v8;
  if ( (_BYTE)a4 )
  {
    v13 = (CCpuClip *)*((_QWORD *)this + 2);
    v22 = 0LL;
    v24 = 0;
    v14 = CCpuClip::ResolveClip(v13, &v22, (struct CMILMatrix *)v23);
    v4 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x286u, 0LL);
      return v4;
    }
    if ( *((_BYTE *)this + 4489) )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)v25, (const struct D2D_MATRIX_3X2_F *)((char *)this + 32));
      CMILMatrix::Multiply((CMILMatrix *)v23, (const struct CMILMatrix *)v25);
    }
    v26 = 0LL;
    v15 = (*(__int64 (__fastcall **)(struct CShape *, __int128 *, _BYTE *))(*(_QWORD *)v22 + 48LL))(v22, &v26, v23);
    v4 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x28Fu, 0LL);
      return v4;
    }
    v16 = ClipRectAndEdgeFlags(
            (__int64)&v21,
            v8,
            (__int64)&v26,
            *(_DWORD *)(*((_QWORD *)this + 2) + 100LL) != 1 ? 0x3030303 : 0,
            &v21,
            &v20);
    v8 = v20;
    v9 = v16 != 0;
  }
  if ( *((float *)&v21 + 2) > *(float *)&v21 && *((float *)&v21 + 3) > *((float *)&v21 + 1) )
  {
    if ( *((_BYTE *)this + 4491)
      && (float)((float)(*((float *)&v21 + 3) - *((float *)&v21 + 1)) * (float)(*((float *)&v21 + 2) - *(float *)&v21)) >= (float)CCommonRegistryData::MegaRectSize )
    {
      LOBYTE(a4) = 1;
      LOBYTE(v18) = 0;
      appended = CDrawListEntryBuilder::AppendReconstructableEntry(this, &v21, v8, a4, v18, a3, 1026);
      v4 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x2A8u, 0LL);
        return v4;
      }
      if ( (unsigned __int8)HasAntialiasEdgeFlags(v8) )
      {
        LOBYTE(v19) = 1;
        v17 = CDrawListEntryBuilder::AppendReconstructableEntry(this, &v21, v8, 0LL, v19, a3, 1024);
        v4 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x2B3u, 0LL);
          return v4;
        }
      }
    }
    else
    {
      LOBYTE(a4) = 1;
      LOBYTE(v18) = 1;
      v12 = CDrawListEntryBuilder::AppendReconstructableEntry(this, &v21, v8, a4, v18, a3, 1024);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x2BEu, 0LL);
        return v4;
      }
    }
  }
  if ( v9 && **((_QWORD **)this + 2) )
    *((_BYTE *)this + 4488) = 1;
  return v4;
}
