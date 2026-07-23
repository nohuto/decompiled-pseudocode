/*
 * XREFs of MiConvertWorkingSetLockSharedToExclusive @ 0x140685934
 * Callers:
 *     MiInsertLargeVadMapping @ 0x1404CE7F4 (MiInsertLargeVadMapping.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiConvertWorkingSetLockSharedToExclusive(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rsi
  _DWORD *MmInternal; // rcx
  int v4; // ebp
  unsigned int i; // ebx
  unsigned __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ecx
  signed __int32 v9; // ett
  volatile signed __int32 *v10; // rdi
  signed __int32 v11; // r8d
  signed __int32 v12; // eax
  signed __int32 v13; // ecx
  unsigned int v14; // ecx
  signed __int32 v15; // ecx

  v1 = (__int64 *)&unk_140E38880;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v1 = (__int64 *)(a1 + 192);
  v2 = *v1;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
    v4 = MmInternal[81];
  else
    v4 = 0;
  for ( i = 0; i < 4; ++i )
  {
    v6 = (unsigned __int64)i << 6;
    if ( i == v4 )
    {
      v7 = 1;
      v8 = 0x80000000;
      while ( 1 )
      {
        v9 = v7;
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + v2), v8, v7);
        if ( v9 == v7 )
          break;
        if ( v7 == 1 )
        {
          v8 &= ~0x40000000u;
        }
        else
        {
          if ( v7 != 1073741825 )
            goto LABEL_16;
          v8 |= 0x40000000u;
        }
      }
    }
    else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v6 + v2)) )
    {
      break;
    }
  }
LABEL_16:
  if ( i == 4 )
    return 1LL;
  if ( i )
  {
    v10 = (volatile signed __int32 *)(v2 + ((unsigned __int64)i << 6));
    do
    {
      --i;
      v10 -= 16;
      if ( i == v4 )
      {
        v11 = 1;
        v12 = _InterlockedCompareExchange(v10, 1, 0x80000000);
        if ( v12 != 0x80000000 )
        {
          do
          {
            v13 = v11;
            v11 |= 0x40000000u;
            v14 = v13 & 0xBFFFFFFF;
            if ( (v12 & 0x40000000) == 0 )
              v11 = v14;
            v15 = v12;
            v12 = _InterlockedCompareExchange(v10, v11, v12);
          }
          while ( v12 != v15 );
        }
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      }
    }
    while ( i );
  }
  return 0LL;
}
