/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x140353ADC
 * Callers:
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 * Callees:
 *     MiWakeModifiedPageWriter @ 0x140261468 (MiWakeModifiedPageWriter.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402F4DDC (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1402F5124 (MiUseLowIoPriorityForModifiedPages.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     MiUpdateReserveClusterInfo @ 0x14045147C (MiUpdateReserveClusterInfo.c)
 */

__int64 __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v5; // r10
  __int64 v6; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 *v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  signed __int64 v18; // rax
  unsigned __int64 v19; // r11
  __int64 v20; // rax
  __int64 result; // rax
  int v22; // ebp
  unsigned int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rdi
  KIRQL v27; // r8
  char v28; // al
  signed __int32 v29[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 18688);
  v5 = *(_QWORD *)(a1 + 19616);
  v6 = *(_QWORD *)(a1 + 2880);
  v8 = 0x4000LL;
  if ( v3 >> 5 > 0x4000 )
    v8 = v3 >> 5;
  v10 = v3 >> 4;
  if ( v10 >= v8 )
    v10 = v8;
  v11 = v6 + *(_QWORD *)(a1 + 3008);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 17600) + 312LL);
  v13 = 0LL;
  v14 = 20000LL;
  if ( v12 > 0x4E20 )
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 17600) + 312LL);
  if ( v11 > v14 && v5 < v11 / 0xA )
    goto LABEL_17;
  v15 = (unsigned __int64 *)(a1 + 872);
  if ( v5 >= v10 )
  {
    v13 = v10 >> 1;
LABEL_37:
    if ( !MiUseLowIoPriorityForModifiedPages(a1) )
      v13 = -1LL;
    MiWakeModifiedPageWriter(a1, v13);
    *(_QWORD *)(a1 + 864) = 0LL;
    *v15 = 0LL;
    goto LABEL_17;
  }
  v12 = 15 * (*v15 >> 4);
  v16 = v12 + (v5 >> 4);
  *v15 = v16;
  if ( v12 > v16 )
    goto LABEL_37;
  if ( v5 < 0x320 )
  {
    *(_QWORD *)(a1 + 864) = 0LL;
    goto LABEL_17;
  }
  v17 = *(_QWORD *)(a1 + 864);
  v18 = v16 <= v5 ? v16 + v17 - v5 : v5 + v17 - v16;
  v12 = v18 + v5;
  *(_QWORD *)(a1 + 864) = v18 + v5;
  if ( v18 > (__int64)(v18 + v5) )
    goto LABEL_37;
  v19 = v10 >> 1;
  v20 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v19 < 0x369D0369D0369DLL )
    v20 = 600 * v19;
  if ( (__int64)v12 >= v20 )
    goto LABEL_37;
LABEL_17:
  *(_QWORD *)(a1 + 880) = a2;
  if ( (a3 & 7) == 0 )
  {
    v22 = 0;
    if ( (*(_BYTE *)(a1 + 924) & 1) != 0 )
    {
      _InterlockedOr(v29, 0);
      if ( a2 > 0x4000
        || (LOBYTE(v12) = 1, (unsigned __int64)(KiQueryUnbiasedInterruptTime(v12) - *(_QWORD *)(a1 + 912)) >= 0x47868C00) )
      {
        v22 = 1;
        *(_WORD *)(a1 + 924) &= ~1u;
      }
    }
    v23 = *(_DWORD *)(a1 + 18520);
    if ( v23 )
    {
      v24 = a1 + 18528;
      v25 = v23;
      do
      {
        v26 = *(_QWORD *)v24;
        if ( (*(_BYTE *)(*(_QWORD *)v24 + 172LL) & 0x40) == 0 )
        {
          v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v26 + 200));
          if ( *(_DWORD *)(v26 + 100) != *(_DWORD *)(v26 + 96) )
            *(_DWORD *)(v26 + 92) = dword_140FC520C;
          *(_DWORD *)(v26 + 104) = 4 * dword_140FC520C;
          if ( v22 )
          {
            v28 = *(_BYTE *)(v26 + 175);
            if ( (v28 & 1) != 0 )
              *(_BYTE *)(v26 + 175) = v28 & 0xFE;
          }
          MiReleaseSpinLockExclusive((_DWORD *)(v26 + 200), v27);
        }
        v24 += 8LL;
        --v25;
      }
      while ( v25 );
    }
    if ( v22 )
      MiUpdateReserveClusterInfo(a1, 0LL, 0LL);
  }
  result = *(unsigned int *)(a1 + 1204);
  if ( (_DWORD)result != -1 )
    return MiStoreUpdateMemoryConditions(a1);
  return result;
}
