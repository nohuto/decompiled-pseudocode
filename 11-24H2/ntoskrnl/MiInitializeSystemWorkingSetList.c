/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x1407EA844
 * Callers:
 *     MiInitializeSystemCache @ 0x1407ED560 (MiInitializeSystemCache.c)
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 *     MiBuildPagedPool @ 0x140C53B98 (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140C53CA4 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140C54094 (MiBuildSystemDataViews.c)
 *     MiInitializeSystemPtes @ 0x140C59F78 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     MiAllowWorkingSetExpansion @ 0x1403D93B0 (MiAllowWorkingSetExpansion.c)
 *     MiTranslateWsType @ 0x140471F5C (MiTranslateWsType.c)
 *     MiInitializeWorkingSetList @ 0x1404A5D8C (MiInitializeWorkingSetList.c)
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
    v12 = (char *)&unk_140E2F2C0 + 256 * (__int64)v8;
    v13 = (-(__int64)(*(_QWORD *)(a1 + 18512) < 0x4000uLL) & 0xFFFFFFFFFFFFFF20uLL) + 256;
    if ( (unsigned int)MiChargeResident((ULONG *)a1, v13, 20LL) )
    {
      if ( (ULONG *)a1 != &MiSystemPartition )
      {
        v12 = (char *)(a1 + 448 * v11 + 19008);
        a4 = *((_QWORD *)&unk_140E37C78 + 40 * v11);
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
