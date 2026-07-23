/*
 * XREFs of MiFillNoReservationCluster @ 0x1402EC57C
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReservePageFileSpace @ 0x140202948 (MiReservePageFileSpace.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1402EC7E8 (MiReferencePageForModifiedWrite.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 *     MiIsStoreVirtualPagefileFull @ 0x14049DEC8 (MiIsStoreVirtualPagefileFull.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 */

__int64 __fastcall MiFillNoReservationCluster(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4)
{
  _QWORD *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rsi
  unsigned __int8 v10; // r13
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v14; // rbx
  int v15; // [rsp+68h] [rbp+10h]

  if ( (*(_BYTE *)(a2 + 172) & 0x40) != 0 )
  {
    v6 = (_QWORD *)(a1 + 4096);
    if ( *(_QWORD *)(a1 + 88 * ((*(_WORD *)(a2 + 172) & 0xF) + 48LL)) )
      v6 = (_QWORD *)(a1 + 88 * ((*(_WORD *)(a2 + 172) & 0xF) + 48LL));
  }
  else
  {
    v6 = (_QWORD *)(a1 + 3968);
    if ( !*(_QWORD *)(a1 + 3968) )
    {
      if ( (unsigned int)MiIsStoreVirtualPagefileFull(a1) )
      {
        v6 = (_QWORD *)(a1 + 88 * (*(unsigned int *)(a1 + 1204) + 48LL));
        if ( !*v6 )
          v6 = (_QWORD *)(a1 + 4096);
      }
    }
  }
  v7 = 0LL;
  v15 = 1;
  do
  {
    v8 = v6[2];
    if ( v8 == 0x3FFFFFFFFFLL )
      break;
    v9 = 48 * v8 - 0x220000000000LL;
    v10 = MiSafeLockPage(v6[2]);
    if ( v10 != 17 )
    {
      if ( v8 != v6[2] )
        goto LABEL_24;
      if ( *(_DWORD *)(a1 + 1084)
        && *(__int64 *)(v9 + 40) < 0
        && ((*(_QWORD *)(v9 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v9 + 8) < 0 || !*(_QWORD *)(v9 + 8))
        && (unsigned int)MiSufficientAvailablePages(a1, 160LL) )
      {
        v14 = *(_QWORD *)(v9 + 8);
        MiUnlockPage(48 * v8 - 0x220000000000LL, v10);
        MiReservePageFileSpace(a1, v14 | 0x8000000000000000uLL, 0LL);
        v10 = MiSafeLockPage(v8);
        if ( v10 == 17 )
          continue;
        if ( v8 != v6[2] )
        {
LABEL_24:
          MiUnlockPage(48 * v8 - 0x220000000000LL, v10);
          continue;
        }
      }
      v12 = MiReferencePageForModifiedWrite(48 * v8 - 0x220000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v10 < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v11) = v10;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
        }
        __writecr8(v10);
      }
      if ( !v12 )
        break;
      v15 &= ~1u;
      v7 = (unsigned int)(v7 + 1);
      *a3++ = v8;
      if ( v12 == 3 && (unsigned int)v7 >= 0x10 )
        break;
    }
  }
  while ( (unsigned int)v7 < a4 );
  if ( (unsigned int)v7 > 1 )
    qsort(&a3[-v7], (unsigned int)v7, 8uLL, MiModifiedWriterNoReservationSort);
  return (unsigned int)v7;
}
