/*
 * XREFs of MiFreePageToSlabAllocator @ 0x1402241C8
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140264F54 (MiUpdateSlabPagePlaceholderState.c)
 *     MiReInitializeFreeSlabPfn @ 0x1403A1C18 (MiReInitializeFreeSlabPfn.c)
 *     MiGetCurrentSlabIdentity @ 0x1403FC210 (MiGetCurrentSlabIdentity.c)
 *     MiFreePageToSlabEntry @ 0x14043FBC8 (MiFreePageToSlabEntry.c)
 *     MiSlabEntryPageFreed @ 0x140459AC0 (MiSlabEntryPageFreed.c)
 */

void __fastcall MiFreePageToSlabAllocator(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int8 CurrentSlabIdentity; // si
  volatile LONG *v6; // r15
  __int64 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  _QWORD *v12; // rdi
  int v13; // [rsp+40h] [rbp+8h]
  int v14; // [rsp+40h] [rbp+8h]

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( *(_DWORD *)(a1 + 128) == 8 )
    CurrentSlabIdentity = MiGetCurrentSlabIdentity(KeGetCurrentThread());
  else
    CurrentSlabIdentity = -1;
  v6 = (volatile LONG *)(a1 + 16);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
  if ( *(_DWORD *)(a1 + 128) != 8 )
  {
    v7 = (__int64 *)(a1 + 40);
LABEL_5:
    if ( v7 )
    {
      v8 = *v7;
      if ( v8 )
      {
        if ( v4 <= *(_QWORD *)(v8 + 48) && v4 >= *(_QWORD *)(v8 + 40) )
          goto LABEL_18;
      }
    }
    goto LABEL_9;
  }
  if ( CurrentSlabIdentity != 0xFF )
  {
    v7 = (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * CurrentSlabIdentity);
    goto LABEL_5;
  }
LABEL_9:
  v8 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v8 )
    v8 ^= a1;
  while ( v8 )
  {
    if ( v4 > *(_QWORD *)(v8 + 48) )
    {
      v9 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      if ( v4 >= *(_QWORD *)(v8 + 40) )
        break;
      v9 = *(_QWORD *)v8;
    }
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v9 )
      v8 ^= v9;
    else
      v8 = v9;
  }
LABEL_18:
  if ( (*(_DWORD *)(a1 + 136) & 8) != 0 && (*(_BYTE *)(a2 + 34) & 7) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 160));
    if ( (HIWORD(*(_DWORD *)(a2 + 32)) & 0xC0) == 0x40 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
      MiZeroPhysicalPage(0LL, v4, 0, 1LL);
      v13 = *(_DWORD *)(a2 + 32);
      BYTE2(v13) &= 0xF8u;
      *(_DWORD *)(a2 + 32) = v13;
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
    }
  }
  v10 = *(_DWORD *)(a1 + 128);
  if ( v10 <= 4 && v10 != 2 )
  {
    v14 = *(_DWORD *)(a2 + 32);
    BYTE2(v14) = BYTE2(v14) & 0xF8 | 1;
    *(_DWORD *)(a2 + 32) = v14;
  }
  MiReInitializeFreeSlabPfn(a2, a1);
  MiUpdateSlabPagePlaceholderState(*(unsigned int *)(a1 + 128), v4, 1LL);
  MiFreePageToSlabEntry(a2, v8, a1);
  v11 = *(_DWORD *)(v8 + 92);
  if ( (v11 & 4) != 0 && CurrentSlabIdentity == 0xFF )
    CurrentSlabIdentity = (v11 >> 3) & 0x3F;
  MiSlabEntryPageFreed(a1, v8);
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( CurrentSlabIdentity == 0xFF )
      goto LABEL_25;
    v12 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL * CurrentSlabIdentity);
  }
  else
  {
    v12 = (_QWORD *)(a1 + 40);
  }
  if ( v12 )
    *v12 = v8;
LABEL_25:
  ExReleaseSpinLockSharedFromDpcLevel(v6);
}
