/*
 * XREFs of RIMSetExtendedPointerDeviceProperty @ 0x1401E8CA8
 * Callers:
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401B9930 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtRIMSetExtendedDeviceProperty @ 0x1401D4FD0 (NtRIMSetExtendedDeviceProperty.c)
 *     ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x1402197AC (-CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x14012C1A0 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401D298C (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?ValidateProperty@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagPOINTER_DEVICE_EXTENDED_PROPERTY@@@Z @ 0x1401E88A8 (-ValidateProperty@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagPOINTER_DEVICE_EXTENDED_PROPERTY@@@.c)
 */

__int64 __fastcall RIMSetExtendedPointerDeviceProperty(__int64 a1, struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *a2)
{
  int v3; // eax
  _DWORD *v4; // rdx
  int v5; // ecx
  unsigned int v6; // edi
  __int64 v7; // rcx

  v3 = ValidateProperty((struct tagHID_POINTER_DEVICE_INFO *)a1, a2);
  v5 = 0;
  v6 = v3;
  if ( v3 >= 0 )
  {
    if ( *v4 )
    {
      switch ( *v4 )
      {
        case 1:
          *(_DWORD *)(a1 + 292) = v4[1];
          *(_DWORD *)(a1 + 296) = v4[2];
          *(_DWORD *)(a1 + 300) = v4[3];
          *(_DWORD *)(a1 + 304) = v4[4];
          break;
        case 2:
          *(_DWORD *)(a1 + 308) = v4[1];
          *(_DWORD *)(a1 + 312) = v4[2];
          break;
        case 3:
          LOBYTE(v5) = v4[1] != 0;
          *(_DWORD *)(a1 + 268) = v5;
          break;
        case 4:
          *(_OWORD *)(a1 + 316) = *(_OWORD *)(v4 + 1);
          break;
        case 5:
          *(_OWORD *)(a1 + 332) = *(_OWORD *)(v4 + 1);
          break;
        case 6:
          *(_OWORD *)(a1 + 348) = *(_OWORD *)(v4 + 1);
          break;
        case 7:
          *(_DWORD *)(a1 + 272) = v4[1];
          break;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 276) = v4[1];
      *(_DWORD *)(a1 + 280) = v4[2];
      *(_DWORD *)(a1 + 284) = v4[3];
      *(_DWORD *)(a1 + 288) = v4[4];
    }
    InputTraceLogging::RIM::RimDeviceExtendedProps(*(const struct RIMDEV **)(a1 + 16));
    if ( *(_DWORD *)(a1 + 24) == 7 )
      CPTPProcessor::EnvironmentChanged(v7);
  }
  return v6;
}
