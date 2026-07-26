/*
 * XREFs of ndisLWMBuildConfigurationKeyPath @ 0x14015C0E0
 * Callers:
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x14015BF80 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400657A0 (WPP_RECORDER_SF__guid_.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1400658F0 (WPP_RECORDER_SF__guid_d.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x140069B30 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_S @ 0x140094F70 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ReadConfigurationPath@NetSetupPropertyBag@@QEAAJAEAUNetSetupConfigurationPath@@@Z @ 0x1401359B0 (-ReadConfigurationPath@NetSetupPropertyBag@@QEAAJAEAUNetSetupConfigurationPath@@@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015C360 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisLWMBuildConfigurationKeyPath(__int64 a1, wchar_t *a2)
{
  int ConfigurationPath; // eax
  int v5; // edx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  HANDLE v8; // rcx
  int v10; // r9d
  char v11; // [rsp+28h] [rbp-260h]
  HANDLE Handle; // [rsp+40h] [rbp-248h] BYREF
  HANDLE *p_Handle; // [rsp+48h] [rbp-240h] BYREF
  _DWORD v14[132]; // [rsp+50h] [rbp-238h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x8Au,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      a1);
  Handle = 0LL;
  ConfigurationPath = ndisIfOpenInterfaceRegistryKey(a1, (KRegKey *)&Handle, 1u, 1);
  v6 = ConfigurationPath;
  if ( ConfigurationPath )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v10 = 139;
LABEL_25:
    v11 = ConfigurationPath;
    goto LABEL_26;
  }
  p_Handle = &Handle;
  memset(v14, 0, 0x204uLL);
  ConfigurationPath = NetSetupPropertyBag::ReadConfigurationPath(
                        (NetSetupPropertyBag *)&p_Handle,
                        (struct NetSetupConfigurationPath *)v14);
  v6 = ConfigurationPath;
  if ( ConfigurationPath )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v10 = 140;
    goto LABEL_25;
  }
  if ( !v14[0] )
  {
    v7 = RtlStringCchPrintfW(a2, 256LL, L"\\Registry\\Machine\\System\\CurrentControlSet\\%ws", &v14[1]);
    goto LABEL_7;
  }
  if ( v14[0] == 1 )
  {
    v7 = RtlStringCchPrintfW(a2, 256LL, L"\\Registry\\Machine\\DEVICES\\%ws", &v14[1]);
LABEL_7:
    v6 = v7;
    if ( !v7 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0x8Eu,
          (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
          a2);
      v8 = Handle;
      if ( Handle )
        goto LABEL_11;
      goto LABEL_12;
    }
    goto LABEL_23;
  }
  v6 = -1073741811;
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_16;
  v10 = 141;
  v11 = v6;
LABEL_26:
  LOBYTE(v5) = 2;
  WPP_RECORDER_SF_d(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v5,
    1,
    v10,
    (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
    v11);
LABEL_16:
  v8 = Handle;
  if ( Handle )
LABEL_11:
    ZwClose(v8);
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x8Fu,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      a1,
      v6);
  return v6;
}
