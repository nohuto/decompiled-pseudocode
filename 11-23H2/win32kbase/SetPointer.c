/*
 * XREFs of SetPointer @ 0x1C00C53D8
 * Callers:
 *     PowerOnMonitor @ 0x1C0133F40 (PowerOnMonitor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall SetPointer(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02959E8;
  if ( qword_1C02959E8 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02959E8(a1);
  return result;
}
