/*
 * XREFs of UsbhGetRegUsbHubFlags @ 0x1C0045B18
 * Callers:
 *     UsbhCheckHubErrata @ 0x1C005182C (UsbhCheckHubErrata.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00484FC (WPP_RECORDER_SF_dDD.c)
 */

void __fastcall UsbhGetRegUsbHubFlags(unsigned __int16 *a1)
{
  __int64 Pool2; // rax
  void *v3; // rbx
  unsigned int v4; // r8d
  unsigned int v5; // edx
  unsigned int v6; // r9d
  __int64 v7; // rcx
  wchar_t *v8; // rax
  wchar_t **v9; // rdi
  int v10; // eax
  void (__fastcall *SystemRoutineAddress)(__int64, void *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), unsigned __int16 *, _QWORD); // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall *v13)(int, int, int, int, __int64, __int64); // [rsp+58h] [rbp-29h] BYREF
  int v14; // [rsp+60h] [rbp-21h]
  wchar_t *v15; // [rsp+68h] [rbp-19h]
  wchar_t **v16; // [rsp+70h] [rbp-11h]
  int v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+88h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+Fh]
  int v21; // [rsp+98h] [rbp+17h]
  __int64 v22; // [rsp+A0h] [rbp+1Fh]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x56u,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
  Pool2 = ExAllocatePool2(64LL, 44LL, 1112885333LL);
  v3 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = *(_OWORD *)L"usbflags\\vvvvpppprrrr";
    *(_OWORD *)(Pool2 + 16) = *(_OWORD *)L"\\vvvvpppprrrr";
    *(_QWORD *)(Pool2 + 32) = *(_QWORD *)L"prrrr";
    *(_DWORD *)(Pool2 + 40) = *(_DWORD *)L"r";
    v4 = a1[1274];
    v5 = a1[1275];
    v6 = a1[1276];
    v7 = a1[1274] & 0xF;
    *(_WORD *)(Pool2 + 18) = (unsigned __int8)Nibble[(unsigned __int64)a1[1274] >> 12];
    *(_WORD *)(Pool2 + 20) = (unsigned __int8)Nibble[(v4 >> 8) & 0xF];
    *(_WORD *)(Pool2 + 22) = (unsigned __int8)Nibble[(unsigned __int8)v4 >> 4];
    *(_WORD *)(Pool2 + 24) = (unsigned __int8)Nibble[v7];
    *(_WORD *)(Pool2 + 26) = (unsigned __int8)Nibble[(unsigned __int64)v5 >> 12];
    *(_WORD *)(Pool2 + 28) = (unsigned __int8)Nibble[(v5 >> 8) & 0xF];
    *(_WORD *)(Pool2 + 30) = (unsigned __int8)Nibble[(unsigned __int8)v5 >> 4];
    *(_WORD *)(Pool2 + 32) = (unsigned __int8)Nibble[v5 & 0xF];
    *(_WORD *)(Pool2 + 34) = (unsigned __int8)Nibble[(unsigned __int64)v6 >> 12];
    *(_WORD *)(Pool2 + 36) = (unsigned __int8)Nibble[(v6 >> 8) & 0xF];
    *(_WORD *)(Pool2 + 38) = (unsigned __int8)Nibble[(unsigned __int8)v6 >> 4];
    *(_WORD *)(Pool2 + 40) = (unsigned __int8)Nibble[v6 & 0xF];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dDD(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          v4,
          87,
          (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
          v4,
          v5,
          v6);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          v4,
          88,
          (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
          (__int64)v3);
    }
    v8 = GlobalHubValues;
    v9 = &GlobalHubValues;
    while ( v8 )
    {
      v15 = v8;
      v10 = *((_DWORD *)v9 + 2);
      v13 = UsbhQueryGlobalDeviceValue;
      v14 = 0;
      v16 = v9;
      v17 = v10;
      v18 = 0LL;
      v19 = 0;
      v20 = 0LL;
      v21 = 0;
      v22 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = (void (__fastcall *)(__int64, void *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), unsigned __int16 *, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = (void (__fastcall *)(__int64, void *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), unsigned __int16 *, _QWORD))RtlQueryRegistryValues;
      SystemRoutineAddress(2LL, v3, &v13, a1, 0LL);
      v9 += 3;
      v8 = *v9;
    }
    ExFreePoolWithTag(v3, 0);
  }
}
