/*
 * XREFs of DpiLdaPreStartChain @ 0x14008BED0
 * Callers:
 *     DpiLdaStartAdapterInChain @ 0x140253970 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     DpiFdoCreateSysMmAdapter @ 0x14023D2B4 (DpiFdoCreateSysMmAdapter.c)
 */

__int64 __fastcall DpiLdaPreStartChain(struct _DEVICE_OBJECT *a1)
{
  int SysMmAdapter; // eax
  unsigned int v2; // ebx

  if ( *((_QWORD *)a1->DeviceExtension + 728) )
    return 0LL;
  SysMmAdapter = DpiFdoCreateSysMmAdapter(a1);
  v2 = SysMmAdapter;
  if ( SysMmAdapter >= 0 )
    return 0LL;
  WdLogSingleEntry1(2LL, SysMmAdapter);
  WdLogGlobalForLineNumber = 681;
  return v2;
}
