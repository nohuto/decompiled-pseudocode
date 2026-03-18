/*
 * XREFs of MiFillNoReservationCluster @ 0x14036A7DC
 * Callers:
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiSufficientAvailablePages @ 0x1402AA420 (MiSufficientAvailablePages.c)
 *     MiReservePageFileSpace @ 0x140368314 (MiReservePageFileSpace.c)
 *     MiReferencePageForModifiedWrite @ 0x14036AA48 (MiReferencePageForModifiedWrite.c)
 *     MiIsStoreVirtualPagefileFull @ 0x1404A2F68 (MiIsStoreVirtualPagefileFull.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 */

__int64 __fastcall MiFillNoReservationCluster(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  ULONG_PTR *v4; // r12
  _QWORD *v6; // rdi
  __int64 v7; // r14
  ULONG_PTR v8; // r15
  __int64 v9; // rsi
  unsigned __int8 v10; // r13
  int v11; // ebx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // [rsp+68h] [rbp+10h]

  v4 = (ULONG_PTR *)a3;
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
  v16 = 1;
  do
  {
    v8 = v6[2];
    if ( v8 == 0x3FFFFFFFFFLL )
      break;
    v9 = 48 * v8 - 0x220000000000LL;
    v10 = MiSafeLockPage(v6[2], a2, a3);
    if ( v10 != 17 )
    {
      if ( v8 != v6[2] )
        goto LABEL_24;
      if ( *(_DWORD *)(a1 + 1084)
        && *(__int64 *)(v9 + 40) < 0
        && ((*(_QWORD *)(v9 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v9 + 8) < 0 || !*(_QWORD *)(v9 + 8))
        && (unsigned int)MiSufficientAvailablePages(a1, 0xA0uLL) )
      {
        v13 = *(_QWORD *)(v9 + 8);
        MiUnlockPage(48 * v8 - 0x220000000000LL, v10);
        MiReservePageFileSpace(a1, v13 | 0x8000000000000000uLL, 0LL);
        v10 = MiSafeLockPage(v8, v14, v15);
        if ( v10 == 17 )
          continue;
        if ( v8 != v6[2] )
        {
LABEL_24:
          MiUnlockPage(48 * v8 - 0x220000000000LL, v10);
          continue;
        }
      }
      v11 = MiReferencePageForModifiedWrite(48 * v8 - 0x220000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v10 < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = v10;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
        }
        __writecr8(v10);
      }
      if ( !v11 )
        break;
      v16 &= ~1u;
      v7 = (unsigned int)(v7 + 1);
      *v4++ = v8;
      if ( v11 == 3 && (unsigned int)v7 >= 0x10 )
        break;
    }
  }
  while ( (unsigned int)v7 < a4 );
  if ( (unsigned int)v7 > 1 )
    qsort(&v4[-v7], (unsigned int)v7, 8uLL, MiModifiedWriterNoReservationSort);
  return (unsigned int)v7;
}
