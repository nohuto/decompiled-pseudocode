/*
 * XREFs of ACPIInitializeAMLI @ 0x1400C4A38
 * Callers:
 *     ACPIInitialize @ 0x1400C4008 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     ACPIInitGlobalHeapSize @ 0x140098914 (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1400B6898 (OSReadRegValue.c)
 *     OSReadAcpiConfigurationData @ 0x1400C4D0C (OSReadAcpiConfigurationData.c)
 *     AMLIInitialize @ 0x1400C4F80 (AMLIInitialize.c)
 *     OSInitializeCallbacks @ 0x1400C56B4 (OSInitializeCallbacks.c)
 */

__int64 ACPIInitializeAMLI()
{
  int v0; // edi
  int v1; // ebx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  int v6; // [rsp+28h] [rbp-10h]
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 4;
  if ( (int)OSReadRegValue("AMLIInitFlags", 0LL, &gAMLIInitFlags, &v7) < 0 )
    gAMLIInitFlags = 0;
  v7 = 4;
  if ( (int)OSReadRegValue("AMLIMaxCTObjs", 0LL, &AMLIMaxCTObjs, &v7) < 0 )
    AMLIMaxCTObjs = 0;
  v0 = ACPIInitGlobalHeapSize();
  v1 = OSReadAcpiConfigurationData(&v8);
  if ( v1 >= 0 )
  {
    E820Info = v8 + 44;
    OSInitializeCallbacks();
    return (unsigned int)AMLIInitialize(v2, v0, v3, v4);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = v1;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x24u,
      (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
      v6);
  }
  return (unsigned int)v1;
}
