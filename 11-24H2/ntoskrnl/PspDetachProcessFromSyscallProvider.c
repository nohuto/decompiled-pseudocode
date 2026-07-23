/*
 * XREFs of PspDetachProcessFromSyscallProvider @ 0x14077147C
 * Callers:
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 * Callees:
 *     PspDereferenceSyscallProvider @ 0x1405E1EC0 (PspDereferenceSyscallProvider.c)
 *     PspLockSyscallProviderExclusive @ 0x1405E1EF4 (PspLockSyscallProviderExclusive.c)
 *     PspUnlockSyscallProviderExclusive @ 0x1405E2050 (PspUnlockSyscallProviderExclusive.c)
 */

__int64 __fastcall PspDetachProcessFromSyscallProvider(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 **v3; // rax
  __int64 result; // rax

  PspLockSyscallProviderExclusive(a1[247]);
  v2 = a1[248];
  if ( *(__int64 **)(v2 + 8) != a1 + 248 || (v3 = (__int64 **)a1[249], *v3 != a1 + 248) )
    __fastfail(3u);
  *v3 = (__int64 *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  PspUnlockSyscallProviderExclusive(a1[247]);
  result = PspDereferenceSyscallProvider((volatile signed __int64 *)a1[247]);
  a1[247] = 0LL;
  return result;
}
