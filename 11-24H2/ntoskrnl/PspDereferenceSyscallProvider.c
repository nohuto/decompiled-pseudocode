/*
 * XREFs of PspDereferenceSyscallProvider @ 0x1405E4998
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140770EE0 (PsRegisterSyscallProvider.c)
 *     PsUnregisterSyscallProvider @ 0x1407710D0 (PsUnregisterSyscallProvider.c)
 *     PspDetachProcessFromSyscallProvider @ 0x14077125C (PspDetachProcessFromSyscallProvider.c)
 *     PspSyscallProviderOptIn @ 0x14077153C (PspSyscallProviderOptIn.c)
 * Callees:
 *     PspDestroySyscallProvider @ 0x1407711F4 (PspDestroySyscallProvider.c)
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
