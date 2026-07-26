/*
 * XREFs of ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x140173DD0
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14008AE90 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140173E10 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsInstallation(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 result; // rax

  result = KRegKey::QueryValueString(a1, L"NetCfgInstanceId", a2);
  if ( (_DWORD)result == -1073741772 )
  {
    *a3 = 1;
    return 0LL;
  }
  else if ( !(_DWORD)result )
  {
    *a3 = 0;
  }
  return result;
}
