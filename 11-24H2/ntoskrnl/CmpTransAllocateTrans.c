/*
 * XREFs of CmpTransAllocateTrans @ 0x140A78D9C
 * Callers:
 *     CmpTransSearchAddLightWeightTrans @ 0x14087D418 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x14087E39C (CmpTransSearchAddTrans.c)
 * Callees:
 *     CmpBindHiveToTrans @ 0x14087F0D8 (CmpBindHiveToTrans.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpTransAllocateTrans(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  __int64 v9; // rdx
  __int128 v11; // xmm0

  Pool2 = ExAllocatePool2(0x100uLL, 0xB8uLL, 0x72544D43u);
  v9 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 56) = a1;
    *(_QWORD *)(Pool2 + 104) = CLFS_LSN_INVALID_EXT;
    *(_DWORD *)(Pool2 + 48) = 8;
    *(_QWORD *)(Pool2 + 64) = a3;
    if ( (a1 & 1) != 0 )
      *(_DWORD *)(Pool2 + 48) = 136;
    if ( a2 )
    {
      v11 = *a2;
    }
    else
    {
      if ( (a1 & 1) != 0 )
      {
LABEL_6:
        *(_QWORD *)(Pool2 + 8) = Pool2;
        *(_QWORD *)Pool2 = Pool2;
        *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
        *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
        *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
        *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
        CmpBindHiveToTrans(a4, Pool2);
        return v9;
      }
      v11 = *(_OWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 176);
    }
    *(_OWORD *)(Pool2 + 88) = v11;
    goto LABEL_6;
  }
  return v9;
}
