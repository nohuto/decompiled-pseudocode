/*
 * XREFs of swscanf_s @ 0x1802D2808
 * Callers:
 *     ?UpdateCpuQuery@Cpu@@QEAAJPEAN@Z @ 0x180365BF4 (-UpdateCpuQuery@Cpu@@QEAAJPEAN@Z.c)
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180458AB0 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     __local_stdio_scanf_options @ 0x1802D12D4 (__local_stdio_scanf_options.c)
 *     _o___stdio_common_vswscanf_0 @ 0x1802D244A (_o___stdio_common_vswscanf_0.c)
 */

int swscanf_s(const wchar_t *const Buffer, const wchar_t *const Format, ...)
{
  unsigned __int64 *v4; // rax
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, Format);
  v4 = _local_stdio_scanf_options();
  return o___stdio_common_vswscanf_0(*v4 | 1, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Format, 0LL, va);
}
