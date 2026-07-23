/*
 * XREFs of PopFreeHiberContext @ 0x1406F93C8
 * Callers:
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 *     PopUnlockAfterSleepWorker @ 0x140B69CD0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x14048E2C0 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x14059105C (IopDumpTraceFreeDumpStackFailure.c)
 *     PopInternalAddToDumpFile @ 0x1405CA610 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VslFreeSecureHibernateResources @ 0x14070D3F4 (VslFreeSecureHibernateResources.c)
 *     PopClearHiberFileSignature @ 0x14074FF70 (PopClearHiberFileSignature.c)
 *     MmReleaseDumpHibernateResources @ 0x1407EDD58 (MmReleaseDumpHibernateResources.c)
 *     PopBcdClearPendingResume @ 0x1409A6B48 (PopBcdClearPendingResume.c)
 *     BcdOpenStore @ 0x1409A8688 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 *     MmUnlockPreChargedPagedPool @ 0x140AA8970 (MmUnlockPreChargedPagedPool.c)
 *     BgkResumeFinished @ 0x140B6E5F4 (BgkResumeFinished.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_UNKNOWN **__fastcall PopFreeHiberContext(UNICODE_STRING *a1)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rdx
  void *v4; // rcx
  __int64 v5; // rdi
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rcx
  __int64 v13; // rcx
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
    v4 = *(void **)(v2 + 272);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *(_QWORD *)(v2 + 272) = 0LL;
    }
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 144);
      if ( !v5 )
        break;
      *(_QWORD *)(v2 + 144) = *(_QWORD *)v5;
      *(_QWORD *)(v2 + 152) -= (unsigned __int64)*(unsigned int *)(v5 + 40) >> 12;
      if ( (*(_BYTE *)(v5 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v5 + 24), (PMDL)v5);
      MmFreePagesFromMdl((PMDL)v5);
      ExFreePoolWithTag((PVOID)v5, 0);
    }
    *(_QWORD *)(v2 + 248) = 0LL;
    v6 = (_QWORD **)(v2 + 80);
    *(_QWORD *)(v2 + 240) = 0LL;
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == v6 )
        break;
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      ExFreePoolWithTag(v7, 0);
      --*(_DWORD *)(v2 + 96);
    }
    v10 = *(_QWORD *)(v2 + 184);
    if ( v10 )
    {
      if ( CrashdmpImageEntry )
      {
        if ( qword_140E66030 )
        {
          v11 = guard_dispatch_icall_no_overrides(v10, v3);
          if ( v11 < 0 )
            IopDumpTraceFreeDumpStackFailure(v11);
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
    MmUnlockPreChargedPagedPool(qword_140F0BBD0, Length);
    v12 = *(void **)(v2 + 320);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x72626968u);
    v13 = *(_QWORD *)(v2 + 336);
    if ( v13 )
      MmReleaseDumpHibernateResources(v13, (unsigned int)(*(_DWORD *)(v2 + 288) << 16));
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v2 + 488) )
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
