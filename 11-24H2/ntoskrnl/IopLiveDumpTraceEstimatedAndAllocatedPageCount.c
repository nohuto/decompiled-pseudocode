/*
 * XREFs of IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x140495EA4
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404952D4 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 IopLiveDumpTraceEstimatedAndAllocatedPageCount(__int64 a1, ...)
{
  unsigned int v1; // edx
  int v2; // eax
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // [rsp+28h] [rbp-79h] BYREF
  int v7; // [rsp+2Ch] [rbp-75h] BYREF
  int v8; // [rsp+30h] [rbp-71h] BYREF
  _QWORD v9[20]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v10; // [rsp+100h] [rbp+5Fh] BYREF
  va_list va; // [rsp+100h] [rbp+5Fh]
  __int64 v12; // [rsp+108h] [rbp+67h] BYREF
  va_list va1; // [rsp+108h] [rbp+67h]
  __int64 v14; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+110h] [rbp+6Fh]
  __int64 v16; // [rsp+118h] [rbp+77h] BYREF
  va_list va3; // [rsp+118h] [rbp+77h]
  va_list va4; // [rsp+120h] [rbp+7Fh] BYREF

  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v16 = va_arg(va4, _QWORD);
  v1 = *(_DWORD *)(a1 + 80);
  v6 = (v1 >> 9) & 1;
  v2 = (v1 >> 10) & 1;
  v3 = (v1 >> 12) & 1;
  v7 = v2;
  v8 = v3;
  result = IopLiveDumpIsTracingEnabled(a1, v3);
  if ( (_BYTE)result )
  {
    v9[1] = 8LL;
    va_copy((va_list)v9, va);
    v9[3] = 8LL;
    v9[2] = v5 + 680;
    v9[5] = 8LL;
    va_copy((va_list)&v9[4], va1);
    va_copy((va_list)&v9[6], va2);
    va_copy((va_list)&v9[8], va3);
    va_copy((va_list)&v9[10], va4);
    v9[12] = &v6;
    v9[14] = v5 + 1144;
    v9[7] = 8LL;
    v9[16] = &v7;
    v9[18] = &v8;
    v9[9] = 8LL;
    v9[11] = 8LL;
    v9[13] = 4LL;
    v9[15] = 8LL;
    v9[17] = 4LL;
    v9[19] = 4LL;
    return IopLiveDumpTrace(LIVEDUMP_EVENT_ESTIMATED_AND_ALLOCATED_MEMORY_PAGES, 10LL, v9);
  }
  return result;
}
