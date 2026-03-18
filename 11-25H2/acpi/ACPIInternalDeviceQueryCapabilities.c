/*
 * XREFs of ACPIInternalDeviceQueryCapabilities @ 0x1400ADDC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400AE5B0 (ACPISystemPowerQueryDeviceCapabilities.c)
 */

__int64 __fastcall ACPIInternalDeviceQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  unsigned int v5; // r8d
  unsigned int v6; // eax
  unsigned int v7; // ecx
  int DeviceCapabilities; // edi
  __int64 v10; // rdx
  const char *v11; // rcx
  const char *v12; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v5 = HIDWORD(SecurityContext->SecurityQos) & 0xFFFFFFBF | (*(_QWORD *)(DeviceExtension + 616) != 0LL ? 0x40 : 0);
  HIDWORD(SecurityContext->SecurityQos) = v5;
  v6 = v5 & 0xFFFFFEFF | (*(_DWORD *)(DeviceExtension + 8) >> 9) & 0x100 | 0x80;
  HIDWORD(SecurityContext->SecurityQos) = v6;
  v7 = v6 & 0xFFFFBFFF | ~(unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)(DeviceExtension + 8)) >> 8) & 0x4000;
  HIDWORD(SecurityContext->SecurityQos) = v7;
  HIDWORD(SecurityContext->SecurityQos) = v7 & 0xFFFDFFFF | (*(_DWORD *)(DeviceExtension + 8) >> 12) & 0x20000;
  DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities(DeviceExtension);
  if ( DeviceCapabilities < 0 )
  {
    v10 = *(_QWORD *)(DeviceExtension + 8);
    v11 = byte_140075488;
    v12 = byte_140075488;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(DeviceExtension + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xAu,
        (__int64)&WPP_3f059b4445c33feb0bcb2acb2d7cf140_Traceguids,
        DeviceCapabilities,
        DeviceExtension,
        v11,
        v12);
  }
  a2->IoStatus.Status = DeviceCapabilities;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DeviceCapabilities;
}
