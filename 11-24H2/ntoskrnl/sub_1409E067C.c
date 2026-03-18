/*
 * XREFs of sub_1409E067C @ 0x1409E067C
 * Callers:
 *     sub_1408FD018 @ 0x1408FD018 (sub_1408FD018.c)
 *     sub_1409E0444 @ 0x1409E0444 (sub_1409E0444.c)
 *     sub_1409E0720 @ 0x1409E0720 (sub_1409E0720.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1406A67D0 (ZwFreeVirtualMemory.c)
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     MmUnsecureVirtualMemory @ 0x1408E51C0 (MmUnsecureVirtualMemory.c)
 *     sub_1409E0E1C @ 0x1409E0E1C (sub_1409E0E1C.c)
 */

void __fastcall sub_1409E067C(PVOID *BaseAddress)
{
  int v2; // edi
  struct _MDL *v3; // rcx
  PVOID v4; // rcx

  if ( BaseAddress )
  {
    if ( BaseAddress[2] == KeGetCurrentThread()->ApcState.Process )
    {
      v4 = BaseAddress[135];
      v2 = 1;
      if ( v4 )
        MmUnsecureVirtualMemory(v4);
    }
    else
    {
      v2 = 0;
    }
    v3 = (struct _MDL *)BaseAddress[3];
    if ( v3 )
    {
      sub_1409E0E1C(v3);
      BaseAddress[3] = 0LL;
    }
    BaseAddress[4] = 0LL;
    if ( *BaseAddress )
    {
      if ( v2 )
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, (PSIZE_T)BaseAddress + 1, 0x8000u);
      *BaseAddress = 0LL;
      BaseAddress[1] = 0LL;
    }
    SddlpFree(BaseAddress);
  }
}
