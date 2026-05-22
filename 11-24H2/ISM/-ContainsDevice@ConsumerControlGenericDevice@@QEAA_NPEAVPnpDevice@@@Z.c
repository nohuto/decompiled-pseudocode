/*
 * XREFs of ?ContainsDevice@ConsumerControlGenericDevice@@QEAA_NPEAVPnpDevice@@@Z @ 0x1800E6EDC
 * Callers:
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800E4C80 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008F314 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 */

bool __fastcall ConsumerControlGenericDevice::ContainsDevice(ConsumerControlGenericDevice *this, HSTRING *a2)
{
  bool v4; // di
  HSTRING v5; // rcx
  INT32 result; // [rsp+40h] [rbp+18h] BYREF
  HSTRING string2; // [rsp+48h] [rbp+20h] BYREF

  WindowsDeleteString(0LL);
  v4 = 0;
  string2 = 0LL;
  if ( (int)PnpDevice::GetInterfacePath(a2, &string2) >= 0 )
  {
    v5 = (HSTRING)*((_QWORD *)this + 3);
    if ( v5 )
    {
      if ( string2 )
      {
        result = 0;
        if ( WindowsCompareStringOrdinal(v5, string2, &result) >= 0 )
          v4 = result == 0;
      }
    }
    else
    {
      v4 = string2 == 0LL;
    }
  }
  WindowsDeleteString(string2);
  return v4;
}
