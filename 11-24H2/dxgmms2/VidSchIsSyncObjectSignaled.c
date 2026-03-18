/*
 * XREFs of VidSchIsSyncObjectSignaled @ 0x14003EB10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

bool __fastcall VidSchIsSyncObjectSignaled(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  bool v5; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  if ( a1 )
  {
    v2 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 8) + 1984LL);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v5 = 0;
    if ( *(_DWORD *)(a1 + 48) == 2 )
    {
      v3 = *(_BYTE *)(a1 + 28) ? *(_QWORD *)(*(_QWORD *)(a1 + 304) + 40LL) : *(_QWORD *)(a1 + 72);
      v4 = *(_BYTE *)(a1 + 28) ? *(_QWORD *)(*(_QWORD *)(a1 + 304) + 32LL) : *(_QWORD *)(a1 + 80);
      if ( v3 <= v4 )
        v5 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v5;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12198;
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL VIDSCH_SYNC_OBJECT pointer, returning FALSE",
      12198LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
}
