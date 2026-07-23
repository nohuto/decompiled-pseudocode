/*
 * XREFs of MiKernelWriteToExecutableMemory @ 0x140426B40
 * Callers:
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 * Callees:
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelockFaultState @ 0x140427570 (MiRelockFaultState.c)
 *     NtWaitLowEventPair @ 0x1406F9D10 (NtWaitLowEventPair.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB11E8 (MiForceCrashForInvalidAccess.c)
 */

__int64 __fastcall MiKernelWriteToExecutableMemory(__int64 a1, __int64 a2, struct _KPROCESS *a3)
{
  volatile _KAFFINITY_EX *ActiveProcessors; // r15
  __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  __int64 v10; // rbp
  HANDLE v11; // rcx
  unsigned int v12; // ebx

  ActiveProcessors = a3[2].ActiveProcessors;
  v7 = a1 + 56;
  v8 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ActiveProcessors[5].StaticBitmap[8];
  v10 = MiReleaseFaultState((__int64 *)(a1 + 56), 0x11u, 0LL);
  if ( NtWaitLowEventPair(v11) >= 0 )
  {
    MiRelockFaultState(v7, v10);
    if ( v9 == ActiveProcessors[5].StaticBitmap[8] && ((*(_BYTE *)(a1 + 69) & 1) == 0 || MmIsAddressValidEx(v8)) )
      return ((a2 ^ MI_READ_PTE_LOCK_FREE(v8)) & 0xFFFFFFFFFFFFFFDFuLL) != 0 ? 0xC0000434 : 0;
    else
      return (unsigned int)-1073740748;
  }
  else
  {
    MiForceCrashForInvalidAccess(a3);
    v12 = -1073739997;
    MiRelockFaultState(v7, v10);
  }
  return v12;
}
