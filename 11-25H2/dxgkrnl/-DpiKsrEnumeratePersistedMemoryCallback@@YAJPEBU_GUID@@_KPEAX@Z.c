/*
 * XREFs of ?DpiKsrEnumeratePersistedMemoryCallback@@YAJPEBU_GUID@@_KPEAX@Z @ 0x140249640
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DpiKsrEnumeratePersistedMemoryCallback(
        const struct _GUID *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v7; // eax
  size_t v8; // rbx
  char *Pool2; // rax
  char *v10; // rbp
  __int64 result; // rax

  v4 = a3[1];
  if ( *a3 >= v4 )
  {
    v7 = 8 * v4;
    v8 = v7;
    Pool2 = (char *)ExAllocatePool2(256LL, 2 * v7 + 128, 1953656900LL, a4);
    v10 = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry1(2LL, -1073741801LL);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 825;
      return result;
    }
    memmove(Pool2, a3, v8);
    memset(&v10[v8], 0, 0x80uLL);
  }
  *(_QWORD *)(*((_QWORD *)a3 + 33) + 8LL * (*a3)++) = a2;
  return 0LL;
}
