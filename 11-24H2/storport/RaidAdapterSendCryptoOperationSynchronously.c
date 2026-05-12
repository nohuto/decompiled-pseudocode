/*
 * XREFs of RaidAdapterSendCryptoOperationSynchronously @ 0x14006A2CC
 * Callers:
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x14006A0A0 (RaidAdapterProgramCryptoKeyRoutine.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     Feature_FixSteelixUfsIceRegression__private_IsEnabledDeviceUsageNoInline @ 0x140069568 (Feature_FixSteelixUfsIceRegression__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RaidAdapterSendCryptoOperationSynchronously(_QWORD *a1, __int64 a2, _WORD *a3)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 result; // rax
  __int64 v7; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-18h] BYREF

  IsEnabledDeviceUsageNoInline = Feature_FixSteelixUfsIceRegression__private_IsEnabledDeviceUsageNoInline();
  if ( !a1[703] && (!IsEnabledDeviceUsageNoInline || !a1[702]) || !RaidIsAdapterControlSupported((__int64)(a1 + 47), 18) )
    return 3221225659LL;
  if ( *a3 != 1 || a3[1] != 40 )
    return 3221225485LL;
  result = RaCallMiniportAdapterControl((__int64)(a1 + 47));
  if ( (_DWORD)result )
  {
    v7 = a1[2];
    *(_OWORD *)BugCheckParameter2 = 0LL;
    RaidDriverGetName(v7, (__int64)BugCheckParameter2);
    KeBugCheckEx(0xF0u, 4uLL, BugCheckParameter2[1], 1uLL, 0LL);
  }
  return result;
}
