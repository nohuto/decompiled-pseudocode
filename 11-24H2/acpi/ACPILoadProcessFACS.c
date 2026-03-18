/*
 * XREFs of ACPILoadProcessFACS @ 0x1400C7618
 * Callers:
 *     ACPILoadProcessFADT @ 0x1400C7770 (ACPILoadProcessFADT.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1400232C0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 ACPILoadProcessFACS()
{
  unsigned int v0; // edi
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rsi
  __int64 v5; // [rsp+28h] [rbp-10h]

  v0 = 0;
  v1 = (*(__int64 (**)(void))(PmHalDispatchTable + 104))();
  v3 = v1;
  if ( !v1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        13,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
    }
    return (unsigned int)-1072431079;
  }
  if ( *(_DWORD *)(v1 + 4) != 64 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xEu,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
        v1);
    return (unsigned int)-1072431079;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0xFu,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      v1);
  *((_QWORD *)AcpiInformation + 2) = v3;
  *((_QWORD *)AcpiInformation + 5) = v3 + 16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v5) = *(_DWORD *)(v3 + 16);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x10u,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      v5);
  }
  return v0;
}
