/*
 * XREFs of MiIncreaseAvailablePages @ 0x140263490
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x140261770 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x140261834 (MiUpdateAvailableEventsAtDpc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

unsigned __int64 __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // r14d
  int v11; // eax
  struct _KEVENT *v12; // rdi

  if ( a2 == 1 )
  {
    v3 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 18688));
    if ( v3 <= 0x420 )
    {
      if ( v3 != 160 )
      {
        if ( v3 == 1056 )
        {
          a2 = 2LL;
        }
        else
        {
          if ( v3 != 34 )
          {
            if ( v3 == 288 )
              MiSlabDemotionLowMemoryConditionUpdate(a1, 1);
            goto LABEL_3;
          }
          a2 = 0LL;
        }
      }
      v12 = (struct _KEVENT *)(32 * a2 + a1);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16192));
      KeSetEvent(v12 + 675, 0, 0);
      ++v12[676].Header.LockNV;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16192));
    }
LABEL_3:
    v4 = v3 - 1;
    if ( v4 == *(_QWORD *)(a1 + 16640) || v4 == *(_QWORD *)(a1 + 16648) )
      MiUpdateAvailableEventsAtDpc(a1);
    return v4 + 1;
  }
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 18688), a2);
  v7 = a2 + v6;
  if ( v6 < 0x420 )
  {
    v10 = 4;
    if ( v7 < 0x420 )
      v10 = 0;
    if ( v6 < 0xA0 )
    {
      v11 = v10 | 2;
      if ( v7 < 0xA0 )
        v11 = v10;
      v10 = v11;
      if ( v6 < 0x22 && v7 >= 0x22 )
        v10 = v11 | 1;
    }
    else if ( v6 >= 0x120 )
    {
LABEL_23:
      if ( v10 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16192));
        if ( (v10 & 1) != 0 )
        {
          KeSetEvent((PRKEVENT)(a1 + 16200), 0, 0);
          ++*(_DWORD *)(a1 + 16224);
        }
        if ( (v10 & 2) != 0 )
        {
          KeSetEvent((PRKEVENT)(a1 + 16232), 0, 0);
          ++*(_DWORD *)(a1 + 16256);
        }
        if ( (v10 & 4) != 0 )
        {
          KeSetEvent((PRKEVENT)(a1 + 16264), 0, 0);
          ++*(_DWORD *)(a1 + 16288);
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16192));
      }
      goto LABEL_7;
    }
    if ( v7 >= 0x120 )
      MiSlabDemotionLowMemoryConditionUpdate(a1, 1);
    goto LABEL_23;
  }
LABEL_7:
  v8 = *(_QWORD *)(a1 + 16648);
  if ( v6 <= v8 && v7 > v8 || (v9 = *(_QWORD *)(a1 + 16640), v6 <= v9) && v7 > v9 )
    MiUpdateAvailableEventsAtDpc(a1);
  return v7;
}
