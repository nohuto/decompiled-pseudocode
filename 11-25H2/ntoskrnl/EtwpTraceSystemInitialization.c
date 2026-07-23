/*
 * XREFs of EtwpTraceSystemInitialization @ 0x140C2C93C
 * Callers:
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     RtlGetSystemTimePrecise @ 0x14031AAC0 (RtlGetSystemTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     HviGetHardwareFeatures @ 0x1404A37E0 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorFeatures @ 0x1406577F0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140657AE0 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlGetVersion @ 0x140A0B990 (RtlGetVersion.c)
 *     EtwpTraceBootSystemTime @ 0x140C2C6E4 (EtwpTraceBootSystemTime.c)
 */

char EtwpTraceSystemInitialization()
{
  __int64 v0; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  char v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  ULONGLONG v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  LARGE_INTEGER SystemTimePrecise; // rax
  __int64 v10; // rcx
  ULONGLONG v11; // rax
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  int v17; // [rsp+58h] [rbp-B0h] BYREF
  DWORD dwMajorVersion; // [rsp+5Ch] [rbp-ACh] BYREF
  DWORD dwMinorVersion; // [rsp+60h] [rbp-A8h] BYREF
  DWORD dwBuildNumber; // [rsp+64h] [rbp-A4h] BYREF
  int v21; // [rsp+68h] [rbp-A0h] BYREF
  int v22; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v23; // [rsp+70h] [rbp-98h] BYREF
  int v24; // [rsp+74h] [rbp-94h] BYREF
  LARGE_INTEGER v25; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v26; // [rsp+80h] [rbp-88h] BYREF
  __int128 v27; // [rsp+88h] [rbp-80h] BYREF
  __int128 v28; // [rsp+98h] [rbp-70h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v30; // [rsp+1BCh] [rbp+B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C8h] [rbp+C0h] BYREF
  LARGE_INTEGER *v32; // [rsp+1D8h] [rbp+D0h]
  __int64 v33; // [rsp+1E0h] [rbp+D8h]
  DWORD *v34; // [rsp+1E8h] [rbp+E0h]
  __int64 v35; // [rsp+1F0h] [rbp+E8h]
  int *v36; // [rsp+1F8h] [rbp+F0h]
  __int64 v37; // [rsp+200h] [rbp+F8h]
  __int16 *v38; // [rsp+208h] [rbp+100h]
  __int64 v39; // [rsp+210h] [rbp+108h]
  int *v40; // [rsp+218h] [rbp+110h]
  __int64 v41; // [rsp+220h] [rbp+118h]
  LARGE_INTEGER *v42; // [rsp+228h] [rbp+120h]
  __int64 v43; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+238h] [rbp+130h] BYREF
  DWORD *p_dwMajorVersion; // [rsp+258h] [rbp+150h]
  __int64 v46; // [rsp+260h] [rbp+158h]
  DWORD *p_dwMinorVersion; // [rsp+268h] [rbp+160h]
  __int64 v48; // [rsp+270h] [rbp+168h]
  DWORD *p_dwBuildNumber; // [rsp+278h] [rbp+170h]
  __int64 v50; // [rsp+280h] [rbp+178h]
  int *v51; // [rsp+288h] [rbp+180h]
  __int64 v52; // [rsp+290h] [rbp+188h]
  int *v53; // [rsp+298h] [rbp+190h]
  __int64 v54; // [rsp+2A0h] [rbp+198h]
  int *v55; // [rsp+2A8h] [rbp+1A0h]
  __int64 v56; // [rsp+2B0h] [rbp+1A8h]
  int *v57; // [rsp+2B8h] [rbp+1B0h]
  __int64 v58; // [rsp+2C0h] [rbp+1B8h]
  __int128 *v59; // [rsp+2C8h] [rbp+1C0h]
  __int64 v60; // [rsp+2D0h] [rbp+1C8h]
  unsigned int *v61; // [rsp+2D8h] [rbp+1D0h]
  __int64 v62; // [rsp+2E0h] [rbp+1D8h]
  int *v63; // [rsp+2E8h] [rbp+1E0h]
  __int64 v64; // [rsp+2F0h] [rbp+1E8h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+2F8h] [rbp+1F0h] BYREF
  unsigned int *v66; // [rsp+318h] [rbp+210h]
  __int64 v67; // [rsp+320h] [rbp+218h]
  int *v68; // [rsp+328h] [rbp+220h]
  __int64 v69; // [rsp+330h] [rbp+228h]

  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  v16 = NtBuildQfe;
  v17 = InitSafeBootMode;
  v28 = 0LL;
  VersionInformation.dwOSVersionInfoSize = 284;
  LODWORD(v0) = RtlGetVersion(&VersionInformation);
  if ( (int)v0 >= 0 )
  {
    v25 = KeBootTime;
    if ( (unsigned int)dword_140E09048 > 5 && tlgKeywordOn((__int64)&dword_140E09048, 0x800000000000LL) )
    {
      dwMajorVersion = VersionInformation.dwMajorVersion;
      *(_QWORD *)&v27 = v1;
      p_dwMajorVersion = &dwMajorVersion;
      dwMinorVersion = VersionInformation.dwMinorVersion;
      LOBYTE(v13) = v2 != 0;
      v46 = 4LL;
      p_dwMinorVersion = &dwMinorVersion;
      dwBuildNumber = VersionInformation.dwBuildNumber;
      p_dwBuildNumber = &dwBuildNumber;
      v51 = &v21;
      v22 = v16;
      v53 = &v22;
      LOWORD(v14) = v30;
      v55 = &v14;
      v23 = v17;
      v57 = &v23;
      v59 = &v27;
      v15 = dword_140E65AE0;
      v61 = &v15;
      v63 = &v13;
      v48 = 4LL;
      v50 = 4LL;
      v21 = 1;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 2LL;
      v58 = 4LL;
      v60 = 8LL;
      v62 = 4LL;
      v64 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09048,
        (unsigned __int8 *)&word_1400519DE,
        0LL,
        0LL,
        0xCu,
        &v44);
    }
    LOBYTE(v0) = HviIsHypervisorVendorMicrosoft();
    if ( (_BYTE)v0 )
    {
      HviGetHardwareFeatures((__int64)&v28);
      v27 = 0LL;
      LOBYTE(v0) = HviGetHypervisorFeatures(&v27);
      if ( (unsigned int)dword_140E09048 > 5 )
      {
        LOBYTE(v0) = tlgKeywordOn((__int64)&dword_140E09048, 0x400000000000LL);
        if ( (_BYTE)v0 )
        {
          LOBYTE(v13) = v3;
          v15 = ((unsigned int)v28 >> 10) & 0xF;
          v67 = 4LL;
          v66 = &v15;
          v69 = 1LL;
          v68 = &v13;
          LOBYTE(v0) = tlgWriteTransfer_EtwWriteTransfer(
                         (__int64)&dword_140E09048,
                         (unsigned __int8 *)byte_140051878,
                         0LL,
                         0LL,
                         4u,
                         &v65);
        }
      }
    }
    if ( EtwKernelProvRegHandle )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&VersionInformation.dwMajorVersion;
      v33 = 4LL;
      v32 = (LARGE_INTEGER *)&VersionInformation.dwMinorVersion;
      v35 = 4LL;
      v34 = &VersionInformation.dwBuildNumber;
      v37 = 4LL;
      v36 = &v16;
      v38 = &v30;
      v40 = &v17;
      v42 = &v25;
      v39 = 2LL;
      v41 = 4LL;
      v43 = 8LL;
      EtwWriteEx(EtwKernelProvRegHandle, &KernelSystemStart, 0LL, 0, 0LL, 0LL, 7u, &UserData);
      EtwpTraceBootSystemTime();
      if ( EtwEventEnabled(EtwKernelProvRegHandle, &BootPerformanceData) )
      {
        UserData.Ptr = (ULONGLONG)&EtwBootPerfData;
        *(_QWORD *)&UserData.Size = 264LL;
        EtwWriteEx(EtwKernelProvRegHandle, &BootPerformanceData, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
      v0 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      v4 = *(_QWORD *)(v0 + 240);
      if ( (*(_DWORD *)(v4 + 132) & 0x100) != 0 || *(_QWORD *)(v4 + 224) )
      {
        LOBYTE(v0) = EtwEventEnabled(EtwKernelProvRegHandle, &VsmPerformanceData);
        if ( (_BYTE)v0 )
        {
          v5 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
          v6 = *(_QWORD *)(v5 + 240) + 224LL;
          *(_QWORD *)&UserData.Size = 8LL;
          UserData.Ptr = v6;
          v7 = *(_QWORD *)(v5 + 240) + 3520LL;
          v33 = 64LL;
          v32 = (LARGE_INTEGER *)v7;
          v34 = (DWORD *)(*(_QWORD *)(v5 + 240) + 3864LL);
          v35 = 8LL;
          LOBYTE(v0) = EtwWriteEx(EtwKernelProvRegHandle, &VsmPerformanceData, 0LL, 0, 0LL, 0LL, 3u, &UserData);
        }
      }
      if ( (qword_140EFE818 & 4) != 0 )
      {
        v8 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
        v24 = (*(_DWORD *)(*(_QWORD *)(v8 + 240) + 2648LL) >> 14) & 1;
        SystemTimePrecise = RtlGetSystemTimePrecise();
        v10 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
        v26 = SystemTimePrecise;
        v11 = *(_QWORD *)(v10 + 240) + 2944LL;
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = v11;
        v32 = &v26;
        v33 = 8LL;
        v34 = (DWORD *)(*(_QWORD *)(v10 + 240) + 2936LL);
        v36 = &v24;
        v35 = 4LL;
        v37 = 4LL;
        LOBYTE(v0) = EtwWriteEx(EtwKernelProvRegHandle, &SoftBootInfo, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
  return v0;
}
