/*
 * XREFs of KbdDeterminePortsServiced @ 0x1C000E610
 * Callers:
 *     KeyboardClassFindMorePorts @ 0x1C000E010 (KeyboardClassFindMorePorts.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00061D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006360 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1C00072D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KbdDeterminePortsServiced(unsigned __int16 *a1, _DWORD *a2)
{
  unsigned __int64 v4; // r9
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD *Pool2; // rdi
  __int64 v8; // rbx
  PVOID SystemRoutineAddress; // rax
  int v10; // edx
  int v11; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *a2 = 0;
  v4 = *a1;
  if ( a1[1] < v4 + 2 )
    return (unsigned int)-1073741823;
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1) + 2) = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 112LL, 1130652235LL);
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 1LL);
    }
    return (unsigned int)-1073741823;
  }
  Pool2[2] = 0LL;
  *Pool2 = KbdDeviceMapQueryCallback;
  v8 = *((_QWORD *)a1 + 1);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v5 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _DWORD *))SystemRoutineAddress)(2147483652LL, v8, Pool2, a2);
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v10, v11, 80, 0, v5);
  }
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v5;
}
