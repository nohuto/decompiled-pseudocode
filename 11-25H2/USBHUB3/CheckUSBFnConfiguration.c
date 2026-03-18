/*
 * XREFs of CheckUSBFnConfiguration @ 0x140043CD4
 * Callers:
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1400443F0 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x140044580 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Sd @ 0x140044A88 (WPP_RECORDER_SF_Sd.c)
 *     MyRegOpenKeyForRead @ 0x140044BEC (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x140044C6C (MyRegQueryString.c)
 */

__int64 __fastcall CheckUSBFnConfiguration(_DWORD *a1, const wchar_t *a2)
{
  __int64 v4; // rax
  rsize_t v5; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v7; // r14
  int v8; // edi
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r8d
  int String; // eax
  wchar_t *v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rax
  HANDLE Handle; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h]

  Handle = 0LL;
  P = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 146;
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, v5, 1430540870LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    wcscpy_s(Pool2, v5, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Configurations\\");
    wcscat_s(v7, v5, a2);
    v8 = MyRegOpenKeyForRead(v9, v7, &Handle);
    if ( v8 >= 0 )
    {
      String = MyRegQueryString(Handle);
      v13 = (wchar_t *)P;
      v8 = String;
      if ( String >= 0 )
      {
        LODWORD(v14) = 0;
        if ( *(_WORD *)P )
        {
          do
          {
            if ( *a1 == 14 )
              break;
            if ( (*a1 & 2) != 0 || _wcsicmp(&v13[(unsigned int)v14], L"MTP") )
            {
              if ( (*(_BYTE *)a1 & 4) != 0 || _wcsicmp(&v13[(unsigned int)v14], L"IpOverUsb") )
              {
                if ( (*(_BYTE *)a1 & 8) == 0 && !_wcsicmp(&v13[(unsigned int)v14], L"VidStream") )
                  *a1 |= 8u;
              }
              else
              {
                *a1 |= 4u;
              }
            }
            else
            {
              *a1 |= 2u;
            }
            v15 = -1LL;
            do
              ++v15;
            while ( v13[(unsigned int)v14 + v15] );
            v14 = (unsigned int)(v15 + v14 + 1);
          }
          while ( v13[v14] );
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x1Cu,
          (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
          String);
      }
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_Sd(WPP_GLOBAL_Control->DeviceExtension, v10, v11, 27);
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0x1Au,
        (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
        -1073741670);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
