/*
 * XREFs of LdrpLogFatalLdrEtwEvent @ 0x180066090
 * Callers:
 *     LdrpInitializationFailure @ 0x180065FF8 (LdrpInitializationFailure.c)
 *     LdrpGenericExceptionFilter @ 0x1801185C0 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     EtwEventWriteNoRegistration @ 0x180066310 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

_WORD *__fastcall LdrpLogFatalLdrEtwEvent(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  const void **v5; // rdi
  _WORD *v6; // rbx
  int v7; // eax
  _WORD *result; // rax
  _WORD *v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+2Ch] [rbp-2Ch]

  v3 = *a1;
  v5 = (const void **)(a1 + 4);
  if ( v3 + 2 > a1[1] || (v6 = *v5, *((_WORD *)*v5 + (v3 >> 1))) )
  {
    result = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v3 + 2);
    v6 = result;
    if ( !result )
      return result;
    memmove(result, *v5, *a1);
    v6[(unsigned __int64)*a1 >> 1] = 0;
  }
  v7 = *a1 + 2;
  v9 = v6;
  v10 = v7;
  v11 = 0;
  result = (_WORD *)EtwEventWriteNoRegistration(&UserLoaderGuid, a2, 1LL, &v9);
  if ( v6 != *v5 )
    return (_WORD *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v6);
  return result;
}
