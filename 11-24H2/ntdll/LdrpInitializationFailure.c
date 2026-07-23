/*
 * XREFs of LdrpInitializationFailure @ 0x1800AE1D4
 * Callers:
 *     LdrpLoadShimEngine @ 0x1800AD9B0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x1800ADD0C (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800AE26C (LdrpLogFatalLdrEtwEvent.c)
 *     NtRaiseHardError @ 0x180162EE0 (NtRaiseHardError.c)
 */

NTSTATUS __fastcall LdrpInitializationFailure(int a1)
{
  unsigned __int64 v1; // rbx
  NTSTATUS result; // eax
  ULONG Response; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 Parameters; // [rsp+50h] [rbp+18h] BYREF

  Response = 0;
  v1 = a1;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
    2996,
    (__int64)"LdrpInitializationFailure",
    0,
    "Process initialization failed with status 0x%08lx\n",
    a1);
  result = LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName, "\a");
  if ( !LdrpFatalHardErrorCount )
  {
    Parameters = v1;
    return NtRaiseHardError(-1073741499, 1u, 0, &Parameters, 1u, &Response);
  }
  return result;
}
