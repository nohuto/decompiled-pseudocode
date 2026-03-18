/*
 * XREFs of MiOutSwapWorkingSet @ 0x1403D958C
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403D8A60 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MiOutSwapKernelStackPage @ 0x1403D9490 (MiOutSwapKernelStackPage.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall MiOutSwapWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // eax
  int v10[2]; // [rsp+28h] [rbp-71h] BYREF
  unsigned __int8 v11; // [rsp+31h] [rbp-68h]
  __int64 v12; // [rsp+48h] [rbp-51h]
  __int64 v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h]
  __int64 (__fastcall *v15)(__int64, ULONG_PTR, int); // [rsp+D0h] [rbp+37h]
  __int64 v16; // [rsp+E0h] [rbp+47h]

  memset_0(v10, 0, 0xC0uLL);
  v16 = a5;
  v15 = MiOutSwapWorkingSetPte;
  v9 = *(_DWORD *)(a1 + 184);
  v12 = a1;
  v10[0] = 129;
  if ( (v9 & 0xF) != 0 )
  {
    v11 = 17;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 48) & 4) != 0 )
      return;
    v10[0] = 131;
    v13 = a3;
    v14 = a4;
    v11 = MiLockWorkingSetExclusive(a1);
  }
  MiWalkPageTables(v10);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
    MiUnlockWorkingSetExclusive(a1, v11);
}
