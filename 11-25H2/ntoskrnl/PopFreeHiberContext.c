/*
 * XREFs of PopFreeHiberContext @ 0x1406EF918
 * Callers:
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 *     PopUnlockAfterSleepWorker @ 0x140B57D60 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x14038C030 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140590840 (IopDumpTraceFreeDumpStackFailure.c)
 *     PopInternalAddToDumpFile @ 0x1405C8990 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     VslFreeSecureHibernateResources @ 0x140703984 (VslFreeSecureHibernateResources.c)
 *     PopClearHiberFileSignature @ 0x140745B84 (PopClearHiberFileSignature.c)
 *     MmReleaseDumpHibernateResources @ 0x1407DD8E8 (MmReleaseDumpHibernateResources.c)
 *     BcdOpenStore @ 0x140A24A98 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140A24B8C (BcdCloseStore.c)
 *     PopBcdClearPendingResume @ 0x140A26F08 (PopBcdClearPendingResume.c)
 *     MmUnlockPreChargedPagedPool @ 0x140AA8410 (MmUnlockPreChargedPagedPool.c)
 *     BgkResumeFinished @ 0x140B5DC74 (BgkResumeFinished.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

_UNKNOWN **__fastcall PopFreeHiberContext(UNICODE_STRING *a1)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v2; // rbx
  void *v3; // rcx
  __int64 v4; // rdi
  _QWORD **v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  void *v11; // rcx
  __int64 v12; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = BugCheckParameter4;
  BcdStoreHandle = 0LL;
  if ( BugCheckParameter4 )
  {
    if ( BcdOpenStore(a1, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle) >= 0 )
    {
      PopBcdClearPendingResume(BcdStoreHandle);
      BcdCloseStore(BcdStoreHandle);
    }
    v3 = *(void **)(v2 + 272);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(v2 + 272) = 0LL;
    }
    while ( 1 )
    {
      v4 = *(_QWORD *)(v2 + 144);
      if ( !v4 )
        break;
      *(_QWORD *)(v2 + 144) = *(_QWORD *)v4;
      *(_QWORD *)(v2 + 152) -= (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12;
      if ( (*(_BYTE *)(v4 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v4 + 24), (PMDL)v4);
      MmFreePagesFromMdl((PMDL)v4);
      ExFreePoolWithTag((PVOID)v4, 0);
    }
    *(_QWORD *)(v2 + 248) = 0LL;
    v5 = (_QWORD **)(v2 + 80);
    *(_QWORD *)(v2 + 240) = 0LL;
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag(v6, 0);
      --*(_DWORD *)(v2 + 96);
    }
    v9 = *(_QWORD *)(v2 + 184);
    if ( v9 )
    {
      if ( CrashdmpImageEntry )
      {
        if ( qword_140E65C90 )
        {
          v10 = guard_dispatch_icall_no_overrides(v9);
          if ( v10 < 0 )
            IopDumpTraceFreeDumpStackFailure(v10);
        }
      }
    }
    if ( *(_QWORD *)(v2 + 152) )
    {
      PopInternalAddToDumpFile(v2, 0x1F0u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v2, 0LL);
    }
    if ( *(_DWORD *)(v2 + 204) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v2 + 24) = 0;
    MmUnlockPreChargedPagedPool(qword_140F0ADB0, Length);
    v11 = *(void **)(v2 + 320);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x72626968u);
    v12 = *(_QWORD *)(v2 + 336);
    if ( v12 )
      MmReleaseDumpHibernateResources(v12, (unsigned int)(*(_DWORD *)(v2 + 288) << 16));
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v2 + 484) )
      VslFreeSecureHibernateResources();
    if ( HvlpHibernateScratchPage )
    {
      ExFreePoolWithTag(HvlpHibernateScratchPage, 0x204C5648u);
      HvlpHibernateScratchPage = 0LL;
      HvlpHibernateScratchPageCount = 0;
    }
    result = (_UNKNOWN **)memset_0((void *)v2, 0, 0x1F0uLL);
    BugCheckParameter4 = 0LL;
  }
  return result;
}
