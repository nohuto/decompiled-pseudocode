/*
 * XREFs of IopLiveDumpMarkImportantDumpData @ 0x140598B64
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405971E8 (IopLiveDumpCollectPages.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x140495FD4 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x14059AD04 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopLiveDumpMarkImportantDumpData(__int64 a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 MillisecondCounter; // r14
  unsigned int v4; // edi
  int v6; // eax
  __int64 i; // rbx
  int v8; // eax
  __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v12[6]; // [rsp+28h] [rbp-58h] BYREF
  char *v13; // [rsp+58h] [rbp-28h] BYREF
  int v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+64h] [rbp-1Ch]
  int *v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+74h] [rbp-Ch]

  v11 = 0;
  v2 = LIVEDUMP_EVENT_SIZING_WORKFLOW_FEATURE_CALLOUT;
  v12[3] = 0LL;
  MillisecondCounter = 0LL;
  v12[1] = 0LL;
  v4 = 0;
  v12[2] = a1 + 544;
  v12[4] = a2;
  v12[0] = IoSetDumpRange;
  v12[5] = 1LL;
  v6 = *(_DWORD *)(a1 + 80);
  if ( (v6 & 1) == 0 )
    v2 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_FEATURE_CALLOUT;
  if ( (v6 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
  {
    v11 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v11 )
    {
      v8 = guard_dispatch_icall_no_overrides(a1, v12);
      if ( v8 < 0 )
      {
        if ( v8 == -1073741789 )
        {
          v4 = 0;
          break;
        }
        v4 = v8;
      }
    }
    if ( IopLiveDumpIsTracingEnabled() )
    {
      v15 = 0;
      v18 = 0;
      v13 = (char *)&AddPageCallouts + 24 * i;
      v14 = 4;
      v16 = &v11;
      v17 = 4;
      IopLiveDumpTrace(v2, 2LL, &v13);
    }
  }
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    v9 = IopLiveDumpGetMillisecondCounter(0);
    IopLiveDumpTraceMarkImportantDumpDataDuration(a1, v9 - MillisecondCounter);
  }
  return v4;
}
