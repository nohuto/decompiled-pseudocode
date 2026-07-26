/*
 * XREFs of ndisLWMBuildConfigurationKeyPath @ 0x140169030
 * Callers:
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x140168ED0 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400812F0 (WPP_RECORDER_SF__guid_.c)
 *     WPP_RECORDER_SF__guid_d @ 0x140081440 (WPP_RECORDER_SF__guid_d.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x140085330 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_S @ 0x14009EAD0 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ReadConfigurationPath@NetSetupPropertyBag@@QEAAJAEAUNetSetupConfigurationPath@@@Z @ 0x1401409B0 (-ReadConfigurationPath@NetSetupPropertyBag@@QEAAJAEAUNetSetupConfigurationPath@@@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1401692B0 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisLWMBuildConfigurationKeyPath(__int64 a1, wchar_t *a2)
{
  int ConfigurationPath; // eax
  unsigned int v5; // ebx
  unsigned int v6; // eax
  HANDLE v7; // rcx
  unsigned __int16 v9; // r9
  char v10[8]; // [rsp+28h] [rbp-260h]
  HANDLE Handle; // [rsp+40h] [rbp-248h] BYREF
  HANDLE *p_Handle; // [rsp+48h] [rbp-240h] BYREF
  _DWORD v13[132]; // [rsp+50h] [rbp-238h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x86u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      a1);
  Handle = 0LL;
  ConfigurationPath = ndisIfOpenInterfaceRegistryKey(a1, (KRegKey *)&Handle, 1u, 1);
  v5 = ConfigurationPath;
  if ( ConfigurationPath )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v9 = 135;
LABEL_25:
    *(_DWORD *)v10 = ConfigurationPath;
    goto LABEL_26;
  }
  p_Handle = &Handle;
  memset(v13, 0, 0x204uLL);
  ConfigurationPath = NetSetupPropertyBag::ReadConfigurationPath(
                        (NetSetupPropertyBag *)&p_Handle,
                        (struct NetSetupConfigurationPath *)v13);
  v5 = ConfigurationPath;
  if ( ConfigurationPath )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v9 = 136;
    goto LABEL_25;
  }
  if ( !v13[0] )
  {
    v6 = RtlStringCchPrintfW(a2, 256LL, L"\\Registry\\Machine\\System\\CurrentControlSet\\%ws", &v13[1]);
    goto LABEL_7;
  }
  if ( v13[0] == 1 )
  {
    v6 = RtlStringCchPrintfW(a2, 256LL, L"\\Registry\\Machine\\DEVICES\\%ws", &v13[1]);
LABEL_7:
    v5 = v6;
    if ( !v6 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0x8Au,
          (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
          a2);
      v7 = Handle;
      if ( Handle )
        goto LABEL_11;
      goto LABEL_12;
    }
    goto LABEL_23;
  }
  v5 = -1073741811;
LABEL_23:
  if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_16;
  v9 = 137;
  *(_DWORD *)v10 = v5;
LABEL_26:
  WPP_RECORDER_SF_d(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    2u,
    1u,
    v9,
    (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
    *(_QWORD *)v10);
LABEL_16:
  v7 = Handle;
  if ( Handle )
LABEL_11:
    ZwClose(v7);
LABEL_12:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x8Bu,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      a1,
      v5);
  return v5;
}
