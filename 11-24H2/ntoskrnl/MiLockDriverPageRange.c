/*
 * XREFs of MiLockDriverPageRange @ 0x14066C080
 * Callers:
 *     MiLockPatchIatForDV @ 0x14067D0E0 (MiLockPatchIatForDV.c)
 *     MmWriteSystemImageTracepoint @ 0x14067EDF0 (MmWriteSystemImageTracepoint.c)
 *     MiLockAndMapEntireDriver @ 0x1407F0F08 (MiLockAndMapEntireDriver.c)
 *     MiLockHotPatchPages @ 0x1407F3D80 (MiLockHotPatchPages.c)
 *     MiPrepareDriverForHotPatch @ 0x1407F5B04 (MiPrepareDriverForHotPatch.c)
 *     MmReapplyBootPatchImports @ 0x140C58C98 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiReferenceDriverPage @ 0x140205D18 (MiReferenceDriverPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     KeSetPagePrivilege @ 0x140492188 (KeSetPagePrivilege.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiLockDriverPageRange(__int64 a1, unsigned int a2, unsigned int a3, char a4, __int64 a5)
{
  unsigned int v5; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r14
  _QWORD *v14; // rsi
  __int64 *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rbp
  unsigned __int64 v18; // r15
  volatile unsigned __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // r9
  char v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v34; // [rsp+30h] [rbp-F8h]
  unsigned __int64 BugCheckParameter1; // [rsp+38h] [rbp-F0h]
  unsigned int v36; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-E0h]
  __int64 v38; // [rsp+50h] [rbp-D8h]
  __int16 v39; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-C0h]
  __int64 v41; // [rsp+70h] [rbp-B8h]
  __int64 v42; // [rsp+78h] [rbp-B0h]
  __int64 v43; // [rsp+80h] [rbp-A8h]
  unsigned __int8 v44; // [rsp+130h] [rbp+8h]
  unsigned int v45; // [rsp+138h] [rbp+10h]

  v45 = a2;
  v5 = a2;
  memset_0(&v39, 0, 0x78uLL);
  v9 = *(_QWORD *)a1;
  v10 = 0;
  v11 = 0x7FFFFFFFF8LL;
  v37 = 0LL;
  BugCheckParameter1 = *(_QWORD *)(v9 + 48) + ((unsigned __int64)v5 << 12);
  v12 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = v12;
  if ( (*(_DWORD *)(a1 + 96) & 2) != 0 )
    v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = 0LL;
  v34 = 0LL;
  v15 = &qword_140E2D980;
  v38 = (a5 + 48) & -(__int64)(a5 != 0);
  v16 = 0;
  while ( *v15 != v9 )
  {
    ++v16;
    ++v15;
    if ( v16 )
      goto LABEL_8;
  }
  v14 = (_QWORD *)((char *)&unk_140E2D988 + 16 * v16);
  v34 = v14;
LABEL_8:
  v17 = *(_QWORD *)(a1 + 16);
LABEL_9:
  v18 = 0LL;
  v44 = MiLockWorkingSetShared(v17, v11, v7, v8);
  while ( v5 <= a3 )
  {
    if ( !v18 )
      goto LABEL_15;
    if ( (v12 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v17, v18);
LABEL_15:
      v18 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(v17, v18);
    }
    if ( v14
      && (unsigned __int64)v5 < *v14
      && _bittest64((const signed __int64 *)(v14[1] + 8 * ((unsigned __int64)v5 >> 6)), v5 & 0x3F) )
    {
      goto LABEL_52;
    }
    if ( *(_QWORD *)(a1 + 56)
      && (unsigned __int64)v5 < *(_QWORD *)(a1 + 48)
      && _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 56) + 8 * ((unsigned __int64)v5 >> 6)), v5 & 0x3F) )
    {
      goto LABEL_58;
    }
    v19 = *(_QWORD *)v13;
    if ( (*(_QWORD *)v13 & 1) == 0 )
    {
      if ( v19 != MiMakeDemandZeroPte(16) )
      {
        MiUnlockPageTableInternal(v17, v18);
        MiUnlockWorkingSetShared(v17, v44);
        v39 = 6;
        v40 = 0LL;
        v41 = 0LL;
        v42 = 0LL;
        v43 = 0LL;
        if ( (int)MmAccessFault(0LL, BugCheckParameter1, 0, (ULONG_PTR)&v39 + 1) >= 0 )
        {
          v14 = v34;
          goto LABEL_9;
        }
        MiLockWorkingSetShared(v17, v11, v7, v8);
        MiLockNestedPageTable(v17, v18);
      }
LABEL_52:
      if ( (a4 & 2) == 0
        && (!*(_QWORD *)(a1 + 88)
         || (unsigned __int64)v5 >= *(_QWORD *)(a1 + 80)
         || !_bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)v5 >> 6)), v5 & 0x3F)) )
      {
        v10 = -1073741701;
        goto LABEL_65;
      }
      goto LABEL_58;
    }
    v20 = (v19 >> 12) & 0xFFFFFFFFFFLL;
    if ( (*(_DWORD *)(a1 + 96) & 2) != 0 )
      v20 += (v12 >> 3) & 0x1FF;
    v21 = 48 * v20 - 0x220000000000LL;
    if ( *(__int64 *)(v21 + 40) < 0 )
    {
      if ( (*(_QWORD *)(v21 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v21 + 8) <= 0 )
      {
        MiUnlockPageTableInternal(v17, v18);
        MiUnlockWorkingSetShared(v17, v44);
        v5 = v45;
        MiMakeDriverPagesPrivate(*(_QWORD *)a1, v13, v13 + 8LL * (a3 - v45), 8LL);
        MiLockWorkingSetShared(v17, v30, v31, v32);
        MiLockNestedPageTable(v17, v18);
        goto LABEL_61;
      }
      v14 = v34;
      v26 = MiCopyOnWrite(BugCheckParameter1, (volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
      if ( v26 < 0 )
      {
        MiUnlockPageTableInternal(v17, v18);
        MiUnlockWorkingSetShared(v17, v44);
        MiCopyOnWriteCheckConditions(v17, v26, 0LL);
        MiLockWorkingSetShared(v17, v27, v28, v29);
        MiLockNestedPageTable(v17, v18);
      }
      v5 = v45;
    }
    else
    {
      if ( !_bittest64(*(const signed __int64 **)(a1 + 40), v45) )
      {
        v36 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v36);
          while ( *(__int64 *)(v21 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v20 - 0x220000000000LL);
        v23 = a4;
        if ( (a4 & 1) != 0 && ((*(_QWORD *)(v21 + 40) >> 60) & 7) != 3 )
        {
          KeSetPagePrivilege(v20, BugCheckParameter1, 0LL, 0x80u);
          *(_DWORD *)(a1 + 96) |= 1u;
          v23 = a4;
        }
        if ( v38 )
          *(_QWORD *)(v38 + 8LL * v45) = v20;
        if ( (v23 & 4) != 0 )
        {
          v24 = 0LL;
        }
        else
        {
          v24 = MiCaptureDirtyBitToPfn(48 * v20 - 0x220000000000LL);
          if ( v24 )
          {
            v25 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL));
            v37 = v25;
LABEL_41:
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v24 )
              MiReleasePageFileInfo(v25, v24, 1LL, v22);
            v5 = v45;
            _bittestandset64(*(signed __int64 **)(a1 + 40), v45);
            goto LABEL_58;
          }
        }
        v25 = v37;
        goto LABEL_41;
      }
      v5 = v45;
LABEL_58:
      BugCheckParameter1 += 4096LL;
      ++v5;
      v12 += 8LL;
      v45 = v5;
      if ( (*(_DWORD *)(a1 + 96) & 2) == 0 || (v14 = v34, (v12 & 0xFFF) == 0) )
      {
        v13 += 8LL;
LABEL_61:
        v14 = v34;
      }
    }
  }
  if ( a5 )
    *(_WORD *)(a5 + 10) |= 2u;
LABEL_65:
  MiUnlockPageTableInternal(v17, v18);
  MiUnlockWorkingSetShared(v17, v44);
  return v10;
}
