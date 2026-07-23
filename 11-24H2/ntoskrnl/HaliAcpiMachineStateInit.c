/*
 * XREFs of HaliAcpiMachineStateInit @ 0x1406FFBF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalpIsXboxNanovisorPresent @ 0x140548550 (HalpIsXboxNanovisorPresent.c)
 *     HalpHvSetSleepStateProperty @ 0x140549100 (HalpHvSetSleepStateProperty.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x1406A7F90 (ZwPowerInformation.c)
 */

int __fastcall HaliAcpiMachineStateInit(_BYTE *a1)
{
  bool v2; // di
  int v3; // eax
  _DWORD *v4; // rdx
  __int64 (__fastcall *v5)(unsigned int, __int64, __int64, unsigned int, volatile signed __int32 *); // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // cl
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rdx
  char v13; // cl
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int128 InputBuffer; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h]

  v28 = 0LL;
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
    v28 = v7 | (16 * (v6 | 0x510));
    ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      LOBYTE(v8) = a1[1];
      HalpHvSetSleepStateProperty(1LL, v8);
    }
    v5 = HaliAcpiSleep;
  }
  if ( !HalpWakeVector )
    goto LABEL_22;
  if ( a1[3] )
  {
    v9 = a1[4];
    *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
    v10 = a1[5] & 0xF;
    LODWORD(InputBuffer) = 1;
    BYTE4(InputBuffer) = 1;
    v11 = v9 & 0xF | (16 * (v10 | 0x520));
    if ( !HalpHvSleepEnlightenedCpuManager )
      v11 |= 0x12000u;
    v28 = v11;
    LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      LOBYTE(v12) = a1[4];
      LODWORD(v5) = HalpHvSetSleepStateProperty(2LL, v12);
    }
  }
  if ( !a1[6] )
    goto LABEL_22;
  v13 = a1[7];
  *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
  v14 = a1[8] & 0xF;
  LODWORD(InputBuffer) = 2;
  BYTE4(InputBuffer) = 1;
  v15 = v13 & 0xF | (16 * (v14 | 0x530));
  if ( !HalpHvSleepEnlightenedCpuManager )
    v15 |= 0x32000u;
  v28 = v15;
  LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  if ( HalpHvSleepEnlightenedCpuManager )
  {
    LOBYTE(v16) = a1[7];
    LODWORD(v5) = HalpHvSetSleepStateProperty(3LL, v16);
  }
  if ( a1[6] )
  {
    if ( !v2 )
      goto LABEL_26;
    v17 = a1[8] & 0xF | 0x3740LL;
    BYTE4(InputBuffer) = (unsigned __int8)dword_140FC0FF0 >> 7;
    v18 = a1[7] & 0xF | (unsigned __int64)(16 * v17);
    LODWORD(InputBuffer) = 6;
    v28 = v18;
    *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
    ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  }
  else
  {
LABEL_22:
    if ( !v2 )
      goto LABEL_26;
  }
  v19 = a1[10] & 0xF;
  BYTE4(InputBuffer) = (unsigned __int8)dword_140FC0FF0 >> 7;
  v20 = a1[11] & 0xF;
  LODWORD(InputBuffer) = 3;
  *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
  v21 = v19 | (16 * (v20 | 0x540));
  if ( !HalpHvSecureCpuResume )
    v21 |= 0x10000u;
  v28 = v21;
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
    v28 = 0LL;
    *(_QWORD *)&InputBuffer = 4LL;
    *((_QWORD *)&InputBuffer + 1) = HalpLegacyShutdown;
    LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    goto LABEL_32;
  }
  v22 = a1[13] & 0xF;
  v23 = a1[14] & 0xF;
  LODWORD(InputBuffer) = 4;
  BYTE4(InputBuffer) = 0;
  v24 = v22 | (16 * (v23 | 0x850));
  *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
  v28 = v24;
  HalpShutdownContext = v24;
  LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  if ( !HalpHvSleepEnlightenedCpuManager )
    return (int)v5;
  LOBYTE(v25) = a1[13];
  LODWORD(v5) = HalpHvSetSleepStateProperty(5LL, v25);
LABEL_32:
  if ( HalpHvSleepEnlightenedCpuManager )
    LODWORD(v5) = HalpHvSetSleepStateProperty(6LL, 0LL);
  return (int)v5;
}
