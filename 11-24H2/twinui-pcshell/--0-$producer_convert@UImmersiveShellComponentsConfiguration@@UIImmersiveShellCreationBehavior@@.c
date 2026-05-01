/*
 * XREFs of ??0?$producer_convert@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@X@impl@winrt@@QEAA@XZ @ 0x1803DFD5C
 * Callers:
 *     ??0?$producers_base@UImmersiveShellComponentsConfiguration@@V?$tuple@UIImmersiveShellCreationBehavior@@@std@@@impl@winrt@@QEAA@XZ @ 0x1803DFD80 (--0-$producers_base@UImmersiveShellComponentsConfiguration@@V-$tuple@UIImmersiveShellCreationBeh.c)
 * Callees:
 *     ??0?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@QEAA@XZ @ 0x18022BB38 (--0-$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V34.c)
 */

_QWORD *__fastcall winrt::impl::producer_convert<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior,void>::producer_convert<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior,void>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(a1);
  result = v1;
  *v1 = &Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  return result;
}
