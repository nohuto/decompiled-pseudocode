/*
 * XREFs of MiCheckSlabPage @ 0x1403234E8
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x1404A1818 (MiFinalizeImageHeaderPage.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 */

__int64 __fastcall MiCheckSlabPage(__int64 a1, int a2, char a3)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // rbp
  __int64 v6; // r14
  volatile LONG *v7; // rcx
  KIRQL v8; // si
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned int v11; // edi
  unsigned __int64 v12; // rcx

  v4 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v6 = 232LL * a2 + 57216LL * (unsigned int)MiPageToNode(v5) + *(_QWORD *)(v4 + 16) + 15696LL;
  v7 = (volatile LONG *)(v6 + 16);
  if ( (a3 & 4) != 0 )
  {
    v8 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v7);
  }
  else
  {
    v8 = ExAcquireSpinLockShared(v7);
  }
  v10 = *(_QWORD *)v6;
  v11 = 0;
  if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && v10 )
    v10 ^= v6;
  while ( v10 )
  {
    if ( v5 > *(_QWORD *)(v10 + 48) )
    {
      v12 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      if ( v5 >= *(_QWORD *)(v10 + 40) )
        break;
      v12 = *(_QWORD *)v10;
    }
    if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && v12 )
      v10 ^= v12;
    else
      v10 = v12;
  }
  LOBYTE(v9) = v8;
  MiReleaseSpinLockShared(v6 + 16, v9);
  LOBYTE(v11) = v10 != 0;
  return v11;
}
