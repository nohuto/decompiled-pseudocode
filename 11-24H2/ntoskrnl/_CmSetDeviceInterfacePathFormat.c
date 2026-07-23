/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x140A41A9C
 * Callers:
 *     PiDmObjectCreate @ 0x140ABF218 (PiDmObjectCreate.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1408C77C0 (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmSetDeviceInterfacePathFormat(__int64 a1, WCHAR *a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = CmValidateDeviceInterfaceName(a1, a2);
  if ( (int)result >= 0 )
  {
    v6 = *(_QWORD *)L"\\\\?\\";
    if ( a3 )
      v6 = 0x5C003F003F005CLL;
    *(_QWORD *)a2 = v6;
  }
  return result;
}
