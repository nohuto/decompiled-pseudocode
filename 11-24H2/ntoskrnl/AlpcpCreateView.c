/*
 * XREFs of AlpcpCreateView @ 0x14089328C
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408926D0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateSectionView @ 0x14093DC88 (AlpcpCreateSectionView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     MiDereferenceControlArea @ 0x14036F494 (MiDereferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14040EFF0 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpInsertResourcePort @ 0x140893BB8 (AlpcpInsertResourcePort.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR *a3)
{
  ULONG_PTR v3; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 *v10; // r15
  __int64 Pool2; // rax
  ULONG_PTR v12; // r14
  bool v13; // zf
  unsigned __int64 v14; // rdi
  char PreviousMode; // cl
  unsigned __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  char v29; // cl
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h]
  __int64 v33; // [rsp+40h] [rbp-C0h]
  ULONG_PTR v34; // [rsp+48h] [rbp-B8h] BYREF
  char v35[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+78h] [rbp-88h]
  int v40; // [rsp+7Ch] [rbp-84h]
  int v41; // [rsp+84h] [rbp-7Ch]
  char v42; // [rsp+89h] [rbp-77h]
  int v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+94h] [rbp-6Ch]
  ULONG_PTR v45; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v46; // [rsp+A8h] [rbp-58h]
  _KPROCESS *Process; // [rsp+B0h] [rbp-50h]
  char v48[8]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v49; // [rsp+D8h] [rbp-28h]
  __int64 v50; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v51; // [rsp+E8h] [rbp-18h]
  int v52; // [rsp+F8h] [rbp-8h]
  int v53; // [rsp+FCh] [rbp-4h]
  int v54; // [rsp+104h] [rbp+4h]
  char v55; // [rsp+109h] [rbp+9h]
  int v56; // [rsp+110h] [rbp+10h]
  unsigned __int64 *v57; // [rsp+128h] [rbp+28h]
  _KPROCESS *v58; // [rsp+130h] [rbp+30h]
  int v59; // [rsp+1A0h] [rbp+A0h]
  unsigned __int64 v60; // [rsp+1A8h] [rbp+A8h] BYREF
  ULONG_PTR *v61; // [rsp+1B0h] [rbp+B0h]
  ULONG_PTR v62; // [rsp+1B8h] [rbp+B8h] BYREF

  v61 = a3;
  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v62 = 0LL;
  v60 = 0LL;
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  if ( (*(_DWORD *)(a2 + 416) & 0x20) != 0 )
  {
    v17 = -1073741769;
    goto LABEL_34;
  }
  v9 = *(_QWORD *)(a2 + 304);
  v10 = *(unsigned __int64 **)(a2 + 24);
  if ( v9 && v9 < *(_QWORD *)(BugCheckParameter2 + 40) )
  {
    v17 = -1073741756;
    goto LABEL_34;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0
    && (*(_DWORD *)(BugCheckParameter2 + 52) >= 2u || *(_QWORD *)(BugCheckParameter2 + 80)) )
  {
    v17 = -1073741790;
    goto LABEL_34;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    goto LABEL_45;
  *(_WORD *)(Pool2 + 16) = 1536;
  v12 = Pool2 + 48;
  *(_DWORD *)(Pool2 + 18) = 0;
  *(_WORD *)(Pool2 + 22) = 0;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  *(_BYTE *)(Pool2 + 16) &= ~2u;
  *(_QWORD *)(Pool2 + 24) = 1LL;
  if ( Pool2 == -48 )
  {
LABEL_45:
    v17 = -1073741670;
    goto LABEL_34;
  }
  memset_0((void *)(Pool2 + 48), 0, 0x60uLL);
  v13 = (*(_DWORD *)(a2 + 256) & 0x100000) == 0;
  v14 = *(_QWORD *)(BugCheckParameter2 + 40);
  v60 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( !v13 )
  {
    v34 = 0LL;
    v24 = *(_QWORD *)v3;
    v59 = 1;
    v32 = MiSectionControlArea(*(_QWORD *)v3);
    MiCheckPurgeAndUpMapCount(v32, v25, v26);
    if ( v14 )
    {
      v27 = (unsigned __int16)v60 + v14;
      if ( v27 < (unsigned __int16)v60
        || (LODWORD(v60) = v60 & 0xFFFF0000, v14 = v27, v27 > *(_QWORD *)(v24 + 48) - v60) )
      {
        v17 = -1073741793;
        goto LABEL_42;
      }
    }
    else
    {
      LODWORD(v60) = v60 & 0xFFFF0000;
      v14 = *(_QWORD *)(v24 + 48) - v60;
    }
    v17 = MiInsertInSystemSpace(v14, v24, &v60, 0, 0LL, &v34);
    if ( v17 >= 0 )
    {
      v17 = 0;
      v62 = v34;
      goto LABEL_32;
    }
LABEL_42:
    MiDereferenceControlArea(v32);
LABEL_32:
    if ( v17 < 0 )
    {
LABEL_33:
      AlpcpDereferenceBlobEx(v12, 1, v18, v19);
      goto LABEL_34;
    }
    goto LABEL_18;
  }
  v59 = 0;
  if ( (*(_DWORD *)(v3 + 48) & 2) != 0 )
  {
    v31 = *(_QWORD *)v3;
    MiSectionControlArea(*(_QWORD *)v3);
    memset_0(v35, 0, 0x80uLL);
    Process = KeGetCurrentThread()->ApcState.Process;
    v46 = v10;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v41 = 0;
    v39 = 0;
    v43 = 0;
    v42 = PreviousMode;
    v40 = 4;
    v38 = v14;
    v16 = v10[109] - 1;
    v37 = 0x10000LL;
    if ( v16 >= 0x7FFFFFFEFFFFLL )
      v16 = 0x7FFFFFFEFFFFLL;
    v36 = v16;
    v45 = v12 + 56;
    v44 = 2;
    v17 = MiMapViewOfSection(v31, (unsigned int)v35, (unsigned int)&v62, 0, (__int64)&v60, 2, 1);
    if ( v17 < 0 )
    {
LABEL_12:
      if ( v62 )
        ++dword_140E301AC;
      else
        ++dword_140E301A8;
      goto LABEL_33;
    }
    v14 = v38;
  }
  else
  {
    v33 = **(_QWORD **)(BugCheckParameter2 + 16);
    MiSectionControlArea(v33);
    memset_0(v48, 0, 0x80uLL);
    v58 = KeGetCurrentThread()->ApcState.Process;
    v57 = v10;
    v29 = KeGetCurrentThread()->PreviousMode;
    v54 = 0;
    v52 = 0;
    v56 = 0;
    v55 = v29;
    v53 = 4;
    v51 = v14;
    v30 = v10[109] - 1;
    v50 = 0x10000LL;
    if ( v30 >= 0x7FFFFFFEFFFFLL )
      v30 = 0x7FFFFFFEFFFFLL;
    v49 = v30;
    v17 = MiMapViewOfSection(v33, (unsigned int)v48, (unsigned int)&v62, 0, (__int64)&v60, 2, 1);
    if ( v17 < 0 )
      goto LABEL_12;
    v14 = v51;
  }
LABEL_18:
  AlpcpReferenceBlob(v12);
  *(_QWORD *)(v12 + 40) = v62;
  v20 = *(_DWORD *)(v12 + 72) & 0xFFFFFFF7;
  *(_QWORD *)(v12 + 48) = v14;
  *(_DWORD *)(v12 + 72) = v20 | (8 * v59) | 1;
  ObfReferenceObjectWithTag(v10, 0x63706C41u);
  *(_QWORD *)(v12 + 32) = v10;
  PsReferenceSiloContext((void *)a2);
  *(_QWORD *)(v12 + 24) = a2;
  AlpcpReferenceBlob(BugCheckParameter2);
  *(_QWORD *)(v12 + 16) = BugCheckParameter2;
  v21 = *(_QWORD *)(BugCheckParameter2 + 64);
  *(_QWORD *)v12 = BugCheckParameter2 + 56;
  *(_QWORD *)(v12 + 8) = v21;
  **(_QWORD **)(BugCheckParameter2 + 64) = v12;
  *(_QWORD *)(BugCheckParameter2 + 64) = v12;
  ++*(_DWORD *)(BugCheckParameter2 + 52);
  AlpcpInsertResourcePort(a2, v12);
  v22 = KeAbPreAcquire((__int64)(v10 + 176), 0LL);
  v23 = v22;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10 + 352, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10 + 176, (__int64)v22, (__int64)(v10 + 176));
  if ( v23 )
    *((_BYTE *)v23 + 10) = 1;
  *(_QWORD *)(v12 + 88) = v10[178];
  *(_QWORD *)(v12 + 80) = v10 + 177;
  *(_QWORD *)v10[178] = v12 + 80;
  v10[178] = v12 + 80;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 176, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10 + 176);
  KeAbPostRelease((ULONG_PTR)(v10 + 176));
  if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
    *(_QWORD *)(BugCheckParameter2 + 80) = v12;
  v17 = 0;
  *v61 = v12;
LABEL_34:
  AlpcpUnlockBlob(v3, v6, v7, v8);
  return (unsigned int)v17;
}
