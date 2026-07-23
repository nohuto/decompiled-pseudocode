/*
 * XREFs of IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x14059AF7C
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x140596F60 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140597940 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceMmDuplicateMemoryFailure(__int64 a1, int a2)
{
  char result; // al
  __int64 v3; // rcx
  bool v4; // zf
  __int64 *v5; // rcx
  BOOL v6; // [rsp+20h] [rbp-38h] BYREF
  int *v7; // [rsp+28h] [rbp-30h] BYREF
  int v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+34h] [rbp-24h]
  BOOL *v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+44h] [rbp-14h]
  int v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  v6 = a2 == 258;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v9 = 0;
    v12 = 0;
    v7 = &v13;
    v8 = 4;
    v10 = &v6;
    v4 = (*(_DWORD *)(v3 + 80) & 1) == 0;
    v11 = 4;
    v5 = LIVEDUMP_EVENT_SIZING_WORKFLOW_MM_DUPLICATE_MEMORY_FAILURE;
    if ( v4 )
      v5 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_MM_DUPLICATE_MEMORY_FAILURE;
    return IopLiveDumpTrace(v5, 2LL, &v7);
  }
  return result;
}
