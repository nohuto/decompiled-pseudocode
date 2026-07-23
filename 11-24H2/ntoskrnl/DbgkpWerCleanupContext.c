/*
 * XREFs of DbgkpWerCleanupContext @ 0x140706638
 * Callers:
 *     DbgkpWerDeferredWriteRoutine @ 0x140706800 (DbgkpWerDeferredWriteRoutine.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C50 (DbgkWerCaptureLiveKernelDump2.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IoDiscardDeferredLiveDumpData @ 0x14059497C (IoDiscardDeferredLiveDumpData.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     DbgkpWerFreePool @ 0x140706910 (DbgkpWerFreePool.c)
 */

int __fastcall DbgkpWerCleanupContext(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // eax

  LODWORD(v2) = DbgPrintEx(5u, 3u, "DBGK: DbgkpWerCleanupContext: Context 0x%p\n", (const void *)a1);
  if ( a1 )
  {
    v3 = *(void **)(a1 + 128);
    if ( v3 )
    {
      v4 = IoDiscardDeferredLiveDumpData(v3);
      if ( v4 < 0 )
        DbgPrintEx(5u, 0, "DBGK: IoDiscardDeferredLiveDumpData failed, status 0x%X\n", v4);
      *(_QWORD *)(a1 + 128) = 0LL;
    }
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
    {
      DbgkpWerFreePool(v5);
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    v2 = *(_QWORD *)(a1 + 120);
    if ( v2 )
    {
      v6 = *(void **)(v2 + 16);
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) = 0LL;
      }
      v7 = *(void **)(*(_QWORD *)(a1 + 120) + 8LL);
      if ( v7 )
      {
        ZwClose(v7);
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL) = 0LL;
      }
      v8 = *(_QWORD *)(a1 + 120);
      v9 = *(_QWORD *)(v8 + 40);
      *(_QWORD *)(v8 + 40) = 0LL;
      if ( v9 )
      {
        do
        {
          v10 = *(_QWORD *)(v9 + 16);
          v11 = *(_QWORD *)(v9 + 32);
          if ( v10 )
            DbgkpWerFreePool(v10);
          DbgkpWerFreePool(v9);
          v9 = v11;
        }
        while ( v11 );
      }
      LODWORD(v2) = DbgkpWerFreePool(*(_QWORD *)(a1 + 120));
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    v12 = *(_QWORD *)(a1 + 136);
    if ( v12 )
    {
      LODWORD(v2) = DbgkpWerFreePool(v12);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v13 = *(_QWORD *)(a1 + 160);
    if ( v13 )
    {
      *(_QWORD *)(a1 + 160) = 0LL;
      do
      {
        v14 = *(_QWORD *)(v13 + 16);
        v15 = *(_QWORD *)(v13 + 32);
        if ( v14 )
          DbgkpWerFreePool(v14);
        LODWORD(v2) = DbgkpWerFreePool(v13);
        v13 = v15;
      }
      while ( v15 );
    }
    if ( *(_QWORD *)(a1 + 96) )
    {
      if ( (*(_DWORD *)(a1 + 104) & 1) == 0 )
      {
        v16 = WerLiveKernelCancelReport();
        if ( v16 < 0 )
          DbgPrintEx(5u, 1u, "DBGK: DbgkpWerCleanupContext: WerLiveKernelCancelReport failed, 0x%X\n", v16);
      }
      LODWORD(v2) = WerLiveKernelCloseHandle(*(_QWORD *)(a1 + 96));
      if ( (int)v2 < 0 )
        LODWORD(v2) = DbgPrintEx(5u, 1u, "DBGK: DbgkpWerCleanupContext: WerLiveKernelCloseHandle failed, 0x%X\n", v2);
      *(_QWORD *)(a1 + 96) = 0LL;
    }
  }
  return v2;
}
