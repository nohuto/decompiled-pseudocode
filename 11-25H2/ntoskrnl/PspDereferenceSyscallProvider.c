/*
 * XREFs of PspDereferenceSyscallProvider @ 0x1405D89FC
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140761520 (PsRegisterSyscallProvider.c)
 *     PsUnregisterSyscallProvider @ 0x140761710 (PsUnregisterSyscallProvider.c)
 *     PspDetachProcessFromSyscallProvider @ 0x14076189C (PspDetachProcessFromSyscallProvider.c)
 *     PspSyscallProviderOptIn @ 0x140761B7C (PspSyscallProviderOptIn.c)
 * Callees:
 *     PspDestroySyscallProvider @ 0x140761834 (PspDestroySyscallProvider.c)
 */

__int64 __fastcall PspDereferenceSyscallProvider(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 6, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return PspDestroySyscallProvider((PVOID)a1);
  }
  return result;
}
