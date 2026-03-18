/*
 * XREFs of ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x180124CFC
 * Callers:
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180080678 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180089340 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z @ 0x180124D8C (-UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z.c)
 */

void __fastcall CDrawingContext::UpdateDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  bool v6; // di
  COcclusionContext *v7; // rcx

  v6 = 1;
  CMILMatrix::Multiply((CDrawingContext *)((char *)this + 96), a2);
  *((_BYTE *)this + 8064) = CMILMatrix::IsIdentity<0>((__int64)this + 96);
  if ( *((_BYTE *)this + 7936) )
  {
    v7 = (COcclusionContext *)*((_QWORD *)this + 995);
    if ( v7 )
      v6 = (int)COcclusionContext::UpdateDeviceTransform(v7, a2) >= 0;
  }
  if ( a3 )
    *a3 = v6;
}
