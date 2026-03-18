/*
 * XREFs of WheapLoadPolicy @ 0x140C44C40
 * Callers:
 *     WheaInitialize @ 0x140C440FC (WheaInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1406A9010 (ZwQueryLicenseValue.c)
 *     WheapScanRegistryForPolicyChanges @ 0x1407C8D68 (WheapScanRegistryForPolicyChanges.c)
 *     WheapPropagatePolicyToHal @ 0x140AA950C (WheapPropagatePolicyToHal.c)
 *     WheapOpenPolicyRegistryKey @ 0x140C44D34 (WheapOpenPolicyRegistryKey.c)
 */

void WheapLoadPolicy()
{
  unsigned int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v2; // [rsp+50h] [rbp+10h] BYREF
  int v3; // [rsp+58h] [rbp+18h]
  int v4; // [rsp+60h] [rbp+20h]

  v0 = 0;
  BYTE2(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) = 6;
  v3 = 0;
  v2 = 0;
  v4 = 0;
  DestinationString = 0LL;
  LODWORD(WheapDispatchPtr.DeviceExtension) = 0;
  LOWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) = 0;
  WheapDispatchPtr.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels;
  *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels = &WheapDispatchPtr.Queue.Wcb.NumberOfChannels;
  HIDWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) = 1;
  WheapOpenPolicyRegistryKey();
  WheapScanRegistryForPolicyChanges();
  if ( !byte_140E0956C )
  {
    RtlInitUnicodeString(&DestinationString, L"Kernel-PersistDefectiveMemoryList");
    if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v2) >= 0 && v2 == 4 && v3 == 4 )
      *(_BYTE *)off_140E09558 = v4 != 0;
  }
  if ( !*(_DWORD *)off_140E09598 || !*(_DWORD *)off_140E095B8 )
    *(_BYTE *)off_140E09578 = 1;
  do
    WheapPropagatePolicyToHal(v0++);
  while ( v0 < 0x16 );
}
