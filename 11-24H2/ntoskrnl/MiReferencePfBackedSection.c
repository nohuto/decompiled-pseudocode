/*
 * XREFs of MiReferencePfBackedSection @ 0x14022EFF8
 * Callers:
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiTrimSharedPage @ 0x140370B4C (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x14049161C (MiGetPageFileSectionForReservation.c)
 *     MiLocateSharedPageViews @ 0x1406790E0 (MiLocateSharedPageViews.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14022F72C (MiRemoveUnusedSegment.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  __int64 v2; // rbp
  KIRQL v3; // al
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 *v16; // rdx

  v2 = 0LL;
  while ( 2 )
  {
    v3 = ExAcquireSpinLockShared(&dword_140E2D610);
    v4 = qword_140E2D608;
    v5 = v3;
    while ( v4 )
    {
      v9 = 0LL;
      switch ( *(_DWORD *)(v4 + 24) & 7 )
      {
        case 0:
          v10 = *(_QWORD *)(v4 - 112);
          v9 = *(unsigned int *)(v4 - 76);
          goto LABEL_13;
        case 1:
          v10 = *(_QWORD *)(v4 - 48);
          v9 = *(unsigned int *)(v4 - 12);
          goto LABEL_13;
        case 2:
          v11 = *(_QWORD *)(v4 - 56) + 128LL;
          v10 = *(_QWORD *)(*(_QWORD *)(v4 - 56) + 136LL);
          do
          {
            v12 = *(unsigned int *)(v11 + 44);
            v11 = *(_QWORD *)(v11 + 16);
            v9 += v12;
          }
          while ( v11 );
LABEL_13:
          if ( a1 >= v10 )
            goto LABEL_14;
          v4 = *(_QWORD *)v4;
          break;
        case 3:
          v10 = *(_QWORD *)(v4 + 48);
          v9 = *(_QWORD *)(v4 + 32);
          goto LABEL_13;
        case 4:
          v10 = *(_QWORD *)(v4 + 32);
          v9 = *(_QWORD *)(v4 + 40);
          goto LABEL_13;
        default:
          v10 = 0LL;
LABEL_14:
          if ( a1 < v10 + 8 * v9 )
            goto LABEL_4;
          v4 = *(_QWORD *)(v4 + 8);
          break;
      }
    }
LABEL_4:
    v6 = 0LL;
    if ( v4 && (*(_BYTE *)(v4 + 24) & 7) == 1 )
    {
      v7 = v4 - 56;
      v6 = *(_QWORD *)(v4 - 56);
      if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      {
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2D610);
        if ( (_BYTE)v5 != 17 )
        {
          if ( KiIrqlFlags )
          {
            LOBYTE(v8) = v5;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
          }
          __writecr8(v5);
        }
        continue;
      }
      if ( (*(_DWORD *)(v6 + 56) & 3) == 0 )
      {
        v13 = *(__int64 **)(v6 + 80);
        if ( v13 )
        {
          do
          {
            v16 = (__int64 *)*v13;
            if ( (v13[1] & 4) != 0 )
              *((_DWORD *)v13 + 3) = 1;
            v13 = v16;
          }
          while ( v16 );
        }
        ++*(_DWORD *)(v6 + 76);
        MiRemoveUnusedSegment(v6);
        v2 = v7;
      }
    }
    break;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2D610);
  if ( v6 )
  {
    LOBYTE(v14) = v5;
    MiReleaseSpinLockExclusive(v6 + 72, v14);
  }
  else
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = v5;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    }
    __writecr8(v5);
  }
  return v2;
}
