/*
 * XREFs of UsbhRegQueryGlobalKey @ 0x140025D7C
 * Callers:
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x140025A98 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhRegDriverEntry @ 0x1400523B0 (UsbhRegDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x140048F98 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x140053C84 (WPP_RECORDER_SF_SD.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhRegQueryGlobalKey(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  PVOID SystemRoutineAddress; // rax
  unsigned int v9; // eax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // esi
  __int64 v15; // rbx
  int v17; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      61,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  v17 = 0;
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v9 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))SystemRoutineAddress)(a1, a2, a4, 0LL);
  v13 = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        62,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        v9);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        v11,
        63,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        a2);
  }
  v15 = a4 + 24;
  do
  {
    if ( !*(_QWORD *)(v15 - 24) )
      break;
    if ( *(_DWORD *)(v15 + 8) == 4
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_SD(
        WPP_GLOBAL_Control->DeviceExtension,
        **(_DWORD **)v15,
        v11,
        v12,
        v17,
        *(_QWORD *)(v15 - 8),
        **(_DWORD **)v15);
    }
    v15 += 56LL;
    a5 -= 56;
  }
  while ( a5 >= 0x38 );
  return v13;
}
