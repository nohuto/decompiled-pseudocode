/*
 * XREFs of HaliAcpiMachineStateInit @ 0x1406F61C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1404469AC (HalpInterruptModel.c)
 *     HalpIsXboxNanovisorPresent @ 0x1405483A0 (HalpIsXboxNanovisorPresent.c)
 *     HalpHvSetSleepStateProperty @ 0x140548F50 (HalpHvSetSleepStateProperty.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x14069BD20 (ZwPowerInformation.c)
 */

int __fastcall HaliAcpiMachineStateInit(_BYTE *a1)
{
  bool v2; // di
  int v3; // eax
  _DWORD *v4; // rdx
  __int64 (__fastcall *v5)(unsigned int, __int64, __int64, unsigned int, volatile signed __int32 *); // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  char v8; // cl
  int v9; // eax
  unsigned int v10; // eax
  char v11; // cl
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  __int128 InputBuffer; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h]

  v24 = 0LL;
  v2 = 0;
  InputBuffer = 0LL;
  HalpWakeupState = 1;
  v3 = HalpInterruptModel();
  *v4 = v3;
  if ( a1[9] && !HalpDisableHibernate )
    v2 = HalpIsXboxNanovisorPresent() == 0;
  v5 = HaliAcpiSleep;
  if ( *a1 )
  {
    v6 = a1[2] & 0xF;
    *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
    v7 = a1[1] & 0xF;
    BYTE4(InputBuffer) = 1;
    v24 = v7 | (16 * (v6 | 0x510));
    ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    if ( HalpHvSleepEnlightenedCpuManager )
      HalpHvSetSleepStateProperty(1LL);
    v5 = HaliAcpiSleep;
  }
  if ( !HalpWakeVector )
    goto LABEL_22;
  if ( a1[3] )
  {
    v8 = a1[4];
    *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
    v9 = a1[5] & 0xF;
    LODWORD(InputBuffer) = 1;
    BYTE4(InputBuffer) = 1;
    v10 = v8 & 0xF | (16 * (v9 | 0x520));
    if ( !HalpHvSleepEnlightenedCpuManager )
      v10 |= 0x12000u;
    v24 = v10;
    LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    if ( HalpHvSleepEnlightenedCpuManager )
      LODWORD(v5) = HalpHvSetSleepStateProperty(2LL);
  }
  if ( !a1[6] )
    goto LABEL_22;
  v11 = a1[7];
  *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
  v12 = a1[8] & 0xF;
  LODWORD(InputBuffer) = 2;
  BYTE4(InputBuffer) = 1;
  v13 = v11 & 0xF | (16 * (v12 | 0x530));
  if ( !HalpHvSleepEnlightenedCpuManager )
    v13 |= 0x32000u;
  v24 = v13;
  LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  if ( HalpHvSleepEnlightenedCpuManager )
    LODWORD(v5) = HalpHvSetSleepStateProperty(3LL);
  if ( a1[6] )
  {
    if ( !v2 )
      goto LABEL_26;
    v14 = a1[8] & 0xF | 0x3740LL;
    BYTE4(InputBuffer) = (unsigned __int8)dword_140FC05B0 >> 7;
    v15 = a1[7] & 0xF | (unsigned __int64)(16 * v14);
    LODWORD(InputBuffer) = 6;
    v24 = v15;
    *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
    ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  }
  else
  {
LABEL_22:
    if ( !v2 )
      goto LABEL_26;
  }
  v16 = a1[10] & 0xF;
  BYTE4(InputBuffer) = (unsigned __int8)dword_140FC05B0 >> 7;
  v17 = a1[11] & 0xF;
  LODWORD(InputBuffer) = 3;
  *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
  v18 = v16 | (16 * (v17 | 0x540));
  if ( !HalpHvSecureCpuResume )
    v18 |= 0x10000u;
  v24 = v18;
  LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
LABEL_26:
  if ( !a1[12] )
  {
    if ( !HalFirmwareTypeEfi )
      goto LABEL_32;
    goto LABEL_31;
  }
  if ( (HalpPlatformFlags & 1) == 0 )
  {
LABEL_31:
    HalpShutdownContext = 0;
    v24 = 0LL;
    *(_QWORD *)&InputBuffer = 4LL;
    *((_QWORD *)&InputBuffer + 1) = HalpLegacyShutdown;
    LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    goto LABEL_32;
  }
  v19 = a1[13] & 0xF;
  v20 = a1[14] & 0xF;
  LODWORD(InputBuffer) = 4;
  BYTE4(InputBuffer) = 0;
  v21 = v19 | (16 * (v20 | 0x850));
  *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
  v24 = v21;
  HalpShutdownContext = v21;
  LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  if ( !HalpHvSleepEnlightenedCpuManager )
    return (int)v5;
  LODWORD(v5) = HalpHvSetSleepStateProperty(5LL);
LABEL_32:
  if ( HalpHvSleepEnlightenedCpuManager )
    LODWORD(v5) = HalpHvSetSleepStateProperty(6LL);
  return (int)v5;
}
