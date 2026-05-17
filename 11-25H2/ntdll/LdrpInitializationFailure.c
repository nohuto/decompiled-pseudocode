/*
 * XREFs of LdrpInitializationFailure @ 0x1800D1C78
 * Callers:
 *     LdrpLoadShimEngine @ 0x1800D1760 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x1800D1ABC (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D1D10 (LdrpLogFatalLdrEtwEvent.c)
 *     NtRaiseHardError @ 0x1801660B0 (NtRaiseHardError.c)
 */

__int64 __fastcall LdrpInitializationFailure(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp-8h]
  int v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v1 = a1;
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrinit.c",
    2998,
    (__int64)"LdrpInitializationFailure",
    0,
    "Process initialization failed with status 0x%08lx\n",
    a1);
  result = LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName, "\a");
  if ( !LdrpFatalHardErrorCount )
  {
    v5 = v1;
    return NtRaiseHardError(3221225797LL, 1LL, 0LL, &v5, 1, &v4, v3);
  }
  return result;
}
