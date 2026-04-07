/*
 * XREFs of ?Update@CGaussianBlurEffectProxy@@QEAAJMII@Z @ 0x1800C0C24
 * Callers:
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B9AD8 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGaussianBlurEffectProxy::Update(CGaussianBlurEffectProxy *this, float a2, __int64 a3, int a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 856LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a3,
           1LL,
           a4);
}
