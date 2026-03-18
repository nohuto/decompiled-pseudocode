/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x1407DA984
 * Callers:
 *     MiInitializeSystemCache @ 0x1407DD6C0 (MiInitializeSystemCache.c)
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 *     MiBuildPagedPool @ 0x140C42968 (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140C42A74 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140C42E1C (MiBuildSystemDataViews.c)
 *     MiInitializeSystemPtes @ 0x140C48C48 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiTranslateWsType @ 0x1404734C0 (MiTranslateWsType.c)
 *     MiAllowWorkingSetExpansion @ 0x14048E998 (MiAllowWorkingSetExpansion.c)
 *     MiInitializeWorkingSetList @ 0x1404A791C (MiInitializeWorkingSetList.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // eax
  int v9; // r10d
  __int64 v11; // r14
  char *v12; // rbp
  unsigned __int64 v13; // r15
  int v14; // edi
  __int16 v15; // [rsp+58h] [rbp+10h]

  v8 = MiTranslateWsType(a3);
  v9 = *(_DWORD *)(a2 + 184);
  v15 = v9;
  if ( v8 <= 3 )
  {
    if ( v8 == 1 )
    {
      HIBYTE(v15) = BYTE1(v9) | 8;
      *(_WORD *)(a2 + 184) = v15;
    }
    v11 = v8;
    v12 = (char *)&unk_140E2F080 + 256 * (__int64)v8;
    v13 = (-(__int64)(*(_QWORD *)(a1 + 18512) < 0x4000uLL) & 0xFFFFFFFFFFFFFF20uLL) + 256;
    if ( (unsigned int)MiChargeResident((ULONG *)a1, v13, 20LL) )
    {
      if ( (ULONG *)a1 != &MiSystemPartition )
      {
        v12 = (char *)(a1 + 448 * v11 + 19008);
        a4 = *((_QWORD *)&unk_140E37A38 + 40 * v11);
      }
      *(_DWORD *)a2 = 0;
      *(_QWORD *)(a2 + 112) = v13;
      *(_WORD *)(a2 + 174) = *(_WORD *)a1;
      v14 = MiInitializeWorkingSetList(a2, (__int64)v12, a3, a4);
      if ( v14 >= 0 )
        MiAllowWorkingSetExpansion(a2);
      return (unsigned int)v14;
    }
    else
    {
      return 3221225626LL;
    }
  }
  else
  {
    if ( v8 == 8 )
      HIBYTE(v15) = BYTE1(v9) | 8;
    LOBYTE(v15) = a3 & 0xF | v9 & 0xF0;
    *(_WORD *)(a2 + 184) = v15;
    *(_DWORD *)a2 = 0;
    *(_WORD *)(a2 + 174) = *(_WORD *)a1;
    return 0LL;
  }
}
