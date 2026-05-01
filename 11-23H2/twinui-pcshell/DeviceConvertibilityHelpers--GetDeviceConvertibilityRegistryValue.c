/*
 * XREFs of DeviceConvertibilityHelpers::GetDeviceConvertibilityRegistryValue @ 0x1801B969C
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x1800A78F0 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceConvertibilityHelpers::GetDeviceConvertibilityRegistryValue(
        HKEY a1,
        const WCHAR *a2,
        const WCHAR *a3)
{
  LSTATUS ValueW; // eax
  int v4; // r8d
  BOOL v5; // edx
  bool v6; // sf
  DWORD v8; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v9[5]; // [rsp+44h] [rbp-14h] BYREF
  DWORD v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0;
  v8 = 4;
  ValueW = RegGetValueW(a1, a2, a3, 0x10000012u, &v10, v9, &v8);
  v4 = ValueW;
  v5 = 1;
  if ( !ValueW )
  {
    v4 = 13;
    if ( v10 == 4 )
    {
      if ( v9[0] <= 1 )
      {
        v4 = 0;
        v5 = v9[0] != 1;
      }
    }
    else if ( v8 == 4 && (LOWORD(v9[0]) == 48 || LOWORD(v9[0]) == 49) )
    {
      v4 = 0;
      v5 = LOWORD(v9[0]) != 49;
    }
LABEL_3:
    v6 = v4 < 0;
    if ( v4 <= 0 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( ValueW != 234 )
    goto LABEL_3;
LABEL_4:
  v6 = 1;
LABEL_5:
  if ( v6 )
    return 0LL;
  else
    return (unsigned int)(2 * v5 + 1);
}
