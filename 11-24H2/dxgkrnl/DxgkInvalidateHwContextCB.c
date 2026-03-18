/*
 * XREFs of DxgkInvalidateHwContextCB @ 0x14006C2E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetDxgAdapter @ 0x1400107F0 (DpiGetDxgAdapter.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
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
      262146LL,
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
      262146LL,
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
