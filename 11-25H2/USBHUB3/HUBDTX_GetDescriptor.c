/*
 * XREFs of HUBDTX_GetDescriptor @ 0x14002B3DC
 * Callers:
 *     HUBDSM_GettingAlternateModeStringDescriptor @ 0x1400227A0 (HUBDSM_GettingAlternateModeStringDescriptor.c)
 *     HUBDSM_GettingBillboardStringDescriptor @ 0x140022860 (HUBDSM_GettingBillboardStringDescriptor.c)
 *     HUBDSM_GettingDeviceQualifierDescriptor @ 0x140022940 (HUBDSM_GettingDeviceQualifierDescriptor.c)
 *     HUBDSM_GettingLanguageIdStringDescriptor @ 0x1400229E0 (HUBDSM_GettingLanguageIdStringDescriptor.c)
 *     HUBDSM_GettingMSOSDescriptor @ 0x140022BF0 (HUBDSM_GettingMSOSDescriptor.c)
 *     HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice @ 0x140024200 (HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice.c)
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x14002B010 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x14002B114 (HUBDTX_GetBOSDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x14002B218 (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x14002B2D8 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x14002B6E0 (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x14002B770 (HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x14002B890 (HUBDTX_GetProductIdStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x14002B96C (HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer.c)
 * Callees:
 *     HUBMISC_ControlTransfer @ 0x14002EC7C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_GetDescriptor(__int64 a1, __int64 a2, int a3, char a4, char a5, __int16 a6)
{
  char v6; // al

  v6 = *(_BYTE *)(a1 + 400) & 0x1C;
  *(_BYTE *)(a1 + 401) = 6;
  *(_BYTE *)(a1 + 403) = a4;
  *(_BYTE *)(a1 + 400) = v6 | 0x80;
  *(_BYTE *)(a1 + 402) = a5;
  *(_WORD *)(a1 + 404) = a6;
  *(_WORD *)(a1 + 406) = a3;
  return HUBMISC_ControlTransfer(
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 24),
           a1,
           (int)a1 + 248,
           (__int64)HUBDTX_ControlTransferComplete,
           a2,
           a3,
           1,
           *(_BYTE *)(a1 + 1512));
}
