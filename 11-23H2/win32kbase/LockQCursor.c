/*
 * XREFs of LockQCursor @ 0x1C009E354
 * Callers:
 *     zzzDestroyQueue @ 0x1C012DDA0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall LockQCursor(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C0295568;
  if ( qword_1C0295568 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0295568(a1, a2);
  return result;
}
