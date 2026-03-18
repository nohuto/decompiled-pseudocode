/*
 * XREFs of DpiFdoWaitConnectionChangeComplete @ 0x140187A6C
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x140414B30 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1402BC7C8 (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpiFdoWaitConnectionChangeComplete(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  bool v3; // si
  NTSTATUS v4; // eax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 && *(_DWORD *)(v2 + 16) == 1953656900 && *(_DWORD *)(v2 + 20) == 2 )
    {
      v3 = 1;
      v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DxgkQueryConnectionChanges, File, 1u, 0x20u);
      if ( v4 >= 0 )
      {
        if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v2 + 4032), 1LL) )
          v3 = ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 168)) != 0;
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DxgkQueryConnectionChanges, 0x20u);
        if ( v3 )
        {
          v1 = -1073741811;
          WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
          WdLogGlobalForLineNumber = 18182;
        }
        else
        {
          Object[0] = (PVOID)(v2 + 3664);
          Object[1] = (PVOID)(v2 + 3832);
          return (unsigned int)KeWaitForMultipleObjects(2u, Object, WaitAll, Executive, 0, 0, 0LL, 0LL);
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, v4);
        WdLogGlobalForLineNumber = 18162;
      }
    }
    else
    {
      v1 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 18149;
    }
  }
  else
  {
    v1 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 18138;
  }
  return v1;
}
