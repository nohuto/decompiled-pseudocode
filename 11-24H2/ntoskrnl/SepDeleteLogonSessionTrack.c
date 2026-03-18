/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x140A64520
 * Callers:
 *     SeInitServerSilo @ 0x14078ED4C (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140793668 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x140793BA0 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x140A644F0 (SepRmDeleteLogonSessionWrkr.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     SepDeleteSessionLowboxEntries @ 0x140480FE4 (SepDeleteSessionLowboxEntries.c)
 *     ObRevokeHandles @ 0x140743F58 (ObRevokeHandles.c)
 *     SepDeleteLogonSessionSidValues @ 0x1407931DC (SepDeleteLogonSessionSidValues.c)
 *     ObDereferenceDeviceMap @ 0x1409855D4 (ObDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x140A64720 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteCachedHandlesTable @ 0x140A64838 (SepDeleteCachedHandlesTable.c)
 *     SepDeleteLogonSessionClaims @ 0x140A64964 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A82014 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  volatile signed __int64 *v4; // rbp
  unsigned __int64 v5; // r8
  __int64 *v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  __int64 i; // rbx
  unsigned int v10; // ebx
  __int64 v12; // rcx
  volatile signed __int64 *v13; // rax
  void *v14; // rcx
  void *v15; // rcx

  v4 = 0LL;
  v5 = (unsigned __int64)(unsigned int)(1529154084 * *a1) >> 28;
  v6 = (__int64 *)(SepLogonSessions + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (struct _ERESOURCE *)((char *)&SepRmDbLock + 104 * (v5 & 3));
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; ; i = *(_QWORD *)i )
  {
    if ( !i )
    {
      v10 = -1073741729;
      goto LABEL_4;
    }
    if ( *(_QWORD *)(i + 168) == PsGetCurrentServerSilo() && *a1 == *(_DWORD *)(i + 8) && a1[1] == *(_DWORD *)(i + 12) )
      break;
    v6 = (__int64 *)i;
  }
  if ( !a2 )
  {
    v12 = *(_QWORD *)(i + 32);
    if ( !v12 || (*(_DWORD *)(i + 40) & 8) == 0 && v12 == 1 )
    {
      *v6 = *(_QWORD *)i;
      v13 = *(volatile signed __int64 **)(i + 48);
      if ( v13 )
      {
        *(_QWORD *)(i + 48) = 0LL;
        v4 = v13;
      }
      ExReleaseResourceLite(v8);
      KeLeaveCriticalRegion();
      if ( v4 )
      {
        SepCleanupLUIDDeviceMapDirectory(a1, *(_QWORD *)(i + 168));
        ObDereferenceDeviceMap(v4, 1u);
      }
      v14 = *(void **)(i + 168);
      if ( v14 )
        ObfDereferenceObjectWithTag(v14, 0x734C6553u);
      v15 = *(void **)(i + 72);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      SepDeleteLogonSessionClaims(i);
      if ( SepTokenSidSharingEnabled )
        SepDeleteLogonSessionSidValues(i);
      ObDestroyHandleRevocationBlock(i + 136);
      SepDeleteCachedHandlesTable(i + 96);
      ExFreePoolWithTag((PVOID)i, 0);
      SepDeleteSessionLowboxEntries();
      return 0LL;
    }
    v10 = -1073741564;
LABEL_4:
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegion();
    return v10;
  }
  *(_DWORD *)(i + 40) |= 0x10u;
  ObRevokeHandles((_QWORD **)(i + 136));
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegion();
  return 0LL;
}
