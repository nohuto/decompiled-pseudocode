/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x1800F980C
 * Callers:
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     EtwNotificationUnregister @ 0x18001D140 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x18001D400 (EtwEventRegister.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     EtwpEventWriteFull @ 0x18003B0D0 (EtwpEventWriteFull.c)
 *     CompatCachepLookupCdb @ 0x180072A0C (CompatCachepLookupCdb.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

wchar_t *__fastcall LdrpLogDeprecatedDllEtwEvent(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  const void **v3; // rdi
  wchar_t *v4; // rbx
  wchar_t *result; // rax
  __int64 v6; // [rsp+50h] [rbp-28h] BYREF
  __int128 v7; // [rsp+58h] [rbp-20h] BYREF

  v2 = *a1;
  v7 = 0LL;
  v6 = 0LL;
  v3 = (const void **)(a1 + 4);
  if ( v2 + 2 > a1[1] || (v4 = (wchar_t *)*v3, *((_WORD *)*v3 + (v2 >> 1))) )
  {
    result = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v2 + 2);
    v4 = result;
    if ( !result )
      return result;
    memmove(result, *v3, *a1);
    v4[(unsigned __int64)*a1 >> 1] = 0;
  }
  result = (wchar_t *)CompatCachepLookupCdb(v4, 4);
  if ( (_DWORD)result )
  {
    result = (wchar_t *)EtwEventRegister((int)&UserLoaderGuid, 0LL, 0LL, (__int64)&v6);
    if ( !(_DWORD)result )
    {
      *((_QWORD *)&v7 + 1) = (unsigned int)*a1 + 2;
      *(_QWORD *)&v7 = v4;
      EtwpEventWriteFull(v6, &DeprecatedDll, 0LL, 0, 0, 0LL, 0LL, 1, (__int64)&v7);
      result = (wchar_t *)EtwNotificationUnregister(v6, 0LL);
    }
    if ( v4 != *v3 )
      return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v4);
  }
  return result;
}
