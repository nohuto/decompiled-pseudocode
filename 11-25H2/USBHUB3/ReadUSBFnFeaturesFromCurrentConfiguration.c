/*
 * XREFs of ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1400443F0
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x140044580 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     CheckUSBFnConfiguration @ 0x140043CD4 (CheckUSBFnConfiguration.c)
 *     WPP_RECORDER_SF_SS @ 0x1400448F0 (WPP_RECORDER_SF_SS.c)
 *     WPP_RECORDER_SF_Sd @ 0x140044A88 (WPP_RECORDER_SF_Sd.c)
 *     MyRegOpenKeyForRead @ 0x140044BEC (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x140044C6C (MyRegQueryString.c)
 */

__int64 __fastcall ReadUSBFnFeaturesFromCurrentConfiguration(_DWORD *a1, char a2)
{
  const wchar_t *v2; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  int String; // eax
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  wchar_t *v12; // rdi
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h]

  Handle = 0LL;
  P = 0LL;
  v2 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default";
  if ( !a2 )
    v2 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN";
  v5 = MyRegOpenKeyForRead(a1, v2, &Handle);
  v6 = v5;
  if ( v5 >= 0 )
  {
    String = MyRegQueryString(Handle);
    v12 = (wchar_t *)P;
    v6 = String;
    if ( String >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_SS(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11);
      ZwClose(Handle);
      Handle = 0LL;
      v6 = CheckUSBFnConfiguration(a1, v12);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_Sd(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 31);
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  else
  {
    if ( a2 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v7 = 29;
      goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 30;
LABEL_7:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        1u,
        v7,
        (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
        v5);
    }
  }
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  return v6;
}
