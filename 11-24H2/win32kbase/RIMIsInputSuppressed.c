/*
 * XREFs of RIMIsInputSuppressed @ 0x14005D5E4
 * Callers:
 *     rimSignalReadComplete @ 0x14005D0F0 (rimSignalReadComplete.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 *     rimApplyPointerDevicePolicies @ 0x140180E58 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     RIMIsWakeCapableDevice @ 0x1400690A8 (RIMIsWakeCapableDevice.c)
 *     Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline @ 0x1401E3D20 (Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RIMIsInputSuppressed(__int64 a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  int v3; // ecx
  unsigned int v4; // ebx
  LARGE_INTEGER v5; // rbp
  unsigned __int64 v6; // rcx

  IsEnabledDeviceUsageNoInline = Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline();
  v3 = *(_DWORD *)(a1 + 1304);
  v4 = 0;
  if ( !IsEnabledDeviceUsageNoInline )
  {
    if ( v3 != 1 && (v3 != 2 || (unsigned int)RIMIsWakeCapableDevice(a1)) )
      return v4;
    return 1;
  }
  if ( v3 == 1 )
    return 1;
  if ( v3 != 2 )
    return v4;
  v5 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(a1 + 1312));
  if ( !(unsigned int)RIMIsWakeCapableDevice(a1) )
    return 1;
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) == 0 || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 456) + 24LL) - 1) > 3 )
    v6 = 1000 * gliQpcFreq.QuadPart;
  else
    v6 = 3000 * gliQpcFreq.QuadPart;
  LOBYTE(v4) = v5.QuadPart < v6 / 0x3E8;
  return v4;
}
