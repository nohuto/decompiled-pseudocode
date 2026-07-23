/*
 * XREFs of MiGetSlabRepurposedStandbyListWorker @ 0x1403E2544
 * Callers:
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1403E2438 (MiGetSlabAllocatorRepurposedStandbyList.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1403E2718 (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 */

__int64 __fastcall MiGetSlabRepurposedStandbyListWorker(__int64 a1, __int64 a2)
{
  volatile LONG *v4; // r15
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // r14
  signed __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rax
  int v15; // ebp
  volatile LONG *v16; // r15
  struct _KEVENT *v17; // r14

  v4 = (volatile LONG *)(a1 + 16);
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
  v6 = *(_QWORD *)a1;
  v7 = 0;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v6 )
    v6 ^= a1;
  while ( v6 )
  {
    if ( v5 > *(_QWORD *)(v6 + 48) )
    {
      v8 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      if ( v5 >= *(_QWORD *)(v6 + 40) )
        break;
      v8 = *(_QWORD *)v6;
    }
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v8 )
      v6 ^= v8;
    else
      v6 = v8;
  }
  if ( *(_DWORD *)(a1 + 128) != 8 )
  {
    v9 = MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3];
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    v10 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(a1 + 128) == 8 )
    {
      v12 = _InterlockedIncrement64((volatile signed __int64 *)(v10 + 18304));
      v13 = v12 == 1;
      v14 = v12 - 1;
      v15 = v13;
      if ( v14 < 1056 && v14 + 1 >= 1056 )
        v15 = v13 | 2;
      if ( v15 )
      {
        v16 = (volatile LONG *)(v10 + 16192);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 16192));
        v17 = (struct _KEVENT *)(v10 + 18336);
        do
        {
          if ( _bittest(&v15, v7) )
          {
            KeSetEvent(v17 - 1, 0, 0);
            ++v17->Header.LockNV;
          }
          ++v7;
          v17 = (struct _KEVENT *)((char *)v17 + 32);
        }
        while ( v7 < 2 );
        ExReleaseSpinLockExclusiveFromDpcLevel(v16);
        v4 = (volatile LONG *)(a1 + 16);
      }
    }
    if ( *(_DWORD *)(v6 + 88) + *(_DWORD *)(v6 + 84) >= v9 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 136), 1u);
  }
  ExReleaseSpinLockSharedFromDpcLevel(v4);
  if ( *(_DWORD *)(a1 + 128) == 8 )
    return -1LL;
  MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY(a2, v6);
  return *(_QWORD *)(a1 + 80);
}
