/*
 * XREFs of CmpVolumeContextSendDeviceUsageNotification @ 0x1407D8E48
 * Callers:
 *     CmpHandlePageFileOpenNotification @ 0x1407CFB50 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     PiPagePathSetState @ 0x1407204F0 (PiPagePathSetState.c)
 *     CmpVolumeContextLockExclusive @ 0x1407D8DF8 (CmpVolumeContextLockExclusive.c)
 *     CmpVolumeContextUnlockExclusive @ 0x1407D90A0 (CmpVolumeContextUnlockExclusive.c)
 *     CmpVolumeContextLockShared @ 0x140A3BFC0 (CmpVolumeContextLockShared.c)
 *     CmpVolumeContextUnlockShared @ 0x140A3C018 (CmpVolumeContextUnlockShared.c)
 */

__int64 __fastcall CmpVolumeContextSendDeviceUsageNotification(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  int v4; // esi

  CurrentThread = KeGetCurrentThread();
  v3 = 1;
  --CurrentThread->KernelApcDisable;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v4 = -1073741637;
LABEL_3:
    CmpVolumeContextLockExclusive(a1);
    if ( *(_DWORD *)(a1 + 64) != 1 )
      *(_DWORD *)(a1 + 64) = 0;
    CmpVolumeContextUnlockExclusive(a1);
    goto LABEL_6;
  }
  CmpVolumeContextLockShared();
  if ( *(_DWORD *)(a1 + 64) == 1 )
  {
    v4 = 0;
    CmpVolumeContextUnlockShared(a1);
    goto LABEL_6;
  }
  CmpVolumeContextUnlockShared(a1);
  v4 = PiPagePathSetState(*(struct _FILE_OBJECT **)(a1 + 48), 1);
  if ( v4 < 0 )
    goto LABEL_3;
  CmpVolumeContextLockExclusive(a1);
  if ( *(_DWORD *)(a1 + 64) != 1 )
  {
    *(_DWORD *)(a1 + 64) = 1;
    v3 = 0;
  }
  CmpVolumeContextUnlockExclusive(a1);
  v4 = 0;
  if ( v3 )
    PiPagePathSetState(*(struct _FILE_OBJECT **)(a1 + 48), 0);
LABEL_6:
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
