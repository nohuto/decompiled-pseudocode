/*
 * XREFs of HUBDTX_GetMsOsFeatureDescriptor @ 0x14002B800
 * Callers:
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x140022570 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x140022AB0 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x140022B50 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x140022C90 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x140022D90 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x140022E50 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x140022EF0 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 * Callees:
 *     HUBMISC_ControlTransfer @ 0x14002EC7C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_GetMsOsFeatureDescriptor(__int64 a1, char a2, __int64 a3, __int16 a4, __int64 a5, __int64 a6)
{
  char v6; // al

  *(_BYTE *)(a1 + 400) = a2 & 3 | 0xC0;
  v6 = *(_BYTE *)(a1 + 2052);
  *(_WORD *)(a1 + 402) = 0;
  *(_BYTE *)(a1 + 401) = v6;
  *(_WORD *)(a1 + 404) = a4;
  *(_WORD *)(a1 + 406) = a6;
  return HUBMISC_ControlTransfer(
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 24),
           a1,
           (int)a1 + 248,
           (__int64)HUBDTX_ControlTransferComplete,
           a5,
           a6,
           1,
           *(_BYTE *)(a1 + 1512));
}
