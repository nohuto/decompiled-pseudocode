/*
 * XREFs of ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x14025E194
 * Callers:
 *     ?UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z @ 0x140226FCC (-UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1401134D8 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401708D4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1401C499C (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x140205DE4 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x140268618 (--0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x14026899C (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::TerminateUmfdHost(int a1, __int64 a2)
{
  char v2; // si
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  HANDLE v7; // rax
  __int64 v8; // rdx
  void *v9; // rdi
  struct _KEVENT *v10; // rcx
  __int64 v11; // rdx
  int v12; // ecx
  struct W32_PUSH_LOCK *v13; // [rsp+48h] [rbp+10h] BYREF
  struct W32_PUSH_LOCK *v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = a1;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  KeWaitForSingleObject(*(PVOID *)(v3 + 24232), Executive, 0, 0, 0LL);
  v7 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle(v5, v4, v6);
  v9 = v7;
  if ( v7 )
  {
    ZwWaitForSingleObject(v7, 0, 0LL);
    ZwClose(v9);
  }
  if ( v2 )
  {
    v10 = *(struct _KEVENT **)(v3 + 24224);
    *(_BYTE *)(v3 + 24290) = 0;
    KeClearEvent(v10);
  }
  else
  {
    *(_BYTE *)(v3 + 24293) = 1;
  }
  AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)&v14, v8);
  UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::UmfdHostExclusiveReadyLock((UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *)&v13);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock(v12, v11);
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  KeSetEvent(*(PRKEVENT *)(v3 + 24216), 0, 0);
  Gre::PUSHLOCKEX::vUnlock(&v13, 0);
  Gre::PUSHLOCKEX::vUnlock(&v14, 0);
}
