/*
 * XREFs of swprintf_s @ 0x18009DCC4
 * Callers:
 *     ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x180078CAC (--0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z.c)
 *     ?CreateClientEvents@SipcSignalFactory@@SAJAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x18010DFE8 (-CreateClientEvents@SipcSignalFactory@@SAJAEBVSipcPrivateNamespace@@PEAPEAX1@Z.c)
 *     ?CreateProxyEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@@Z @ 0x18010E670 (-CreateProxyEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@@Z.c)
 *     ?GetSecurityDescriptor@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x18010F0A4 (-GetSecurityDescriptor@SipcPrivateNamespace@@AEAAJPEAPEAX@Z.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x18010FA10 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18004F0C0 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_s @ 0x18009D3CA (__stdio_common_vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  unsigned __int64 *v6; // rax
  int result; // eax
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_s(*v6, Buffer, BufferCount, Format, 0LL, va);
  if ( result < 0 )
    return -1;
  return result;
}
