/*
 * XREFs of PspDereferenceSyscallProvider @ 0x1405E1EC0
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140771100 (PsRegisterSyscallProvider.c)
 *     PsUnregisterSyscallProvider @ 0x1407712F0 (PsUnregisterSyscallProvider.c)
 *     PspDetachProcessFromSyscallProvider @ 0x14077147C (PspDetachProcessFromSyscallProvider.c)
 *     PspSyscallProviderOptIn @ 0x14077175C (PspSyscallProviderOptIn.c)
 * Callees:
 *     PspDestroySyscallProvider @ 0x140771414 (PspDestroySyscallProvider.c)
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
