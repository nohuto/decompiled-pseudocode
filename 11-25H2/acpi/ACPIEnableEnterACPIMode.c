/*
 * XREFs of ACPIEnableEnterACPIMode @ 0x1400234B0
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x140022A10 (ACPIEnableInitializeACPI.c)
 * Callees:
 *     READ_PM1_CONTROL @ 0x140023620 (READ_PM1_CONTROL.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall ACPIEnableEnterACPIMode(char a1)
{
  char v1; // bl
  ULONG TimeIncrement; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-28h] BYREF

  v1 = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        6,
        10,
        (__int64)&WPP_48cebe27a5123ce6317d60f922fcae8c_Traceguids);
    if ( KeGetCurrentIrql() < 2u )
    {
      KeProcessorGroupAffinity(&Affinity, 0LL);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v1 = 1;
    }
  }
  TimeIncrement = KeQueryTimeIncrement();
  __outbyte(*((_QWORD *)AcpiInformation + 13), *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 52LL));
  v3 = 0x1E8480 % TimeIncrement;
  v4 = MEMORY[0xFFFFF78000000320];
  v5 = MEMORY[0xFFFFF78000000320] + 0x1E8480 / TimeIncrement;
  while ( (READ_PM1_CONTROL(v4, v3) & 1) == 0 )
  {
    if ( MEMORY[0xFFFFF78000000320] > v5 )
      KeBugCheckEx(0xA5u, 0x11uLL, 6uLL, 0LL, 0LL);
  }
  if ( v1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
