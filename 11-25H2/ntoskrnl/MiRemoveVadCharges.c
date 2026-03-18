/*
 * XREFs of MiRemoveVadCharges @ 0x140901C48
 * Callers:
 *     MiFinishVadDeletion @ 0x1402A3AE0 (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiIsVadLarge @ 0x1403EC520 (MiIsVadLarge.c)
 *     MiGetSharedVm @ 0x14040A910 (MiGetSharedVm.c)
 *     MiReturnFullProcessCharges @ 0x140434620 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     MiFillCommitReturnInfo @ 0x140441390 (MiFillCommitReturnInfo.c)
 *     MiReleaseVadEventBlocks @ 0x140901E30 (MiReleaseVadEventBlocks.c)
 *     MiResidentPagesForSpan @ 0x1409EFD88 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiRemoveVadCharges(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // r15
  BOOL v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // eax
  _QWORD *SharedVm; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
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
      v13 = SharedVm[1];
      if ( v13 )
      {
        if ( v12 <= v13 )
        {
          SharedVm[1] = v13 - v12;
          v12 = 0LL;
        }
        else
        {
          v12 -= v13;
          SharedVm[1] = 0LL;
        }
        *((_QWORD *)&v15 + 1) = v12;
      }
      if ( v12 )
        MiReturnCommit(ProcessPartition, v12, 0);
    }
    *(_DWORD *)(a1 + 52) = 0;
    *(_BYTE *)(a1 + 34) = 0;
  }
  v9 = *(_DWORD *)(a1 + 48) & 0x70;
  if ( v9 == 16 || v9 == 64 )
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
