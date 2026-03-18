/*
 * XREFs of ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180154670
 * Callers:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180152FAC (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180154388 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18015459C (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1801549DC (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180155D70 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x180220F3C (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x18028A7BC (-OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z.c)
 *     ?StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@@@Z @ 0x18029B2B0 (-StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@.c)
 *     ?SetState@CHolographicComposition@@UEAAJJ@Z @ 0x1802D0FF0 (-SetState@CHolographicComposition@@UEAAJJ@Z.c)
 *     ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x1802D1570 (-SetState@CHolographicDisplay@@UEAAJJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CNotificationResource::ShouldNotify(CNotificationResource *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 7);
  return v1 && *(_DWORD *)(v1 + 108) && *((_DWORD *)this + 18);
}
