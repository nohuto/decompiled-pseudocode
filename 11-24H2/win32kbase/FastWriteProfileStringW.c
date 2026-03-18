/*
 * XREFs of FastWriteProfileStringW @ 0x14009E940
 * Callers:
 *     FastUpdateWinIni @ 0x14019F640 (FastUpdateWinIni.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1400A0010 (OpenCacheKeyEx.c)
 */

__int64 __fastcall FastWriteProfileStringW(const UNICODE_STRING *a1, __int64 a2, const WCHAR *a3, _WORD *a4)
{
  __int64 result; // rax
  void *v7; // rsi
  __int64 v8; // rax
  NTSTATUS v9; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = OpenCacheKeyEx(a1);
  v7 = (void *)result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = ZwSetValueKey(v7, &DestinationString, 0, 1u, a4, 2 * v8 + 2);
    ZwClose(v7);
    return v9 >= 0;
  }
  return result;
}
