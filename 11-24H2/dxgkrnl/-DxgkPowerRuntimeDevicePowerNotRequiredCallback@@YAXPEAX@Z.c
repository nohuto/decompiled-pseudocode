/*
 * XREFs of ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x14002AB50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DpiRequestDevicePowerState @ 0x14002AC88 (DpiRequestDevicePowerState.c)
 */

void __fastcall DxgkPowerRuntimeDevicePowerNotRequiredCallback(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
  {
    v5 = 0;
    v4 = 0;
    McTemplateK0pqq_EtwWriteTransfer(
      (__int64)a1,
      (__int64)&Dxgk_PowerRuntimeDevicePowerRequiredCallback,
      a3,
      a1,
      v4,
      v5);
  }
  if ( !*((_BYTE *)a1 + 204) )
    DpiRequestDevicePowerState(a1[27], 4LL);
  PoFxCompleteDevicePowerNotRequired(a1[404]);
}
