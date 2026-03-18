/*
 * XREFs of PspAttachProcessToSyscallProvider @ 0x14076174C
 * Callers:
 *     PspSyscallProviderOptIn @ 0x140761B7C (PspSyscallProviderOptIn.c)
 *     PspInheritSyscallProvider @ 0x140A517A8 (PspInheritSyscallProvider.c)
 * Callees:
 *     PspLockSyscallProviderExclusive @ 0x1405D8A30 (PspLockSyscallProviderExclusive.c)
 *     PspUnlockSyscallProviderExclusive @ 0x1405D8B8C (PspUnlockSyscallProviderExclusive.c)
 */

void __fastcall PspAttachProcessToSyscallProvider(_QWORD *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 48)) <= 1 )
    __fastfail(0xEu);
  a1[247] = a2;
  a1[250] = *(_QWORD *)(a2 + 8LL * a3 + 88);
  PspLockSyscallProviderExclusive(a2);
  v5 = *(_QWORD **)(a2 + 80);
  v6 = a1 + 248;
  if ( *v5 != a2 + 72 )
    __fastfail(3u);
  *v6 = a2 + 72;
  a1[249] = v5;
  *v5 = v6;
  *(_QWORD *)(a2 + 80) = v6;
  PspUnlockSyscallProviderExclusive(a2);
}
