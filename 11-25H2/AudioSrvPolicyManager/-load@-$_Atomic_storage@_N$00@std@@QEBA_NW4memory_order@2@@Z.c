/*
 * XREFs of ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180031C08
 * Callers:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180030D28 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800311F0 (-WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Atomic_storage<bool,1>::load(__int64 a1)
{
  return *(_BYTE *)a1;
}
