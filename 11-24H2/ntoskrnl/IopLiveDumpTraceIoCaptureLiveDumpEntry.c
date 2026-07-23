/*
 * XREFs of IopLiveDumpTraceIoCaptureLiveDumpEntry @ 0x1405A0260
 * Callers:
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 * Callees:
 *     IopLiveDumpTraceEventGeneric @ 0x1405A0124 (IopLiveDumpTraceEventGeneric.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceIoCaptureLiveDumpEntry(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6[5]; // [rsp+20h] [rbp-60h] BYREF
  const wchar_t *v7[5]; // [rsp+48h] [rbp-38h] BYREF

  v6[1] = a2;
  v7[0] = L"BugcheckCode";
  v6[2] = a3;
  v7[1] = L"BugCheckParameter1";
  v6[3] = a4;
  v7[2] = L"BugCheckParameter2";
  v7[3] = L"BugCheckParameter3";
  v7[4] = L"BugCheckParameter4";
  v6[0] = a1;
  v6[4] = a5;
  return IopLiveDumpTraceEventGeneric(L"IopCaptureLiveDumpEntry", 5u, v7, v6);
}
