/*
 * XREFs of MiDriverPdeOkToDelete @ 0x14065D8B4
 * Callers:
 *     MiDeleteBootRange @ 0x14065D60C (MiDeleteBootRange.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x14025D3B0 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14025D41C (MmLockLoadedModuleListShared.c)
 */

__int64 __fastcall MiDriverPdeOkToDelete(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned int v5; // ebx
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  PVOID *i; // r9
  unsigned __int64 v10; // rdx
  char *v11; // r11
  void *v12; // rt1

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
    v10 = (unsigned __int64)i[6];
    v11 = (char *)(v10 + (unsigned int)(*((_DWORD *)i + 16) - 1));
    v12 = *(void **)&KeNumberProcessorsGroup0[9];
    if ( (void *)v10 == v12 || (PVOID)v10 == PsHalImageBase )
      v8 = ((unsigned int)dword_140E3726C + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    else
      v8 = ((unsigned __int64)(unsigned int)dword_140E2D4F8 << 12)
         + (((unsigned int)(dword_140E37270 + dword_140E3726C) + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
    v7 = ((v10 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( a1 >= v7 && a1 <= (((unsigned __int64)&v11[v8] >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v5 = 0;
      break;
    }
  }
  MmUnlockLoadedModuleListShared(v6, v7, v8);
  return v5;
}
