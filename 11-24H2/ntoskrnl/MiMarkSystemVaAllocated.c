/*
 * XREFs of MiMarkSystemVaAllocated @ 0x1404CF744
 * Callers:
 *     MiReservePoolMemory @ 0x1403A5398 (MiReservePoolMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlClearBitsEx @ 0x140261AD0 (RtlClearBitsEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     RtlSetBitsEx @ 0x1403A4600 (RtlSetBitsEx.c)
 *     MiSystemVaToDynamicBitmap @ 0x1403A5848 (MiSystemVaToDynamicBitmap.c)
 *     MiExtendDynamicBitMap @ 0x1403A7584 (MiExtendDynamicBitMap.c)
 *     MiSystemVaPreserveGuardPage @ 0x140679B5C (MiSystemVaPreserveGuardPage.c)
 */

__int64 __fastcall MiMarkSystemVaAllocated(int a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // r12
  unsigned int v6; // ebp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 *v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  volatile LONG *v14; // rcx
  KIRQL v15; // r13
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  __int64 *v18; // rdx
  __int64 v19; // r9
  __int64 *v20; // r10
  bool v21; // zf
  bool i; // zf
  __int64 v23; // rax

  v5 = a1;
  v6 = 1;
  v7 = (a3 - a2) >> 3;
  v8 = a2 << 25 >> 16 << 25 >> 16;
  v9 = MiSystemVaToDynamicBitmap(a1);
  v10 = v9[4];
  if ( v8 < v10 )
    return 0LL;
  v12 = (v8 - v10) >> 21;
  v13 = v7 + v12;
  v14 = (volatile LONG *)(v9 + 8);
  if ( KeGetCurrentIrql() == 2 )
  {
    v15 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v14);
  }
  else
  {
    v15 = ExAcquireSpinLockExclusive(v14);
  }
  if ( !a5
    || v13 <= *v9
    || v13 < v9[2]
    && (unsigned int)MiExtendDynamicBitMap((__int64)v9, (__int64)v9, (v13 - *v9 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, v5) )
  {
    if ( !a4 )
    {
      if ( v13 == v9[2] && (unsigned int)MiSystemVaPreserveGuardPage(v9, (unsigned int)v5) )
        --v7;
      RtlClearBitsEx((__int64)v9, v12, v7);
      v7 = -(__int64)v7;
      goto LABEL_31;
    }
    if ( v12 < *v9 )
    {
      if ( v7 > 1 )
      {
        if ( *v9 - v12 >= v7 )
        {
          v16 = v9[1];
          v17 = v13 - 1;
          v18 = (__int64 *)(v16 + 8 * (v12 >> 6));
          v19 = *v18;
          v20 = (__int64 *)(v16 + 8 * (v17 >> 6));
          if ( v18 == v20 )
          {
            v21 = (v19 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << v12)) == 0;
LABEL_25:
            if ( v21 )
              goto LABEL_26;
          }
          else
          {
            for ( i = (v19 & (-1LL << v12)) == 0; i; i = v23 == 0 )
            {
              v23 = *++v18;
              if ( v18 == v20 )
              {
                v21 = (v23 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v17)) == 0;
                goto LABEL_25;
              }
            }
          }
        }
      }
      else if ( v7 == 1 && !_bittest64((const signed __int64 *)(v9[1] + 8 * (v12 >> 6)), v12 & 0x3F) )
      {
LABEL_26:
        RtlSetBitsEx((__int64)v9, v12, v7);
LABEL_31:
        _InterlockedAdd64((volatile signed __int64 *)&MiState + v5 + 6105, v7);
        goto LABEL_32;
      }
    }
  }
  v6 = 0;
LABEL_32:
  MiReleaseSpinLockExclusive((_DWORD *)v9 + 16, v15);
  return v6;
}
