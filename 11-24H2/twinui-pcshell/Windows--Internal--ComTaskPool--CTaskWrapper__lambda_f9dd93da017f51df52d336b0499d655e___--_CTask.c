/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___::_CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___ @ 0x1802E0618
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___::_scalar_deleting_destructor_ @ 0x1802E09E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___--_scala.c)
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___::_CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
