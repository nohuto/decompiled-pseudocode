/*
 * XREFs of ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x14028F93C
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x140214460 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetIconMetrics @ 0x140112D38 (SetIconMetrics.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1401CA764 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x14026C59C (-SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z.c)
 *     ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x14028F834 (-RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z.c)
 */

__int64 __fastcall SPISetIconMetrics(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2, int a3)
{
  struct tagWND *v4; // rdi
  unsigned int v5; // esi
  BOOL v8; // eax
  int v9; // esi
  int v10; // esi
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v4 = 0LL;
  v5 = 0;
  RescaleIconMetrics(a2);
  v8 = a3 == 0;
  if ( a3 )
  {
    v9 = SetWindowMetricInt(a1, 64LL, *((_DWORD *)a2 + 1));
    v10 = SetWindowMetricInt(a1, 65LL, *((_DWORD *)a2 + 2)) & v9;
    v11 = SetWindowMetricInt(a1, 66LL, *((_DWORD *)a2 + 3)) & v10;
    v5 = SetWindowMetricFont(a1, 0x9Au, (struct tagLOGFONTW *)((char *)a2 + 16)) & v11;
    v8 = v5;
  }
  if ( v8 )
  {
    SetIconMetrics(a1, a2);
    if ( *((_QWORD *)PtiCurrent(v13, v12) + 62) )
      v4 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v15, v14) + 62) + 8LL) + 24LL);
    xxxInternalInvalidate(v4, (HRGN)1, 0x10485u);
  }
  return v5;
}
