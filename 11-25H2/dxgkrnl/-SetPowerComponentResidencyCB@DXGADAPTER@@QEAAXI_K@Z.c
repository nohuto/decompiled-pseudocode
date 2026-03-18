/*
 * XREFs of ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1400666F8
 * Callers:
 *     DxgkSetPowerComponentResidencyCB @ 0x14006C940 (DxgkSetPowerComponentResidencyCB.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14036DEB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1400313B8 (McTemplateK0pqx_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentResidencyCB(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  int v6; // [rsp+20h] [rbp-18h]

  if ( *((_BYTE *)this + 3665) )
  {
    v5 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1620);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        v6 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1620);
        McTemplateK0pqx_EtwWriteTransfer((__int64)this, &Dxgk_SetPowerComponentResidencyCB, a3, this, v6, a3);
      }
    }
    *(_QWORD *)(520LL * v5 + *((_QWORD *)this + 403) + 376) = a3;
    PoFxSetComponentResidency(*((_QWORD *)this + 404), v5, a3);
  }
}
