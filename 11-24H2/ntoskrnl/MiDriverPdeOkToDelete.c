/*
 * XREFs of MiDriverPdeOkToDelete @ 0x1406693D8
 * Callers:
 *     MiDeleteBootRange @ 0x140669130 (MiDeleteBootRange.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14027C0CC (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x14027C120 (MmUnlockLoadedModuleListShared.c)
 */

__int64 __fastcall MiDriverPdeOkToDelete(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned int v5; // ebx
  unsigned __int8 v6; // al
  PVOID *i; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8

  v2 = (__int64)(a1 << 25) >> 16;
  v3 = v2 + 4096;
  while ( v2 < v3 )
  {
    if ( (*(_QWORD *)v2 & 0xC01LL) != 0 || (*(_QWORD *)v2 & 0x3E0) != 0 && (*(_QWORD *)v2 & 0x3E0LL) != 0x300 )
      return 0LL;
    v2 += 8LL;
  }
  v5 = 1;
  v6 = MmLockLoadedModuleListShared();
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v8 = (unsigned __int64)i[6];
    if ( v8 == PsNtosImageBase || v8 == PsHalImageBase )
      v9 = ((unsigned int)dword_140E374AC + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    else
      v9 = ((unsigned __int64)(unsigned int)dword_140E2D738 << 12)
         + (((unsigned int)(dword_140E374B0 + dword_140E374AC) + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
    if ( a1 >= ((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      && a1 <= (((v8 + (unsigned int)(*((_DWORD *)i + 16) - 1) + v9) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v5 = 0;
      break;
    }
  }
  MmUnlockLoadedModuleListShared(v6);
  return v5;
}
