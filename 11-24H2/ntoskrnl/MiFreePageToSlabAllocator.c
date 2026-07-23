/*
 * XREFs of MiFreePageToSlabAllocator @ 0x140250F18
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiReInitializeFreeSlabPfn @ 0x140218778 (MiReInitializeFreeSlabPfn.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiGetCurrentSlabIdentity @ 0x1402619D0 (MiGetCurrentSlabIdentity.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403A9C00 (MiUpdateSlabPagePlaceholderState.c)
 *     MiFreePageToSlabEntry @ 0x140435E88 (MiFreePageToSlabEntry.c)
 *     MiSlabEntryPageFreed @ 0x14044E870 (MiSlabEntryPageFreed.c)
 */

void __fastcall MiFreePageToSlabAllocator(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int8 CurrentSlabIdentity; // si
  volatile LONG *v6; // r15
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // eax
  _QWORD *v14; // rdi
  int v15; // [rsp+40h] [rbp+8h]
  int v16; // [rsp+40h] [rbp+8h]

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( *(_DWORD *)(a1 + 128) == 8 )
    CurrentSlabIdentity = MiGetCurrentSlabIdentity(KeGetCurrentThread());
  else
    CurrentSlabIdentity = -1;
  v6 = (volatile LONG *)(a1 + 16);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
  if ( *(_DWORD *)(a1 + 128) != 8 )
  {
    v9 = (__int64 *)(a1 + 40);
LABEL_5:
    if ( v9 )
    {
      v10 = *v9;
      if ( v10 )
      {
        if ( v4 <= *(_QWORD *)(v10 + 48) && v4 >= *(_QWORD *)(v10 + 40) )
          goto LABEL_18;
      }
    }
    goto LABEL_9;
  }
  if ( CurrentSlabIdentity != 0xFF )
  {
    v9 = (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * CurrentSlabIdentity);
    goto LABEL_5;
  }
LABEL_9:
  v10 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v10 )
    v10 ^= a1;
  while ( v10 )
  {
    if ( v4 > *(_QWORD *)(v10 + 48) )
    {
      v11 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      if ( v4 >= *(_QWORD *)(v10 + 40) )
        break;
      v11 = *(_QWORD *)v10;
    }
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v11 )
      v10 ^= v11;
    else
      v10 = v11;
  }
LABEL_18:
  if ( (*(_DWORD *)(a1 + 136) & 8) != 0 && (*(_BYTE *)(a2 + 34) & 7) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 160));
    if ( (HIWORD(*(_DWORD *)(a2 + 32)) & 0xC0) == 0x40 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
      MiZeroPhysicalPage(0LL, v4, 0, 1);
      v15 = *(_DWORD *)(a2 + 32);
      BYTE2(v15) &= 0xF8u;
      *(_DWORD *)(a2 + 32) = v15;
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
    }
  }
  v12 = *(_DWORD *)(a1 + 128);
  if ( v12 <= 4 && v12 != 2 )
  {
    v16 = *(_DWORD *)(a2 + 32);
    BYTE2(v16) = BYTE2(v16) & 0xF8 | 1;
    *(_DWORD *)(a2 + 32) = v16;
  }
  MiReInitializeFreeSlabPfn((_QWORD *)a2, a1, v7, v8);
  MiUpdateSlabPagePlaceholderState(*(unsigned int *)(a1 + 128), v4, 1LL, 1LL);
  MiFreePageToSlabEntry(a2, v10, a1);
  v13 = *(_DWORD *)(v10 + 92);
  if ( (v13 & 4) != 0 && CurrentSlabIdentity == 0xFF )
    CurrentSlabIdentity = (v13 >> 3) & 0x3F;
  MiSlabEntryPageFreed(a1, v10);
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( CurrentSlabIdentity == 0xFF )
      goto LABEL_25;
    v14 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL * CurrentSlabIdentity);
  }
  else
  {
    v14 = (_QWORD *)(a1 + 40);
  }
  if ( v14 )
    *v14 = v10;
LABEL_25:
  ExReleaseSpinLockSharedFromDpcLevel(v6);
}
