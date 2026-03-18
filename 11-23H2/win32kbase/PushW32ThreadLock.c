/*
 * XREFs of PushW32ThreadLock @ 0x1C00999D4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     NtUserSystemParametersInfo @ 0x1C014C2C0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PushW32ThreadLock(__int64 a1, __int64 a2, __int64 a3))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  result = qword_1C0295450;
  if ( qword_1C0295450 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0295450(a1, a2, a3);
  return result;
}
