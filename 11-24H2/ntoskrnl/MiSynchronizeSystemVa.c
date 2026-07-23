/*
 * XREFs of MiSynchronizeSystemVa @ 0x1402FDFC8
 * Callers:
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiLockStealSystemVm @ 0x1402FD650 (MiLockStealSystemVm.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiGetMultiplexedVm @ 0x140208168 (MiGetMultiplexedVm.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockSystemVa @ 0x1402FC650 (MiUnlockSystemVa.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiGetSystemCacheReverseMap @ 0x1403559C0 (MiGetSystemCacheReverseMap.c)
 *     MiFillPteHierarchy @ 0x140398880 (MiFillPteHierarchy.c)
 */

__int64 __fastcall MiSynchronizeSystemVa(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r14d
  int v8; // ebx
  char v9; // al
  unsigned __int64 v10; // rcx
  _QWORD *v11; // r12
  int v12; // eax
  unsigned __int64 v13; // rcx
  __int64 i; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 SystemCacheReverseMap; // rax
  __int64 v19; // rcx
  void *MultiplexedVm; // rax
  __int64 v21; // rsi
  int v22; // r13d
  unsigned __int64 v23; // rcx
  char v24; // al
  int v25; // eax
  int v26; // ecx
  unsigned __int64 valid; // rax
  _QWORD *v28; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v29[2]; // [rsp+28h] [rbp-28h] BYREF

  v5 = 0;
  memset(v29, 0, sizeof(v29));
  if ( (_DWORD)a3 )
  {
    *(_DWORD *)(a5 + 16) = 0;
    *(_QWORD *)(a5 + 24) = a1;
    v8 = *(_DWORD *)(a1 + 184);
    v9 = *(_BYTE *)(a5 + 37);
    if ( (_DWORD)a4 )
    {
      *(_BYTE *)(a5 + 37) = v9 | 1;
      *(_BYTE *)(a5 + 36) = MiLockWorkingSetExclusive(a1);
      MiFillPteHierarchy(a2, v29);
      v21 = 4LL;
      v22 = 4;
      while ( 1 )
      {
        v23 = (unsigned __int64)(&v28)[v21--];
        --v22;
        v24 = MI_READ_PTE_LOCK_FREE(v23);
        if ( (v24 & 1) == 0 )
          break;
        v25 = v24 & 0x80;
        if ( v25 || v21 == 1 )
        {
          v26 = v25 != 0LL ? v22 : 0;
          if ( !v26 )
            goto LABEL_11;
          if ( (*(_DWORD *)(a5 + 4) & 4) != 0 )
          {
            *(_DWORD *)(a5 + 16) = v26;
            goto LABEL_11;
          }
          break;
        }
      }
    }
    else
    {
      *(_BYTE *)(a5 + 37) = v9 & 0xFE;
      *(_BYTE *)(a5 + 36) = MiLockWorkingSetShared(a1, a2, a3, a4);
      v10 = 0LL;
      v28 = 0LL;
      v11 = 0LL;
      if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v12 = MiFastLockLeafPageTable(a1, a2, 0);
        if ( v12 )
        {
          v13 = a2;
          for ( i = 0LL; i < 4; ++i )
          {
            v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            *((_QWORD *)v29 + i) = v13;
          }
          v11 = (&v28)[v12];
          v10 = *((_QWORD *)v29 + v12);
          v28 = v11;
        }
        else
        {
          v10 = 0LL;
        }
      }
      v15 = 0xFFFFF68000000000uLL;
      v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( !v10 )
      {
        valid = MiLockLowestValidPageTableEx(a1, v16, (ULONG_PTR *)&v28, 0);
        v11 = v28;
        v10 = valid;
        v15 = 0xFFFFF68000000000uLL;
      }
      *(_QWORD *)(a5 + 40) = v10;
      if ( v11 == (_QWORD *)v16 )
      {
LABEL_11:
        if ( (v8 & 0xF) != 1 )
          return 1LL;
        if ( *(_DWORD *)(a5 + 48) == 3 )
        {
          MultiplexedVm = &unk_140E3D6C0;
          goto LABEL_20;
        }
        SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2, v15);
        if ( SystemCacheReverseMap && *(_QWORD *)(SystemCacheReverseMap + 32) >> 62 == 3 )
        {
          MultiplexedVm = (void *)MiGetMultiplexedVm(v19, a2);
LABEL_20:
          *(_QWORD *)(a5 + 24) = MultiplexedVm;
          return 1LL;
        }
      }
      else if ( (*(_DWORD *)(a5 + 4) & 4) != 0 && (*v11 & 0x81) == 0x81 )
      {
        do
        {
          v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          ++v5;
        }
        while ( (_QWORD *)v16 != v28 );
        *(_DWORD *)(a5 + 16) = v5;
        return 1LL;
      }
    }
    MiUnlockSystemVa(a5);
  }
  return 0LL;
}
