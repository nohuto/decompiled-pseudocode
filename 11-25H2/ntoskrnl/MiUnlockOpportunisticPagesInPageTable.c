/*
 * XREFs of MiUnlockOpportunisticPagesInPageTable @ 0x1403911E8
 * Callers:
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140391464 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiUnlockIoPfnTree @ 0x1403922D8 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x140392384 (MiLockIoPfnTree.c)
 *     MiInvokeIoReleasePages @ 0x1404DA89C (MiInvokeIoReleasePages.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int64 __fastcall MiUnlockOpportunisticPagesInPageTable(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int8 v5; // di
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v25; // [rsp+38h] [rbp-130h]
  _BYTE v26[12]; // [rsp+50h] [rbp-118h] BYREF
  int v27; // [rsp+5Ch] [rbp-10Ch]
  int v28; // [rsp+6Ch] [rbp-FCh]

  v5 = a2;
  memset_0(v26, 0, 0xC8uLL);
  v7 = 0LL;
  v8 = 0LL;
  v9 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = -1LL;
  MiInitializeTbFlushList((__int64)v26, a1, 20, 24, 1);
  v11 = a4;
  if ( a4 > (a3 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v11 = a3 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v25 = v11;
  MiLockIoPfnTree(5LL);
  if ( a3 <= v25 )
  {
    while ( 1 )
    {
      v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a3) >> 12) & 0xFFFFFFFFFFLL;
      if ( v15 <= qword_140E2D9A0 && (v12 = 6 * v15, ((*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
      {
        v13 = 1LL;
        if ( (*(_QWORD *)(48 * v15 - 0x220000000000LL + 40) & 0x10000000000LL) != 0
          || (v14 = 0x3FFFFFFFFELL, (*(_QWORD *)(48 * v15 - 0x220000000000LL + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL) )
        {
          v13 = 2LL;
        }
        if ( (unsigned __int16)*(_DWORD *)(48 * v15 - 0x220000000000LL + 32) <= (unsigned __int16)v13 )
          goto LABEL_7;
      }
      else
      {
        v12 = qword_140E36F40[0];
        v14 = 0LL;
        if ( !qword_140E36F40[0] )
          goto LABEL_7;
        v13 = v15 & 0xFFFFFFFFFFFFFE00uLL;
        if ( v10 != -1LL && v10 == v13 )
          goto LABEL_7;
        if ( !v8 || *(_QWORD *)(v8 + 24) != v13 )
        {
          while ( v12 )
          {
            v17 = *(_QWORD *)(v12 + 24);
            if ( v15 < v17 )
            {
              v12 = *(_QWORD *)v12;
            }
            else
            {
              if ( v15 < v17 + 512 )
                break;
              v12 = *(_QWORD *)(v12 + 8);
            }
          }
          if ( !v12 )
          {
            v10 = v15 & 0xFFFFFFFFFFFFFE00uLL;
            goto LABEL_7;
          }
          v8 = v12;
        }
        if ( !*(_WORD *)(v8
                       + 2 * ((v15 & ((1LL << ((unsigned __int8)dword_140E2D8F8 - 12)) - 1)) - *(_QWORD *)(v8 + 24))
                       + 176) )
          goto LABEL_7;
      }
      v18 = a3;
      if ( v7 )
        v18 = v7;
      v7 = v18;
      if ( a2 == 17 )
      {
LABEL_8:
        v5 = a2;
        break;
      }
      MiInsertTbFlushEntry((__int64)v26, v15 << 12, 1LL, 0);
      if ( v28 == v27 )
      {
        LOBYTE(v12) = 17;
        MiUnlockIoPfnTree(v12, 5LL, v13, v14);
        MiUnlockPageTable(a1, v9);
        MiUnlockWorkingSetShared(a1, a2);
        MiInvokeIoReleasePages(v26);
        MiLockWorkingSetShared(a1);
        MiLockNestedPageTable(a1, v9, v21, v22);
        MiLockIoPfnTree(5LL);
        v7 = v18;
      }
LABEL_7:
      a3 += 8LL;
      if ( a3 > v25 )
        goto LABEL_8;
    }
  }
  LOBYTE(v12) = 17;
  MiUnlockIoPfnTree(v12, 5LL, v13, v14);
  if ( v28 )
  {
    MiUnlockPageTable(a1, v9);
    MiUnlockWorkingSetShared(a1, v5);
    MiInvokeIoReleasePages(v26);
    MiLockWorkingSetShared(a1);
    MiLockNestedPageTable(a1, v9, v19, v20);
  }
  return v7;
}
