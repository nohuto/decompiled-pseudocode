/*
 * XREFs of MiLockDriverPageRange @ 0x14066AEB0
 * Callers:
 *     MiLockPatchIatForDV @ 0x14067BF00 (MiLockPatchIatForDV.c)
 *     MmWriteSystemImageTracepoint @ 0x14067DBF0 (MmWriteSystemImageTracepoint.c)
 *     MiLockAndMapEntireDriver @ 0x1407F0938 (MiLockAndMapEntireDriver.c)
 *     MiLockHotPatchPages @ 0x1407F378C (MiLockHotPatchPages.c)
 *     MiPrepareDriverForHotPatch @ 0x1407F5414 (MiPrepareDriverForHotPatch.c)
 *     MmReapplyBootPatchImports @ 0x140C56B08 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiReferenceDriverPage @ 0x14023DF88 (MiReferenceDriverPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KeSetPagePrivilege @ 0x14036C260 (KeSetPagePrivilege.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiLockDriverPageRange(__int64 a1, unsigned int a2, unsigned int a3, char a4, __int64 a5)
{
  unsigned int v5; // edi
  __int64 v7; // r10
  unsigned int v8; // ebx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r14
  _QWORD *v11; // rsi
  __int64 *v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rbp
  unsigned __int64 v15; // r15
  volatile unsigned __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rdi
  char v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // edi
  _QWORD *v24; // [rsp+30h] [rbp-F8h]
  unsigned __int64 BugCheckParameter1; // [rsp+38h] [rbp-F0h]
  unsigned int v26; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-E0h]
  __int64 v28; // [rsp+50h] [rbp-D8h]
  __int16 v29; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-C0h]
  __int64 v31; // [rsp+70h] [rbp-B8h]
  __int64 v32; // [rsp+78h] [rbp-B0h]
  __int64 v33; // [rsp+80h] [rbp-A8h]
  unsigned __int8 v34; // [rsp+130h] [rbp+8h]
  unsigned int v35; // [rsp+138h] [rbp+10h]

  v35 = a2;
  v5 = a2;
  memset_0(&v29, 0, 0x78uLL);
  v7 = *(_QWORD *)a1;
  v8 = 0;
  v27 = 0LL;
  BugCheckParameter1 = *(_QWORD *)(v7 + 48) + ((unsigned __int64)v5 << 12);
  v9 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = v9;
  if ( (*(_DWORD *)(a1 + 96) & 2) != 0 )
    v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = 0LL;
  v24 = 0LL;
  v12 = &qword_140E2D840;
  v28 = (a5 + 48) & -(__int64)(a5 != 0);
  v13 = 0;
  while ( *v12 != v7 )
  {
    ++v13;
    ++v12;
    if ( v13 )
      goto LABEL_8;
  }
  v11 = (_QWORD *)((char *)&unk_140E2D848 + 16 * v13);
  v24 = v11;
LABEL_8:
  v14 = *(_QWORD *)(a1 + 16);
LABEL_9:
  v15 = 0LL;
  v34 = MiLockWorkingSetShared(v14);
  while ( v5 <= a3 )
  {
    if ( !v15 )
      goto LABEL_15;
    if ( (v9 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v14, v15);
LABEL_15:
      v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(v14, v15);
    }
    if ( v11
      && (unsigned __int64)v5 < *v11
      && _bittest64((const signed __int64 *)(v11[1] + 8 * ((unsigned __int64)v5 >> 6)), v5 & 0x3F) )
    {
      goto LABEL_52;
    }
    if ( *(_QWORD *)(a1 + 56)
      && (unsigned __int64)v5 < *(_QWORD *)(a1 + 48)
      && _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 56) + 8 * ((unsigned __int64)v5 >> 6)), v5 & 0x3F) )
    {
      goto LABEL_58;
    }
    v16 = *(_QWORD *)v10;
    if ( (*(_QWORD *)v10 & 1) == 0 )
    {
      if ( v16 != MiMakeDemandZeroPte(16) )
      {
        MiUnlockPageTableInternal(v14, v15);
        MiUnlockWorkingSetShared(v14, v34);
        v29 = 6;
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0LL;
        v33 = 0LL;
        if ( (int)MmAccessFault(0LL, BugCheckParameter1, 0, (ULONG_PTR)&v29 + 1) >= 0 )
        {
          v11 = v24;
          goto LABEL_9;
        }
        MiLockWorkingSetShared(v14);
        MiLockNestedPageTable(v14, v15);
      }
LABEL_52:
      if ( (a4 & 2) == 0
        && (!*(_QWORD *)(a1 + 88)
         || (unsigned __int64)v5 >= *(_QWORD *)(a1 + 80)
         || !_bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)v5 >> 6)), v5 & 0x3F)) )
      {
        v8 = -1073741701;
        goto LABEL_65;
      }
      goto LABEL_58;
    }
    v17 = (v16 >> 12) & 0xFFFFFFFFFFLL;
    if ( (*(_DWORD *)(a1 + 96) & 2) != 0 )
      v17 += (v9 >> 3) & 0x1FF;
    v18 = 48 * v17 - 0x220000000000LL;
    if ( *(__int64 *)(v18 + 40) < 0 )
    {
      if ( (*(_QWORD *)(v18 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v18 + 8) <= 0 )
      {
        MiUnlockPageTableInternal(v14, v15);
        MiUnlockWorkingSetShared(v14, v34);
        v5 = v35;
        MiMakeDriverPagesPrivate(*(_QWORD *)a1, (volatile signed __int64 *)v10, v10 + 8LL * (a3 - v35), 8);
        MiLockWorkingSetShared(v14);
        MiLockNestedPageTable(v14, v15);
        goto LABEL_61;
      }
      v11 = v24;
      v22 = MiCopyOnWrite(BugCheckParameter1, (volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
      if ( v22 < 0 )
      {
        MiUnlockPageTableInternal(v14, v15);
        MiUnlockWorkingSetShared(v14, v34);
        MiCopyOnWriteCheckConditions(v14, v22, 0LL);
        MiLockWorkingSetShared(v14);
        MiLockNestedPageTable(v14, v15);
      }
      v5 = v35;
    }
    else
    {
      if ( !_bittest64(*(const signed __int64 **)(a1 + 40), v35) )
      {
        v26 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v26);
          while ( *(__int64 *)(v18 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v17 - 0x220000000000LL);
        v19 = a4;
        if ( (a4 & 1) != 0 && ((*(_QWORD *)(v18 + 40) >> 60) & 7) != 3 )
        {
          KeSetPagePrivilege(v17, BugCheckParameter1, 0LL, 0x80u);
          *(_DWORD *)(a1 + 96) |= 1u;
          v19 = a4;
        }
        if ( v28 )
          *(_QWORD *)(v28 + 8LL * v35) = v17;
        if ( (v19 & 4) != 0 )
        {
          v20 = 0LL;
        }
        else
        {
          v20 = MiCaptureDirtyBitToPfn(48 * v17 - 0x220000000000LL);
          if ( v20 )
          {
            v21 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v18 + 40) >> 43) & 0x3FFLL));
            v27 = v21;
LABEL_41:
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v20 )
              MiReleasePageFileInfo(v21, v20, 1LL);
            v5 = v35;
            _bittestandset64(*(signed __int64 **)(a1 + 40), v35);
            goto LABEL_58;
          }
        }
        v21 = v27;
        goto LABEL_41;
      }
      v5 = v35;
LABEL_58:
      BugCheckParameter1 += 4096LL;
      ++v5;
      v9 += 8LL;
      v35 = v5;
      if ( (*(_DWORD *)(a1 + 96) & 2) == 0 || (v11 = v24, (v9 & 0xFFF) == 0) )
      {
        v10 += 8LL;
LABEL_61:
        v11 = v24;
      }
    }
  }
  if ( a5 )
    *(_WORD *)(a5 + 10) |= 2u;
LABEL_65:
  MiUnlockPageTableInternal(v14, v15);
  MiUnlockWorkingSetShared(v14, v34);
  return v8;
}
