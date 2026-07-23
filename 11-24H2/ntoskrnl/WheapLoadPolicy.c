/*
 * XREFs of WheapLoadPolicy @ 0x140C46D90
 * Callers:
 *     WheaInitialize @ 0x140C4624C (WheaInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1406A9FB0 (ZwQueryLicenseValue.c)
 *     WheapScanRegistryForPolicyChanges @ 0x1407C9258 (WheapScanRegistryForPolicyChanges.c)
 *     WheapPropagatePolicyToHal @ 0x140AA45BC (WheapPropagatePolicyToHal.c)
 *     WheapOpenPolicyRegistryKey @ 0x140C46E84 (WheapOpenPolicyRegistryKey.c)
 */

void WheapLoadPolicy()
{
  unsigned int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG Type; // [rsp+50h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp+18h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF

  v0 = 0;
  BYTE2(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) = 6;
  ResultDataSize = 0;
  Type = 0;
  Data = 0;
  DestinationString = 0LL;
  LODWORD(WheapDispatchPtr.DeviceExtension) = 0;
  LOWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) = 0;
  WheapDispatchPtr.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels;
  *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels = &WheapDispatchPtr.Queue.Wcb.NumberOfChannels;
  HIDWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) = 1;
  WheapOpenPolicyRegistryKey();
  WheapScanRegistryForPolicyChanges();
  if ( !byte_140E095DC )
  {
    RtlInitUnicodeString(&DestinationString, L"Kernel-PersistDefectiveMemoryList");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
      && Type == 4
      && ResultDataSize == 4 )
    {
      *(_BYTE *)off_140E095C8 = Data != 0;
    }
  }
  if ( !*(_DWORD *)off_140E09608 || !*(_DWORD *)off_140E09628 )
    *(_BYTE *)off_140E095E8 = 1;
  do
    WheapPropagatePolicyToHal(v0++);
  while ( v0 < 0x16 );
}
