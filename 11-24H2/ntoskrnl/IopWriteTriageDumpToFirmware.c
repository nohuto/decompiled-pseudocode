/*
 * XREFs of IopWriteTriageDumpToFirmware @ 0x140592A54
 * Callers:
 *     IoWriteCrashDump @ 0x14058F7F8 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14059287C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KiScanBugCheckCallbackList @ 0x1405B134C (KiScanBugCheckCallbackList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopWriteTriageDumpToFirmware(PHYSICAL_ADDRESS *BaseAddress)
{
  unsigned __int64 v3; // rsi
  PHYSICAL_ADDRESS *v4; // rdi
  char *v5; // rbp
  __int64 v6; // rax
  LONGLONG QuadPart; // rax
  PVOID BaseAddressa; // [rsp+30h] [rbp+8h] BYREF

  if ( !BaseAddress )
    return 3221225635LL;
  v3 = 262172LL;
  BaseAddressa = &BaseAddress[512];
  v4 = BaseAddress;
  BaseAddress[514].LowPart = 28;
  *(_OWORD *)BaseAddressa = CrashdmpGuid;
  *((_DWORD *)BaseAddressa + 5) = 458752;
  *((_DWORD *)BaseAddressa + 6) = 262172;
  v5 = (char *)BaseAddressa;
  do
  {
    v6 = 4096LL;
    if ( v3 < 0x1000 )
      v6 = v3;
    v4->QuadPart = v6;
    v4[1] = MmGetPhysicalAddress(v5);
    QuadPart = v4->QuadPart;
    v4 += 2;
    v5 += QuadPart;
    v3 -= QuadPart;
  }
  while ( v3 );
  v4->QuadPart = 0LL;
  v4[1].QuadPart = 0LL;
  MmGetPhysicalAddress(BaseAddress);
  KiScanBugCheckCallbackList();
  return guard_dispatch_icall_no_overrides(&BaseAddressa, 1LL);
}
