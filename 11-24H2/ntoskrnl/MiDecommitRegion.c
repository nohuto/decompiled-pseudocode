/*
 * XREFs of MiDecommitRegion @ 0x1408DA3B0
 * Callers:
 *     MiFreeToSubAllocatedRegion @ 0x1408D9778 (MiFreeToSubAllocatedRegion.c)
 *     MiFreeVirtualMemory @ 0x1408D9E68 (MiFreeVirtualMemory.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A2A370 (MiLoadSectionIntoVsmEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A2A630 (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     MiFreeLargePages @ 0x1402666C0 (MiFreeLargePages.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1404234A0 (MiReturnFullProcessCharges.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     MiFillCommitReturnInfo @ 0x1404377E0 (MiFillCommitReturnInfo.c)
 */

__int64 __fastcall MiDecommitRegion(__int64 a1, unsigned __int64 a2)
{
  _KPROCESS *Process; // rdi
  unsigned __int64 v4; // r8
  __int64 PteAddress; // rax
  __int64 v6; // r10
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 ProcessPartition; // rax
  unsigned __int64 v17; // r10
  __int128 v18; // [rsp+40h] [rbp-68h] BYREF
  __int128 v19; // [rsp+50h] [rbp-58h] BYREF
  __int128 v20; // [rsp+60h] [rbp-48h]
  __int128 v21; // [rsp+70h] [rbp-38h]
  __int64 v22; // [rsp+80h] [rbp-28h]
  __int64 v23; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+20h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v18 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  MiGetPteAddress(a2);
  PteAddress = MiGetPteAddress(v4);
  v7 = ((PteAddress - v6) >> 3) + 1;
  v8 = MiDecommitPages(v6, (unsigned int)((PteAddress - v6) >> 3) + 1, 0, (__int64)Process, a1, 1, 0LL, (__int64)&v19);
  v9 = v7 - *((_QWORD *)&v20 + 1);
  v23 = 0LL;
  if ( v22 )
  {
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    *((_QWORD *)&v19 + 1) = MiFreeLargePages(ProcessPartition, v17, &v23, &v24, 0);
  }
  v10 = *(unsigned int *)(a1 + 52);
  v11 = (v10 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) - v9;
  *(_DWORD *)(a1 + 52) = v10 - v9;
  *(_BYTE *)(a1 + 34) = BYTE4(v11);
  if ( (*(_DWORD *)(a1 + 48) & 0xA00000) == 0xA00000 )
    _InterlockedAdd64((volatile signed __int64 *)&Process[3].ProfileListHead, -v9);
  v12 = v23;
  if ( v22 )
    v9 = v23 + *((_QWORD *)&v19 + 1);
  MiFillCommitReturnInfo(v9, (__int64)&v19, &v18);
  if ( (_QWORD)v18 )
    MiReturnFullProcessCharges((__int64)Process, v18);
  if ( *((_QWORD *)&v18 + 1) && *((_QWORD *)&v18 + 1) != v12 )
  {
    v13 = MiGetProcessPartition((__int64)Process);
    MiReturnCommit(v13, v14, 0);
  }
  return v8;
}
