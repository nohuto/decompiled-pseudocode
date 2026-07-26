/*
 * XREFs of ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401655B0
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14006E990 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x140094F70 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?SetValueBlob@KRegKey@@QEAAJPEB_WKPEBE@Z @ 0x140135F20 (-SetValueBlob@KRegKey@@QEAAJPEB_WKPEBE@Z.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x140135FF0 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x140136CE4 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x140142478 (-DeleteValue@KRegKey@@QEAAJPEB_W@Z.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1401656C0 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsPseudoMigration(KRegKey *this, const struct _UNICODE_STRING **a2, _BYTE *a3)
{
  const UNICODE_STRING *v6; // rcx
  ULONG v7; // r9d
  size_t v8; // r8
  ULONG v9; // r9d
  GUID Guid; // [rsp+30h] [rbp-38h] BYREF

  if ( ndisIsNetSetupV2Interface(*a2) || !ndisIsNetSetupV1Interface(*a2) )
  {
    *a3 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xDu,
        0x38u,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        (*a2)->Buffer);
    v6 = *a2;
    Guid = 0LL;
    if ( RtlGUIDFromString(v6, &Guid) >= 0 )
      KRegKey::SetValueBlob(this, L"SuggestedInstanceId", 0x10uLL, (unsigned __int8 *)&Guid);
    KRegKey::SetValueUlong(this, L"MigratedFromNetSetupV1", 1uLL, v7);
    KRegKey::DeleteValue(this, L"NetCfgInstanceId", v8, v9);
    *a3 = 1;
  }
  return 0LL;
}
