/*
 * XREFs of PopFreeHiberContext @ 0x1406FB788
 * Callers:
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 *     PopUnlockAfterSleepWorker @ 0x140B67B90 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x1403A37F0 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140594038 (IopDumpTraceFreeDumpStackFailure.c)
 *     PopInternalAddToDumpFile @ 0x1405CCEA0 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     VslFreeSecureHibernateResources @ 0x14070F864 (VslFreeSecureHibernateResources.c)
 *     PopClearHiberFileSignature @ 0x140751C50 (PopClearHiberFileSignature.c)
 *     MmReleaseDumpHibernateResources @ 0x1407ED788 (MmReleaseDumpHibernateResources.c)
 *     BcdCloseStore @ 0x14085EED8 (BcdCloseStore.c)
 *     PopBcdClearPendingResume @ 0x1409C04F8 (PopBcdClearPendingResume.c)
 *     BcdOpenStore @ 0x1409C2038 (BcdOpenStore.c)
 *     MmUnlockPreChargedPagedPool @ 0x140AAD8F0 (MmUnlockPreChargedPagedPool.c)
 *     BgkResumeFinished @ 0x140B6CD54 (BgkResumeFinished.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

_UNKNOWN **__fastcall PopFreeHiberContext(__int64 a1)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rcx
  __int64 v7; // rdi
  _QWORD **v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  void *v14; // rcx
  __int64 v15; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = BugCheckParameter4;
  v17 = 0LL;
  if ( BugCheckParameter4 )
  {
    if ( (int)BcdOpenStore(a1, 2LL, &v17) >= 0 )
    {
      PopBcdClearPendingResume(v17);
      BcdCloseStore(v17);
    }
    v6 = *(void **)(v2 + 272);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *(_QWORD *)(v2 + 272) = 0LL;
    }
    while ( 1 )
    {
      v7 = *(_QWORD *)(v2 + 144);
      if ( !v7 )
        break;
      *(_QWORD *)(v2 + 144) = *(_QWORD *)v7;
      *(_QWORD *)(v2 + 152) -= (unsigned __int64)*(unsigned int *)(v7 + 40) >> 12;
      if ( (*(_BYTE *)(v7 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v7 + 24), (PMDL)v7);
      MmFreePagesFromMdl((PMDL)v7);
      ExFreePoolWithTag((PVOID)v7, 0);
    }
    *(_QWORD *)(v2 + 248) = 0LL;
    v8 = (_QWORD **)(v2 + 80);
    *(_QWORD *)(v2 + 240) = 0LL;
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == v8 )
        break;
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      ExFreePoolWithTag(v9, 0);
      --*(_DWORD *)(v2 + 96);
    }
    v12 = *(_QWORD *)(v2 + 184);
    if ( v12 )
    {
      if ( CrashdmpImageEntry )
      {
        if ( qword_140E65EF0 )
        {
          v13 = guard_dispatch_icall_no_overrides(v12, v3, v4, v5);
          if ( v13 < 0 )
            IopDumpTraceFreeDumpStackFailure(v13);
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
    MmUnlockPreChargedPagedPool(qword_140F0AD90, Length);
    v14 = *(void **)(v2 + 320);
    if ( v14 )
      ExFreePoolWithTag(v14, 0x72626968u);
    v15 = *(_QWORD *)(v2 + 336);
    if ( v15 )
      MmReleaseDumpHibernateResources(v15, (unsigned int)(*(_DWORD *)(v2 + 288) << 16));
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
