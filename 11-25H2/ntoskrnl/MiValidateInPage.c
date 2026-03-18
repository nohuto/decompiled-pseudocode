/*
 * XREFs of MiValidateInPage @ 0x1403F3C40
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiCanPageMove @ 0x14022A690 (MiCanPageMove.c)
 *     MiInPageSkipPage @ 0x14023C4E0 (MiInPageSkipPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026F550 (MiFlushEntireTbDueToAttributeChange.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     MiControlAreaHasHostRelocationsApplied @ 0x1403F435C (MiControlAreaHasHostRelocationsApplied.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiApplyDebuggerPatches @ 0x1404F41FC (MiApplyDebuggerPatches.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiRelocateImagePfn @ 0x140945ED0 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x140946EC0 (SeValidateImageData.c)
 *     MiGetSectionStrongImageReference @ 0x1409470C8 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rdx
  int v4; // r12d
  ULONG_PTR v6; // r9
  unsigned __int64 v7; // r14
  __int64 *v8; // r13
  unsigned __int64 v9; // r15
  unsigned int v10; // r12d
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // r10
  int v14; // r12d
  int v15; // r11d
  int v16; // r8d
  int v17; // ebx
  __int64 v18; // r8
  PVOID v19; // r12
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r14
  __int64 *v25; // r15
  __int64 v26; // rdi
  __int16 v27; // ax
  __int64 result; // rax
  int v29; // eax
  char v30; // dl
  int v31; // edi
  bool v32; // cf
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  unsigned __int64 v37; // rbx
  __int64 v38; // rdx
  char BugCheckOnFailure; // [rsp+20h] [rbp-98h]
  _KPROCESS *Process; // [rsp+50h] [rbp-68h]
  ULONG_PTR v41; // [rsp+58h] [rbp-60h]
  unsigned __int64 v42; // [rsp+60h] [rbp-58h]
  char v43; // [rsp+68h] [rbp-50h]
  unsigned __int8 v44; // [rsp+C0h] [rbp+8h] BYREF
  __int64 i; // [rsp+C8h] [rbp+10h]
  unsigned int v46; // [rsp+D0h] [rbp+18h]
  unsigned int v47; // [rsp+D8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 256);
  v2 = a1 + 272;
  v3 = *(_QWORD *)(a1 + 208);
  v4 = *(_DWORD *)(a1 + 184);
  v47 = 0;
  v6 = *(_QWORD *)v3;
  v41 = *(_QWORD *)v3;
  v7 = *(_QWORD *)(*(_QWORD *)v3 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v1 )
    v2 = v1;
  v8 = (__int64 *)(v2 + 48);
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = (((*(_DWORD *)(v2 + 44) + *(_DWORD *)(v2 + 32)) & 0xFFFLL) + (unsigned __int64)*(unsigned int *)(v2 + 40) + 4095) >> 12;
  v42 = v2 + 48 + 8LL * (unsigned int)v9;
  if ( v3 == v6 + 128 && (*(_DWORD *)(v7 + 56) & 0xFFF) != 0 )
  {
    v34 = *(_QWORD *)(v3 + 8) + 8 * (*(unsigned int *)(v3 + 44) - 1LL);
    while ( (unsigned __int64)v8 < v2 + 48 + 8 * (unsigned __int64)(unsigned int)v9 )
    {
      _mm_lfence();
      if ( (*(_QWORD *)(48 * *v8 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL) == v34 )
      {
        v35 = *v8;
        v36 = *(_DWORD *)(v7 + 56) & 0xFFFLL;
        v44 = 0;
        v37 = MiMapPageInHyperSpaceWorker(v35, &v44, 0x80000000);
        memset_0((void *)(v36 + v37), 0, 4096 - v36);
        LOBYTE(v38) = v44;
        MiUnmapPageInHyperSpaceWorker(v37, v38, 0x80000000LL);
        v6 = v41;
        break;
      }
    }
  }
  v46 = 0;
  *(_QWORD *)(a1 + 96) += (unsigned int)(v4 - *(_DWORD *)(v2 + 44) - *(_DWORD *)(v2 + 40));
  v10 = v4 - *(_DWORD *)(v2 + 44) - *(_DWORD *)(v2 + 40);
  *(_DWORD *)(a1 + 188) += (v10 >> 12) + ((v10 & 0xFFF) != 0);
  v11 = *(_QWORD *)(v7 + 40);
  v12 = v11 >> 3;
  v13 = 48 * *v8 - 0x220000000000LL;
  v14 = (*(_DWORD *)(v13 + 16) >> 5) & 0x1F;
  v43 = v14;
  v15 = *(_DWORD *)(v6 + 92) & 0xC0000;
  if ( v15 && v12 > 0xFFFFFFFFFFFFFFFLL )
  {
    v16 = (v12 > 0xFFFFFFFFFFFFFFFLL ? 2 : 0) | 1;
  }
  else
  {
    v16 = v12 > 0xFFFFFFFFFFFFFFFLL ? 2 : 0;
    if ( (MiFlags & 0x20000) != 0 && (v14 & 2) != 0 )
      v46 = 3;
  }
  if ( *(_QWORD *)(v7 + 32) && ((MiFlags & 0x20000) != 0 || (v15 == 0 || (v14 & 2) == 0) && MiCanPageMove(v13)) )
  {
    v16 |= 4u;
    if ( (v16 & 1) == 0 || (MiFlags & 0x2000) == 0 )
      v16 |= 8u;
  }
  v17 = v16 | 0x10;
  if ( (*(_BYTE *)(v6 + 96) & 1) == 0 )
    v17 = v16;
  LODWORD(i) = v14 & 2;
  if ( (v14 & 2) != 0 && (MiFlags & 0x20000) != 0 )
  {
    if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
    MiFlushEntireTbDueToAttributeChange();
    v6 = v41;
  }
  v18 = 0LL;
  v19 = 0LL;
  if ( (v17 & 2) == 0
    || (unsigned int)v9 <= 1
    || (*(_WORD *)(v2 + 10) & 0x4000) == 0
    || (unsigned int)MiControlAreaHasHostRelocationsApplied(v6) )
  {
    goto LABEL_11;
  }
  if ( (v30 & 5) != 0 )
  {
    v19 = *(PVOID *)(v2 + 24);
  }
  else
  {
    v19 = MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, v18, 0xC0000010);
    v18 = 0LL;
  }
  if ( !v19 )
    goto LABEL_11;
  v31 = v11 & 0xFFFFFFF8;
  if ( (v17 & 1) == 0
    || *(_QWORD *)(v7 + 64) != v18
    || (result = MiGetSectionStrongImageReference(v7), (int)result >= 0) )
  {
    v32 = (_DWORD)i != 0;
    LODWORD(i) = -(int)i;
    v33 = SeValidateImageData(v31, (_DWORD)v19, (_DWORD)v9 << 12, *(_QWORD *)(a1 + 96), v32 ? 2 : 0, (__int64)Process);
    v18 = 0LL;
    if ( v33 < 0 )
      v19 = 0LL;
LABEL_11:
    v20 = v18;
    for ( i = v18; ; i = v20 )
    {
      if ( (unsigned __int64)v8 >= v42 )
        return v47;
      v17 ^= ((unsigned __int8)v17 ^ (unsigned __int8)(4 * v17)) & 0x20;
      if ( !MiInPageSkipPage(48 * *v8 - 0x220000000000LL) )
        break;
LABEL_28:
      *(_QWORD *)(a1 + 96) += 4096LL;
      v20 += 8LL;
      ++v8;
      ++*(_DWORD *)(a1 + 188);
    }
    if ( v19 )
    {
      MiMarkPfnVerified(v22, v46);
      v23 = 0LL;
    }
    else
    {
      if ( (v17 & 2) == 0 )
        goto LABEL_16;
      v29 = MiValidateImagePfn(v41, BugCheckOnFailure, v43, *v8, v23, 1);
      v23 = 0LL;
      if ( v29 < 0 )
      {
        if ( v29 == -1073741670 )
          goto LABEL_29;
        v47 = -1073740748;
        if ( (v17 & 5) == 5 )
        {
          v21 = 0xFFFFF68000000000uLL;
          if ( (MiFlags & 0x2000) != 0 )
            v17 |= 0x20u;
          goto LABEL_16;
        }
      }
    }
    v21 = 0xFFFFF68000000000uLL;
LABEL_16:
    v24 = v23;
    if ( (v17 & 0x30) != 0 && (*(_BYTE *)(v2 + 10) & 1) != 0 )
    {
      v24 = *(_QWORD *)(v2 + 24) + (v20 >> 3 << 12);
      v25 = (__int64 *)(v21 + ((v24 >> 9) & 0x7FFFFFFFF8LL));
      if ( (*v25 & 0x42) == 0 )
      {
        v26 = *v25 | 0x842;
        if ( _bittest64(&MiFlags, 0x24u) && (*(_BYTE *)v25 & 0x20) == 0 && (unsigned __int64)v25 >= v21 + 0x4000000000LL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v25, *v25 | 0x842, 128);
        v27 = MiFlags;
        *v25 = v26;
        if ( (v27 & 0x100) == 0 && (v27 & 0x200) == 0 )
          MiFlushSingleTbEntry(v24, 2, 32);
      }
      v20 = i;
    }
    if ( (v17 & 0x20) != 0 )
    {
      BugCheckOnFailure = 0;
      if ( (int)MiRelocateImagePfn(v41, v24, *(unsigned int *)(a1 + 188), *v8) < 0 )
      {
LABEL_29:
        *(_DWORD *)(a1 + 80) = -1073741670;
        return v47;
      }
    }
    if ( (v17 & 0x10) != 0 )
    {
      BugCheckOnFailure = 0;
      MiApplyDebuggerPatches(v41, v24, *(unsigned int *)(a1 + 188), *v8);
    }
    goto LABEL_28;
  }
  return result;
}
