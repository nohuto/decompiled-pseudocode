/*
 * XREFs of ??1?$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1804B52F4
 * Callers:
 *     _ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run_::_1_::dtor$0 @ 0x1806EFB7D (_ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___--Run_--_1_--dtor$0.c)
 *     _SwitchItemFilteredCollection_CreateInstance_::_1_::dtor$0 @ 0x1806EFB8F (_SwitchItemFilteredCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::~ComPtr<SwitchItemFilteredCollection>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::InternalRelease(a1);
}
