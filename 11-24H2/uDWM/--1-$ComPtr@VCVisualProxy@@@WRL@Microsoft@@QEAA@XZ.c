/*
 * XREFs of ??1?$ComPtr@VCVisualProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180078ED4
 * Callers:
 *     _CBitmapSource::Create_::_1_::dtor$1 @ 0x1800F6574 (_CBitmapSource--Create_--_1_--dtor$1.c)
 *     _CAnimationEngine::OnTick_::_1_::dtor$1 @ 0x1800F6888 (_CAnimationEngine--OnTick_--_1_--dtor$1.c)
 *     _CClientArea::CloneVisualTree_::_1_::dtor$0 @ 0x1800F6BB0 (_CClientArea--CloneVisualTree_--_1_--dtor$0.c)
 *     _CAnimationEngine::StartAnimations_::_1_::dtor$0 @ 0x1800F7478 (_CAnimationEngine--StartAnimations_--_1_--dtor$0.c)
 *     _CAnimationEngine::StopAnimations_::_1_::dtor$0 @ 0x1800F74D2 (_CAnimationEngine--StopAnimations_--_1_--dtor$0.c)
 *     _CCaptureManager::_AddProjectionBorderForDisplay_::_1_::dtor$1 @ 0x1800F83ED (_CCaptureManager--_AddProjectionBorderForDisplay_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject *__fastcall Microsoft::WRL::ComPtr<CVisualProxy>::~ComPtr<CVisualProxy>(CBaseObject **a1)
{
  CBaseObject *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CBaseObject *)CBaseObject::Release(result);
  }
  return result;
}
