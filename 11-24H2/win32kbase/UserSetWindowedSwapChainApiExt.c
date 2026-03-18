/*
 * XREFs of UserSetWindowedSwapChainApiExt @ 0x140144EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall UserSetWindowedSwapChainApiExt(
        __int64 a1,
        __int64 a2,
        __int64 a3))(__int64, _QWORD, __int64)
{
  unsigned int v4; // edi
  __int64 (__fastcall *result)(__int64, _QWORD, __int64); // rax

  v4 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                              + 4128LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64))result(a1, v4, a3);
  return result;
}
