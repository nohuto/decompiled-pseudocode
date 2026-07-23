/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x1800F44BC
 * Callers:
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18001B350 (EtwpEventWriteFull.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     EtwNotificationUnregister @ 0x180049B40 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x180049E00 (EtwEventRegister.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     CompatCachepLookupCdb @ 0x18008F2EC (CompatCachepLookupCdb.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
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
