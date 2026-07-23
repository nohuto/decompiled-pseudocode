/*
 * XREFs of IopLiveDumpTraceWriteBuffer @ 0x1405A03CC
 * Callers:
 *     IopLiveDumpWriteBuffer @ 0x140495AFC (IopLiveDumpWriteBuffer.c)
 * Callees:
 *     IopLiveDumpTraceEventGeneric @ 0x1405A0124 (IopLiveDumpTraceEventGeneric.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceWriteBuffer(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5[4]; // [rsp+20h] [rbp-58h] BYREF
  const wchar_t *v6[4]; // [rsp+40h] [rbp-38h] BYREF

  v5[0] = a1;
  v6[0] = L"Buffer";
  v5[2] = a3;
  v6[1] = L"Length";
  v6[2] = L"ByteOffset";
  v6[3] = L"SkipEncryption";
  v5[1] = a2;
  v5[3] = a4;
  return IopLiveDumpTraceEventGeneric(L"IopLiveDumpWriteBuffer", 4u, v6, v5);
}
