/*
 * XREFs of MiSynchronizeSystemVa @ 0x14022AD58
 * Callers:
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiLockStealSystemVm @ 0x14022A3E0 (MiLockStealSystemVm.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetMultiplexedVm @ 0x140240018 (MiGetMultiplexedVm.c)
 *     MiGetSystemCacheReverseMap @ 0x1402D4740 (MiGetSystemCacheReverseMap.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockSystemVa @ 0x1402E1BA0 (MiUnlockSystemVa.c)
 *     MiFillPteHierarchy @ 0x1403A9BF0 (MiFillPteHierarchy.c)
 */

__int64 __fastcall MiSynchronizeSystemVa(__int64 a1, unsigned __int64 a2, int a3, int a4, __int64 a5)
{
  int v5; // r14d
  int v8; // ebx
  char v9; // al
  unsigned __int64 v10; // rcx
  _QWORD *v11; // r12
  int v12; // eax
  unsigned __int64 v13; // rcx
  __int64 i; // rdx
  ULONG_PTR v15; // rsi
  __int64 SystemCacheReverseMap; // rax
  __int64 v18; // rcx
  void *MultiplexedVm; // rax
  __int64 v20; // rsi
  int v21; // r13d
  unsigned __int64 v22; // rcx
  char v23; // al
  int v24; // eax
  int v25; // ecx
  unsigned __int64 valid; // rax
  _QWORD *v27; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v28[2]; // [rsp+28h] [rbp-28h] BYREF

  v5 = 0;
  memset(v28, 0, sizeof(v28));
  if ( a3 )
  {
    *(_DWORD *)(a5 + 16) = 0;
    *(_QWORD *)(a5 + 24) = a1;
    v8 = *(_DWORD *)(a1 + 184);
    v9 = *(_BYTE *)(a5 + 37);
    if ( a4 )
    {
      *(_BYTE *)(a5 + 37) = v9 | 1;
      *(_BYTE *)(a5 + 36) = MiLockWorkingSetExclusive(a1);
      MiFillPteHierarchy(a2, v28);
      v20 = 4LL;
      v21 = 4;
      while ( 1 )
      {
        v22 = (unsigned __int64)(&v27)[v20--];
        --v21;
        v23 = MI_READ_PTE_LOCK_FREE(v22);
        if ( (v23 & 1) == 0 )
          break;
        v24 = v23 & 0x80;
        if ( v24 || v20 == 1 )
        {
          v25 = v24 != 0LL ? v21 : 0;
          if ( !v25 )
            goto LABEL_11;
          if ( (*(_DWORD *)(a5 + 4) & 4) != 0 )
          {
            *(_DWORD *)(a5 + 16) = v25;
            goto LABEL_11;
          }
          break;
        }
      }
    }
    else
    {
      *(_BYTE *)(a5 + 37) = v9 & 0xFE;
      *(_BYTE *)(a5 + 36) = MiLockWorkingSetShared(a1);
      v10 = 0LL;
      v27 = 0LL;
      v11 = 0LL;
      if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v12 = MiFastLockLeafPageTable(a1, a2, 0LL);
        if ( v12 )
        {
          v13 = a2;
          for ( i = 0LL; i < 4; ++i )
          {
            v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            *((_QWORD *)v28 + i) = v13;
          }
          v11 = (&v27)[v12];
          v10 = *((_QWORD *)v28 + v12);
          v27 = v11;
        }
        else
        {
          v10 = 0LL;
        }
      }
      v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( !v10 )
      {
        valid = MiLockLowestValidPageTableEx(a1, v15, (ULONG_PTR *)&v27, 0);
        v11 = v27;
        v10 = valid;
      }
      *(_QWORD *)(a5 + 40) = v10;
      if ( v11 == (_QWORD *)v15 )
      {
LABEL_11:
        if ( (v8 & 0xF) != 1 )
          return 1LL;
        if ( *(_DWORD *)(a5 + 48) == 3 )
        {
          MultiplexedVm = &unk_140E3D580;
          goto LABEL_20;
        }
        SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2);
        if ( SystemCacheReverseMap && *(_QWORD *)(SystemCacheReverseMap + 32) >> 62 == 3 )
        {
          MultiplexedVm = (void *)MiGetMultiplexedVm(v18, a2);
LABEL_20:
          *(_QWORD *)(a5 + 24) = MultiplexedVm;
          return 1LL;
        }
      }
      else if ( (*(_DWORD *)(a5 + 4) & 4) != 0 && (*v11 & 0x81) == 0x81 )
      {
        do
        {
          v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          ++v5;
        }
        while ( (_QWORD *)v15 != v27 );
        *(_DWORD *)(a5 + 16) = v5;
        return 1LL;
      }
    }
    MiUnlockSystemVa(a5);
  }
  return 0LL;
}
