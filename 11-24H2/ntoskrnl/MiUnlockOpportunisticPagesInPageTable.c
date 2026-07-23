/*
 * XREFs of MiUnlockOpportunisticPagesInPageTable @ 0x14038DEE4
 * Callers:
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiUnlockIoPfnTree @ 0x14038F980 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 *     MiInvokeIoReleasePages @ 0x1404D32C8 (MiInvokeIoReleasePages.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v27; // [rsp+38h] [rbp-130h]
  _BYTE v28[12]; // [rsp+50h] [rbp-118h] BYREF
  int v29; // [rsp+5Ch] [rbp-10Ch]
  int v30; // [rsp+6Ch] [rbp-FCh]

  v5 = a2;
  memset_0(v28, 0, 0xC8uLL);
  v7 = 0LL;
  v8 = 0LL;
  v9 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = -1LL;
  MiInitializeTbFlushList((__int64)v28, a1, 20, 24, 1);
  v11 = a4;
  if ( a4 > (a3 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v11 = a3 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v27 = v11;
  MiLockIoPfnTree(5LL);
  if ( a3 <= v27 )
  {
    while ( 1 )
    {
      v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a3) >> 12) & 0xFFFFFFFFFFLL;
      if ( v15 <= qword_140E2DD20 && (v12 = 6 * v15, ((*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
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
        v12 = qword_140E372C0[0];
        v14 = 0LL;
        if ( !qword_140E372C0[0] )
          goto LABEL_7;
        v13 = v15 & 0xFFFFFFFFFFFFFE00uLL;
        if ( v10 != -1LL && v10 == v13 )
          goto LABEL_7;
        if ( !v8 || *(_QWORD *)(v8 + 24) != v13 )
        {
          while ( v12 )
          {
            v18 = *(_QWORD *)(v12 + 24);
            if ( v15 < v18 )
            {
              v12 = *(_QWORD *)v12;
            }
            else
            {
              if ( v15 < v18 + 512 )
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
                       + 2 * ((v15 & ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1)) - *(_QWORD *)(v8 + 24))
                       + 176) )
          goto LABEL_7;
      }
      v17 = a3;
      if ( v7 )
        v17 = v7;
      v7 = v17;
      if ( a2 == 17 )
      {
LABEL_8:
        v5 = a2;
        break;
      }
      MiInsertTbFlushEntry((__int64)v28, v15 << 12, 1LL, 0);
      if ( v30 == v29 )
      {
        LOBYTE(v12) = 17;
        MiUnlockIoPfnTree(v12, 5LL, v13, v14);
        MiUnlockPageTableInternal(a1, v9);
        MiUnlockWorkingSetShared(a1, a2);
        MiInvokeIoReleasePages(v28);
        MiLockWorkingSetShared(a1, v22, v23, v24);
        MiLockNestedPageTable(a1, v9);
        MiLockIoPfnTree(5LL);
        v7 = v17;
      }
LABEL_7:
      a3 += 8LL;
      if ( a3 > v27 )
        goto LABEL_8;
    }
  }
  LOBYTE(v12) = 17;
  MiUnlockIoPfnTree(v12, 5LL, v13, v14);
  if ( v30 )
  {
    MiUnlockPageTableInternal(a1, v9);
    MiUnlockWorkingSetShared(a1, v5);
    MiInvokeIoReleasePages(v28);
    MiLockWorkingSetShared(a1, v19, v20, v21);
    MiLockNestedPageTable(a1, v9);
  }
  return v7;
}
