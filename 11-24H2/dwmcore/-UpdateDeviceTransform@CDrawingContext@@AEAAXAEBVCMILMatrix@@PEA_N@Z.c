/*
 * XREFs of ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x18006FB54
 * Callers:
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18006F9C8 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z @ 0x18006FBE4 (-UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 */

void __fastcall CDrawingContext::UpdateDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  bool v6; // di
  COcclusionContext *v7; // rcx

  v6 = 1;
  CMILMatrix::Multiply((CDrawingContext *)((char *)this + 96), a2);
  *((_BYTE *)this + 8064) = CMILMatrix::IsIdentity<0>((char *)this + 96);
  if ( *((_BYTE *)this + 7936) )
  {
    v7 = (COcclusionContext *)*((_QWORD *)this + 995);
    if ( v7 )
      v6 = (int)COcclusionContext::UpdateDeviceTransform(v7, a2) >= 0;
  }
  if ( a3 )
    *a3 = v6;
}
