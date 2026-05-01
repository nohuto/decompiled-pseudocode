/*
 * XREFs of _Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::catch$90 @ 0x180717017
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x18039048C (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

__int64 __fastcall Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::catch_90(__int64 a1, __int64 a2)
{
  if ( *winrt::hresult_error::to_abi(*(_QWORD *)(a2 + 192), (_DWORD *)(a2 + 104)) != -2147023496 )
    throw;
  **(_QWORD **)(a2 + 296) = 0LL;
  return 0LL;
}
