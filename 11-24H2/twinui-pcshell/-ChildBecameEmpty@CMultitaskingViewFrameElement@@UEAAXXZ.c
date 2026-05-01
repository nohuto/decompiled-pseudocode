/*
 * XREFs of ?ChildBecameEmpty@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804CB820
 * Callers:
 *     <none>
 * Callees:
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x1804CDE10 (AsyncFrameEvents--_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewFrameElement::ChildBecameEmpty(CMultitaskingViewFrameElement *this)
{
  if ( (*(unsigned __int8 (__fastcall **)(CMultitaskingViewFrameElement *))(*(_QWORD *)this + 408LL))(this) )
    AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(*((_QWORD *)this + 37));
}
