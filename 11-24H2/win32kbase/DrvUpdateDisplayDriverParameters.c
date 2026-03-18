/*
 * XREFs of DrvUpdateDisplayDriverParameters @ 0x140122CD0
 * Callers:
 *     ApplyPathModalityToCdsRegistryStore @ 0x140122B28 (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140013900 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140015CF0 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001A960 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x14008FA68 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14011E230 (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x140122F94 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DrvUpdateDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW *a2,
        int a3,
        int a4)
{
  unsigned int v7; // edi
  int v8; // r12d
  const unsigned __int16 *RegistryHandleFromDeviceMap; // rax
  unsigned int v10; // edx
  unsigned __int16 *v11; // r15
  int v12; // esi
  unsigned int v13; // r15d
  char *v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rax
  const unsigned __int16 *v18; // rax
  unsigned int v19; // edx
  unsigned __int16 *v20; // rsi
  int v21; // [rsp+28h] [rbp-48h]
  int v22; // [rsp+28h] [rbp-48h]
  unsigned int v24; // [rsp+30h] [rbp-40h]
  _BYTE v25[8]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-30h]
  __int64 v27; // [rsp+48h] [rbp-28h]
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  int v29; // [rsp+60h] [rbp-10h]

  v7 = -1073741823;
  v8 = 2;
  if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
  {
    *((_DWORD *)a1 + 63) = a3 == 0;
    if ( (*((_DWORD *)a1 + 40) & 8) != 0 && a2 )
    {
      v15 = (char *)*((_QWORD *)a1 + 33);
      v16 = a2->dmDriverExtra + a2->dmSize;
      if ( v15 )
      {
        GreDeleteFastMutex(v15);
        *((_QWORD *)a1 + 33) = 0LL;
      }
      v17 = PALLOCNOZ(v16, 0x73726447u);
      *((_QWORD *)a1 + 33) = v17;
      if ( !v17 )
        return 3221225495LL;
      *(_OWORD *)v17 = *(_OWORD *)a2->dmDeviceName;
      *(_OWORD *)(v17 + 16) = *(_OWORD *)&a2->dmDeviceName[8];
      *(_OWORD *)(v17 + 32) = *(_OWORD *)&a2->dmDeviceName[16];
      *(_OWORD *)(v17 + 48) = *(_OWORD *)&a2->dmDeviceName[24];
      *(_OWORD *)(v17 + 64) = *(_OWORD *)&a2->dmSpecVersion;
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)(v17 + 80) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4);
      *(_OWORD *)(v17 + 96) = *(_OWORD *)&a2->dmYResolution;
      *(_OWORD *)(v17 + 112) = *(_OWORD *)&a2->dmFormName[5];
      *(_OWORD *)(v17 + 128) = *(_OWORD *)&a2->dmFormName[13];
      *(_OWORD *)(v17 + 144) = *(_OWORD *)&a2->dmFormName[21];
      *(_OWORD *)(v17 + 160) = *(_OWORD *)&a2->dmFormName[29];
      *(_OWORD *)(v17 + 176) = *(_OWORD *)&a2->dmPelsHeight;
      *(_OWORD *)(v17 + 192) = *(_OWORD *)&a2->dmICMIntent;
      *(_QWORD *)(v17 + 208) = *(_QWORD *)&a2->dmReserved2;
      *(_DWORD *)(v17 + 216) = a2->dmPanningHeight;
      memmove((void *)(*((_QWORD *)a1 + 33) + 220LL), &a2[1], a2->dmDriverExtra);
    }
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      RegistryHandleFromDeviceMap = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                                                (unsigned __int16 *)a1,
                                                                v8,
                                                                0LL,
                                                                0LL,
                                                                0,
                                                                0LL);
      v11 = (unsigned __int16 *)RegistryHandleFromDeviceMap;
      if ( RegistryHandleFromDeviceMap )
      {
        v12 = DrvWriteDisplayDriverParameters(a1, v10, RegistryHandleFromDeviceMap, a2, a3, v21);
        ZwClose(v11);
        v13 = 0;
        v7 = v12;
        if ( v12 >= 0 )
          break;
      }
      if ( v8 != 2 )
        goto LABEL_5;
      v8 = 0;
    }
    if ( a4 )
    {
      v26 = 0;
      v27 = 0LL;
      EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v25, a1);
      if ( v26 )
      {
        v24 = v12;
        do
        {
          v29 = 0;
          v28 = 0LL;
          EnsureMonitorDevices::GetMonitorDevice(
            (EnsureMonitorDevices *)v25,
            v13,
            (struct tagVIDEO_MONITOR_DEVICE *)&v28);
          if ( (v28 & 3) == 3 )
          {
            v18 = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                              (unsigned __int16 *)a1,
                                              v8,
                                              (unsigned int *)&v28 + 1,
                                              0LL,
                                              0,
                                              0LL);
            v20 = (unsigned __int16 *)v18;
            if ( v18 )
            {
              DrvWriteDisplayDriverParameters(a1, v19, v18, a2, a3, v22);
              ZwClose(v20);
            }
          }
          ++v13;
        }
        while ( v13 < v26 );
        v7 = v24;
      }
      EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v25);
    }
LABEL_5:
    if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
      return 0;
    return v7;
  }
}
