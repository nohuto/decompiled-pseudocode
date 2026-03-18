/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1C00B93BC
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C00B91E0 (RIMRemoveInputOfType.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0005B28 (RimDeviceTypeToRimInputType.c)
 *     rimOnPnpRemoveComplete @ 0x1C0078518 (rimOnPnpRemoveComplete.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00C0758 (rimResetPnpRemovePendingStateBits.c)
 *     RIMFreeSpecificDev @ 0x1C00C8F08 (RIMFreeSpecificDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(__int64 a1, int a2)
{
  __int64 *v3; // rbp
  __int64 v5; // r8
  __int64 *v6; // rdi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rbx

  v3 = (__int64 *)(a1 + 424);
LABEL_2:
  v5 = *v3;
  v6 = v3;
  while ( v5 )
  {
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v5, *(unsigned __int8 *)(v5 + 48)) & a2) != 0 )
    {
      v9 = *(_DWORD *)(v8 + 184);
      if ( (v9 & 0x2000) == 0 )
      {
        *(_DWORD *)(v8 + 184) = v9 | 8;
        rimOnPnpRemoveComplete(a1, *v6);
        if ( *(_QWORD *)(*v6 + 248) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 999LL);
        v10 = *v6;
        *v6 = *(_QWORD *)(*v6 + 40);
        *(_QWORD *)(v10 + 40) = 0LL;
        rimResetPnpRemovePendingStateBits(v10);
        rimDoRimDevChange(a1, v10, 3u);
        RIMFreeSpecificDev(a1, v10);
        goto LABEL_2;
      }
    }
    v6 = (__int64 *)(v8 + 40);
    v5 = *(_QWORD *)(v8 + 40);
  }
  return 0LL;
}
