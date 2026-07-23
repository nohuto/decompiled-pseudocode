/*
 * XREFs of IopLiveDumpTraceEstimatedPageCountNotAvailable @ 0x1405A00AC
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404952D4 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     IopLiveDumpTraceEventGeneric @ 0x1405A0124 (IopLiveDumpTraceEventGeneric.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall IopLiveDumpTraceEstimatedPageCountNotAvailable(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v5[3]; // [rsp+38h] [rbp-30h] BYREF

  v4[0] = a1;
  v5[0] = L"AllocatedPageCount";
  v4[1] = a2;
  v5[1] = L"EstimatedPageCount";
  v4[2] = a3;
  v5[2] = L"EstimatedRequiredPageCount";
  return IopLiveDumpTraceEventGeneric(L"EstimatedPageCount Not Available", 3LL, v5, v4);
}
