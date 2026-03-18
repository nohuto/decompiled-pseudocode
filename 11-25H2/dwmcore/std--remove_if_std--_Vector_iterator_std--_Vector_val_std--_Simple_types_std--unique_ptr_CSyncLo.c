/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CSyncLockGroup_std::default_delete_CSyncLockGroup___________lambda_ba8dc3c680031872e33eb834ce4e6176___ @ 0x18023B1A8
 * Callers:
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x180252A2C (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     ??$?4U?$default_delete@VCSyncLockGroup@@@std@@$0A@@?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180272DBC (--$-4U-$default_delete@VCSyncLockGroup@@@std@@$0A@@-$unique_ptr@VCSyncLockGroup@@U-$default_dele.c)
 */

_QWORD *__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CSyncLockGroup_std::default_delete_CSyncLockGroup___________lambda_ba8dc3c680031872e33eb834ce4e6176___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi
  __int64 j; // rsi
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 8LL )
  {
    if ( *(_QWORD *)(*(_QWORD *)i + 24LL) == *(_QWORD *)(*(_QWORD *)i + 16LL) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 8; j != a3; j += 8LL )
    {
      if ( *(_QWORD *)(*(_QWORD *)j + 24LL) != *(_QWORD *)(*(_QWORD *)j + 16LL) )
      {
        std::unique_ptr<CSyncLockGroup>::operator=<std::default_delete<CSyncLockGroup>,0>(i, j);
        i += 8LL;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
