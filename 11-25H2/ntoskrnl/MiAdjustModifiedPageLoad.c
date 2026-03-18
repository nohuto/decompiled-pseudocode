/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x14049364C
 * Callers:
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiWakeModifiedPageWriter @ 0x1403C1310 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403C1B60 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1403C1F98 (MiUseLowIoPriorityForModifiedPages.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     MiUpdateReserveClusterInfo @ 0x14045CBA0 (MiUpdateReserveClusterInfo.c)
 */

__int64 __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v5; // r10
  __int64 v6; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  signed __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r11
  __int64 v21; // rax
  __int64 result; // rax
  int v23; // ebp
  unsigned int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // rdi
  KIRQL v28; // r8
  char v29; // al
  signed __int32 v30[14]; // [rsp+0h] [rbp-38h] BYREF

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
  v12 = 0LL;
  v13 = 20000LL;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 17600) + 312LL) > 0x4E20uLL )
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 17600) + 312LL);
  if ( v11 > v13 && v5 < v11 / 0xA )
    goto LABEL_17;
  v14 = (unsigned __int64 *)(a1 + 872);
  if ( v5 >= v10 )
  {
    v12 = v10 >> 1;
LABEL_37:
    if ( !MiUseLowIoPriorityForModifiedPages(a1) )
      v12 = -1LL;
    MiWakeModifiedPageWriter(a1, v12);
    *(_QWORD *)(a1 + 864) = 0LL;
    *v14 = 0LL;
    goto LABEL_17;
  }
  v15 = 15 * (*v14 >> 4);
  v16 = v15 + (v5 >> 4);
  *v14 = v16;
  if ( v15 > v16 )
    goto LABEL_37;
  if ( v5 < 0x320 )
  {
    *(_QWORD *)(a1 + 864) = 0LL;
    goto LABEL_17;
  }
  v17 = *(_QWORD *)(a1 + 864);
  v18 = v16 <= v5 ? v16 + v17 - v5 : v5 + v17 - v16;
  v19 = v18 + v5;
  *(_QWORD *)(a1 + 864) = v18 + v5;
  if ( v18 > (__int64)(v18 + v5) )
    goto LABEL_37;
  v20 = v10 >> 1;
  v21 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v20 < 0x369D0369D0369DLL )
    v21 = 600 * v20;
  if ( v19 >= v21 )
    goto LABEL_37;
LABEL_17:
  *(_QWORD *)(a1 + 880) = a2;
  if ( (a3 & 7) == 0 )
  {
    v23 = 0;
    if ( (*(_BYTE *)(a1 + 924) & 1) != 0 )
    {
      _InterlockedOr(v30, 0);
      if ( a2 > 0x4000 || (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 912)) >= 0x47868C00 )
      {
        v23 = 1;
        *(_WORD *)(a1 + 924) &= ~1u;
      }
    }
    v24 = *(_DWORD *)(a1 + 18520);
    if ( v24 )
    {
      v25 = a1 + 18528;
      v26 = v24;
      do
      {
        v27 = *(_QWORD *)v25;
        if ( (*(_BYTE *)(*(_QWORD *)v25 + 172LL) & 0x40) == 0 )
        {
          v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v27 + 200));
          if ( *(_DWORD *)(v27 + 100) != *(_DWORD *)(v27 + 96) )
            *(_DWORD *)(v27 + 92) = dword_140FC41FC;
          *(_DWORD *)(v27 + 104) = 4 * dword_140FC41FC;
          if ( v23 )
          {
            v29 = *(_BYTE *)(v27 + 175);
            if ( (v29 & 1) != 0 )
              *(_BYTE *)(v27 + 175) = v29 & 0xFE;
          }
          MiReleaseSpinLockExclusive((_DWORD *)(v27 + 200), v28);
        }
        v25 += 8LL;
        --v26;
      }
      while ( v26 );
    }
    if ( v23 )
      MiUpdateReserveClusterInfo(a1, 0LL, 0);
  }
  result = *(unsigned int *)(a1 + 1204);
  if ( (_DWORD)result != -1 )
    return MiStoreUpdateMemoryConditions(a1);
  return result;
}
