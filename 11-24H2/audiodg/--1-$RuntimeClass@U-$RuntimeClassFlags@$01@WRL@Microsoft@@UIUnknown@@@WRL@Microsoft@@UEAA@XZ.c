/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@UEAA@XZ @ 0x14004B7E8
 * Callers:
 *     _CRTThreadManager::CRTThreadManager_::_1_::dtor$0 @ 0x140094BCB (_CRTThreadManager--CRTThreadManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
