/*
 * XREFs of RawCleanup @ 0x14099D538
 * Callers:
 *     RawDispatch @ 0x14099D320 (RawDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     RawInitiateDeleteVolume @ 0x14048397C (RawInitiateDeleteVolume.c)
 *     FsRtlNotifyVolumeEvent @ 0x140701D70 (FsRtlNotifyVolumeEvent.c)
 *     IoRemoveLinkShareAccessEx @ 0x14099D640 (IoRemoveLinkShareAccessEx.c)
 */

__int64 __fastcall RawCleanup(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *v3; // r14
  char v7; // bp

  v3 = (struct _FAST_MUTEX *)&AdvancedHeader[2];
  v7 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&AdvancedHeader[2]);
  IoRemoveLinkShareAccessEx(*(_QWORD *)(a3 + 48), (char *)&AdvancedHeader[1].Resource + 4, 0LL, 0LL);
  if ( *(_QWORD *)(a3 + 48) == *(_QWORD *)&AdvancedHeader[1].BypassIoOpenCount )
  {
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode &= ~1u;
    v7 = 1;
    *(_QWORD *)&AdvancedHeader[1].BypassIoOpenCount = 0LL;
  }
  if ( *(void **)(a3 + 48) == AdvancedHeader[1].AePushLock )
  {
    AdvancedHeader[1].AePushLock = 0LL;
    RawInitiateDeleteVolume(AdvancedHeader, 1, 0);
  }
  KeReleaseGuardedMutex(v3);
  if ( v7 )
    FsRtlNotifyVolumeEvent(*(PFILE_OBJECT *)(a3 + 48), 5u);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
