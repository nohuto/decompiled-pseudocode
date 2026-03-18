/*
 * XREFs of MiFastTrimWorkingSet @ 0x1403CF450
 * Callers:
 *     MiTrimWorkingSet @ 0x1403CF15C (MiTrimWorkingSet.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTrimPte @ 0x140242BA0 (MiTrimPte.c)
 *     MiGetSystemCacheReverseMap @ 0x1402D4740 (MiGetSystemCacheReverseMap.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiRebuildPageTableAges @ 0x1402E3D14 (MiRebuildPageTableAges.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiLockActivePageTableInList @ 0x1403CF89C (MiLockActivePageTableInList.c)
 *     MiTrimWorkingSetTail @ 0x1403CF9A0 (MiTrimWorkingSetTail.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 */

char __fastcall MiFastTrimWorkingSet(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  char v4; // bp
  __int64 active; // rax
  unsigned __int64 v6; // r13
  int v7; // esi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 i; // rcx
  int v12; // r15d
  unsigned int v13; // ebp
  unsigned int v14; // edi
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  int v18; // esi
  __int64 v19; // rcx
  bool v20; // zf
  unsigned __int8 v21; // dl
  unsigned __int64 v22; // rbx
  __int64 v24; // [rsp+20h] [rbp-68h]
  unsigned __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  unsigned __int64 v27; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+90h] [rbp+8h]
  char v29; // [rsp+A0h] [rbp+18h]
  __int64 v30; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  v30 = v2;
  v4 = *(_DWORD *)(v2 + 184) & 0xF;
  v24 = *(_QWORD *)(a1 + 184);
  v29 = v4;
  LODWORD(active) = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 24LL * a2 + 68);
  do
  {
    while ( 1 )
    {
      if ( !(_DWORD)active )
        return active;
      v28 = active - 1;
      active = MiLockActivePageTableInList(v2);
      v25 = active;
      v6 = active;
      if ( !active )
        return active;
      v7 = 0;
      v8 = 0xFFFFF68000000000uLL;
      v9 = active << 25 >> 16;
      v10 = (__int64)(v9 << 25) >> 16;
      v27 = v10;
      for ( i = v10; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
      {
        if ( i > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        ++v7;
      }
      if ( v7 || v4 != 1 || MiGetSystemCacheReverseMap(v10) )
        break;
      MiUnlockPageTableInternal(v2, v6);
      LODWORD(active) = v28;
    }
    *(_QWORD *)(a1 + 56) = v6;
    v12 = 0;
    v13 = 256;
    if ( v6 != 0xFFFFF6FB7DBEDF68uLL )
      v13 = 512;
    v14 = 0;
    v26 = *(_QWORD *)(v24 + 16);
    while ( 1 )
    {
      if ( v7 == 3 )
      {
        LOBYTE(v15) = MI_READ_PTE_LOCK_FREE(v9);
        v8 = 0xFFFFF68000000000uLL;
      }
      else
      {
        v15 = *(_QWORD *)v9;
      }
      if ( (v15 & 1) == 0 )
        goto LABEL_12;
      if ( v7 )
        break;
      if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v8 + ((((__int64)(v9 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9)) >> 56) & 0xF) < 8 )
        goto LABEL_26;
LABEL_12:
      ++v14;
      v8 = 0xFFFFF68000000000uLL;
      v9 += 8LL;
      if ( v14 >= v13 )
        goto LABEL_13;
    }
    if ( (v15 & 0x80u) != 0LL )
      goto LABEL_12;
LABEL_26:
    v12 = MiTrimPte(a1, v9, v7);
    if ( !v12 )
      goto LABEL_12;
LABEL_13:
    if ( v25 == 0xFFFFF6FB7DBEDF68uLL && !v12 )
    {
      v22 = 8 * (((unsigned __int64)qword_140E2F280 >> 39) & 0x1FF) - 0x90482413000LL;
      if ( (MI_READ_PTE_LOCK_FREE(v22) & 1) != 0 )
        MiTrimPte(a1, v22, v7);
    }
    v16 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v25) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    v17 = (*v16 >> 55) & 7LL;
    v18 = MiTrimWorkingSetTail(a1);
    v19 = *(_QWORD *)(v24 + 16);
    if ( v19 == *(_QWORD *)(v24 + 8) )
    {
      v12 = 4;
      goto LABEL_16;
    }
    if ( v26 != v19
      || v12 == 4
      || (*(_DWORD *)v24 & 0x600) != 0
      || *(_QWORD *)(v24 + 80)
      || (*(_DWORD *)(a1 + 4) & 1) != 0 )
    {
LABEL_16:
      v2 = v30;
    }
    else
    {
      v20 = v17 == 0;
      v2 = v30;
      if ( !v20 )
      {
        *v16 &= 0xFF801FFFFFFFFFFFuLL;
        MiRebuildPageTableAges(v30, v27, 1u);
      }
    }
    if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
    {
      if ( (*(_DWORD *)a1 & 4) != 0 )
        LOBYTE(active) = MiLockWorkingSetShared(v2);
      else
        LOBYTE(active) = MiLockWorkingSetExclusive(v2);
      *(_DWORD *)(a1 + 4) &= ~1u;
    }
    else
    {
      LOBYTE(active) = MiUnlockPageTableInternal(v2, v25);
      if ( (*(_DWORD *)a1 & 2) != 0 )
      {
        LODWORD(active) = MiWorkingSetIsContended(v2, (*(_DWORD *)a1 & 4) == 0);
        if ( (_DWORD)active || *(_BYTE *)(a1 + 9) < 2u && (LODWORD(active) = KeShouldYieldProcessor(), (_DWORD)active) )
        {
          v21 = *(_BYTE *)(a1 + 9);
          if ( (*(_DWORD *)a1 & 4) != 0 )
          {
            MiUnlockWorkingSetShared(v2, v21);
            LOBYTE(active) = MiLockWorkingSetShared(v2);
          }
          else
          {
            MiUnlockWorkingSetExclusive(v2, v21);
            LOBYTE(active) = MiLockWorkingSetExclusive(v2);
          }
        }
      }
    }
    if ( v12 )
      break;
    LODWORD(active) = v28;
    v4 = v29;
  }
  while ( !v18 );
  return active;
}
