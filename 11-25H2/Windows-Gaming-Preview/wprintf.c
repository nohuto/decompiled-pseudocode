/*
 * XREFs of wprintf @ 0x180002E2C
 * Callers:
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x18001438C (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180001924 (__local_stdio_printf_options.c)
 *     _o___acrt_iob_func_0 @ 0x180002CD6 (_o___acrt_iob_func_0.c)
 *     __stdio_common_vfwprintf @ 0x180002D06 (__stdio_common_vfwprintf.c)
 */

int wprintf(const wchar_t *const Format, ...)
{
  FILE *v1; // rbx
  unsigned __int64 *v2; // rax
  va_list va; // [rsp+68h] [rbp+10h] BYREF

  va_start(va, Format);
  v1 = o___acrt_iob_func_0(1u);
  v2 = _local_stdio_printf_options();
  return _stdio_common_vfwprintf(*v2, v1, Format, 0LL, va);
}
