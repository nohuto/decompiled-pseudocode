/*
 * XREFs of TpDbgDumpHeapUsage @ 0x18015C6C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryTagHeap @ 0x180141AE0 (RtlQueryTagHeap.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void *__fastcall TpDbgDumpHeapUsage(
        char a1,
        __int64 (__fastcall *a2)(__int64, _QWORD, void *, _QWORD, _DWORD, _QWORD),
        __int64 a3)
{
  unsigned int i; // ebx
  void *result; // rax
  __int128 v8; // [rsp+40h] [rbp-38h] BYREF

  v8 = 0LL;
  for ( i = 0; i < 0xE; ++i )
  {
    result = RtlQueryTagHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               0,
               i + ((unsigned int)TppHeapTag >> 18),
               a1,
               (__int64)&v8);
    if ( result )
      result = (void *)a2(a3, i + TppHeapTag, result, (unsigned int)v8, DWORD1(v8), *((_QWORD *)&v8 + 1));
  }
  return result;
}
