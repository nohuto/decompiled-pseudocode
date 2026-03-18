/*
 * XREFs of vMirrorIncludeNotifyWrap @ 0x1400D6200
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall vMirrorIncludeNotifyWrap(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(__int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24)
                                                              + 616LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD))result(a1, a2, a3);
  return result;
}
