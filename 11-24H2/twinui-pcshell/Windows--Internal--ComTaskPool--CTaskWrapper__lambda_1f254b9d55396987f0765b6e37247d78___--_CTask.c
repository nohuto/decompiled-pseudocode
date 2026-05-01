/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___::_CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___ @ 0x1802229EC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_358e99305f92347d1d7773659819cb56___::_scalar_deleting_destructor_ @ 0x1802BDCB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_358e99305f92347d1d7773659819cb56___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___::_scalar_deleting_destructor_ @ 0x18048EE60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___--_scala.c)
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___::_CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
