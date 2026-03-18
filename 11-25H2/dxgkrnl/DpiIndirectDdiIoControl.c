/*
 * XREFs of DpiIndirectDdiIoControl @ 0x1403C84C8
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 *     DxgkHandleIndirectEscape @ 0x140428970 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiIndirectDdiIoControl(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 1056))(*(_QWORD *)(a1 + 1008));
  v2 = v1;
  if ( v1 < 0 )
  {
    WdLogSingleEntry1(2LL, v1);
    WdLogGlobalForLineNumber = 825;
  }
  return v2;
}
