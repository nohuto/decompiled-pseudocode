/*
 * XREFs of DpiLeaveSystemDisplay @ 0x14005C710
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402C7954 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 */

void DpiLeaveSystemDisplay()
{
  if ( !byte_140161130 && !byte_140161131 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_140161140 + 4032), 2LL);
    if ( *(_BYTE *)(qword_140161140 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(qword_140161140 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_140161140 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_140161138 + 72), 0);
    ReleaseMiniportListMutex();
  }
}
