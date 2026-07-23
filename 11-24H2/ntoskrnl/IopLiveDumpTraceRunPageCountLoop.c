/*
 * XREFs of IopLiveDumpTraceRunPageCountLoop @ 0x1405A0324
 * Callers:
 *     IopLiveDumpAllocateFromIOSpace @ 0x140595CAC (IopLiveDumpAllocateFromIOSpace.c)
 * Callees:
 *     IopLiveDumpTraceEventGeneric @ 0x1405A0124 (IopLiveDumpTraceEventGeneric.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceRunPageCountLoop(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6[5]; // [rsp+20h] [rbp-60h] BYREF
  const wchar_t *v7[5]; // [rsp+48h] [rbp-38h] BYREF

  v6[3] = a4;
  v7[0] = L"RunCountIndex";
  v7[1] = L"RunPageLoopCount";
  v7[2] = L"RunPageCount";
  v7[3] = L"MdlPageCount";
  v7[4] = L"NextRunBasePage";
  v6[0] = a1;
  v6[1] = a2;
  v6[2] = a3;
  v6[4] = a5;
  return IopLiveDumpTraceEventGeneric(L"RunPageCountLoop", 5u, v7, v6);
}
