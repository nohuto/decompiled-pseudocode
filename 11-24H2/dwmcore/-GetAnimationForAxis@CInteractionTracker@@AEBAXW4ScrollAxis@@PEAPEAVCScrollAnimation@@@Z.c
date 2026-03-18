/*
 * XREFs of ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x18022BB04
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801EBA88 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??$?4VCInteractionTrackerPositionAnimation@@@?$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCInteractionTrackerPositionAnimation@@@12@@Z @ 0x1802496D8 (--$-4VCInteractionTrackerPositionAnimation@@@-$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEA.c)
 */

__int64 __fastcall CInteractionTracker::GetAnimationForAxis(__int64 a1, int a2, __int64 *a3)
{
  int v4; // edx
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( !a2 )
  {
    v7 = a1 + 336;
    goto LABEL_8;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v7 = a1 + 344;
LABEL_8:
    result = Microsoft::WRL::ComPtr<CScrollAnimation>::operator=<CInteractionTrackerPositionAnimation>(&v9, v7);
    v5 = v9;
    goto LABEL_9;
  }
  if ( v4 != 1 )
    ModuleFailFastForHRESULT(-2147467259, retaddr);
  v5 = *(_QWORD *)(a1 + 328);
  v9 = v5;
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(&v9);
  v9 = 0LL;
  result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
LABEL_9:
  *a3 = v5;
  return result;
}
