/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISnapServiceProviderInternal@@UISnapServiceProvider@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1802B05FC
 * Callers:
 *     ??0SnapServiceProvider@@QEAA@XZ @ 0x180226290 (--0SnapServiceProvider@@QEAA@XZ.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ChainInterfaces@UITaskbarLayoutParserTest@@UIPWSLayoutParser@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180296D70 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ChainInterfaces@UITaskbarLa.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISnapServiceProviderInternal,ISnapServiceProvider>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISnapServiceProviderInternal,ISnapServiceProvider>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::ChainInterfaces<ITaskbarLayoutParserTest,IPWSLayoutParser,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::ChainInterfaces<ITaskbarLayoutParserTest,IPWSLayoutParser,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>(
    a1,
    a2);
  result = v2;
  *(_DWORD *)(v2 + 20) = 1;
  return result;
}
