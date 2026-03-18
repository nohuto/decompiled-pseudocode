/*
 * XREFs of GetClassPtr @ 0x14013C9F0
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1401B6138 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetClassPtr(__int64 a1, __int64 a2, __int64 a3))(_QWORD, __int64, __int64)
{
  unsigned __int16 v5; // si
  __int64 (__fastcall *result)(_QWORD, __int64, __int64); // rax

  v5 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                              + 2984LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64))result(v5, a2, a3);
  return result;
}
