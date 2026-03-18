/*
 * XREFs of ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x140122F94
 * Callers:
 *     DrvUpdateDisplayDriverParameters @ 0x140122CD0 (DrvUpdateDisplayDriverParameters.c)
 * Callees:
 *     ?DrvWriteAttachedSettings@@YAJKPEBGQEAU_devicemodeW@@HPEAK@Z @ 0x140012E78 (-DrvWriteAttachedSettings@@YAJKPEBGQEAU_devicemodeW@@HPEAK@Z.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140013900 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x140123460 (-AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

int __fastcall DrvWriteDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        struct _devicemodeW *const a4,
        int a5)
{
  int v8; // ecx
  int result; // eax
  NTSTATUS v10; // edi
  char v11; // bl
  PCWSTR *p_Name; // rcx
  wchar_t **v13; // rdx
  __int64 v14; // r8
  const WCHAR *v15; // rax
  unsigned int v16; // r15d
  NTSTATUS v17; // eax
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  _devicemodeW v20; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v21[12]; // [rsp+120h] [rbp+20h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+150h] [rbp+50h] BYREF
  __int64 v23; // [rsp+188h] [rbp+88h]
  int v24; // [rsp+190h] [rbp+90h]
  __int64 v25; // [rsp+198h] [rbp+98h]
  DWORD *p_dmPelsWidth; // [rsp+1A0h] [rbp+A0h]
  int v27; // [rsp+1A8h] [rbp+A8h]
  __int64 v28; // [rsp+1B0h] [rbp+B0h]
  int v29; // [rsp+1B8h] [rbp+B8h]
  __int64 v30; // [rsp+1C0h] [rbp+C0h]
  int v31; // [rsp+1C8h] [rbp+C8h]
  __int64 v32; // [rsp+1D0h] [rbp+D0h]
  DWORD *p_dmPelsHeight; // [rsp+1D8h] [rbp+D8h]
  int v34; // [rsp+1E0h] [rbp+E0h]
  __int64 v35; // [rsp+1E8h] [rbp+E8h]
  int v36; // [rsp+1F0h] [rbp+F0h]
  __int64 v37; // [rsp+1F8h] [rbp+F8h]
  int v38; // [rsp+200h] [rbp+100h]
  __int64 v39; // [rsp+208h] [rbp+108h]
  DWORD *p_dmDisplayFrequency; // [rsp+210h] [rbp+110h]
  int v41; // [rsp+218h] [rbp+118h]
  __int64 v42; // [rsp+220h] [rbp+120h]
  int v43; // [rsp+228h] [rbp+128h]
  __int64 v44; // [rsp+230h] [rbp+130h]
  int v45; // [rsp+238h] [rbp+138h]
  __int64 v46; // [rsp+240h] [rbp+140h]
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *p_dmDisplayFlags; // [rsp+248h] [rbp+148h]
  int v48; // [rsp+250h] [rbp+150h]
  __int64 v49; // [rsp+258h] [rbp+158h]
  int v50; // [rsp+260h] [rbp+160h]
  __int64 v51; // [rsp+268h] [rbp+168h]
  int v52; // [rsp+270h] [rbp+170h]
  __int64 v53; // [rsp+278h] [rbp+178h]
  DWORD *p_dmPanningWidth; // [rsp+280h] [rbp+180h]
  int v55; // [rsp+288h] [rbp+188h]
  __int64 v56; // [rsp+290h] [rbp+190h]
  int v57; // [rsp+298h] [rbp+198h]
  __int64 v58; // [rsp+2A0h] [rbp+1A0h]
  int v59; // [rsp+2A8h] [rbp+1A8h]
  __int64 v60; // [rsp+2B0h] [rbp+1B0h]
  DWORD *p_dmPanningHeight; // [rsp+2B8h] [rbp+1B8h]
  int v62; // [rsp+2C0h] [rbp+1C0h]
  __int64 v63; // [rsp+2C8h] [rbp+1C8h]
  int v64; // [rsp+2D0h] [rbp+1D0h]
  __int64 v65; // [rsp+2D8h] [rbp+1D8h]
  int v66; // [rsp+2E0h] [rbp+1E0h]
  __int64 v67; // [rsp+2E8h] [rbp+1E8h]
  DWORD *p_dmDisplayOrientation; // [rsp+2F0h] [rbp+1F0h]
  int v69; // [rsp+2F8h] [rbp+1F8h]
  __int64 v70; // [rsp+300h] [rbp+200h]
  int v71; // [rsp+308h] [rbp+208h]
  __int64 v72; // [rsp+310h] [rbp+210h]
  int v73; // [rsp+318h] [rbp+218h]
  __int64 v74; // [rsp+320h] [rbp+220h]
  DWORD *p_dmDisplayFixedOutput; // [rsp+328h] [rbp+228h]
  int v76; // [rsp+330h] [rbp+230h]
  __int64 v77; // [rsp+338h] [rbp+238h]
  int v78; // [rsp+340h] [rbp+240h]
  __int64 (__fastcall *v79)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+348h] [rbp+248h]
  int v80; // [rsp+350h] [rbp+250h]
  const wchar_t *v81; // [rsp+358h] [rbp+258h]
  _devicemodeW *v82; // [rsp+360h] [rbp+260h]
  int v83; // [rsp+368h] [rbp+268h]
  int *v84; // [rsp+370h] [rbp+270h]
  int v85; // [rsp+378h] [rbp+278h]
  __int64 v86; // [rsp+380h] [rbp+280h]
  int v87; // [rsp+388h] [rbp+288h]
  __int64 v88; // [rsp+390h] [rbp+290h]
  __int128 v89; // [rsp+398h] [rbp+298h]
  __int128 v90; // [rsp+3A8h] [rbp+2A8h]

  v18 = 11;
  if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
    return 0;
  result = DrvWriteAttachedSettings(v8, a3, a4, a5, &v18);
  v10 = result;
  if ( !a5 )
  {
    if ( a4 )
    {
      v11 = 0;
      if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
      {
        memset(&v20, 0, sizeof(v20));
        v19 = 0;
        QueryTable.QueryRoutine = 0LL;
        QueryTable.Flags = 288;
        QueryTable.EntryContext = &v20.dmBitsPerPel;
        p_dmPelsWidth = &v20.dmPelsWidth;
        p_dmPelsHeight = &v20.dmPelsHeight;
        p_dmDisplayFrequency = &v20.dmDisplayFrequency;
        p_dmDisplayFlags = (union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *)&v20.dmDisplayFlags;
        p_dmPanningWidth = &v20.dmPanningWidth;
        p_dmPanningHeight = &v20.dmPanningHeight;
        p_dmDisplayOrientation = &v20.dmDisplayOrientation;
        p_dmDisplayFixedOutput = &v20.dmDisplayFixedOutput;
        v79 = DrvDriverExtraSizeCallback;
        QueryTable.Name = 0LL;
        QueryTable.DefaultType = 0x4000000;
        QueryTable.DefaultData = 0LL;
        QueryTable.DefaultLength = 0;
        v23 = 0LL;
        v24 = 288;
        v25 = 0LL;
        v27 = 0x4000000;
        v28 = 0LL;
        v29 = 0;
        v30 = 0LL;
        v31 = 288;
        v32 = 0LL;
        v34 = 0x4000000;
        v35 = 0LL;
        v36 = 0;
        v37 = 0LL;
        v38 = 288;
        v39 = 0LL;
        v41 = 0x4000000;
        v42 = 0LL;
        v43 = 0;
        v44 = 0LL;
        v45 = 288;
        v46 = 0LL;
        v48 = 0x4000000;
        v49 = 0LL;
        v50 = 0;
        v51 = 0LL;
        v52 = 288;
        v53 = 0LL;
        v55 = 0x4000000;
        v56 = 0LL;
        v57 = 0;
        v58 = 0LL;
        v59 = 288;
        v60 = 0LL;
        v62 = 0x4000000;
        v63 = 0LL;
        v64 = 0;
        v65 = 0LL;
        v66 = 288;
        v67 = 0LL;
        v69 = 0x4000000;
        v70 = 0LL;
        v71 = 0;
        v72 = 0LL;
        v73 = 288;
        v74 = 0LL;
        v76 = 0x4000000;
        v77 = 0LL;
        v78 = 0;
        v80 = 0;
        v83 = 4;
        v82 = &v20;
        v85 = 4;
        v84 = &v19;
        p_Name = &QueryTable.Name;
        v86 = 0LL;
        v13 = off_140243030;
        v87 = 0;
        v14 = 9LL;
        v88 = 0LL;
        v89 = 0LL;
        v90 = 0LL;
        do
        {
          v15 = *v13++;
          *p_Name = v15;
          p_Name += 7;
          --v14;
        }
        while ( v14 );
        v81 = L"DefaultSettings.DriverExtra";
        v10 = RtlQueryRegistryValues(0x40000000u, a3, &QueryTable, 0LL, 0LL);
        if ( v10 >= 0 && (v20.dmDriverExtra & 0xFFFB) != 0 && !AreEquivalentDevModes(a4, &v20) )
          v11 = 1;
      }
      v16 = 0;
      v21[0] = a4->dmBitsPerPel;
      v21[1] = a4->dmPelsWidth;
      v21[2] = a4->dmPelsHeight;
      v21[3] = a4->dmDisplayFrequency;
      v21[4] = a4->dmDisplayFlags;
      v21[5] = a4->dmPanningWidth;
      v21[6] = a4->dmPanningHeight;
      v21[7] = a4->dmDisplayOrientation;
      v21[8] = a4->dmDisplayFixedOutput;
      v21[9] = a4->dmPosition.x;
      v21[10] = a4->dmPosition.y;
      if ( v10 >= 0 )
      {
        while ( v16 < v18 )
        {
          v17 = RtlWriteRegistryValue(0x40000000u, a3, off_140243030[v16], 4u, &v21[v16], 4u);
          ++v16;
          v10 = v17;
          if ( v17 < 0 )
            return v10;
        }
        if ( a4->dmDriverExtra )
        {
          return RtlWriteRegistryValue(
                   0x40000000u,
                   a3,
                   L"DefaultSettings.DriverExtra",
                   3u,
                   (char *)a4 + a4->dmSize,
                   a4->dmDriverExtra);
        }
        else if ( v11 )
        {
          RtlDeleteRegistryValue(0x40000000u, a3, L"DefaultSettings.DriverExtra");
        }
      }
      return v10;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
