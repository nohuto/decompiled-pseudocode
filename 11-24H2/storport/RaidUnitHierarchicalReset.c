/*
 * XREFs of RaidUnitHierarchicalReset @ 0x14009F474
 * Callers:
 *     RaidAdapterStorageBreakReservationIoctl @ 0x14006239C (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x14009D8B0 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     McTemplateK0zqjuuujsssudxx_EtwWriteTransfer @ 0x140090B30 (McTemplateK0zqjuuujsssudxx_EtwWriteTransfer.c)
 *     RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1400972E0 (RaUnitSetHierarchicalResetSrbTimeoutCountdown.c)
 *     RaidUnitResetTarget @ 0x14009FE7C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1400A01E8 (RaidUnitResetUnit.c)
 *     StorIsEventQueueEmpty @ 0x1400A1DB0 (StorIsEventQueueEmpty.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall RaidUnitHierarchicalReset(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r15
  unsigned int v4; // eax
  int v5; // edi
  char v6; // r13
  int v7; // esi
  __int64 v8; // rdi
  char *Pool; // rax
  char *v10; // r12
  unsigned int i; // edx
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax

  LOBYTE(v1) = -1;
  LOBYTE(v3) = -1;
  if ( *(_BYTE *)(a1 + 3368) )
  {
    v4 = *(_DWORD *)(a1 + 3388);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 1392);
    if ( v4 < 0x1E )
      v4 = 30;
  }
  v5 = 2 * v4;
  RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 2 * v4);
  v6 = 1;
  v7 = RaidUnitResetUnit(a1);
  if ( v7 < 0 )
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, v5);
    v6 = 2;
    v7 = RaidUnitResetTarget(a1);
    if ( v7 < 0 )
    {
      RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
      v6 = 3;
      if ( *(_BYTE *)(a1 + 3368) && (unsigned __int8)StorIsEventQueueEmpty(*(_QWORD *)(a1 + 560)) )
      {
        v7 = 0;
        v8 = a1 + 24;
      }
      else
      {
        v8 = a1 + 24;
        v7 = RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 104));
        if ( v7 < 0 )
          goto LABEL_26;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 1400));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v8 + 4688LL));
      }
    }
    else
    {
      RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 1400));
      v8 = a1 + 24;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4692LL));
    }
  }
  else
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1400));
    v8 = a1 + 24;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4696LL));
  }
  if ( *(_QWORD *)(a1 + 2376) )
  {
    if ( *(_QWORD *)(a1 + 2400) )
    {
      Pool = (char *)RaidAllocatePool(64LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
      v10 = Pool;
      if ( Pool )
      {
        v1 = 0LL;
        v3 = 0LL;
        memmove(Pool, *(const void **)(a1 + 2376), (unsigned int)Size);
        for ( i = 0; i < g_RaidNumberProcessors; ++i )
        {
          v12 = (unsigned int)qword_140170E30;
          if ( (_DWORD)qword_140170E30 )
          {
            v13 = &v10[(unsigned int)dword_140170E38 * i + 8];
            do
            {
              v1 += *((_QWORD *)v13 + 1);
              v3 += *(_QWORD *)v13;
              v13 += 24;
              --v12;
            }
            while ( v12 );
          }
        }
        v14 = (unsigned int)qword_140170E30;
        v15 = *(_QWORD **)(a1 + 2400);
        if ( (_DWORD)qword_140170E30 )
        {
          do
          {
            v1 -= *v15;
            v3 -= v15[1];
            v15 += 3;
            --v14;
          }
          while ( v14 );
        }
        ExFreePoolWithTag(v10, 0x65546152u);
      }
    }
  }
LABEL_26:
  if ( byte_140171465 < 0 )
    McTemplateK0zqjuuujsssudxx_EtwWriteTransfer(
      a1 + 177,
      a1 + 168,
      a1 + 2104,
      *(const wchar_t **)(*(_QWORD *)v8 + 4720LL),
      *(_DWORD *)(*(_QWORD *)v8 + 56LL),
      *(_QWORD *)v8 + 5064LL,
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a1 + 2104,
      (const char *)(a1 + 168),
      (const char *)(a1 + 177),
      (const char *)(a1 + 242),
      v6,
      v7,
      v1,
      v3);
  *(_QWORD *)(a1 + 1408) = KeQueryUnbiasedInterruptTime();
  return (unsigned int)v7;
}
