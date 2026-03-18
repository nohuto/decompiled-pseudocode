/*
 * XREFs of SeMarkLogonSessionForTerminationNotificationEx @ 0x140AA24D0
 * Callers:
 *     SeMarkLogonSessionForTerminationNotification @ 0x140783EA0 (SeMarkLogonSessionForTerminationNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SeMarkLogonSessionForTerminationNotificationEx(_DWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbp

  v4 = (unsigned __int64)(unsigned int)(1529154084 * *a1) >> 28;
  v5 = SepLogonSessions + 8 * v4;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (struct _ERESOURCE *)((char *)&SepRmDbLock + 104 * (v4 & 3));
  ExAcquireResourceExclusiveLite(v7, 1u);
  while ( 1 )
  {
    v5 = *(_QWORD *)v5;
    if ( !v5 )
      break;
    if ( (*(_QWORD *)(v5 + 160) == a2 || !a2) && *a1 == *(_DWORD *)(v5 + 8) && a1[1] == *(_DWORD *)(v5 + 12) )
    {
      *(_DWORD *)(v5 + 32) |= 1u;
      break;
    }
  }
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegion();
  return v5 == 0 ? 0xC0000225 : 0;
}
