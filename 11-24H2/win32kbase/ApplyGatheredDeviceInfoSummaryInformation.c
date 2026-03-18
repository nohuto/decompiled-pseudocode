/*
 * XREFs of ApplyGatheredDeviceInfoSummaryInformation @ 0x14013E6E0
 * Callers:
 *     ApiSetApplyGatheredDeviceInfoSummaryInformation @ 0x14006C740 (ApiSetApplyGatheredDeviceInfoSummaryInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall ApplyGatheredDeviceInfoSummaryInformation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6))(_QWORD, _QWORD, _QWORD, _QWORD, int, int)
{
  unsigned int v8; // esi
  unsigned int v9; // ebp
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, int, int); // rax

  v8 = a2;
  v9 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                              a1,
                                                                                              a2)
                                                                                          + 48)
                                                                              + 5496LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, int, int))result(v9, v8, a3, a4, a5, a6);
  return result;
}
