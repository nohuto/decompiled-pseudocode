/*
 * XREFs of ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C007CE2C
 * Callers:
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C007C158 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C00CF20C (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00CF264 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C013E7A8 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 */

HANDLE UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle(void)
{
  __int64 v0; // rcx
  void *v1; // rcx
  NTSTATUS v2; // eax
  HANDLE v3; // rbx
  HANDLE ProcessHandle; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v6);
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock()
    || (v1 = *(void **)(*(_QWORD *)(SGDGetSessionState(v0) + 32) + 23496LL)) == 0LL
    || (ProcessHandle = 0LL,
        ObOpenObjectByPointer(v1, 0x200u, 0LL, 1u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle) < 0) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v6);
    return 0LL;
  }
  else
  {
    v2 = ZwTerminateProcess(ProcessHandle, 258);
    if ( (int)(v2 + 0x80000000) < 0 || v2 == -1073741558 )
    {
      v3 = ProcessHandle;
    }
    else
    {
      ZwClose(ProcessHandle);
      v3 = 0LL;
      ProcessHandle = 0LL;
    }
    if ( v6 )
    {
      GreReleasePushLockShared(v6);
      KeLeaveCriticalRegion();
    }
    return v3;
  }
}
