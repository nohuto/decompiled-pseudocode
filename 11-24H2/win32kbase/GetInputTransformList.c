/*
 * XREFs of GetInputTransformList @ 0x14012ABE0
 * Callers:
 *     ApiSetGetInputTransformList @ 0x140193A18 (ApiSetGetInputTransformList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetInputTransformList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(__int64, _QWORD, __int64, __int64, __int64)
{
  unsigned int v6; // edi
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, __int64, __int64); // rax
  __int64 v9; // r9

  v6 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                                a1,
                                                                                                a2)
                                                                                            + 48)
                                                                                + 6232LL);
  if ( result )
  {
    v9 = a5;
    LOBYTE(v9) = 1;
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))result(a1, v6, a3, v9, a5);
  }
  return result;
}
