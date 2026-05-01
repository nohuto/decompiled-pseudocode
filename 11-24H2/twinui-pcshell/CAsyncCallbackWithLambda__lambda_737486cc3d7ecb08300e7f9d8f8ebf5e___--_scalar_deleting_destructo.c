/*
 * XREFs of CAsyncCallbackWithLambda__lambda_737486cc3d7ecb08300e7f9d8f8ebf5e___::_scalar_deleting_destructor_ @ 0x18034B080
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801822B4 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMark_ea_1801822B4.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall CAsyncCallbackWithLambda__lambda_737486cc3d7ecb08300e7f9d8f8ebf5e___::_scalar_deleting_destructor_(
        _DWORD *Block,
        char a2)
{
  Block[11] = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>((__int64)(Block + 2));
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
