/*
 * XREFs of RIMAssignPreparsedData @ 0x1401DEC10
 * Callers:
 *     RIMReleasePointerDeviceInfo @ 0x1401E0D90 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall RIMAssignPreparsedData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  void *v6; // rax

  v5 = -1073741801;
  if ( *(_QWORD *)(a3 + 936) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2919);
  if ( !*(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2920);
  if ( !*(_DWORD *)(a1 + 104) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2921);
  v6 = (void *)Win32AllocPoolZInitImpl(256LL, *(unsigned int *)(a1 + 104), 0x63707352u);
  *(_QWORD *)(a3 + 936) = v6;
  if ( v6 )
  {
    memmove(v6, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 104));
    return 0;
  }
  return v5;
}
