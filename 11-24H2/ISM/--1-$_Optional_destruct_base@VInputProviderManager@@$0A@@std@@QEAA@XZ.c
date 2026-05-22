/*
 * XREFs of ??1?$_Optional_destruct_base@VInputProviderManager@@$0A@@std@@QEAA@XZ @ 0x1800A3000
 * Callers:
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x1800A303C (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 * Callees:
 *     ??_GInputProviderManager@@QEAAPEAXI@Z @ 0x1800A3200 (--_GInputProviderManager@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Optional_destruct_base<InputProviderManager,0>::~_Optional_destruct_base<InputProviderManager,0>(
        InputProviderManager *a1,
        unsigned int a2)
{
  void *result; // rax

  if ( *((_BYTE *)a1 + 24) )
    return InputProviderManager::`scalar deleting destructor'(a1, a2);
  return result;
}
