/*
 * XREFs of _Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::catch$57 @ 0x18070206D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1802DE05C (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

__int64 __fastcall Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::catch_57(__int64 a1, __int64 a2)
{
  if ( *winrt::hresult_error::to_abi(*(_QWORD *)(a2 + 192), (_DWORD *)(a2 + 272)) != -2147023496 )
    throw;
  **(_QWORD **)(a2 + 280) = 0LL;
  return 0LL;
}
