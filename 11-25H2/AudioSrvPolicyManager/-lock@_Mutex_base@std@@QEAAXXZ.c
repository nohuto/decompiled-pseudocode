/*
 * XREFs of ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180031C14
 * Callers:
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x18002CFA0 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 *     ?Shutdown@CDuckingManager@@UEAAXXZ @ 0x180031100 (-Shutdown@CDuckingManager@@UEAAXXZ.c)
 *     ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800311F0 (-WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Mutex_base::lock(std::_Mutex_base *this)
{
  if ( _Mtx_lock(this) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  if ( *((_DWORD *)this + 7) == 0x7FFFFFFF )
  {
    *((_DWORD *)this + 7) = 2147483646;
    std::_Throw_Cpp_error(6);
    __debugbreak();
  }
}
