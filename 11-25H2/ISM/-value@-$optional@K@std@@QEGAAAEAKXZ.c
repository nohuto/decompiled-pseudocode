/*
 * XREFs of ?value@?$optional@K@std@@QEGAAAEAKXZ @ 0x180109A8C
 * Callers:
 *     ?RotationWnfCallback@RotationWatcher@@SAJAEBV?$com_ptr_t@UIMessageSession@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18010981C (-RotationWnfCallback@RotationWatcher@@SAJAEBV-$com_ptr_t@UIMessageSession@@Uerr_exception_policy.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x180194524 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<unsigned long>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 4) )
    std::_Throw_bad_optional_access();
  return a1;
}
