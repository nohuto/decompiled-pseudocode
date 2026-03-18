/*
 * XREFs of W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x140210448
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x140210420 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x140278B1C (W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___.c)
 *     ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x140278C80 (-DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 */

int __fastcall W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe_(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebx
  __int64 v6; // rdx
  int v7; // ecx
  int v9; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v11; // rsi

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    if ( PsGetCurrentProcessWin32Process(v4) )
      return DeviceCDROMNotifyWorker(
               *(struct _TARGET_DEVICE_CUSTOM_NOTIFICATION **)a2,
               *(struct _CDROM_NOTIFY **)(a2 + 8));
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId() < MaxSessionCount && W32GetSessionState(v7, v6) )
      return DeviceCDROMNotifyWorker(
               *(struct _TARGET_DEVICE_CUSTOM_NOTIFICATION **)a2,
               *(struct _CDROM_NOTIFY **)(a2 + 8));
    else
      return -1073741811;
  }
  else
  {
    v9 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
    v11 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v9 = W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe_(ReferencedSessionProcessWithTag);
      ObfDereferenceObjectWithTag(v11, 0x47727355u);
    }
    return v9;
  }
}
