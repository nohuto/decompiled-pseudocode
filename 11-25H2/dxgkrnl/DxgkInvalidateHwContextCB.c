/*
 * XREFs of DxgkInvalidateHwContextCB @ 0x14006C5C0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x140016C90 (DpiGetDxgAdapter.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkInvalidateHwContextCB(__int64 a1)
{
  __int64 DxgAdapter; // rdi
  __int64 v3; // rcx

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 863;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      863LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)a1);
  if ( !*(_QWORD *)(DxgAdapter + 3128) )
  {
    WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 873;
  }
  if ( *(int *)(DxgAdapter + 2736) < 9472 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 876;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDxgAdapter->GetDriverCaps()->WDDMVersion >= DXGKDDI_WDDMv2_5",
      876LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 3128) + 736LL)
                                                                  + 8LL)
                                                      + 256LL))(
             v3,
             *(unsigned int *)(a1 + 16));
  else
    return 0LL;
}
