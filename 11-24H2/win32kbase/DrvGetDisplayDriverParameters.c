/*
 * XREFs of DrvGetDisplayDriverParameters @ 0x140012FAC
 * Callers:
 *     DrvEnumDisplaySettings @ 0x140024870 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401170F8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x140013658 (-DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140013900 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001A960 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x14004F4DC (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     UserGetDisconnectDeviceResolutionHint @ 0x1401B3574 (UserGetDisconnectDeviceResolutionHint.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DrvGetDisplayDriverParameters(__int64 a1, struct _devicemodeW *a2, int a3, __int64 a4)
{
  DWORD *p_dmDisplayFixedOutput; // rdi
  NTSTATUS RegistryValues; // r12d
  unsigned int v9; // r13d
  DWORD *p_dmBitsPerPel; // rcx
  DWORD *v11; // rsi
  DWORD *p_dmPelsWidth; // rdx
  DWORD *p_dmDisplayFrequency; // r9
  int v14; // edi
  PCWSTR *p_Name; // rcx
  __int64 v16; // r9
  wchar_t **v17; // r8
  const WCHAR *v18; // rax
  unsigned int v19; // edi
  WCHAR *RegistryHandleFromDeviceMap; // r15
  __int64 v21; // rcx
  int v22; // eax
  _OWORD *v24; // rdx
  __int128 v25; // xmm0
  _OWORD *v26; // rdx
  unsigned __int16 dmDriverExtra; // cx
  DWORD QueryRoutine_high; // eax
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+120h] [rbp+20h]
  int v33; // [rsp+128h] [rbp+28h]
  __int64 v34; // [rsp+130h] [rbp+30h]
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *p_dmDisplayFlags; // [rsp+138h] [rbp+38h]
  int v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  int v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h]
  int v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]
  DWORD *p_dmPanningWidth; // [rsp+170h] [rbp+70h]
  int v43; // [rsp+178h] [rbp+78h]
  __int64 v44; // [rsp+180h] [rbp+80h]
  int v45; // [rsp+188h] [rbp+88h]
  __int64 v46; // [rsp+190h] [rbp+90h]
  int v47; // [rsp+198h] [rbp+98h]
  __int64 v48; // [rsp+1A0h] [rbp+A0h]
  DWORD *p_dmPanningHeight; // [rsp+1A8h] [rbp+A8h]
  int v50; // [rsp+1B0h] [rbp+B0h]
  __int64 v51; // [rsp+1B8h] [rbp+B8h]
  int v52; // [rsp+1C0h] [rbp+C0h]
  __int64 v53; // [rsp+1C8h] [rbp+C8h]
  int v54; // [rsp+1D0h] [rbp+D0h]
  __int64 v55; // [rsp+1D8h] [rbp+D8h]
  DWORD *p_dmDisplayOrientation; // [rsp+1E0h] [rbp+E0h]
  int v57; // [rsp+1E8h] [rbp+E8h]
  __int64 v58; // [rsp+1F0h] [rbp+F0h]
  int v59; // [rsp+1F8h] [rbp+F8h]
  __int64 v60; // [rsp+200h] [rbp+100h]
  int v61; // [rsp+208h] [rbp+108h]
  __int64 v62; // [rsp+210h] [rbp+110h]
  DWORD *v63; // [rsp+218h] [rbp+118h]
  int v64; // [rsp+220h] [rbp+120h]
  __int64 v65; // [rsp+228h] [rbp+128h]
  int v66; // [rsp+230h] [rbp+130h]
  __int64 v67; // [rsp+238h] [rbp+138h]
  int v68; // [rsp+240h] [rbp+140h]
  __int64 v69; // [rsp+248h] [rbp+148h]
  union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *p_dmOrientation; // [rsp+250h] [rbp+150h]
  int v71; // [rsp+258h] [rbp+158h]
  __int64 v72; // [rsp+260h] [rbp+160h]
  int v73; // [rsp+268h] [rbp+168h]
  __int64 v74; // [rsp+270h] [rbp+170h]
  int v75; // [rsp+278h] [rbp+178h]
  __int64 v76; // [rsp+280h] [rbp+180h]
  LONG *p_y; // [rsp+288h] [rbp+188h]
  int v78; // [rsp+290h] [rbp+190h]
  __int64 v79; // [rsp+298h] [rbp+198h]
  int v80; // [rsp+2A0h] [rbp+1A0h]
  __int64 v81; // [rsp+2A8h] [rbp+1A8h]
  int v82; // [rsp+2B0h] [rbp+1B0h]
  __int64 v83; // [rsp+2B8h] [rbp+1B8h]
  int *v84; // [rsp+2C0h] [rbp+1C0h]
  int v85; // [rsp+2C8h] [rbp+1C8h]
  __int64 v86; // [rsp+2D0h] [rbp+1D0h]
  int v87; // [rsp+2D8h] [rbp+1D8h]
  int (*v88)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2E0h] [rbp+1E0h]
  int v89; // [rsp+2E8h] [rbp+1E8h]
  __int64 v90; // [rsp+2F0h] [rbp+1F0h]
  struct _devicemodeW *v91; // [rsp+2F8h] [rbp+1F8h]
  int v92; // [rsp+300h] [rbp+200h]
  int *v93; // [rsp+308h] [rbp+208h]
  int v94; // [rsp+310h] [rbp+210h]
  __int64 v95; // [rsp+318h] [rbp+218h]
  int v96; // [rsp+320h] [rbp+220h]
  __int64 v97; // [rsp+328h] [rbp+228h]
  __int128 v98; // [rsp+330h] [rbp+230h]
  __int128 v99; // [rsp+340h] [rbp+240h]

  p_dmDisplayFixedOutput = &a2->dmDisplayFixedOutput;
  v29 = 0;
  v30 = 0;
  RegistryValues = 0;
  v9 = 1;
  if ( a3 )
  {
    memset(a2, 0, sizeof(struct _devicemodeW));
  }
  else
  {
    p_dmBitsPerPel = &a2->dmBitsPerPel;
    v11 = &a2->dmDisplayFixedOutput;
    p_dmPelsWidth = &a2->dmPelsWidth;
    p_dmDisplayFrequency = &a2->dmDisplayFrequency;
    if ( a4 )
    {
      *p_dmBitsPerPel = *(_DWORD *)(a4 + 168);
      dmDriverExtra = a2->dmDriverExtra;
      *p_dmPelsWidth = *(_DWORD *)(a4 + 172);
      a2->dmPelsHeight = *(_DWORD *)(a4 + 176);
      *p_dmDisplayFrequency = *(_DWORD *)(a4 + 184);
      a2->dmDisplayFlags = *(_DWORD *)(a4 + 180);
      a2->dmPanningWidth = *(_DWORD *)(a4 + 212);
      a2->dmPanningHeight = *(_DWORD *)(a4 + 216);
      a2->dmPosition.x = *(_DWORD *)(a4 + 76);
      a2->dmPosition.y = *(_DWORD *)(a4 + 80);
      a2->dmDisplayOrientation = *(_DWORD *)(a4 + 84);
      *p_dmDisplayFixedOutput = *(_DWORD *)(a4 + 88);
      if ( dmDriverExtra >= *(_WORD *)(a4 + 70) )
        dmDriverExtra = *(_WORD *)(a4 + 70);
      a2->dmDriverExtra = dmDriverExtra;
      memmove(&a2[1], (const void *)(a4 + 220), dmDriverExtra);
      if ( (*(_DWORD *)(a4 + 72) & 0x20) != 0 )
        v29 = 1;
      goto LABEL_14;
    }
    QueryTable[0].QueryRoutine = 0LL;
    QueryTable[0].Name = 0LL;
    QueryTable[0].EntryContext = p_dmBitsPerPel;
    p_dmPanningHeight = &a2->dmPanningHeight;
    QueryTable[0].DefaultData = 0LL;
    QueryTable[0].DefaultLength = 0;
    QueryTable[1].QueryRoutine = 0LL;
    QueryTable[1].Name = 0LL;
    QueryTable[1].DefaultData = 0LL;
    QueryTable[1].DefaultLength = 0;
    QueryTable[2].QueryRoutine = 0LL;
    QueryTable[2].Name = 0LL;
    p_dmOrientation = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)&a2->dmOrientation;
    QueryTable[1].EntryContext = p_dmPelsWidth;
    QueryTable[2].EntryContext = &a2->dmPelsHeight;
    p_dmDisplayOrientation = &a2->dmDisplayOrientation;
    p_y = &a2->dmPosition.y;
    QueryTable[0].Flags = 288;
    QueryTable[0].DefaultType = 0x4000000;
    QueryTable[1].Flags = 288;
    QueryTable[1].DefaultType = 0x4000000;
    QueryTable[2].Flags = 288;
    QueryTable[2].DefaultType = 0x4000000;
    QueryTable[2].DefaultData = 0LL;
    QueryTable[2].DefaultLength = 0;
    QueryTable[3].QueryRoutine = 0LL;
    QueryTable[3].Flags = 288;
    QueryTable[3].Name = 0LL;
    QueryTable[3].EntryContext = &a2->dmDisplayFrequency;
    QueryTable[3].DefaultType = 0x4000000;
    QueryTable[3].DefaultData = 0LL;
    QueryTable[3].DefaultLength = 0;
    v32 = 0LL;
    v33 = 288;
    v34 = 0LL;
    p_dmDisplayFlags = (union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *)&a2->dmDisplayFlags;
    v36 = 0x4000000;
    v37 = 0LL;
    v38 = 0;
    v39 = 0LL;
    v40 = 288;
    v41 = 0LL;
    p_dmPanningWidth = &a2->dmPanningWidth;
    v43 = 0x4000000;
    v44 = 0LL;
    v45 = 0;
    v46 = 0LL;
    v47 = 288;
    v48 = 0LL;
    v50 = 0x4000000;
    v51 = 0LL;
    v52 = 0;
    v53 = 0LL;
    v54 = 288;
    v55 = 0LL;
    v57 = 0x4000000;
    v58 = 0LL;
    v59 = 0;
    v60 = 0LL;
    v61 = 288;
    v62 = 0LL;
    v63 = p_dmDisplayFixedOutput;
    v64 = 0x4000000;
    v65 = 0LL;
    v66 = 0;
    v67 = 0LL;
    v68 = 288;
    v69 = 0LL;
    v71 = 0x4000000;
    v72 = 0LL;
    v73 = 0;
    v74 = 0LL;
    v75 = 288;
    v76 = 0LL;
    v84 = &v29;
    v88 = DrvDriverExtraCallback;
    v93 = &v30;
    v78 = 0x4000000;
    v79 = 0LL;
    v80 = 0;
    v81 = 0LL;
    v82 = 288;
    v83 = 0LL;
    v85 = 0x4000000;
    v86 = 0LL;
    v87 = 0;
    v89 = 0;
    v90 = 0LL;
    v91 = a2;
    v92 = 4;
    v94 = 0x10000;
    v95 = 0LL;
    v96 = 0;
    v97 = 0LL;
    v98 = 0LL;
    v99 = 0LL;
    if ( !a2->dmDriverExtra )
    {
      v88 = 0LL;
      v89 = 0;
      v90 = 0LL;
      a2->dmDriverExtra = 0;
    }
    v14 = *(_DWORD *)(a1 + 160) & 8;
    if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection(
                          &a2->dmDisplayOrientation,
                          0x4000000LL,
                          0LL,
                          p_dmDisplayFrequency)
      || !v14
      || (v24 = *(_OWORD **)(a1 + 264)) == 0LL )
    {
      p_Name = &QueryTable[0].Name;
      v16 = 13LL;
      v17 = off_140243030;
      do
      {
        v18 = *v17++;
        *p_Name = v18;
        p_Name += 7;
        --v16;
      }
      while ( v16 );
      v19 = 1;
      while ( 1 )
      {
        RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(a1, v9, 0LL, 0LL, 0, 0LL);
        if ( RegistryHandleFromDeviceMap )
        {
          RegistryValues = RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, QueryTable, 0LL, 0LL);
          ZwClose(RegistryHandleFromDeviceMap);
          if ( RegistryValues >= 0 )
          {
            v21 = *(_QWORD *)(W32GetSessionState() + 88);
            if ( v29
              && !a2->dmBitsPerPel
              && !a2->dmPelsWidth
              && !a2->dmPelsHeight
              && !a2->dmDisplayFrequency
              && !a2->dmDisplayFlags
              && !*(_DWORD *)(v21 + 1060) )
            {
              DrvLogDisplayDriverEvent(6LL);
            }
            p_dmDisplayFixedOutput = v11;
            goto LABEL_14;
          }
        }
        else
        {
          RegistryValues = -1073741823;
        }
        ++v19;
        v9 = 0;
        if ( v19 > 2 )
          return (unsigned int)RegistryValues;
      }
    }
    *(_OWORD *)a2->dmDeviceName = *v24;
    *(_OWORD *)&a2->dmDeviceName[8] = v24[1];
    *(_OWORD *)&a2->dmDeviceName[16] = v24[2];
    *(_OWORD *)&a2->dmDeviceName[24] = v24[3];
    *(_OWORD *)&a2->dmSpecVersion = v24[4];
    *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4) = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C)v24[5];
    *(_OWORD *)&a2->dmYResolution = v24[6];
    v25 = v24[7];
    v26 = v24 + 8;
    *(_OWORD *)&a2->dmFormName[5] = v25;
    *(_OWORD *)&a2->dmFormName[13] = *v26;
    *(_OWORD *)&a2->dmFormName[21] = v26[1];
    *(_OWORD *)&a2->dmFormName[29] = v26[2];
    *(_OWORD *)&a2->dmPelsHeight = v26[3];
    *(_OWORD *)&a2->dmICMIntent = v26[4];
    *(_QWORD *)&a2->dmReserved2 = *((_QWORD *)v26 + 10);
    a2->dmPanningHeight = *((_DWORD *)v26 + 22);
    memmove(&a2[1], (const void *)(*(_QWORD *)(a1 + 264) + 220LL), a2->dmDriverExtra);
    p_dmDisplayFixedOutput = v11;
  }
LABEL_14:
  *(_DWORD *)&a2->dmSpecVersion = 67175425;
  a2->dmSize = 220;
  DrvGetDisplayDriverDpiSetting(a2);
  v22 = 410910848;
  a2->dmFields = 410910848;
  if ( v29 )
  {
    v22 = 410910880;
    a2->dmFields = 410910880;
  }
  if ( *p_dmDisplayFixedOutput )
    a2->dmFields = v22 | 0x20000000;
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    memset(QueryTable, 0, 0xDCuLL);
    UserGetDisconnectDeviceResolutionHint(QueryTable);
    if ( ((__int64)QueryTable[1].Name & 0x80000) != 0
      && ((__int64)QueryTable[1].Name & 0x100000) != 0
      && ((__int64)QueryTable[1].Name & 0x40000) != 0 )
    {
      QueryRoutine_high = HIDWORD(QueryTable[3].QueryRoutine);
      a2->dmFields |= 0x1C0000u;
      a2->dmPelsWidth = QueryRoutine_high;
      a2->dmPelsHeight = QueryTable[3].Flags;
      a2->dmBitsPerPel = (DWORD)QueryTable[3].QueryRoutine;
    }
  }
  return (unsigned int)RegistryValues;
}
