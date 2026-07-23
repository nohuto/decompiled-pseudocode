/*
 * XREFs of DbgkpWerCaptureLiveTriageDump @ 0x1407064C0
 * Callers:
 *     DbgkpWerProcessPolicyResult @ 0x140706A38 (DbgkpWerProcessPolicyResult.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeCapturePersistentThreadState @ 0x140420EC0 (KeCapturePersistentThreadState.c)
 *     RtlCaptureContext @ 0x1404FA160 (RtlCaptureContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     DbgkpWerWriteTriageDump @ 0x140706D20 (DbgkpWerWriteTriageDump.c)
 *     DbgkpWerInvokeCallbacks @ 0x140A96644 (DbgkpWerInvokeCallbacks.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkpWerCaptureLiveTriageDump(__int64 a1)
{
  __int64 Pool2; // rax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _CONTEXT ContextRecord; // [rsp+40h] [rbp-4E8h] BYREF

  DbgPrintEx(5u, 3u, "DBGK: Creating mini live dump. ComponentName %ws\n", a1);
  *(_DWORD *)(a1 + 80) = 67108860;
  memset_0(&ContextRecord, 0, sizeof(ContextRecord));
  Pool2 = ExAllocatePool2(0x100uLL, 0x40000uLL, 0x57676244u);
  *(_QWORD *)(a1 + 136) = Pool2;
  if ( Pool2 )
  {
    RtlCaptureContext(&ContextRecord);
    v4 = KeCapturePersistentThreadState(
           (__int64)&ContextRecord,
           0LL,
           *(_DWORD *)(a1 + 32),
           *(_QWORD *)(a1 + 40),
           *(_QWORD *)(a1 + 48),
           *(_QWORD *)(a1 + 56),
           *(_QWORD *)(a1 + 64),
           *(_QWORD *)(a1 + 136));
    if ( v4 )
    {
      *(_DWORD *)(a1 + 144) = v4;
      v5 = DbgkpWerInvokeCallbacks(a1);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v6 = DbgkpWerWriteTriageDump(a1);
        v3 = v6;
        if ( v6 >= 0 )
        {
          v7 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 96), 0LL);
          v3 = v7;
          if ( v7 >= 0 )
            *(_DWORD *)(a1 + 104) |= 1u;
          else
            DbgPrintEx(
              5u,
              0,
              "DBGK: DbgkpWerCaptureLiveTriageDump: WerLiveKernelSubmitReport failed with status 0x%X\n",
              (unsigned int)v7);
        }
        else
        {
          DbgPrintEx(5u, 0, "DBGK: DbgkpWerWriteTriageDump failed, status 0x%X\n", (unsigned int)v6);
        }
      }
      else
      {
        DbgPrintEx(5u, 0, "DBGK: DbgkpWerInvokeCallbacks failed, status 0x%X\n", (unsigned int)v5);
      }
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: KeCapturePersistentThreadState failed\n");
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
