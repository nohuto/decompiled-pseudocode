/*
 * XREFs of sub_1800E2DA0 @ 0x1800E2DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 sub_1800E2DA0()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = (__int64)NtCurrentTeb()->ThreadLocalStoragePointer;
  v1 = *(_QWORD *)(result + 8LL * (unsigned int)TlsIndex) + 312LL;
  if ( *(_QWORD *)v1 )
  {
    result = sub_180010234(
               *(void **)v1,
               (*(_QWORD *)(*(_QWORD *)(result + 8LL * (unsigned int)TlsIndex) + 328LL) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)v1 = 0LL;
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_QWORD *)(v1 + 16) = 0LL;
  }
  return result;
}
