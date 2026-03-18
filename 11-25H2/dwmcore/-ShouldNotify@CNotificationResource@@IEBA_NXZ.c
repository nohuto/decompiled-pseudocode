/*
 * XREFs of ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18003D670
 * Callers:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x18003A6F0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18003D4D4 (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18003D5A4 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18003DFC8 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18013B3FC (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x18022C09C (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x18029595C (-OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z.c)
 *     ?StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@@@Z @ 0x1802A5070 (-StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@.c)
 *     ?SetState@CHolographicComposition@@UEAAJJ@Z @ 0x1802DA290 (-SetState@CHolographicComposition@@UEAAJJ@Z.c)
 *     ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x1802DA810 (-SetState@CHolographicDisplay@@UEAAJJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CNotificationResource::ShouldNotify(CNotificationResource *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 7);
  return v1 && *(_DWORD *)(v1 + 108) && *((_DWORD *)this + 18);
}
