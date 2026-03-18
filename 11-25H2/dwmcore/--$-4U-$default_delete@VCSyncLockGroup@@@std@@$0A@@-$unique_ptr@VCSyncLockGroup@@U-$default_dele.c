/*
 * XREFs of ??$?4U?$default_delete@VCSyncLockGroup@@@std@@$0A@@?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180272DBC
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CSyncLockGroup_std::default_delete_CSyncLockGroup___________lambda_ba8dc3c680031872e33eb834ce4e6176___ @ 0x18023B1A8 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CSyncLo.c)
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x180252A2C (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCSyncLockGroup@@@std@@QEBAXPEAVCSyncLockGroup@@@Z @ 0x180252B20 (--R-$default_delete@VCSyncLockGroup@@@std@@QEBAXPEAVCSyncLockGroup@@@Z.c)
 */

_QWORD *__fastcall std::unique_ptr<CSyncLockGroup>::operator=<std::default_delete<CSyncLockGroup>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = (_QWORD *)*a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<CSyncLockGroup>::operator()((__int64)a1, v4);
  return a1;
}
