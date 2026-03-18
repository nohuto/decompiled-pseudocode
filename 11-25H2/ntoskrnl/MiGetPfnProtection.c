/*
 * XREFs of MiGetPfnProtection @ 0x14037CFCC
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiRevokeExecutePte @ 0x14037CEC0 (MiRevokeExecutePte.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateCloneAddress @ 0x1403DE800 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  char v6; // al
  unsigned int v7; // ebx
  __int64 v8; // r8
  _KPROCESS *Process; // rcx

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = MI_READ_PTE_LOCK_FREE(v4);
  v6 = MI_READ_PTE_LOCK_FREE(v4);
  v7 = (v5 >> 60) & 7;
  if ( v7 )
  {
    if ( (v6 & 0x18) == 8 )
    {
      v7 |= 0x18u;
    }
    else
    {
      if ( (v6 & 0x10) == 0 )
        return v7;
      v7 |= 8u;
    }
  }
  if ( v7 )
    return v7;
  v8 = (*(_DWORD *)(a3 + 16) >> 5) & 0x1F;
  if ( (*(_QWORD *)(a3 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(a3 + 8) > 0 )
    return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)v8];
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].IdealProcessorAssignmentBlock )
  {
    if ( MiLocateCloneAddress(Process, *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL, v8) )
      LODWORD(v8) = MmMakeProtectNotWriteCopy[(unsigned int)v8];
  }
  return (unsigned int)v8;
}
