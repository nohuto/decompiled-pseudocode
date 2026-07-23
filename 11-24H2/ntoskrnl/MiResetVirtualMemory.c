/*
 * XREFs of MiResetVirtualMemory @ 0x1404388A4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiAllowProtectionChange @ 0x1404389E8 (MiAllowProtectionChange.c)
 *     MiCheckSecuredVad @ 0x1408DBE18 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiResetVirtualMemory(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        char a6)
{
  int v6; // r10d
  unsigned int v7; // ebx
  unsigned int v12; // eax
  __int64 result; // rax

  v6 = *(_DWORD *)(a4 + 48);
  v7 = 0;
  if ( (v6 & 0x200000) != 0 )
  {
    if ( (v6 & 8) != 0 && (v6 & 0x200) == 0 && (int)MiCheckSecuredVad(a4, a2, (int)a3 - (int)a2 + 1, 4, a6, 0LL) < 0 )
      return 3221225550LL;
  }
  else
  {
    if ( *(_QWORD *)(**(_QWORD **)(a4 + 72) + 64LL) )
      return 3221226051LL;
    if ( (v6 & 0x200) == 0 )
      return 3221225550LL;
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x100) == 0
    || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) != 0
    || (result = MiAllowProtectionChange(KeGetCurrentThread()->ApcState.Process, a1, a4, 4, a2, a3), (int)result >= 0) )
  {
    v12 = MiWalkVaRange(a2, a3, a4, a5 != 0x80000, 0LL);
    if ( a5 != 0x80000 )
      return v12;
    return v7;
  }
  return result;
}
