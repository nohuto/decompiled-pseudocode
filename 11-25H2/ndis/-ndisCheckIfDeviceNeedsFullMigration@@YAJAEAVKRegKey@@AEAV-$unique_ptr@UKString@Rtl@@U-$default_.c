/*
 * XREFs of ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401401B0
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14008AE90 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     WPP_RECORDER_SF_S @ 0x14009EAD0 (WPP_RECORDER_SF_S.c)
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140174B50 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsFullMigration(__int64 a1, __int64 a2, _BYTE *a3, ULONG a4)
{
  void *v6; // rbx
  NTSTATUS inited; // edi
  NTSTATUS v9; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  void *v12; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  v12 = 0LL;
  DestinationString = 0LL;
  inited = RtlUnicodeStringInitWorker(&DestinationString, L"RetiredNetCfgInstanceId", (const size_t)a3, a4);
  if ( inited >= 0 )
  {
    v9 = KRegKey::QueryValueString(a1, &DestinationString, &v12);
    v6 = v12;
    inited = v9;
  }
  if ( inited == -1073741772 )
  {
    *a3 = 0;
    if ( v6 )
      ExFreePoolWithTag(v6, 0x7274534Bu);
    return 0LL;
  }
  else if ( inited )
  {
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v12, 0LL);
    return (unsigned int)inited;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xDu,
        0x39u,
        (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
        *(const wchar_t **)(*(_QWORD *)a2 + 8LL));
    *a3 = 1;
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v12, 0LL);
    return 0LL;
  }
}
