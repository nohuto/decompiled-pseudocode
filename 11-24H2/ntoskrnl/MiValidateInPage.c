/*
 * XREFs of MiValidateInPage @ 0x1404291F0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInPageSkipPage @ 0x140256790 (MiInPageSkipPage.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiCanPageMove @ 0x14033FB90 (MiCanPageMove.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 *     MiControlAreaHasHostRelocationsApplied @ 0x1404298FC (MiControlAreaHasHostRelocationsApplied.c)
 *     MiApplyDebuggerPatches @ 0x1404F4300 (MiApplyDebuggerPatches.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiGetSectionStrongImageReference @ 0x14093AE14 (MiGetSectionStrongImageReference.c)
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x14093B1EC (SeValidateImageData.c)
 *     MiRelocateImagePfn @ 0x14093B6F8 (MiRelocateImagePfn.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 *v3; // rdx
  int v4; // r12d
  __int64 v6; // r10
  unsigned __int64 v7; // r14
  __int64 *v8; // r13
  unsigned __int64 v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // r11d
  bool v14; // r9
  int v15; // r8d
  int v16; // ebx
  __int64 v17; // r8
  PVOID v18; // r12
  int v19; // r14d
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r14
  __int64 result; // rax
  __int64 *v26; // r15
  __int64 v27; // rdi
  __int16 v28; // ax
  int v29; // eax
  char v30; // dl
  int v31; // edi
  bool v32; // cf
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  unsigned __int64 v37; // rbx
  char BugCheckOnFailure; // [rsp+20h] [rbp-98h]
  _KPROCESS *Process; // [rsp+50h] [rbp-68h]
  __int64 v40; // [rsp+58h] [rbp-60h]
  unsigned __int64 v41; // [rsp+60h] [rbp-58h]
  char v42; // [rsp+68h] [rbp-50h]
  unsigned __int8 v43; // [rsp+C0h] [rbp+8h] BYREF
  __int64 i; // [rsp+C8h] [rbp+10h]
  unsigned int v45; // [rsp+D0h] [rbp+18h]
  unsigned int v46; // [rsp+D8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 256);
  v2 = a1 + 272;
  v3 = *(__int64 **)(a1 + 208);
  v4 = *(_DWORD *)(a1 + 184);
  v46 = 0;
  v6 = *v3;
  v40 = *v3;
  v7 = *(_QWORD *)(*v3 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v1 )
    v2 = v1;
  v8 = (__int64 *)(v2 + 48);
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = (((*(_DWORD *)(v2 + 44) + *(_DWORD *)(v2 + 32)) & 0xFFFLL) + (unsigned __int64)*(unsigned int *)(v2 + 40) + 4095) >> 12;
  v41 = v2 + 48 + 8LL * (unsigned int)v9;
  if ( v3 == (__int64 *)(v6 + 128) && (*(_DWORD *)(v7 + 56) & 0xFFF) != 0 )
  {
    v34 = v3[1] + 8 * (*((unsigned int *)v3 + 11) - 1LL);
    while ( (unsigned __int64)v8 < v2 + 48 + 8 * (unsigned __int64)(unsigned int)v9 )
    {
      _mm_lfence();
      if ( (*(_QWORD *)(48 * *v8 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL) == v34 )
      {
        v35 = *v8;
        v36 = *(_DWORD *)(v7 + 56) & 0xFFFLL;
        v43 = 0;
        v37 = MiMapPageInHyperSpaceWorker(v35, &v43, 0x80000000);
        memset_0((void *)(v36 + v37), 0, 4096 - v36);
        MiUnmapPageInHyperSpaceWorker(v37, v43, 0x80000000);
        v6 = v40;
        break;
      }
    }
  }
  v45 = 0;
  *(_QWORD *)(a1 + 96) += (unsigned int)(v4 - *(_DWORD *)(v2 + 44) - *(_DWORD *)(v2 + 40));
  v10 = v4 - *(_DWORD *)(v2 + 44) - *(_DWORD *)(v2 + 40);
  *(_DWORD *)(a1 + 188) += (v10 >> 12) + ((v10 & 0xFFF) != 0);
  v11 = *(_QWORD *)(v7 + 40);
  v12 = 48 * *v8 - 0x220000000000LL;
  v13 = (*(_DWORD *)(v12 + 16) >> 5) & 0x1F;
  v42 = v13;
  v14 = (*(_DWORD *)(v6 + 92) & 0xC0000) != 0;
  if ( ((v11 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL ? 2 : 0) != 0 && v14 )
  {
    v15 = ((*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL ? 2 : 0) | 1;
  }
  else
  {
    v15 = (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL ? 2 : 0;
    if ( _bittest64(&MiFlags, 0x11u) && (v13 & 2) != 0 )
      v45 = 3;
  }
  if ( *(_QWORD *)(v7 + 32) && (_bittest64(&MiFlags, 0x11u) || ((v13 & 2) == 0 || !v14) && MiCanPageMove(v12)) )
  {
    v15 |= 4u;
    if ( (v15 & 1) == 0 || (MiFlags & 0x2000) == 0 )
      v15 |= 8u;
  }
  v16 = v15 | 0x10;
  if ( (*(_BYTE *)(v6 + 96) & 1) == 0 )
    v16 = v15;
  LODWORD(i) = v13 & 2;
  if ( (v13 & 2) != 0 && _bittest64(&MiFlags, 0x11u) )
  {
    if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
    MiFlushEntireTbDueToAttributeChange();
    v6 = v40;
  }
  v17 = 0LL;
  v18 = 0LL;
  if ( (v16 & 2) == 0
    || (unsigned int)v9 <= 1
    || (*(_WORD *)(v2 + 10) & 0x4000) == 0
    || (unsigned int)MiControlAreaHasHostRelocationsApplied(v6)
    || ((v30 & 5) == 0
      ? (PVOID)(v18 = MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, v17, 0xC0000010), v17 = 0LL)
      : (v18 = *(PVOID *)(v2 + 24)),
        !v18) )
  {
    v19 = (int)Process;
LABEL_12:
    v20 = v17;
    for ( i = v17; ; i = v20 )
    {
      if ( (unsigned __int64)v8 >= v41 )
        return v46;
      v16 ^= ((unsigned __int8)v16 ^ (unsigned __int8)(4 * v16)) & 0x20;
      if ( !MiInPageSkipPage(48 * *v8 - 0x220000000000LL) )
        break;
LABEL_23:
      *(_QWORD *)(a1 + 96) += 4096LL;
      v20 += 8LL;
      v19 = (int)Process;
      ++v8;
      ++*(_DWORD *)(a1 + 188);
    }
    if ( v18 )
    {
      MiMarkPfnVerified(v22, v45);
      v23 = 0LL;
    }
    else
    {
      if ( (v16 & 2) == 0 )
        goto LABEL_17;
      v29 = MiValidateImagePfn(
              v40,
              *(_QWORD *)(a1 + 96),
              v19,
              *(_DWORD *)(a1 + 188),
              BugCheckOnFailure,
              v42,
              *v8,
              v23,
              1);
      v23 = 0LL;
      if ( v29 < 0 )
      {
        if ( v29 == -1073741670 )
          goto LABEL_24;
        v46 = -1073740748;
        if ( (v16 & 5) == 5 )
        {
          v21 = 0xFFFFF68000000000uLL;
          if ( (MiFlags & 0x2000) != 0 )
            v16 |= 0x20u;
          goto LABEL_17;
        }
      }
    }
    v21 = 0xFFFFF68000000000uLL;
LABEL_17:
    v24 = v23;
    if ( (v16 & 0x30) != 0 && (*(_BYTE *)(v2 + 10) & 1) != 0 )
    {
      v24 = *(_QWORD *)(v2 + 24) + (v20 >> 3 << 12);
      v26 = (__int64 *)(v21 + ((v24 >> 9) & 0x7FFFFFFFF8LL));
      if ( (*v26 & 0x42) == 0 )
      {
        v27 = *v26 | 0x842;
        if ( _bittest64(&MiFlags, 0x24u) && (*(_BYTE *)v26 & 0x20) == 0 && (unsigned __int64)v26 >= v21 + 0x4000000000LL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v26, *v26 | 0x842, 128LL);
        v28 = MiFlags;
        *v26 = v27;
        if ( (v28 & 0x100) == 0 && (v28 & 0x200) == 0 )
          MiFlushSingleTbEntry(v24, 2, 32);
      }
      v20 = i;
    }
    if ( (v16 & 0x20) != 0 )
    {
      BugCheckOnFailure = 0;
      if ( (int)MiRelocateImagePfn(v40, v24, *(unsigned int *)(a1 + 188), *v8) < 0 )
      {
LABEL_24:
        *(_DWORD *)(a1 + 80) = -1073741670;
        return v46;
      }
    }
    if ( (v16 & 0x10) != 0 )
    {
      BugCheckOnFailure = 0;
      MiApplyDebuggerPatches(v40, v24, *(unsigned int *)(a1 + 188), *v8);
    }
    goto LABEL_23;
  }
  v31 = v11 & 0xFFFFFFF8;
  if ( (v16 & 1) == 0
    || *(_QWORD *)(v7 + 64) != v17
    || (result = MiGetSectionStrongImageReference(v7), (int)result >= 0) )
  {
    v32 = (_DWORD)i != 0;
    LODWORD(i) = -(int)i;
    v19 = (int)Process;
    v33 = SeValidateImageData(v31, (_DWORD)v18, (_DWORD)v9 << 12, *(_QWORD *)(a1 + 96), v32 ? 2 : 0, (__int64)Process);
    v17 = 0LL;
    if ( v33 < 0 )
      v18 = 0LL;
    goto LABEL_12;
  }
  return result;
}
