/*
 * XREFs of IvtHandleInterrupt @ 0x14056C010
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall IvtHandleInterrupt(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r9
  char v2; // di
  unsigned int v4; // r11d
  __int64 v5; // rcx
  unsigned int i; // r10d
  ULONG_PTR v7; // r14
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rbp
  char v10; // si
  __int64 *v11; // rcx
  ULONG_PTR v12; // rdi
  __int64 v13; // r8
  unsigned __int8 CurrentIrql; // si
  __int64 *j; // rcx
  __int64 v16; // rdx
  signed __int32 v18[8]; // [rsp+0h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-48h]
  __int128 v20; // [rsp+30h] [rbp-38h]
  unsigned int BugCheckParameter3; // [rsp+70h] [rbp+8h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 8);
  v2 = 0;
  if ( *(_BYTE *)(BugCheckParameter2 + 316) && (*(_DWORD *)(v1 + 220) & 1) != 0 )
  {
    v2 = 1;
    *(_DWORD *)(v1 + 220) = 1;
    _InterlockedOr(v18, 0);
  }
  BugCheckParameter3 = *(_DWORD *)(v1 + 52);
  if ( *(_BYTE *)(BugCheckParameter2 + 320)
    && ((BugCheckParameter3 & 0x10) != 0 || (BugCheckParameter3 & 0x20) != 0 || (BugCheckParameter3 & 0x40) != 0) )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(v1
                                + 16
                                * (BYTE1(BugCheckParameter3)
                                 % ((unsigned int)*(unsigned __int8 *)(BugCheckParameter2 + 221) + 1)
                                 + ((*(_QWORD *)(BugCheckParameter2 + 216) >> 24) & 0x3FFLL)));
    KeBugCheckEx(0x5Cu, 0x502uLL, BugCheckParameter2, BugCheckParameter3, v20);
  }
  if ( (BugCheckParameter3 & 2) != 0 && BugCheckParameter3 != -1 )
  {
    v4 = *(unsigned __int8 *)(BugCheckParameter2 + 221) + 1;
    v5 = v1 + 16 * ((*(_QWORD *)(BugCheckParameter2 + 216) >> 24) & 0x3FFLL);
    for ( i = 0; i < v4; ++i )
    {
      v20 = *(_OWORD *)(v5 + 16LL * ((i + BYTE1(BugCheckParameter3)) % v4));
      if ( v20 >= 0 )
        break;
      v7 = WORD4(v20);
      v8 = BYTE12(v20);
      v9 = (unsigned __int64)v20 >> 12;
      if ( (unsigned int)BYTE12(v20) - 32 > 8 )
      {
        v10 = 0;
        v11 = 0LL;
        v12 = 0LL;
        while ( 1 )
        {
          if ( !v11 )
          {
            if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpDmaAdapterListLock) )
            {
              if ( v10 )
LABEL_32:
                KxReleaseSpinLock((volatile signed __int64 *)&HalpDmaAdapterListLock);
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
              if ( !v12 && (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuDeviceCreatedListSpinLock) )
              {
                for ( j = (__int64 *)HalpIommuDeviceCreatedList; ; j = (__int64 *)*j )
                {
                  if ( j == &HalpIommuDeviceCreatedList )
                    goto LABEL_44;
                  v16 = j[2];
                  if ( *(_DWORD *)v16 == 1
                    && *(unsigned __int16 *)(v16 + 12) == v7
                    && *(unsigned __int16 *)(v16 + 8) == *(_DWORD *)(BugCheckParameter2 + 252) )
                  {
                    break;
                  }
                }
                v12 = *(_QWORD *)(j[3] + 8);
LABEL_44:
                ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
              }
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
              BugCheckParameter4 = v8;
              if ( v12 )
                KeBugCheckEx(0xE6u, 0x27uLL, v12, v9, BugCheckParameter4);
              KeBugCheckEx(0xE6u, 0x28uLL, v7, v9, BugCheckParameter4);
            }
            v11 = &HalpDmaAdapterList;
          }
          v11 = (__int64 *)*v11;
          if ( v11 == &HalpDmaAdapterList )
          {
            v12 = 0LL;
            goto LABEL_32;
          }
          v10 = 1;
          v13 = v11[9];
          v12 = v11[8];
          if ( !v12 )
            goto LABEL_32;
          if ( v13 && *(_DWORD *)v13 == 1 )
          {
            if ( *(unsigned __int16 *)(v13 + 12) == v7
              && *(unsigned __int16 *)(v13 + 8) == *(_DWORD *)(BugCheckParameter2 + 252) )
            {
              goto LABEL_32;
            }
            v12 = v11[8];
          }
        }
      }
      if ( *(_BYTE *)(BugCheckParameter2 + 320) )
        KeBugCheckEx(0x1FBu, 0x1000uLL, BYTE12(v20), WORD4(v20), (unsigned __int64)v20 >> 12);
      *(_QWORD *)(v5 + 16LL * ((i + BYTE1(BugCheckParameter3)) % v4) + 8) = *((_QWORD *)&v20 + 1);
      _InterlockedOr(v18, 0);
    }
    if ( *(_BYTE *)(BugCheckParameter2 + 320) && (BugCheckParameter3 & 1) != 0 )
    {
      *(_QWORD *)&v20 = *(_QWORD *)(v1
                                  + 16
                                  * (BYTE1(BugCheckParameter3)
                                   % ((unsigned int)*(unsigned __int8 *)(BugCheckParameter2 + 221) + 1)
                                   + ((*(_QWORD *)(BugCheckParameter2 + 216) >> 24) & 0x3FFLL)));
      KeBugCheckEx(0x5Cu, 0x502uLL, BugCheckParameter2, BugCheckParameter3, v20);
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 52LL) = BugCheckParameter3 | 1;
    _InterlockedOr(v18, 0);
  }
  return v2;
}
