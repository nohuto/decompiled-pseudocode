/*
 * XREFs of ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B0F38
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B0E64 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800FB0BC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x1801B13E0 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1801B1434 (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x1801B1590 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 */

__int64 __fastcall CComposeTop::AddNewContent(
        CComposeTop *this,
        struct IBitmapResource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  struct CShape *v13; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  if ( !ShapeBoundsEmpty(a3) )
  {
    if ( *(CGlobalComposition **)this != GetCurrentFrameId() )
    {
      std::unique_ptr<CShape>::reset((char *)this + 16, 0LL);
      *(_QWORD *)this = GetCurrentFrameId();
    }
    v13 = 0LL;
    v9 = CShape::CopyShape(a3, 0LL, &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x33u, 0LL);
    }
    else
    {
      std::unique_ptr<CShape>::reset((char *)this + 16, v13);
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=((char *)this + 8, a2);
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)a4;
      *(_OWORD *)((char *)this + 40) = *((_OWORD *)a4 + 1);
      *(_OWORD *)((char *)this + 56) = *((_OWORD *)a4 + 2);
      *(_OWORD *)((char *)this + 72) = *((_OWORD *)a4 + 3);
      *((_DWORD *)this + 22) = *((_DWORD *)a4 + 16);
      *(_OWORD *)((char *)this + 92) = *(_OWORD *)a4;
      *(_OWORD *)((char *)this + 108) = *((_OWORD *)a4 + 1);
      *(_OWORD *)((char *)this + 124) = *((_OWORD *)a4 + 2);
      *(_OWORD *)((char *)this + 140) = *((_OWORD *)a4 + 3);
      *((_DWORD *)this + 39) = *((_DWORD *)a4 + 16);
      CMILMatrix::Invert((CComposeTop *)((char *)this + 92), v10, v11);
    }
  }
  return v8;
}
