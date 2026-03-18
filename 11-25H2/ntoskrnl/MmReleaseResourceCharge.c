/*
 * XREFs of MmReleaseResourceCharge @ 0x14020C540
 * Callers:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14020BC20 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     MiRestockOverCommit @ 0x14040ADD4 (MiRestockOverCommit.c)
 */

void __fastcall MmReleaseResourceCharge(_QWORD *a1, __int64 a2, char a3, int a4)
{
  __int64 v4; // rbx
  char v5; // r11
  struct _KPRCB *CurrentPrcb; // r8
  __int64 i; // rdx
  signed __int32 v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  volatile LONG *v14; // rcx
  KIRQL v15; // bp
  unsigned __int64 v16; // rdx
  struct _KEVENT *v17; // rcx
  struct _KEVENT *v18; // rcx
  struct _KEVENT *v19; // rcx
  struct _KEVENT *v20; // rcx
  KIRQL v21; // si
  volatile LONG *v22; // rcx

  v4 = *a1;
  v5 = a3;
  if ( (a3 & 2) != 0 && !a4 )
    MiReturnResident(*a1);
  if ( (v5 & 1) != 0 && a2 )
  {
    if ( !*(_QWORD *)(v4 + 16904) )
      goto LABEL_5;
    v14 = (volatile LONG *)(v4 + 16888);
    if ( KeGetCurrentIrql() == 2 )
    {
      v15 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v14);
    }
    else
    {
      v15 = ExAcquireSpinLockExclusive(v14);
    }
    a2 = MiRestockOverCommit(v4, a2);
    MiReleaseSpinLockExclusive(v4 + 16888, v15);
    if ( a2 )
    {
LABEL_5:
      if ( (ULONG *)v4 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
        for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + a2) <= 0x100; i = v9 )
        {
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + a2, i);
          if ( v9 == i )
            return;
        }
      }
      _InterlockedAdd64((volatile signed __int64 *)(v4 + 19328), -a2);
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 19264), -a2);
      v11 = *(_QWORD *)(v4 + 16864);
      v12 = *(_QWORD *)(v4 + 16856);
      v13 = v10 - a2;
      if ( v10 - a2 > v10 )
      {
        if ( v13 >= v11 && v10 < v11 || v13 >= v12 && v10 < v12 )
        {
LABEL_42:
          v22 = (volatile LONG *)(v4 + 16888);
          if ( KeGetCurrentIrql() == 2 )
          {
            v21 = 17;
            ExAcquireSpinLockExclusiveAtDpcLevel(v22);
          }
          else
          {
            v21 = ExAcquireSpinLockExclusive(v22);
          }
          v16 = *(_QWORD *)(v4 + 19264);
          if ( v16 < *(_QWORD *)(v4 + 16856) )
          {
            v19 = *(struct _KEVENT **)(v4 + 296);
            if ( !v19->Header.SignalState )
              KeSetEvent(v19, 0, 0);
            v20 = *(struct _KEVENT **)(v4 + 304);
            if ( v20->Header.SignalState != 1 )
              goto LABEL_35;
            KeResetEvent(v20);
            v18 = *(struct _KEVENT **)(v4 + 312);
          }
          else
          {
            v17 = *(struct _KEVENT **)(v4 + 304);
            if ( v16 >= *(_QWORD *)(v4 + 16864) )
            {
              if ( !v17->Header.SignalState )
                KeSetEvent(v17, 0, 0);
              if ( *(_QWORD *)(v4 + 19608) == *(_QWORD *)(v4 + 16840) )
                KeSetEvent(*(PRKEVENT *)(v4 + 312), 0, 0);
              v18 = *(struct _KEVENT **)(v4 + 296);
              if ( v18->Header.SignalState != 1 )
                goto LABEL_35;
            }
            else
            {
              if ( v17->Header.SignalState == 1 )
              {
                KeResetEvent(v17);
                KeResetEvent(*(PRKEVENT *)(v4 + 312));
              }
              v18 = *(struct _KEVENT **)(v4 + 296);
              if ( v18->Header.SignalState != 1 )
                goto LABEL_35;
            }
          }
          KeResetEvent(v18);
LABEL_35:
          MiReleaseSpinLockExclusive(v4 + 16888, v21);
        }
      }
      else if ( v10 >= v11 && v13 < v11 || v10 >= v12 && v13 < v12 )
      {
        goto LABEL_42;
      }
    }
  }
}
