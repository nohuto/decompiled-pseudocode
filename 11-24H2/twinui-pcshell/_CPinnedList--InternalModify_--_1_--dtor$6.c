/*
 * XREFs of _CPinnedList::InternalModify_::_1_::dtor$6 @ 0x180704566
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CBackupLocationManager *__fastcall CPinnedList::InternalModify_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>::~unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>(
           (CBackupLocationManager **)(a2 + 296),
           a2);
}
