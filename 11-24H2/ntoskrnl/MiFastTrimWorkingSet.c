/*
 * XREFs of MiFastTrimWorkingSet @ 0x140390500
 * Callers:
 *     MiTrimWorkingSet @ 0x140390208 (MiTrimWorkingSet.c)
 * Callees:
 *     MiTrimPte @ 0x1402130B0 (MiTrimPte.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiGetSystemCacheReverseMap @ 0x1403559C0 (MiGetSystemCacheReverseMap.c)
 *     MiLockActivePageTableInList @ 0x14039094C (MiLockActivePageTableInList.c)
 *     MiTrimWorkingSetTail @ 0x140390A50 (MiTrimWorkingSetTail.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiRebuildPageTableAges @ 0x140392C6C (MiRebuildPageTableAges.c)
 */

char __fastcall MiFastTrimWorkingSet(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  char v4; // bp
  __int64 active; // rax
  unsigned __int64 v6; // r13
  unsigned int v7; // esi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 i; // rcx
  int v12; // r15d
  unsigned int v13; // ebp
  unsigned int v14; // edi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // esi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  bool v23; // zf
  unsigned __int8 v24; // dl
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 *v28; // rbx
  __int64 v30; // [rsp+20h] [rbp-68h]
  unsigned __int64 v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+30h] [rbp-58h]
  unsigned __int64 v33; // [rsp+38h] [rbp-50h]
  int v34; // [rsp+90h] [rbp+8h]
  char v35; // [rsp+A0h] [rbp+18h]
  __int64 v36; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  v36 = v2;
  v4 = *(_DWORD *)(v2 + 184) & 0xF;
  v30 = *(_QWORD *)(a1 + 184);
  v35 = v4;
  LODWORD(active) = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 24LL * a2 + 68);
  do
  {
    while ( 1 )
    {
      if ( !(_DWORD)active )
        return active;
      v34 = active - 1;
      active = MiLockActivePageTableInList(v2);
      v31 = active;
      v6 = active;
      if ( !active )
        return active;
      v7 = 0;
      v8 = 0xFFFFF68000000000uLL;
      v9 = active << 25 >> 16;
      v10 = (__int64)(v9 << 25) >> 16;
      v33 = v10;
      for ( i = v10; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
      {
        if ( i > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        ++v7;
      }
      if ( v7 || v4 != 1 || MiGetSystemCacheReverseMap(v10) )
        break;
      MiUnlockPageTableInternal(v2, v6);
      LODWORD(active) = v34;
    }
    *(_QWORD *)(a1 + 56) = v6;
    v12 = 0;
    v13 = 256;
    if ( v6 != 0xFFFFF6FB7DBEDF68uLL )
      v13 = 512;
    v14 = 0;
    v32 = *(_QWORD *)(v30 + 16);
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
    v12 = MiTrimPte(a1, (unsigned __int64 *)v9, v7);
    if ( !v12 )
      goto LABEL_12;
LABEL_13:
    if ( v31 == 0xFFFFF6FB7DBEDF68uLL && !v12 )
    {
      v28 = (unsigned __int64 *)(8 * (((unsigned __int64)qword_140E2F3C0 >> 39) & 0x1FF) - 0x90482413000LL);
      if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v28) & 1) != 0 )
        MiTrimPte(a1, v28, v7);
    }
    v16 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v31) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    v17 = (*v16 >> 55) & 7LL;
    v19 = MiTrimWorkingSetTail(a1);
    v22 = *(_QWORD *)(v30 + 16);
    if ( v22 == *(_QWORD *)(v30 + 8) )
    {
      v12 = 4;
      goto LABEL_16;
    }
    if ( v32 != v22
      || v12 == 4
      || (*(_DWORD *)v30 & 0x600) != 0
      || *(_QWORD *)(v30 + 80)
      || (*(_DWORD *)(a1 + 4) & 1) != 0 )
    {
LABEL_16:
      v2 = v36;
    }
    else
    {
      v23 = v17 == 0;
      v2 = v36;
      if ( !v23 )
      {
        *v16 &= 0xFF801FFFFFFFFFFFuLL;
        MiRebuildPageTableAges(v36, v33, 1LL);
      }
    }
    if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
    {
      if ( (*(_DWORD *)a1 & 4) != 0 )
        LOBYTE(active) = MiLockWorkingSetShared(v2, v18, v20, v21);
      else
        LOBYTE(active) = MiLockWorkingSetExclusive(v2);
      *(_DWORD *)(a1 + 4) &= ~1u;
    }
    else
    {
      LOBYTE(active) = MiUnlockPageTableInternal(v2, v31);
      if ( (*(_DWORD *)a1 & 2) != 0 )
      {
        LODWORD(active) = MiWorkingSetIsContended(v2, (*(_DWORD *)a1 & 4) == 0);
        if ( (_DWORD)active || *(_BYTE *)(a1 + 9) < 2u && (LODWORD(active) = KeShouldYieldProcessor(), (_DWORD)active) )
        {
          v24 = *(_BYTE *)(a1 + 9);
          if ( (*(_DWORD *)a1 & 4) != 0 )
          {
            MiUnlockWorkingSetShared(v2, v24);
            LOBYTE(active) = MiLockWorkingSetShared(v2, v25, v26, v27);
          }
          else
          {
            MiUnlockWorkingSetExclusive(v2, v24);
            LOBYTE(active) = MiLockWorkingSetExclusive(v2);
          }
        }
      }
    }
    if ( v12 )
      break;
    LODWORD(active) = v34;
    v4 = v35;
  }
  while ( !v19 );
  return active;
}
