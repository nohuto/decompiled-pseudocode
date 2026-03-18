/*
 * XREFs of ACPIRootIrpCompleteRoutine @ 0x1400306A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIRootIrpCompleteRoutine(ULONG_PTR a1, __int64 a2, struct _KEVENT *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v6; // r10
  __int64 v7; // rax
  const char *v8; // r11
  const char *v9; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // edx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = DeviceExtension;
  if ( DeviceExtension )
  {
    v7 = *(_QWORD *)(DeviceExtension + 8);
    v8 = byte_140075488;
    v9 = byte_140075488;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v6 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v6 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
      if ( v11 >= 0x1A )
        v11 = 26;
      v12 = v11;
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_qsLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        5,
        11,
        (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
        a2,
        (__int64)ACPIDispatchPnpTableNames[v11],
        *(_DWORD *)(a2 + 48),
        v6,
        (__int64)v8,
        (__int64)v9);
    }
  }
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
