/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x1407EAE14
 * Callers:
 *     MiInitializeSystemCache @ 0x1407EDB30 (MiInitializeSystemCache.c)
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 *     MiBuildPagedPool @ 0x140C55D28 (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140C55E34 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140C56224 (MiBuildSystemDataViews.c)
 *     MiInitializeSystemPtes @ 0x140C5C108 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiAllowWorkingSetExpansion @ 0x1402F2680 (MiAllowWorkingSetExpansion.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     MiTranslateWsType @ 0x14046C73C (MiTranslateWsType.c)
 *     MiInitializeWorkingSetList @ 0x1404A0B1C (MiInitializeWorkingSetList.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  struct _KPRCB *v9; // r9
  int v10; // r10d
  __int64 v12; // r14
  char *v13; // rbp
  unsigned __int64 v14; // r15
  int v15; // edi
  __int16 v16; // [rsp+58h] [rbp+10h]

  v8 = MiTranslateWsType(a3);
  v10 = *(_DWORD *)(a2 + 184);
  v16 = v10;
  if ( v8 <= 3 )
  {
    if ( v8 == 1 )
    {
      HIBYTE(v16) = BYTE1(v10) | 8;
      *(_WORD *)(a2 + 184) = v16;
    }
    v12 = v8;
    v13 = (char *)&unk_140E2F400 + 256 * (__int64)v8;
    v14 = (-(__int64)(*(_QWORD *)(a1 + 18512) < 0x4000uLL) & 0xFFFFFFFFFFFFFF20uLL) + 256;
    if ( (unsigned int)MiChargeResident((ULONG *)a1, v14, 20LL, v9) )
    {
      if ( (ULONG *)a1 != &MiSystemPartition )
      {
        v13 = (char *)(a1 + 448 * v12 + 19008);
        a4 = *((_QWORD *)&unk_140E37DB8 + 40 * v12);
      }
      *(_DWORD *)a2 = 0;
      *(_QWORD *)(a2 + 112) = v14;
      *(_WORD *)(a2 + 174) = *(_WORD *)a1;
      v15 = MiInitializeWorkingSetList(a2, (__int64)v13, a3, a4);
      if ( v15 >= 0 )
        MiAllowWorkingSetExpansion(a2);
      return (unsigned int)v15;
    }
    else
    {
      return 3221225626LL;
    }
  }
  else
  {
    if ( v8 == 8 )
      HIBYTE(v16) = BYTE1(v10) | 8;
    LOBYTE(v16) = a3 & 0xF | v10 & 0xF0;
    *(_WORD *)(a2 + 184) = v16;
    *(_DWORD *)a2 = 0;
    *(_WORD *)(a2 + 174) = *(_WORD *)a1;
    return 0LL;
  }
}
