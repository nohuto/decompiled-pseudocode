/*
 * XREFs of MiUnlockOpportunisticPagesInPageTable @ 0x1403D1CC8
 * Callers:
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiUnlockIoPfnTree @ 0x1403D0468 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x1403D0514 (MiLockIoPfnTree.c)
 *     MiInvokeIoReleasePages @ 0x1404D984C (MiInvokeIoReleasePages.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

unsigned __int64 __fastcall MiUnlockOpportunisticPagesInPageTable(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int8 v5; // di
  unsigned __int64 v7; // r15
  _QWORD *v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rcx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int16 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v23; // [rsp+38h] [rbp-130h]
  _BYTE v24[12]; // [rsp+50h] [rbp-118h] BYREF
  int v25; // [rsp+5Ch] [rbp-10Ch]
  int v26; // [rsp+6Ch] [rbp-FCh]

  v5 = a2;
  memset_0(v24, 0, 0xC8uLL);
  v7 = 0LL;
  v8 = 0LL;
  v9 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = -1LL;
  MiInitializeTbFlushList((__int64)v24, a1, 20, 24, 1);
  v12 = a4;
  if ( a4 > (a3 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v12 = a3 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v23 = v12;
  MiLockIoPfnTree(5LL, v11);
  if ( a3 <= v23 )
  {
    while ( 1 )
    {
      v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a3) >> 12) & 0xFFFFFFFFFFLL;
      if ( v13 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v19 = 1;
        if ( (*(_QWORD *)(48 * v13 - 0x220000000000LL + 40) & 0x10000000000LL) != 0
          || (*(_QWORD *)(48 * v13 - 0x220000000000LL + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
        {
          v19 = 2;
        }
        if ( (unsigned __int16)*(_DWORD *)(48 * v13 - 0x220000000000LL + 32) <= v19 )
          goto LABEL_7;
      }
      else
      {
        v14 = (_QWORD *)qword_140E37180[0];
        if ( !qword_140E37180[0] )
          goto LABEL_7;
        v18 = v13 & 0xFFFFFFFFFFFFFE00uLL;
        if ( v10 != -1LL && v10 == v18 )
          goto LABEL_7;
        if ( !v8 || v8[3] != v18 )
        {
          while ( v14 )
          {
            v17 = v14[3];
            if ( v13 < v17 )
            {
              v14 = (_QWORD *)*v14;
            }
            else
            {
              if ( v13 < v17 + 512 )
                break;
              v14 = (_QWORD *)v14[1];
            }
          }
          if ( !v14 )
          {
            v10 = v13 & 0xFFFFFFFFFFFFFE00uLL;
            goto LABEL_7;
          }
          v8 = v14;
        }
        if ( !*((_WORD *)v8 + (v13 & ((1LL << ((unsigned __int8)dword_140E2DB38 - 12)) - 1)) - v8[3] + 88) )
          goto LABEL_7;
      }
      v16 = a3;
      if ( v7 )
        v16 = v7;
      v7 = v16;
      if ( a2 == 17 )
      {
LABEL_8:
        v5 = a2;
        break;
      }
      MiInsertTbFlushEntry((__int64)v24, v13 << 12, 1LL, 0);
      if ( v26 == v25 )
      {
        MiUnlockIoPfnTree(0x11u, 5);
        MiUnlockPageTableInternal(a1, v9);
        MiUnlockWorkingSetShared(a1, a2);
        MiInvokeIoReleasePages(v24);
        MiLockWorkingSetShared(a1);
        MiLockNestedPageTable(a1, v9);
        MiLockIoPfnTree(5LL, v20);
        v7 = v16;
      }
LABEL_7:
      a3 += 8LL;
      if ( a3 > v23 )
        goto LABEL_8;
    }
  }
  MiUnlockIoPfnTree(0x11u, 5);
  if ( v26 )
  {
    MiUnlockPageTableInternal(a1, v9);
    MiUnlockWorkingSetShared(a1, v5);
    MiInvokeIoReleasePages(v24);
    MiLockWorkingSetShared(a1);
    MiLockNestedPageTable(a1, v9);
  }
  return v7;
}
