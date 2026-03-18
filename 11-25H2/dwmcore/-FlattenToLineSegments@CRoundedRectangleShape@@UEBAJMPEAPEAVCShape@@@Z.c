/*
 * XREFs of ?FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x1800B2040
 * Callers:
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x1800B17D0 (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18005A1B0 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CRoundedRectangleShape@@SAPEAX_K@Z @ 0x1801D9EA0 (--2CRoundedRectangleShape@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@VSharedData@CRoundedRectangleShape@@@WRL@Microsoft@@IEBAXXZ @ 0x1801DE250 (-InternalAddRef@-$ComPtr@VSharedData@CRoundedRectangleShape@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CRoundedRectangleShape::FlattenToLineSegments(
        CRoundedRectangleShape *this,
        float a2,
        struct CShape **a3)
{
  __int64 v3; // rdx
  unsigned int v6; // edi
  unsigned __int64 v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  struct CShape *v10; // rax
  struct CShape *v11; // rsi
  int v13; // eax
  _OWORD v14[3]; // [rsp+30h] [rbp-48h] BYREF
  float v15; // [rsp+60h] [rbp-18h]
  int v16; // [rsp+64h] [rbp-14h]

  v3 = *((_QWORD *)this + 2);
  v6 = 0;
  if ( *(float *)(v3 + 64) > 0.0 )
  {
    v13 = CShape::CopyShape(this, 0LL, a3);
    v6 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x2BFu, 0LL);
  }
  else
  {
    v7 = (v3 + 16) & -(__int64)(v3 != 0);
    v8 = *(_OWORD *)(v7 + 0x10);
    v14[0] = *(_OWORD *)v7;
    v9 = *(_OWORD *)(v7 + 0x20);
    v14[1] = v8;
    v16 = HIDWORD(*(_QWORD *)(v7 + 0x30));
    v14[2] = v9;
    v15 = a2;
    v10 = (struct CShape *)CRoundedRectangleShape::operator new(v7);
    v11 = v10;
    if ( v10 )
    {
      *((_QWORD *)v10 + 1) = 0LL;
      *(_QWORD *)v10 = &CRoundedRectangleShape::`vftable';
      *((_QWORD *)v10 + 2) = CRoundedRectangleShape::SharedData::Create((const struct CRoundedRectangleGeometryData *)v14);
      Microsoft::WRL::ComPtr<CRoundedRectangleShape::SharedData>::InternalAddRef((char *)v11 + 16);
      *a3 = v11;
    }
    else
    {
      v6 = -2147024882;
      *a3 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2C8u, 0LL);
    }
  }
  return v6;
}
