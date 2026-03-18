/*
 * XREFs of W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x1402366A8
 * Callers:
 *     ?DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x140278ED0 (-DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x140278BD0 (W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e___.c)
 *     ?DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x140278EF8 (-DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e_(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebx
  __int64 v6; // rdx
  int v7; // ecx
  unsigned int v9; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v11; // rsi

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    if ( PsGetCurrentProcessWin32Process(v4) )
      return DeviceClassCDROMNotifyWorker(*(struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION **)(a2 + 8));
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId() < MaxSessionCount && W32GetSessionState(v7, v6) )
      return DeviceClassCDROMNotifyWorker(*(struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION **)(a2 + 8));
    else
      return 3221225485LL;
  }
  else
  {
    v9 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
    v11 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v9 = W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e_(ReferencedSessionProcessWithTag);
      ObfDereferenceObjectWithTag(v11, 0x47727355u);
    }
    return v9;
  }
}
