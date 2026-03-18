/*
 * XREFs of ?IommuOnEnable@ADAPTER_RENDER@@CAJPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14019F6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::IommuOnEnable(struct SYSMM_ADAPTER *a1, _QWORD *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( !a2[96] )
    return 0LL;
  v2 = (*(__int64 (**)(void))(*(_QWORD *)(a2[95] + 8LL) + 1152LL))();
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  WdLogSingleEntry1(3LL, v2);
  WdLogGlobalForLineNumber = 5420;
  return v3;
}
