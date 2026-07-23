/*
 * XREFs of MiConvertWorkingSetLockExclusiveToShared @ 0x140685870
 * Callers:
 *     MiInsertLargeVadMapping @ 0x1404CE7F4 (MiInsertLargeVadMapping.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiConvertWorkingSetLockExclusiveToShared(__int64 a1)
{
  volatile signed __int32 **v1; // rdi
  unsigned int v2; // ebx
  _DWORD *MmInternal; // rcx
  volatile signed __int32 *v4; // rdi
  unsigned int i; // esi
  signed __int32 v6; // r8d
  signed __int32 v7; // eax
  signed __int32 v8; // ecx
  unsigned int v9; // ecx
  signed __int32 v10; // ecx

  v1 = (volatile signed __int32 **)&unk_140E38880;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v1 = (volatile signed __int32 **)(a1 + 192);
  v2 = (KeGetPcr()->Prcb.Number >> 1) & 3;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
    MmInternal[81] = v2;
  v4 = *v1;
  for ( i = 0; i < 4; ++i )
  {
    if ( i == v2 )
    {
      v6 = 1;
      v7 = _InterlockedCompareExchange(v4, 1, 0x80000000);
      if ( v7 != 0x80000000 )
      {
        do
        {
          v8 = v6;
          v6 |= 0x40000000u;
          v9 = v8 & 0xBFFFFFFF;
          if ( (v7 & 0x40000000) == 0 )
            v6 = v9;
          v10 = v7;
          v7 = _InterlockedCompareExchange(v4, v6, v7);
        }
        while ( v7 != v10 );
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    }
    v4 += 16;
  }
}
