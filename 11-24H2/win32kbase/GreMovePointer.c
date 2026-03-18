/*
 * XREFs of GreMovePointer @ 0x14000B370
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x14000C950 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GreMovePointer(__int64 a1))(__int64, __int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24)
                                                                        + 1680LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))result(a1, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1LL);
  return result;
}
