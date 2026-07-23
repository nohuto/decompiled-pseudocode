/*
 * XREFs of MiReferencePfBackedSection @ 0x140302908
 * Callers:
 *     MiTrimSharedPage @ 0x14025A33C (MiTrimSharedPage.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x14048C2E0 (MiGetPageFileSectionForReservation.c)
 *     MiLocateSharedPageViews @ 0x14067A2C0 (MiLocateSharedPageViews.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14030303C (MiRemoveUnusedSegment.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
    v3 = ExAcquireSpinLockShared(&dword_140E2D750);
    v4 = qword_140E2D748;
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
      if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v6 + 72)) )
      {
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2D750);
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2D750);
  if ( v6 )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v6 + 72), v5);
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
