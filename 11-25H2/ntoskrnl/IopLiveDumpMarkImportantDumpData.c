/*
 * XREFs of IopLiveDumpMarkImportantDumpData @ 0x1405984D4
 * Callers:
 *     IopLiveDumpCollectPages @ 0x140596B54 (IopLiveDumpCollectPages.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x14049B334 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F84C4 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x14059A674 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTrace @ 0x14059F900 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 (__fastcall *v12)(__int64, char *, unsigned __int64, int); // [rsp+28h] [rbp-58h]
  __int64 v13; // [rsp+30h] [rbp-50h]
  __int64 v14; // [rsp+38h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  char *v18; // [rsp+58h] [rbp-28h] BYREF
  int v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+64h] [rbp-1Ch]
  int *v21; // [rsp+68h] [rbp-18h]
  int v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+74h] [rbp-Ch]

  v11 = 0;
  v2 = LIVEDUMP_EVENT_SIZING_WORKFLOW_FEATURE_CALLOUT;
  v15 = 0LL;
  MillisecondCounter = 0LL;
  v13 = 0LL;
  v4 = 0;
  v14 = a1 + 544;
  v16 = a2;
  v12 = IoSetDumpRange;
  v17 = 1LL;
  v6 = *(_DWORD *)(a1 + 80);
  if ( (v6 & 1) == 0 )
    v2 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_FEATURE_CALLOUT;
  if ( (v6 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
  {
    v11 = guard_dispatch_icall_no_overrides(a1);
    if ( v11 )
    {
      v8 = guard_dispatch_icall_no_overrides(a1);
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
      v20 = 0;
      v23 = 0;
      v18 = (char *)&AddPageCallouts + 24 * i;
      v19 = 4;
      v21 = &v11;
      v22 = 4;
      IopLiveDumpTrace(v2, 2LL, &v18);
    }
  }
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    v9 = IopLiveDumpGetMillisecondCounter(0);
    IopLiveDumpTraceMarkImportantDumpDataDuration(a1, v9 - MillisecondCounter);
  }
  return v4;
}
