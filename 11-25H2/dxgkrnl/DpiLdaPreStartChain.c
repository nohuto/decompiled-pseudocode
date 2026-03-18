/*
 * XREFs of DpiLdaPreStartChain @ 0x14008AF6C
 * Callers:
 *     DpiLdaStartAdapterInChain @ 0x14024CB40 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     DpiFdoCreateSysMmAdapter @ 0x1402367B0 (DpiFdoCreateSysMmAdapter.c)
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
