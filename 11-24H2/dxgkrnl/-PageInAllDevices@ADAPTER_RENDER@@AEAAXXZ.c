/*
 * XREFs of ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x14019F818
 * Callers:
 *     DxgkResumeMemorySegments @ 0x1401A094C (DxgkResumeMemorySegments.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall ADAPTER_RENDER::PageInAllDevices(ADAPTER_RENDER *this)
{
  char *v2; // rdi
  __int64 v3; // rbp
  char *i; // rbx

  v2 = (char *)this + 144;
  v3 = 2LL;
  do
  {
    for ( i = *(char **)v2; i != v2 && i; i = *(char **)i )
    {
      if ( (*(int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 816LL))(
             *((_QWORD *)this + 96),
             *((_QWORD *)i + 99)) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3327;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 3327LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v2 = (char *)this + 160;
    --v3;
  }
  while ( v3 );
}
