/*
 * XREFs of HalEfiSetEnvironmentVariable @ 0x140439768
 * Callers:
 *     HalSetEnvironmentVariableEx @ 0x1404395E0 (HalSetEnvironmentVariableEx.c)
 * Callees:
 *     HalpEfiStartRuntimeCode @ 0x140439E44 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x140439E9C (HalpConvertEfiToNtStatus.c)
 */

__int64 __fastcall HalEfiSetEnvironmentVariable(__int64 a1)
{
  unsigned int v2; // r10d
  __int64 v3; // r11
  __int64 v4; // rax

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[5] )
    return 3221225474LL;
  _InterlockedIncrement(&HalpEfiCalls);
  _InterlockedIncrement(&HalpEfiVariableCalls);
  _InterlockedIncrement(&HalpEfiCalls);
  _InterlockedIncrement(&HalpEfiVariableWrites);
  HalpEfiStartRuntimeCode(32LL);
  v4 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalEfiRuntimeServicesTable[5])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFDF);
  _InterlockedDecrement(&HalpEfiCalls);
  _InterlockedDecrement(&HalpEfiVariableWrites);
  _InterlockedDecrement(&HalpEfiCalls);
  _InterlockedDecrement(&HalpEfiVariableCalls);
  return HalpConvertEfiToNtStatus(v4);
}
