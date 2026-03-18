/*
 * XREFs of IopLiveDumpMarkImportantDumpData @ 0x14059BBE4
 * Callers:
 *     IopLiveDumpCollectPages @ 0x14059A264 (IopLiveDumpCollectPages.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x14049B5E4 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404FA9A4 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x14059DD84 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTrace @ 0x1405A3070 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopLiveDumpMarkImportantDumpData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r12
  __int64 MillisecondCounter; // r14
  unsigned int v6; // edi
  int v8; // eax
  __int64 i; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rax
  int v15; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v16[6]; // [rsp+28h] [rbp-58h] BYREF
  char *v17; // [rsp+58h] [rbp-28h] BYREF
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]
  int *v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+74h] [rbp-Ch]

  v15 = 0;
  v4 = LIVEDUMP_EVENT_SIZING_WORKFLOW_FEATURE_CALLOUT;
  v16[3] = 0LL;
  MillisecondCounter = 0LL;
  v16[1] = 0LL;
  v6 = 0;
  v16[2] = a1 + 544;
  v16[4] = a2;
  v16[0] = IoSetDumpRange;
  v16[5] = 1LL;
  v8 = *(_DWORD *)(a1 + 80);
  if ( (v8 & 1) == 0 )
    v4 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_FEATURE_CALLOUT;
  if ( (v8 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
  {
    v15 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    if ( v15 )
    {
      v12 = guard_dispatch_icall_no_overrides(a1, v16, v10, v11);
      if ( v12 < 0 )
      {
        if ( v12 == -1073741789 )
        {
          v6 = 0;
          break;
        }
        v6 = v12;
      }
    }
    if ( IopLiveDumpIsTracingEnabled() )
    {
      v19 = 0;
      v22 = 0;
      v17 = (char *)&AddPageCallouts + 24 * i;
      v18 = 4;
      v20 = &v15;
      v21 = 4;
      IopLiveDumpTrace(v4, 2LL, &v17);
    }
  }
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    v13 = IopLiveDumpGetMillisecondCounter(0);
    IopLiveDumpTraceMarkImportantDumpDataDuration(a1, v13 - MillisecondCounter);
  }
  return v6;
}
