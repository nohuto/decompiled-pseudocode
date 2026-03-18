/*
 * XREFs of HaliAcpiMachineStateInit @ 0x140701FB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1403BAB3C (HalpInterruptModel.c)
 *     Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledDeviceUsageNoInline @ 0x140544888 (Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIsXboxNanovisorPresent @ 0x14054AC90 (HalpIsXboxNanovisorPresent.c)
 *     HalpHvSetSleepStateProperty @ 0x14054B840 (HalpHvSetSleepStateProperty.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x1406A6FF0 (ZwPowerInformation.c)
 */

int __fastcall HaliAcpiMachineStateInit(_BYTE *a1)
{
  bool v2; // di
  int v3; // eax
  _DWORD *v4; // rdx
  int result; // eax
  __int64 (__fastcall *v6)(unsigned int, __int64, __int64, unsigned int, volatile signed __int32 *); // rsi
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // cl
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  char v16; // cl
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int128 InputBuffer; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32; // [rsp+40h] [rbp-10h]

  v32 = 0LL;
  v2 = 0;
  InputBuffer = 0LL;
  HalpWakeupState = 1;
  v3 = HalpInterruptModel();
  *v4 = v3;
  if ( a1[9] && !HalpDisableHibernate )
    v2 = HalpIsXboxNanovisorPresent() == 0;
  result = Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledDeviceUsageNoInline();
  v6 = HaliAcpiSleep;
  if ( !result )
    v6 = HaliAcpiSleepOld;
  if ( *a1 )
  {
    v7 = a1[1];
    v8 = a1[2] & 0xF;
    BYTE4(InputBuffer) = 1;
    *((_QWORD *)&InputBuffer + 1) = v6;
    v32 = v7 & 0xF | (16 * (v8 | 0x510));
    result = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      LOBYTE(v10) = a1[2];
      LOBYTE(v9) = a1[1];
      result = HalpHvSetSleepStateProperty(1LL, v9, v10);
    }
  }
  if ( !HalpWakeVector )
    goto LABEL_23;
  if ( a1[3] )
  {
    v11 = a1[4];
    v12 = a1[5] & 0xF | 0x520;
    LODWORD(InputBuffer) = 1;
    v13 = v11 & 0xF | (16 * v12);
    BYTE4(InputBuffer) = 1;
    *((_QWORD *)&InputBuffer + 1) = v6;
    if ( !HalpHvSleepEnlightenedCpuManager )
      v13 |= 0x12000u;
    v32 = v13;
    result = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      LOBYTE(v15) = a1[5];
      LOBYTE(v14) = a1[4];
      result = HalpHvSetSleepStateProperty(2LL, v14, v15);
    }
  }
  if ( !a1[6] )
    goto LABEL_23;
  v16 = a1[7];
  v17 = a1[8] & 0xF | 0x530;
  LODWORD(InputBuffer) = 2;
  v18 = v16 & 0xF | (16 * v17);
  BYTE4(InputBuffer) = 1;
  *((_QWORD *)&InputBuffer + 1) = v6;
  if ( !HalpHvSleepEnlightenedCpuManager )
    v18 |= 0x32000u;
  v32 = v18;
  result = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  if ( HalpHvSleepEnlightenedCpuManager )
  {
    LOBYTE(v20) = a1[8];
    LOBYTE(v19) = a1[7];
    result = HalpHvSetSleepStateProperty(3LL, v19, v20);
  }
  if ( a1[6] )
  {
    if ( !v2 )
      goto LABEL_27;
    v21 = a1[8] & 0xF | 0x3740LL;
    BYTE4(InputBuffer) = (unsigned __int8)dword_140FC0D50 >> 7;
    v22 = a1[7] & 0xF;
    LODWORD(InputBuffer) = 6;
    *((_QWORD *)&InputBuffer + 1) = v6;
    v32 = v22 | (16 * v21);
    ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  }
  else
  {
LABEL_23:
    if ( !v2 )
      goto LABEL_27;
  }
  v23 = a1[10] & 0xF;
  BYTE4(InputBuffer) = (unsigned __int8)dword_140FC0D50 >> 7;
  v24 = a1[11] & 0xF;
  LODWORD(InputBuffer) = 3;
  *((_QWORD *)&InputBuffer + 1) = v6;
  v25 = v23 | (16 * (v24 | 0x540));
  if ( !HalpHvSecureCpuResume )
    v25 |= 0x10000u;
  v32 = v25;
  result = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
LABEL_27:
  if ( !a1[12] )
  {
    if ( !HalFirmwareTypeEfi )
      goto LABEL_33;
    goto LABEL_32;
  }
  if ( (HalpPlatformFlags & 1) == 0 )
  {
LABEL_32:
    HalpShutdownContext = 0;
    v32 = 0LL;
    *(_QWORD *)&InputBuffer = 4LL;
    *((_QWORD *)&InputBuffer + 1) = HalpLegacyShutdown;
    result = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    goto LABEL_33;
  }
  v26 = a1[13] & 0xF;
  v27 = a1[14] & 0xF;
  LODWORD(InputBuffer) = 4;
  BYTE4(InputBuffer) = 0;
  v28 = v26 | (16 * (v27 | 0x850));
  *((_QWORD *)&InputBuffer + 1) = v6;
  v32 = v28;
  HalpShutdownContext = v28;
  result = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  if ( !HalpHvSleepEnlightenedCpuManager )
    return result;
  LOBYTE(v30) = a1[14];
  LOBYTE(v29) = a1[13];
  result = HalpHvSetSleepStateProperty(5LL, v29, v30);
LABEL_33:
  if ( HalpHvSleepEnlightenedCpuManager )
    return HalpHvSetSleepStateProperty(6LL, 0LL, 0LL);
  return result;
}
