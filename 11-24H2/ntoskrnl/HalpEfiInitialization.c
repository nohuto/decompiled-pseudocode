/*
 * XREFs of HalpEfiInitialization @ 0x140C10F64
 * Callers:
 *     HalpFirmwareInitDiscard @ 0x140C11600 (HalpFirmwareInitDiscard.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x1404606D0 (KeRegisterBugCheckReasonCallback.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpEfiInitialization(__int64 a1)
{
  int v2; // eax
  int v4; // eax
  int v5; // edi
  __int64 *v6; // rcx
  __int64 v7; // rax

  v2 = *(_DWORD *)(a1 + 264) & 1;
  if ( v2 )
  {
    HalFirmwareInformationBlock = *(_OWORD *)(a1 + 264);
    xmmword_140FC0EF0 = *(_OWORD *)(a1 + 280);
    xmmword_140FC0F00 = *(_OWORD *)(a1 + 296);
    xmmword_140FC0F10 = *(_OWORD *)(a1 + 312);
  }
  HalFirmwareTypeEfi = v2;
  if ( !(_BYTE)v2 )
    return 0LL;
  HalpEfiTimeCalls = 0;
  HalpEfiTimeWrites = 0;
  HalpEfiVariableCalls = 0;
  HalpEfiVariableWrites = 0;
  v4 = *(_DWORD *)(a1 + 292);
  v5 = *(_DWORD *)(a1 + 288);
  HalEfiSetVirtualAddressMapStatus = v5;
  HalEfiMissedMappingsCount = v4;
  if ( v4 || !*(_QWORD *)(a1 + 280) )
  {
    v5 = -1073741823;
LABEL_12:
    KeBugCheckEx(0x5Cu, 0x5000uLL, v5, 0LL, 0LL);
  }
  if ( v5 < 0 )
    goto LABEL_12;
  v6 = *(__int64 **)(a1 + 280);
  HalEfiRuntimeServicesBlock[0] = *v6;
  qword_141201878 = v6[1];
  qword_141201880 = v6[10];
  qword_141201888 = v6[6];
  qword_141201890 = v6[7];
  qword_141201898 = v6[8];
  qword_1412018A0 = v6[11];
  qword_1412018A8 = v6[12];
  v7 = v6[13];
  HalpEfiRuntimeCallbackRecord.State = 0;
  qword_1412018B0 = v7;
  KeRegisterBugCheckReasonCallback(
    &HalpEfiRuntimeCallbackRecord,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HalpEfiBugCheckAddPagesCallback,
    KbCallbackAddPages,
    (PUCHAR)"HalEfiRuntime");
  if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
    HalEfiRuntimeServicesTable = (__int64 *)HalpIumEfiWrapperTable;
  return (unsigned int)v5;
}
