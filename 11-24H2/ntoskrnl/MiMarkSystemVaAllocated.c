/*
 * XREFs of MiMarkSystemVaAllocated @ 0x14026B454
 * Callers:
 *     MiReservePoolMemory @ 0x14026C688 (MiReservePoolMemory.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14026CB38 (MiSystemVaToDynamicBitmap.c)
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 *     MiExtendDynamicBitMap @ 0x14026ECB4 (MiExtendDynamicBitMap.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSystemVaPreserveGuardPage @ 0x14067AD3C (MiSystemVaPreserveGuardPage.c)
 */

__int64 __fastcall MiMarkSystemVaAllocated(unsigned int a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // r12
  unsigned int v6; // ebp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  volatile LONG *v14; // rcx
  KIRQL v15; // r13
  __int64 *v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  __int64 v19; // r9
  __int64 *v20; // r10
  bool v21; // zf
  bool i; // zf
  __int64 v23; // rax

  v5 = (int)a1;
  v6 = 1;
  v7 = (a3 - a2) >> 3;
  v8 = a2 << 25 >> 16 << 25 >> 16;
  v9 = (unsigned __int64 *)MiSystemVaToDynamicBitmap(a1);
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
    && (unsigned int)MiExtendDynamicBitMap(v9, v9, (v13 - *v9 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, (unsigned int)v5) )
  {
    if ( !a4 )
    {
      if ( v13 == v9[2] && (unsigned int)MiSystemVaPreserveGuardPage(v9, (unsigned int)v5) )
        --v7;
      RtlClearBitsEx(v9, v12, v7);
      v7 = -(__int64)v7;
      goto LABEL_31;
    }
    if ( v12 < *v9 )
    {
      if ( v7 > 1 )
      {
        if ( *v9 - v12 >= v7 )
        {
          v17 = v9[1];
          v18 = v13 - 1;
          v16 = (__int64 *)(v17 + 8 * (v12 >> 6));
          v19 = *v16;
          v20 = (__int64 *)(v17 + 8 * (v18 >> 6));
          if ( v16 == v20 )
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
              v23 = *++v16;
              if ( v16 == v20 )
              {
                v21 = (v23 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v18)) == 0;
                goto LABEL_25;
              }
            }
          }
        }
      }
      else if ( v7 == 1 )
      {
        v16 = (__int64 *)(v12 & 0x3F);
        if ( !_bittest64((const signed __int64 *)(v9[1] + 8 * (v12 >> 6)), (unsigned __int64)v16) )
        {
LABEL_26:
          RtlSetBitsEx(v9, v12, v7);
LABEL_31:
          _InterlockedAdd64((volatile signed __int64 *)&MiState + v5 + 6105, v7);
          goto LABEL_32;
        }
      }
    }
  }
  v6 = 0;
LABEL_32:
  LOBYTE(v16) = v15;
  MiReleaseSpinLockExclusive(v9 + 8, v16);
  return v6;
}
