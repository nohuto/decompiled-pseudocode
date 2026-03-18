/*
 * XREFs of DpiFdoStartNonLdaAdapter @ 0x14024802C
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x14024772C (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     DpiFdoCreateSysMmAdapter @ 0x14023D2B4 (DpiFdoCreateSysMmAdapter.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 */

__int64 __fastcall DpiFdoStartNonLdaAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        void *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  int SysMmAdapter; // eax
  unsigned int v12; // ebx
  int started; // eax

  SysMmAdapter = DpiFdoCreateSysMmAdapter(a1, (__int64)a1->DeviceExtension);
  v12 = SysMmAdapter;
  if ( SysMmAdapter < 0 )
  {
    WdLogSingleEntry1(2LL, SysMmAdapter);
    WdLogGlobalForLineNumber = 16783;
    return v12;
  }
  started = DpiFdoStartAdapter(a1, a2, a3, a4, a5, a6, a7);
  v12 = started;
  if ( started < 0 )
  {
    WdLogSingleEntry1(2LL, started);
    WdLogGlobalForLineNumber = 16799;
    return v12;
  }
  return 0LL;
}
