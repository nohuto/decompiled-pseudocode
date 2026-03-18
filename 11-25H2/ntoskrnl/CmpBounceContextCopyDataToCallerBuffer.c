/*
 * XREFs of CmpBounceContextCopyDataToCallerBuffer @ 0x1409E0720
 * Callers:
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void *__fastcall CmpBounceContextCopyDataToCallerBuffer(__int64 a1, size_t a2)
{
  void *result; // rax
  const void *v4; // rdx

  result = *(void **)a1;
  v4 = *(const void **)(a1 + 8);
  if ( *(const void **)a1 != v4 )
    return memmove(result, v4, a2);
  return result;
}
