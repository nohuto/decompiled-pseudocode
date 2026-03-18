/*
 * XREFs of ?SetPathValue@CExpressionValue@@QEAAXPEBVCPathData@@@Z @ 0x18000E750
 * Callers:
 *     ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x1800E6EC4 (-GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z.c)
 *     ?SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18028E234 (-SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18029E040 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionValue::SetPathValue(CExpressionValue *this, const struct CPathData *a2)
{
  CPathData *v4; // rcx
  void (*v5)(void); // rax

  *((_DWORD *)this + 18) = a2 != 0LL ? 0xB : 0;
  if ( *((const struct CPathData **)this + 8) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(const struct CPathData *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = (CPathData *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = a2;
    if ( v4 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
      if ( (char *)v5 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v4);
      else
        v5();
    }
  }
}
