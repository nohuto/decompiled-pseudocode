/*
 * XREFs of _o__seh_filter_dll_0 @ 0x18005D478
 * Callers:
 *     __scrt_dllmain_exception_filter @ 0x18005C8D4 (__scrt_dllmain_exception_filter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl o__seh_filter_dll_0(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  return _seh_filter_dll(ExceptionNum, ExceptionPtr);
}
