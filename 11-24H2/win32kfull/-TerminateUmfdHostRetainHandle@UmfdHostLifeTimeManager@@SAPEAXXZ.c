/*
 * XREFs of ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1401134D8
 * Callers:
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x14025E194 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140113C28 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

HANDLE __fastcall UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle(__int64 a1, __int64 a2, __int64 a3)
{
  struct W32_PUSH_LOCK *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void *v8; // rcx
  NTSTATUS v9; // eax
  HANDLE v10; // rdi
  HANDLE ProcessHandle; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 24256LL);
  GreAcquirePushLockShared(v3);
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock()
    || (v8 = *(void **)(*(_QWORD *)(W32GetSessionState(v5, v4, v6) + 96) + 24192LL)) == 0LL
    || (ProcessHandle = 0LL,
        ObOpenObjectByPointer(v8, 0x200u, 0LL, 1u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle) < 0) )
  {
    if ( v3 )
      GreReleasePushLockShared(v3);
    return 0LL;
  }
  else
  {
    v9 = ZwTerminateProcess(ProcessHandle, 258);
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -1073741558 )
    {
      v10 = ProcessHandle;
    }
    else
    {
      ZwClose(ProcessHandle);
      v10 = 0LL;
      ProcessHandle = 0LL;
    }
    if ( v3 )
      GreReleasePushLockShared(v3);
    return v10;
  }
}
