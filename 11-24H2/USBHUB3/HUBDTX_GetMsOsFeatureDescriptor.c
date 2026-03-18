/*
 * XREFs of HUBDTX_GetMsOsFeatureDescriptor @ 0x14002B970
 * Callers:
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x1400225B0 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x140022AF0 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x140022B90 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x140022CD0 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x140022DD0 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x140022E90 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x140022F30 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 * Callees:
 *     HUBMISC_ControlTransfer @ 0x14002EDA8 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_GetMsOsFeatureDescriptor(__int64 a1, char a2, __int64 a3, __int16 a4, __int64 a5, __int64 a6)
{
  char v6; // al

  *(_BYTE *)(a1 + 408) = a2 & 3 | 0xC0;
  v6 = *(_BYTE *)(a1 + 2060);
  *(_WORD *)(a1 + 410) = 0;
  *(_BYTE *)(a1 + 409) = v6;
  *(_WORD *)(a1 + 412) = a4;
  *(_WORD *)(a1 + 414) = a6;
  return HUBMISC_ControlTransfer(
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 24),
           a1,
           (int)a1 + 256,
           (__int64)HUBDTX_ControlTransferComplete,
           a5,
           a6,
           1,
           *(_BYTE *)(a1 + 1520));
}
