/*
 * XREFs of MiLockDriverPageRange @ 0x14065F370
 * Callers:
 *     MiLockPatchIatForDV @ 0x140670740 (MiLockPatchIatForDV.c)
 *     MmWriteSystemImageTracepoint @ 0x1406723E0 (MmWriteSystemImageTracepoint.c)
 *     MiLockAndMapEntireDriver @ 0x1407E0A98 (MiLockAndMapEntireDriver.c)
 *     MiLockHotPatchPages @ 0x1407E3904 (MiLockHotPatchPages.c)
 *     MiPrepareDriverForHotPatch @ 0x1407E5584 (MiPrepareDriverForHotPatch.c)
 *     MmReapplyBootPatchImports @ 0x140C45828 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     KeSetPagePrivilege @ 0x1402CE1B0 (KeSetPagePrivilege.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiReferenceDriverPage @ 0x1403FF148 (MiReferenceDriverPage.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiLockDriverPageRange(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5)
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
  __int64 v16; // r8
  __int64 v17; // r9
  volatile unsigned __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // edi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v31; // [rsp+30h] [rbp-F8h]
  unsigned __int64 BugCheckParameter1; // [rsp+38h] [rbp-F0h]
  int v33; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-E0h]
  __int64 v35; // [rsp+50h] [rbp-D8h]
  __int16 v36; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-C0h]
  __int64 v38; // [rsp+70h] [rbp-B8h]
  __int64 v39; // [rsp+78h] [rbp-B0h]
  __int64 v40; // [rsp+80h] [rbp-A8h]
  unsigned __int8 v41; // [rsp+130h] [rbp+8h]
  unsigned int v42; // [rsp+138h] [rbp+10h]

  v42 = a2;
  v5 = a2;
  memset_0(&v36, 0, 0x78uLL);
  v7 = *(_QWORD *)a1;
  v8 = 0;
  v34 = 0LL;
  BugCheckParameter1 = *(_QWORD *)(v7 + 48) + ((unsigned __int64)v5 << 12);
  v9 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = v9;
  if ( (*(_DWORD *)(a1 + 96) & 2) != 0 )
    v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = 0LL;
  v31 = 0LL;
  v12 = &qword_140E2D600;
  v35 = (a5 + 48) & -(__int64)(a5 != 0);
  v13 = 0;
  while ( *v12 != v7 )
  {
    ++v13;
    ++v12;
    if ( v13 )
      goto LABEL_8;
  }
  v11 = (_QWORD *)((char *)&unk_140E2D608 + 16 * v13);
  v31 = v11;
LABEL_8:
  v14 = *(_QWORD *)(a1 + 16);
LABEL_9:
  v15 = 0LL;
  v41 = MiLockWorkingSetShared(v14);
  while ( v5 <= a3 )
  {
    if ( !v15 )
      goto LABEL_15;
    if ( (v9 & 0xFFF) == 0 )
    {
      MiUnlockPageTable(v14, v15);
LABEL_15:
      v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(v14, v15, v16, v17);
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
    v18 = *(_QWORD *)v10;
    if ( (*(_QWORD *)v10 & 1) == 0 )
    {
      if ( v18 != MiMakeDemandZeroPte(16) )
      {
        MiUnlockPageTable(v14, v15);
        MiUnlockWorkingSetShared(v14, v41);
        v36 = 6;
        v37 = 0LL;
        v38 = 0LL;
        v39 = 0LL;
        v40 = 0LL;
        if ( (int)MmAccessFault(0LL, BugCheckParameter1, 0, (ULONG_PTR)&v36 + 1) >= 0 )
        {
          v11 = v31;
          goto LABEL_9;
        }
        MiLockWorkingSetShared(v14);
        MiLockNestedPageTable(v14, v15, v28, v29);
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
    v19 = (v18 >> 12) & 0xFFFFFFFFFFLL;
    if ( (*(_DWORD *)(a1 + 96) & 2) != 0 )
      v19 += (v9 >> 3) & 0x1FF;
    v20 = 48 * v19 - 0x220000000000LL;
    if ( *(__int64 *)(v20 + 40) < 0 )
    {
      if ( (*(_QWORD *)(v20 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v20 + 8) <= 0 )
      {
        MiUnlockPageTable(v14, v15);
        MiUnlockWorkingSetShared(v14, v41);
        v5 = v42;
        MiMakeDriverPagesPrivate(*(_QWORD *)a1, (volatile signed __int64 *)v10, v10 + 8LL * (a3 - v42), 8);
        MiLockWorkingSetShared(v14);
        MiLockNestedPageTable(v14, v15, v26, v27);
        goto LABEL_61;
      }
      v11 = v31;
      v23 = MiCopyOnWrite(BugCheckParameter1, (volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
      if ( v23 < 0 )
      {
        MiUnlockPageTable(v14, v15);
        MiUnlockWorkingSetShared(v14, v41);
        MiCopyOnWriteCheckConditions(v14, v23, 0LL);
        MiLockWorkingSetShared(v14);
        MiLockNestedPageTable(v14, v15, v24, v25);
      }
      v5 = v42;
    }
    else
    {
      if ( !_bittest64(*(const signed __int64 **)(a1 + 40), v42) )
      {
        v33 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v33);
          while ( *(__int64 *)(v20 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v19 - 0x220000000000LL);
        v16 = a4;
        if ( (a4 & 1) != 0 && ((*(_QWORD *)(v20 + 40) >> 60) & 7) != 3 )
        {
          KeSetPagePrivilege(v19, BugCheckParameter1, 0LL, 0x80u);
          *(_DWORD *)(a1 + 96) |= 1u;
          v16 = a4;
        }
        if ( v35 )
          *(_QWORD *)(v35 + 8LL * v42) = v19;
        if ( (v16 & 4) != 0 )
        {
          v21 = 0LL;
        }
        else
        {
          v21 = MiCaptureDirtyBitToPfn(48 * v19 - 0x220000000000LL);
          if ( v21 )
          {
            v22 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
            v34 = v22;
LABEL_41:
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v21 )
              MiReleasePageFileInfo(v22, v21, 1);
            v5 = v42;
            _bittestandset64(*(signed __int64 **)(a1 + 40), v42);
            goto LABEL_58;
          }
        }
        v22 = v34;
        goto LABEL_41;
      }
      v5 = v42;
LABEL_58:
      BugCheckParameter1 += 4096LL;
      ++v5;
      v9 += 8LL;
      v42 = v5;
      if ( (*(_DWORD *)(a1 + 96) & 2) == 0 || (v11 = v31, (v9 & 0xFFF) == 0) )
      {
        v10 += 8LL;
LABEL_61:
        v11 = v31;
      }
    }
  }
  if ( a5 )
    *(_WORD *)(a5 + 10) |= 2u;
LABEL_65:
  MiUnlockPageTable(v14, v15);
  MiUnlockWorkingSetShared(v14, v41);
  return v8;
}
