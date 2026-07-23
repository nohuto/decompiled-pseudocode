/*
 * XREFs of DbgkpWerCaptureLiveFullDump @ 0x140A9642C
 * Callers:
 *     DbgkpWerProcessPolicyResult @ 0x140706A38 (DbgkpWerProcessPolicyResult.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     DbgkpWerStartDeferredLiveDump @ 0x140706A90 (DbgkpWerStartDeferredLiveDump.c)
 *     DbgkpWerInvokeCallbacks @ 0x140A96644 (DbgkpWerInvokeCallbacks.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140A96708 (DbgkpWerInitializeDeferredLiveDump.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkpWerCaptureLiveFullDump(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // eax
  __int64 Pool2; // rax
  __int64 v6; // rsi
  int started; // ebx
  int *v8; // rdx
  int v9; // r8d
  int v10; // eax
  const CHAR *v11; // r8
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 104);
  v14 = 0LL;
  *a2 = 1;
  *(_DWORD *)(a1 + 80) = 0x10000000;
  DbgPrintEx(5u, 3u, "DBGK: Creating full dump.  ComponentName %ws, Defer = %d\n", a1, (v2 >> 1) & 1);
  Pool2 = ExAllocatePool2(0x100uLL, 0x38uLL, 0x57676244u);
  v6 = Pool2;
  if ( !Pool2 )
  {
    DbgPrintEx(5u, 0, "DBGK: Could not allocate an Io Control.\n");
    return (unsigned int)-1073741801;
  }
  *(_QWORD *)(a1 + 120) = Pool2;
  v8 = (int *)(Pool2 + 24);
  *(_DWORD *)Pool2 = 2;
  *(_DWORD *)(Pool2 + 4) = 56;
  *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 32LL);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 24LL) & 1) != 0 )
    *v8 |= 4u;
  v9 = *v8;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 24LL) & 0x10) != 0 )
  {
    v9 |= 0x20u;
    *v8 = v9;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 24LL) & 4) != 0 )
    *(_DWORD *)(Pool2 + 28) |= 1u;
  *v8 = v9 | 0x10;
  v13 = 0LL;
  if ( (*(_DWORD *)(a1 + 104) & 2) != 0 )
  {
    *v8 |= 8u;
    started = DbgkpWerInitializeDeferredLiveDump(a1);
    if ( started < 0 )
      return (unsigned int)started;
  }
  else
  {
    v10 = WerLiveKernelOpenDumpFile(*(_QWORD *)(a1 + 96), &v13);
    started = v10;
    if ( v10 < 0 )
    {
      v11 = "DBGK: WerLiveKernelOpenDumpFile failed. Status = 0x%X\n";
      goto LABEL_12;
    }
    *(_QWORD *)(v6 + 8) = v13;
  }
  started = DbgkpWerInvokeCallbacks(a1);
  if ( started < 0 )
    return (unsigned int)started;
  started = IoCaptureLiveDump(
              *(_DWORD *)(a1 + 32),
              *(_QWORD *)(a1 + 40),
              *(_QWORD *)(a1 + 48),
              *(_QWORD *)(a1 + 56),
              *(void **)(a1 + 64),
              v6,
              &v14);
  if ( (*(_DWORD *)(a1 + 104) & 2) == 0 )
  {
    if ( started >= 0 )
    {
      v10 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 96), 0LL);
      started = v10;
      if ( v10 >= 0 )
      {
        *(_DWORD *)(a1 + 104) |= 1u;
        return (unsigned int)started;
      }
      v11 = "DBGK: DbgkpWerCaptureLiveFullDump: WerLiveKernelSubmitReport failed with status 0x%X\n";
LABEL_12:
      DbgPrintEx(5u, 0, v11, (unsigned int)v10);
      return (unsigned int)started;
    }
LABEL_19:
    DbgPrintEx(
      5u,
      0,
      "DBGK: DbgkpWerCaptureLiveFullDump: IoCaptureLiveDump failed with status 0x%X\n",
      (unsigned int)started);
    return (unsigned int)started;
  }
  if ( (int)(started + 0x80000000) >= 0 && started != -1073741802 )
    goto LABEL_19;
  *(_QWORD *)(a1 + 128) = v14;
  started = DbgkpWerStartDeferredLiveDump(a1);
  if ( started >= 0 )
    *a2 = 0;
  return (unsigned int)started;
}
