/*
 * XREFs of DxgDestroyContextAllocationCB @ 0x1403BB9F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x140016C90 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140016D04 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgDestroyContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 DxgAdapter; // rbx
  unsigned int v5; // ebx
  _BYTE v7[8]; // [rsp+50h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v7);
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 242;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      242LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgAdapter = DpiGetDxgAdapter(a1);
  if ( !*(_QWORD *)(DxgAdapter + 3128) )
  {
    WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 253;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 3128) + 760LL) + 8LL)
                                                  + 608LL))(
         *(_QWORD *)(*(_QWORD *)(DxgAdapter + 3128) + 768LL),
         a2);
  if ( v7[0] )
    KeUnstackDetachProcess(&ApcState);
  return v5;
}
