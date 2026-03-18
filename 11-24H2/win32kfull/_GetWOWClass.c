/*
 * XREFs of _GetWOWClass @ 0x140285CA4
 * Callers:
 *     NtUserGetWOWClass @ 0x1402972D0 (NtUserGetWOWClass.c)
 * Callees:
 *     GetClassPtr @ 0x1400469F0 (GetClassPtr.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, char *a2)
{
  __int64 ClassPtr; // rdi
  struct tagTHREADINFO *v4; // rsi
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v7; // rcx
  char v8[512]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  v4 = PtiCurrent(a1, (__int64)a2);
  if ( (int)RtlStringCchCopyW(v8, 256LL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(v8);
  if ( Atom )
    ClassPtr = GetClassPtr((_QWORD *)Atom, *((_QWORD **)v4 + 58), a1);
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v7 = *((_QWORD *)v4 + 62);
    if ( v7 == *(_QWORD *)(*(_QWORD *)ClassPtr + 32LL) )
      return result;
    for ( result = (_QWORD *)result[8]; result; result = (_QWORD *)*result )
    {
      if ( v7 == result[4] )
        return result;
    }
  }
  UserSetLastError(1411);
  return 0LL;
}
