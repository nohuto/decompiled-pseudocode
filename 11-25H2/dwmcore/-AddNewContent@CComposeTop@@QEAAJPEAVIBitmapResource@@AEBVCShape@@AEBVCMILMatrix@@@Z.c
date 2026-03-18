/*
 * XREFs of ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180075F80
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180075EAC (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180075260 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1800752B4 (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x180076BF0 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 */

__int64 __fastcall CComposeTop::AddNewContent(
        CComposeTop *this,
        struct IBitmapResource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v8; // edi
  int v9; // eax
  struct CShape *v11; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  if ( !ShapeBoundsEmpty(a3) )
  {
    if ( *(_QWORD *)this != GetCurrentFrameId() )
    {
      std::unique_ptr<CShape>::reset((CRectanglesShape **)this + 2, 0LL);
      *(_QWORD *)this = GetCurrentFrameId();
    }
    v11 = 0LL;
    v9 = CShape::CopyShape(a3, 0LL, &v11);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x33u, 0LL);
    }
    else
    {
      std::unique_ptr<CShape>::reset((CRectanglesShape **)this + 2, v11);
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
      CMILMatrix::Invert((CComposeTop *)((char *)this + 92));
    }
  }
  return v8;
}
