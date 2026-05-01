/*
 * XREFs of __std_system_error_deallocate_message @ 0x1802D404C
 * Callers:
 *     ??1_System_error_message@std@@QEAA@XZ @ 0x180315440 (--1_System_error_message@std@@QEAA@XZ.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x18031A100 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HLOCAL __stdcall _std_system_error_deallocate_message(HLOCAL hMem)
{
  return LocalFree(hMem);
}
