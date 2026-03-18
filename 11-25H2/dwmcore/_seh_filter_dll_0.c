/*
 * XREFs of _seh_filter_dll_0 @ 0x18025D076
 * Callers:
 *     __scrt_dllmain_exception_filter @ 0x18025C008 (__scrt_dllmain_exception_filter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl seh_filter_dll_0(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  return _seh_filter_dll(ExceptionNum, ExceptionPtr);
}
