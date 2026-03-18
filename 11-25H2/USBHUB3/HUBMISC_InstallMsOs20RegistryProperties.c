/*
 * XREFs of HUBMISC_InstallMsOs20RegistryProperties @ 0x140030644
 * Callers:
 *     HUBDSM_InstallingMsOs20RegistryValues @ 0x140023230 (HUBDSM_InstallingMsOs20RegistryValues.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBDESC_GetNextMsOs20Descriptor @ 0x140035E1C (HUBDESC_GetNextMsOs20Descriptor.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x14008D400 (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBMISC_InstallMsOs20RegistryProperties(__int64 a1)
{
  __int64 v2; // rbp
  __int16 v3; // r11
  char NextMsOs20Descriptor; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  struct _DEVICE_OBJECT *v9; // rax
  NTSTATUS v10; // eax
  ULONG Sizea; // [rsp+28h] [rbp-50h]
  __int64 Size; // [rsp+28h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF

  v15 = *(_QWORD *)(a1 + 2488);
  v2 = v15 + *(unsigned __int16 *)(v15 + 8);
  while ( 1 )
  {
    NextMsOs20Descriptor = HUBDESC_GetNextMsOs20Descriptor(v2, &v15);
    if ( !NextMsOs20Descriptor )
      break;
    v5 = v15;
    if ( !v15 )
      break;
    if ( *(_WORD *)(v15 + 2) == v3 )
    {
      DestinationString = 0LL;
      v6 = *(unsigned __int16 *)(v15 + 6);
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v15 + 8));
      v7 = HUBREG_WriteValueToDeviceHardwareKey(
             a1,
             (unsigned int)&DestinationString,
             *(unsigned __int16 *)(v5 + 4),
             *(unsigned __int16 *)(v6 + v5 + 8),
             v6 + v5 + 10);
      if ( v7 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizea = v7;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            2u,
            5u,
            0x52u,
            (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
            Sizea);
        }
        break;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 2464) & 0x100) != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 16));
    v9 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                    WdfDriverGlobals,
                                    v8);
    v10 = IoSetDevicePropertyData(v9, &DEVPKEY_Device_ModelId, 0, 0, 0xDu, 0x10u, (PVOID)(*(_QWORD *)(a1 + 2512) + 4LL));
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(Size) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x53u,
        (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
        Size);
    }
  }
  return NextMsOs20Descriptor != 0 ? 4077 : 4065;
}
