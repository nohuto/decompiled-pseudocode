/*
 * XREFs of UsbhGetRegPersistedUsbDeviceFlags @ 0x1C004539C
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C00388EC (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhGetPersistedUsbFlagsPath @ 0x1C0045160 (UsbhGetPersistedUsbFlagsPath.c)
 */

wchar_t *__fastcall UsbhGetRegPersistedUsbDeviceFlags(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  wchar_t *result; // rax
  wchar_t *v5; // rbx
  wchar_t *v6; // rax
  wchar_t **v7; // rsi
  int v8; // eax
  PVOID SystemRoutineAddress; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-29h] BYREF
  __int64 (__fastcall *v11)(int, int, int, int, __int64, __int64); // [rsp+48h] [rbp-19h] BYREF
  int v12; // [rsp+50h] [rbp-11h]
  wchar_t *v13; // [rsp+58h] [rbp-9h]
  wchar_t **v14; // [rsp+60h] [rbp-1h]
  int v15; // [rsp+68h] [rbp+7h]
  __int64 v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x55u,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
  PdoExt(a2);
  result = UsbhGetPersistedUsbFlagsPath(v3, a2);
  v5 = result;
  if ( result )
  {
    v6 = GlobalPersistedDeviceValues;
    v7 = &GlobalPersistedDeviceValues;
    while ( v6 )
    {
      v13 = v6;
      v8 = *((_DWORD *)v7 + 2);
      v11 = UsbhQueryGlobalDeviceValue;
      v12 = 0;
      v14 = v7;
      v15 = v8;
      v16 = 0LL;
      v17 = 0;
      v18 = 0LL;
      v19 = 0;
      v20 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = RtlQueryRegistryValues;
      ((void (__fastcall *)(_QWORD, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))SystemRoutineAddress)(
        0LL,
        v5,
        &v11,
        a2,
        0LL);
      v7 += 3;
      v6 = *v7;
    }
    return v5;
  }
  return result;
}
