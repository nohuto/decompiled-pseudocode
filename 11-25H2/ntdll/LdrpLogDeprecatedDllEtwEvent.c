/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x1800FB5AC
 * Callers:
 *     LdrpProcessWork @ 0x18006FC70 (LdrpProcessWork.c)
 * Callees:
 *     EtwEventRegister @ 0x1800455F0 (EtwEventRegister.c)
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     CompatCachepLookupCdb @ 0x1800712A4 (CompatCachepLookupCdb.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     EtwpEventWriteFull @ 0x18008EAC0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

int __fastcall LdrpLogDeprecatedDllEtwEvent(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  const void **v3; // rdi
  wchar_t *v4; // rbx
  wchar_t *Heap; // rax
  ULONGLONG RegHandle; // [rsp+50h] [rbp-28h] BYREF
  __int128 v8; // [rsp+58h] [rbp-20h] BYREF

  v2 = *a1;
  v8 = 0LL;
  RegHandle = 0LL;
  v3 = (const void **)(a1 + 4);
  if ( v2 + 2 > a1[1] || (v4 = (wchar_t *)*v3, *((_WORD *)*v3 + (v2 >> 1))) )
  {
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v2 + 2);
    v4 = Heap;
    if ( !Heap )
      return (int)Heap;
    memmove(Heap, *v3, *a1);
    v4[(unsigned __int64)*a1 >> 1] = 0;
  }
  LODWORD(Heap) = CompatCachepLookupCdb(v4, 4);
  if ( (_DWORD)Heap )
  {
    LODWORD(Heap) = EtwEventRegister(&UserLoaderGuid, 0LL, 0LL, &RegHandle);
    if ( !(_DWORD)Heap )
    {
      *((_QWORD *)&v8 + 1) = (unsigned int)*a1 + 2;
      *(_QWORD *)&v8 = v4;
      EtwpEventWriteFull(RegHandle, &DeprecatedDll, 0LL, 0, 0, 0LL, 0LL, 1, (__int64)&v8);
      LODWORD(Heap) = EtwNotificationUnregister(RegHandle, 0LL);
    }
    if ( v4 != *v3 )
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return (int)Heap;
}
