/*
 * XREFs of DpiLeaveSystemDisplay @ 0x14005CCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402BA104 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 */

void DpiLeaveSystemDisplay()
{
  if ( !byte_14015E170 && !byte_14015E171 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_14015E180 + 4032), 2LL);
    if ( *(_BYTE *)(qword_14015E180 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(qword_14015E180 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_14015E180 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_14015E178 + 72), 0);
    ReleaseMiniportListMutex();
  }
}
