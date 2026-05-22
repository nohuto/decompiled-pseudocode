/*
 * XREFs of ?ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x180064CCC
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x1800E55AC (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z.c)
 * Callees:
 *     swscanf_s @ 0x18009DD1C (swscanf_s.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E817C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z @ 0x1800E8434 (-LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z.c)
 */

__int64 __fastcall PnpDevice::ParseHardwareIdStrings(PnpDevice *this, HSTRING a2)
{
  PCWSTR StringRawBuffer; // rax
  UINT32 v4; // ecx
  const wchar_t *v5; // rdi
  size_t v6; // rsi
  bool v7; // zf
  __int16 v9; // ax
  __int16 v10; // cx
  LampArrayTelemetry *v11; // rcx
  UINT32 length[4]; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+70h] [rbp+30h] BYREF
  int v14; // [rsp+78h] [rbp+38h] BYREF

  length[0] = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, length);
  v4 = length[0];
  v5 = StringRawBuffer;
  if ( length[0] )
  {
    do
    {
      if ( !*v5 )
        break;
      v6 = wcsnlen(v5, v4);
      if ( !*((_WORD *)this + 58) || !*((_WORD *)this + 59) )
      {
        v13 = 0;
        v14 = 0;
        if ( swscanf_s(v5, L"USB\\VID_%4x&PID_%4x", &v13, &v14) == 2
          || swscanf_s(v5, L"HID\\VID_%4x&PID_%4x", &v13, &v14) == 2
          || swscanf_s(v5, L"HID\\{%*8c-%*4c-%*4c-%*4c-%*12c}_VID&%4x_PID&%4x", &v13, &v14) == 2 )
        {
          *((_WORD *)this + 58) = v13;
          *((_WORD *)this + 59) = v14;
        }
      }
      if ( !*((_WORD *)this + 60) || !*((_WORD *)this + 61) )
      {
        v13 = 0;
        v14 = 0;
        if ( swscanf_s(v5, L"HID_DEVICE_UP:%4x_U:%4x", &v13, &v14) == 2 )
        {
          v9 = v13;
          v10 = v14;
          *((_WORD *)this + 60) = v13;
          *((_WORD *)this + 61) = v10;
          if ( v9 == 89 && v10 == 1 )
          {
            LampArrayTelemetry::GetInstance();
            LampArrayTelemetry::LogPnPDeviceInfo(
              v11,
              v5,
              *((_WORD *)this + 58),
              *((_WORD *)this + 59),
              *((_WORD *)this + 60),
              *((_WORD *)this + 61));
          }
        }
      }
      v5 += v6 + 1;
      v7 = -1 - (_DWORD)v6 + length[0] == 0;
      v4 = -1 - v6 + length[0];
      length[0] = v4;
    }
    while ( !v7 );
  }
  return 0LL;
}
