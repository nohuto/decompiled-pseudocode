/*
 * XREFs of MiRemoveVadCharges @ 0x14099A074
 * Callers:
 *     MiFinishVadDeletion @ 0x1404438BC (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiGetSharedVm @ 0x140404E90 (MiGetSharedVm.c)
 *     MiIsVadLarge @ 0x1404100C0 (MiIsVadLarge.c)
 *     MiReturnFullProcessCharges @ 0x1404234A0 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     MiFillCommitReturnInfo @ 0x1404377E0 (MiFillCommitReturnInfo.c)
 *     MiReleaseVadEventBlocks @ 0x14099A250 (MiReleaseVadEventBlocks.c)
 *     MiResidentPagesForSpan @ 0x14099A484 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiRemoveVadCharges(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // r15
  BOOL v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  _QWORD *SharedVm; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+40h] [rbp-30h]
  __int128 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+60h] [rbp-10h]

  v19 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  ProcessPartition = MiGetProcessPartition(a2);
  v5 = 0;
  if ( MiIsVadLarge(a1) )
    v5 = (*(_BYTE *)(a1 + 48) & 0x70) != 80;
  v6 = *(unsigned int *)(a1 + 52);
  v7 = *(unsigned __int8 *)(a1 + 34);
  *((_QWORD *)&v16 + 1) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v17 = *(_QWORD *)a1;
  if ( (v6 | (unsigned __int64)(v7 << 32)) < 0x7FFFFFFFDLL )
  {
    MiFillCommitReturnInfo(
      *(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32),
      (__int64)&v16,
      &v15);
    v8 = v15;
    if ( (_QWORD)v15 )
    {
      MiReturnFullProcessCharges(a2, v15);
      if ( v5 )
        _InterlockedAdd64((volatile signed __int64 *)(a2 + 1392), -v8);
    }
    if ( *((_QWORD *)&v15 + 1) )
    {
      SharedVm = MiGetSharedVm(a2 + 1024);
      v11 = SharedVm[1];
      if ( v11 )
      {
        if ( v10 <= v11 )
        {
          SharedVm[1] = v11 - v10;
          v10 = 0LL;
        }
        else
        {
          v10 -= v11;
          SharedVm[1] = 0LL;
        }
        *((_QWORD *)&v15 + 1) = v10;
      }
      if ( v10 )
        MiReturnCommit(ProcessPartition, v10, 0);
    }
    *(_DWORD *)(a1 + 52) = 0;
    *(_BYTE *)(a1 + 34) = 0;
  }
  v12 = *(_DWORD *)(a1 + 48) & 0x70;
  if ( v12 == 16 || v12 == 64 )
  {
    v14 = MiResidentPagesForSpan(
            (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
            ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF,
            0LL);
    if ( v14 )
      MiReturnResident(ProcessPartition, v14);
  }
  return MiReleaseVadEventBlocks(a1, 1LL);
}
