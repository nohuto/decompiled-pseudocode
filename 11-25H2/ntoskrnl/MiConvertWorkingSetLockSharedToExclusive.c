/*
 * XREFs of MiConvertWorkingSetLockSharedToExclusive @ 0x140678F7C
 * Callers:
 *     MiInsertLargeVadMapping @ 0x1403EC828 (MiInsertLargeVadMapping.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiConvertWorkingSetLockSharedToExclusive(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rsi
  _DWORD *MmInternal; // rcx
  int v4; // ebp
  unsigned int i; // ebx
  signed __int32 v6; // eax
  signed __int32 v7; // ecx
  signed __int32 v8; // ett
  volatile signed __int32 *v9; // rdi
  signed __int32 v10; // r8d
  signed __int32 v11; // eax
  signed __int32 v12; // ecx
  unsigned int v13; // ecx
  signed __int32 v14; // ecx

  v1 = (__int64 *)&unk_140E38500;
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
    if ( i == v4 )
    {
      v6 = 1;
      v7 = 0x80000000;
      while ( 1 )
      {
        v8 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(((unsigned __int64)i << 6) + v2), v7, v6);
        if ( v8 == v6 )
          break;
        if ( v6 == 1 )
        {
          v7 &= ~0x40000000u;
        }
        else
        {
          if ( v6 != 1073741825 )
            goto LABEL_16;
          v7 |= 0x40000000u;
        }
      }
    }
    else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
    {
      break;
    }
  }
LABEL_16:
  if ( i == 4 )
    return 1LL;
  if ( i )
  {
    v9 = (volatile signed __int32 *)(v2 + ((unsigned __int64)i << 6));
    do
    {
      --i;
      v9 -= 16;
      if ( i == v4 )
      {
        v10 = 1;
        v11 = _InterlockedCompareExchange(v9, 1, 0x80000000);
        if ( v11 != 0x80000000 )
        {
          do
          {
            v12 = v10;
            v10 |= 0x40000000u;
            v13 = v12 & 0xBFFFFFFF;
            if ( (v11 & 0x40000000) == 0 )
              v10 = v13;
            v14 = v11;
            v11 = _InterlockedCompareExchange(v9, v10, v11);
          }
          while ( v11 != v14 );
        }
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v9);
      }
    }
    while ( i );
  }
  return 0LL;
}
