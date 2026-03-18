/*
 * XREFs of ACPIBuildRegRequest @ 0x14001FA84
 * Callers:
 *     ACPIFilterIrpSetPower @ 0x14001BD40 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildRegOnRequest @ 0x1400205C0 (ACPIBuildRegOnRequest.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qdqss @ 0x14001D6DC (WPP_RECORDER_SF_qdqss.c)
 *     ACPIBuildRunMethodRequest @ 0x14001F5EC (ACPIBuildRunMethodRequest.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIBuildRegRequest(ULONG_PTR a1, __int64 a2, void (__fastcall *a3)(__int64, __int64, _QWORD))
{
  __int64 DeviceExtension; // rax
  char v6; // r8
  __int64 v7; // rsi
  int v8; // r14d
  const char *v9; // rcx
  const char *v10; // rdx
  int v11; // edi
  KIRQL v12; // al
  int v13; // edx
  KIRQL v14; // di
  unsigned int v15; // ebx
  __int64 v17; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = 0;
  v7 = DeviceExtension;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  v9 = byte_140075488;
  v10 = byte_140075488;
  if ( DeviceExtension )
  {
    v17 = *(_QWORD *)(DeviceExtension + 8);
    v6 = v7;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v7 + 608);
      if ( (v17 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v7 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v10,
      0xAu,
      0x56u,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      a2,
      v8 - 1,
      v6,
      v9,
      v10);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v11 = *(_DWORD *)(a2 + 48);
  if ( v11 < 0 )
  {
    if ( a3 )
      a3(v7, a2, (unsigned int)v11);
    return (unsigned int)v11;
  }
  else
  {
    v12 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v13 = 21;
    v14 = v12;
    if ( v8 != 1 )
      v13 = 37;
    v15 = ACPIBuildRunMethodRequest(v7, a3, a2, 1195725407, v13, 1);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
    if ( v15 == 259 )
      return (unsigned int)-1073741802;
    return v15;
  }
}
