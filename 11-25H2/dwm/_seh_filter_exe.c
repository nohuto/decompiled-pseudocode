/*
 * XREFs of _seh_filter_exe @ 0x140005D08
 * Callers:
 *     __scrt_common_main_seh @ 0x140004D30 (__scrt_common_main_seh.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl seh_filter_exe(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  return _o__seh_filter_exe(ExceptionNum, ExceptionPtr);
}
