/*
 * XREFs of DpiPdoHandleStopDevice @ 0x140255370
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1403B44D0 (DpiPdoDispatchPnp.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiPdoHandleStopDevice(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // eax
  bool v4; // zf
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v1 + 484) )
    DpiCheckForOutstandingD3Requests(v1);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 1u);
  *(_DWORD *)(v1 + 4LL * (*(_DWORD *)(v1 + 276) & 7) + 244) = *(_DWORD *)(v1 + 240);
  v3 = *(_DWORD *)(v1 + 236);
  ++*(_DWORD *)(v1 + 276);
  v4 = *(_BYTE *)(v1 + 484) == 0;
  *(_DWORD *)(v1 + 240) = v3;
  *(_DWORD *)(v1 + 236) = 4;
  if ( !v4 )
    DpiEnableD3Requests(*(_QWORD *)(v1 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
  KeLeaveCriticalRegion();
  WdLogSingleEntry1(4LL, a1);
  result = 0LL;
  WdLogGlobalForLineNumber = 6025;
  return result;
}
