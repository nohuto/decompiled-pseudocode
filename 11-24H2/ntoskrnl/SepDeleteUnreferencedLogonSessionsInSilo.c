/*
 * XREFs of SepDeleteUnreferencedLogonSessionsInSilo @ 0x140793708
 * Callers:
 *     SeShutdownServerSilo @ 0x14078EE0C (SeShutdownServerSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     SepDeleteLogonSessionTrack @ 0x140A5CE20 (SepDeleteLogonSessionTrack.c)
 */

struct _KTHREAD *__fastcall SepDeleteUnreferencedLogonSessionsInSilo(struct _LIST_ENTRY *a1)
{
  __int64 v2; // rdi
  struct _LIST_ENTRY *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  struct _ERESOURCE *v8; // r15
  __int64 i; // rcx
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rax
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = PsAttachSiloToCurrentThread(a1);
  v4 = 0LL;
  v5 = 16LL;
  do
  {
    CurrentThread = KeGetCurrentThread();
    v7 = SepLogonSessions;
    --CurrentThread->KernelApcDisable;
    v8 = (struct _ERESOURCE *)((char *)&SepRmDbLock + 104 * (v2 & 3));
    ExAcquireResourceExclusiveLite(v8, 1u);
    for ( i = *(_QWORD *)(v4 + v7); i; i = *(_QWORD *)i )
    {
      if ( *(struct _LIST_ENTRY **)(i + 168) == a1 )
      {
        v10 = *(_QWORD *)(i + 32);
        if ( !v10 || (*(_DWORD *)(i + 40) & 8) == 0 && v10 == 1 )
        {
          v13 = *(_QWORD *)(i + 8);
          ExReleaseResourceLite(v8);
          KeLeaveCriticalRegion();
          SepDeleteLogonSessionTrack(&v13, 0LL);
          v11 = KeGetCurrentThread();
          --v11->KernelApcDisable;
          ExAcquireResourceExclusiveLite(v8, 1u);
          i = SepLogonSessions + 8 * v2;
        }
      }
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegion();
    ++v2;
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  return PsDetachSiloFromCurrentThread(v3);
}
