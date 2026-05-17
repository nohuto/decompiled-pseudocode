/*
 * XREFs of AVrfpVerifierStopInitialize @ 0x18011F4F4
 * Callers:
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrGetProcedureAddressEx @ 0x180007BB0 (LdrGetProcedureAddressEx.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlInitAnsiString @ 0x1800E0910 (RtlInitAnsiString.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 */

__int64 AVrfpVerifierStopInitialize()
{
  __int64 v0; // rbx
  __int64 v1; // rbx
  int ProcedureAddress; // ebx
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  v0 = AVrfpVerifierProvidersList;
  DestinationString = 0LL;
  while ( 1 )
  {
    if ( (__int64 *)v0 == &AVrfpVerifierProvidersList )
      goto LABEL_10;
    if ( !wcsicmp(*(const wchar_t **)(v0 + 24), L"verifier.dll") )
      break;
    v0 = *(_QWORD *)v0;
  }
  v1 = *(_QWORD *)(*(_QWORD *)(v0 + 32) + 48LL);
  if ( !v1 )
  {
LABEL_10:
    DbgPrint("AVRF: Failed to find verifier.dll among loaded providers! \n");
    return 3221225473LL;
  }
  RtlInitAnsiString(&DestinationString, "VerifierStopMessage");
  ProcedureAddress = LdrGetProcedureAddressEx(v1, (int)&DestinationString, 0, (int)&v5, 0);
  if ( ProcedureAddress >= 0 )
    AVrfpVerifierStopMessageFunction = v5;
  else
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
  return (unsigned int)ProcedureAddress;
}
