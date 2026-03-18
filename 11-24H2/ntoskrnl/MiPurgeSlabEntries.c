/*
 * XREFs of MiPurgeSlabEntries @ 0x1404827F0
 * Callers:
 *     MiFreeSlabEntries @ 0x1402D3B04 (MiFreeSlabEntries.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     MiPurgeSlabEntry @ 0x1404829DC (MiPurgeSlabEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiPurgeSlabEntries(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // r14
  KIRQL v6; // al
  unsigned __int64 i; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD **v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // [rsp+50h] [rbp+8h]

  if ( **(_QWORD **)(a1 + 80) )
  {
    v2 = 0LL;
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v15 = MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3];
    do
    {
      v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 16));
      i = *(_QWORD *)a1;
      v8 = v6;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && i )
        i ^= a1;
      v9 = 0LL;
      while ( i )
      {
        if ( v2 > *(_QWORD *)(i + 48) )
        {
          v10 = *(_QWORD *)(i + 8);
        }
        else
        {
          if ( v2 >= *(_QWORD *)(i + 40) )
            goto LABEL_14;
          v10 = *(_QWORD *)i;
          v9 = i;
        }
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v10 )
          i ^= v10;
        else
          i = v10;
      }
      i = v9;
LABEL_14:
      while ( i )
      {
        v5 = *(unsigned int *)(i + 88);
        if ( *(_DWORD *)(i + 88)
          && v5 + (unsigned __int64)*(unsigned int *)(i + 84) >= v15
          && (*(_DWORD *)(i + 92) & 1) == 0 )
        {
          v3 = *(_QWORD *)(i + 40);
          v4 = *(_QWORD *)(i + 48);
          break;
        }
        v11 = *(_QWORD ***)(i + 8);
        v12 = i;
        if ( v11 )
        {
          v13 = *v11;
          for ( i = *(_QWORD *)(i + 8); v13; v13 = (_QWORD *)*v13 )
            i = (unsigned __int64)v13;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v12 )
              break;
            v12 = i;
          }
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
      if ( !i )
        break;
      MiPurgeSlabEntry(v3, v4, v5, 0LL);
      v2 = v4 + 1;
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = v8;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      }
      __writecr8(v8);
      LOBYTE(v8) = 17;
    }
    while ( **(_QWORD **)(a1 + 80) );
    if ( (_BYTE)v8 != 17 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = v8;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      }
      __writecr8((unsigned __int8)v8);
    }
  }
}
