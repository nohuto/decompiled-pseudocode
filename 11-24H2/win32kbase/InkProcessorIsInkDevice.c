/*
 * XREFs of InkProcessorIsInkDevice @ 0x14013AF58
 * Callers:
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall InkProcessorIsInkDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3))(_QWORD, _QWORD, __int64, _QWORD)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // si
  __int64 (__fastcall *result)(_QWORD, _QWORD, __int64, _QWORD); // rax

  v4 = a2;
  v5 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2)
                                                                                 + 48)
                                                                     + 4696LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))result(v5, v4, a3, 0LL);
  return result;
}
