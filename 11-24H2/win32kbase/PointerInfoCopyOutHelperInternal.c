/*
 * XREFs of PointerInfoCopyOutHelperInternal @ 0x1400FF2DC
 * Callers:
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x14020212C (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PointerInfoCopyOutHelperInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6))(__int64, __int64, __int64, _QWORD, int, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, _QWORD, int, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                                     a1,
                                                                                                     a2)
                                                                                                 + 48)
                                                                                     + 6504LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, __int64))result(a1, a2, a3, a4, a5, a6);
  return result;
}
