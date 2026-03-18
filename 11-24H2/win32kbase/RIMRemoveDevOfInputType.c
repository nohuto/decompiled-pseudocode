/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1401D24A8
 * Callers:
 *     RIMRemoveInputOfType @ 0x1400CA660 (RIMRemoveInputOfType.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x140055BD4 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x140069204 (RimDeviceTypeToRimInputType.c)
 *     rimResetPnpRemovePendingStateBits @ 0x140140950 (rimResetPnpRemovePendingStateBits.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeSpecificDev @ 0x1401D1E88 (RIMFreeSpecificDev.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(struct RawInputManagerObject *a1, int a2)
{
  __int64 *v3; // rbp
  __int64 v5; // r8
  __int64 *v6; // rdi
  __int64 v7; // r8
  int v8; // eax
  __int64 v10; // rbx

  v3 = (__int64 *)((char *)a1 + 424);
LABEL_2:
  v5 = *v3;
  v6 = v3;
  while ( v5 )
  {
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v5, *(_DWORD *)(v5 + 48)) & a2) != 0 )
    {
      v8 = *(_DWORD *)(v7 + 168);
      if ( (v8 & 0x2000) == 0 )
      {
        *(_DWORD *)(v7 + 168) = v8 | 8;
        rimOnPnpRemoveComplete((char)a1, *v6);
        if ( *(_QWORD *)(*v6 + 232) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1038);
        v10 = *v6;
        *v6 = *(_QWORD *)(*v6 + 40);
        *(_QWORD *)(v10 + 40) = 0LL;
        rimResetPnpRemovePendingStateBits(v10);
        rimDoRimDevChange((__int64)a1, v10, 3u);
        RIMFreeSpecificDev(a1, v10);
        goto LABEL_2;
      }
    }
    v6 = (__int64 *)(v7 + 40);
    v5 = *(_QWORD *)(v7 + 40);
  }
  return 0LL;
}
