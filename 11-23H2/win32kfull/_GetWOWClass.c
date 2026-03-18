/*
 * XREFs of _GetWOWClass @ 0x1C01BD988
 * Callers:
 *     NtUserGetWOWClass @ 0x1C01D3B20 (NtUserGetWOWClass.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003B918 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     GetClassPtr @ 0x1C00A68F0 (GetClassPtr.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, size_t *a2, __int64 a3, __int64 a4)
{
  __int64 ClassPtr; // rdi
  struct tagTHREADINFO *v7; // rsi
  __int64 v8; // r9
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v11; // rcx
  unsigned __int16 v12[256]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  v7 = PtiCurrentShared(a1, (__int64)a2, a3, a4);
  if ( RtlStringCchCopyW(v12, 0x100uLL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(v12);
  if ( Atom )
    ClassPtr = GetClassPtr(Atom, *((_QWORD *)v7 + 53), a1, v8);
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v11 = *((_QWORD *)v7 + 57);
    if ( v11 == *(_QWORD *)(*(_QWORD *)ClassPtr + 32LL) )
      return result;
    for ( result = (_QWORD *)result[8]; result; result = (_QWORD *)*result )
    {
      if ( v11 == result[4] )
        return result;
    }
  }
  UserSetLastError(1411);
  return 0LL;
}
