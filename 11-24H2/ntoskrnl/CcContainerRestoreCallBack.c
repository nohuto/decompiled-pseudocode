/*
 * XREFs of CcContainerRestoreCallBack @ 0x1405771A0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     CcGetContainerPolicyForDTP @ 0x140577278 (CcGetContainerPolicyForDTP.c)
 *     ExUnsubscribeWnfStateChange @ 0x140A5D360 (ExUnsubscribeWnfStateChange.c)
 */

__int64 __fastcall CcContainerRestoreCallBack(__int64 a1)
{
  int ContainerPolicyForDTP; // ebx
  _DWORD v4[6]; // [rsp+30h] [rbp-18h] BYREF

  v4[0] = 0;
  ContainerPolicyForDTP = CcGetContainerPolicyForDTP(v4);
  if ( ContainerPolicyForDTP >= 0 )
  {
    if ( v4[0] )
      CcClientDTPDenominator = 4;
    ExUnsubscribeWnfStateChange(a1);
  }
  DbgPrintEx(
    0x7Fu,
    3u,
    "CcContainerRestoreCallBack called: (0x%x, %x)\n",
    ContainerPolicyForDTP,
    CcClientDTPDenominator);
  return (unsigned int)ContainerPolicyForDTP;
}
