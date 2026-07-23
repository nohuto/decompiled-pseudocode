/*
 * XREFs of CcRegistryChangeCallback @ 0x140578990
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     CcOpenRegistryPath @ 0x1405787F0 (CcOpenRegistryPath.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1406A9810 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char *__fastcall CcRegistryChangeCallback(char *ApcRoutine)
{
  UNICODE_STRING *v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdx
  NTSTATUS v6; // eax
  char *result; // rax
  void *v8; // rcx
  NTSTATUS v9; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v1 = (UNICODE_STRING *)(ApcRoutine + 56);
  IoStatusBlock = 0LL;
  v3 = MEMORY[0xFFFFF78000000320];
  v4 = MEMORY[0xFFFFF78000000320] - *((_QWORD *)ApcRoutine + 6);
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcRegistryChangeCallback: Something of interest changed (callback:%c), under:\"%wZ\"\n",
    ApcRoutine[72] != 0 ? 70 : 84,
    ApcRoutine + 56);
  if ( !ApcRoutine[72] )
  {
    guard_dispatch_icall_no_overrides(ApcRoutine, v5);
    *((_QWORD *)ApcRoutine + 6) = v3;
    DbgPrintEx(0x7Fu, 2u, "CcRegistryChangeCallback: Processed \"%wZ\", TickDiff=%I64d\n", v1, v4);
  }
  ApcRoutine[72] = 0;
  if ( *((_QWORD *)ApcRoutine + 4) || (v6 = CcOpenRegistryPath(v1, (HANDLE *)ApcRoutine + 4), v6 >= 0) )
  {
    result = ApcRoutine;
    if ( ApcRoutine )
    {
      v8 = (void *)*((_QWORD *)ApcRoutine + 4);
      if ( v8 )
      {
        v9 = ZwNotifyChangeKey(v8, 0LL, (PIO_APC_ROUTINE)ApcRoutine, (PVOID)1, &IoStatusBlock, 5u, 1u, 0LL, 0, 1u);
        if ( v9 == 259 )
        {
          DbgPrintEx(0x7Fu, 2u, "CcRegistryChangeCallback: Watch queued \"%wZ\"\n", ApcRoutine + 56);
        }
        else if ( v9 >= 0 )
        {
          DbgPrintEx(
            0x7Fu,
            2u,
            "CcRegistryChangeCallback: Watch queued \"%wZ\" (for Immediate Processing)\n",
            ApcRoutine + 56);
        }
        else
        {
          ZwClose(*((HANDLE *)ApcRoutine + 4));
          *((_QWORD *)ApcRoutine + 4) = 0LL;
          ApcRoutine[72] = 1;
          DbgPrintEx(
            0x7Fu,
            0,
            "CcRegistryChangeCallback: Failed Watch request, status=0x%08x \"%wZ\"\n",
            (unsigned int)v9,
            ApcRoutine + 56);
        }
        result = ApcRoutine;
      }
    }
  }
  else
  {
    DbgPrintEx(0x7Fu, 0, "CcRegistryChangeCallback: Failed to open Key, status=0x%08x \"%wZ\n", (unsigned int)v6, v1);
    ExFreePoolWithTag(ApcRoutine, 0x52576343u);
    result = 0LL;
  }
  if ( !CcRegistryWatchInitComplete )
  {
    if ( result )
      CcRegistryWatchInitComplete = result[72] == 0;
  }
  return result;
}
