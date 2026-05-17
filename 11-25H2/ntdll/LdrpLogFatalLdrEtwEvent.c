/*
 * XREFs of LdrpLogFatalLdrEtwEvent @ 0x1800D1D10
 * Callers:
 *     LdrpInitializationFailure @ 0x1800D1C78 (LdrpInitializationFailure.c)
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     EtwEventWriteNoRegistration @ 0x1800D1F90 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

_WORD *__fastcall LdrpLogFatalLdrEtwEvent(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  const void **v5; // rdi
  _WORD *v6; // rbx
  int v7; // eax
  _WORD *result; // rax
  __int64 v9; // r9
  _WORD *v10; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+2Ch] [rbp-2Ch]

  v3 = *a1;
  v5 = (const void **)(a1 + 4);
  if ( v3 + 2 > a1[1] || (v6 = *v5, *((_WORD *)*v5 + (v3 >> 1))) )
  {
    result = (_WORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v3 + 2);
    v6 = result;
    if ( !result )
      return result;
    memmove(result, *v5, *a1);
    v6[(unsigned __int64)*a1 >> 1] = 0;
  }
  v7 = *a1 + 2;
  v10 = v6;
  v11 = v7;
  v12 = 0;
  result = (_WORD *)EtwEventWriteNoRegistration(&UserLoaderGuid, a2, 1LL, &v10);
  if ( v6 != *v5 )
    return (_WORD *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v6, v9);
  return result;
}
