/*
 * XREFs of AlpcpCreateView @ 0x140897248
 * Callers:
 *     AlpcpCreateSectionView @ 0x1408950B8 (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1404071F0 (MiCheckPurgeAndUpMapCount.c)
 *     MiDereferenceControlArea @ 0x14042777C (MiDereferenceControlArea.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpInsertResourcePort @ 0x1408966E0 (AlpcpInsertResourcePort.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpReferenceBlob @ 0x14089EB60 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 *     MiMapViewOfSection @ 0x1408A2840 (MiMapViewOfSection.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR *a3)
{
  ULONG_PTR v3; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // r15
  __int64 Pool2; // rax
  ULONG_PTR v9; // r14
  bool v10; // zf
  unsigned __int64 v11; // rdi
  char PreviousMode; // cl
  unsigned __int64 v13; // rax
  int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // rax
  char *v17; // rax
  char *v18; // rdi
  __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  char v22; // cl
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v25; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+40h] [rbp-C0h]
  ULONG_PTR v27; // [rsp+48h] [rbp-B8h] BYREF
  char v28[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v31; // [rsp+68h] [rbp-98h]
  int v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+7Ch] [rbp-84h]
  int v34; // [rsp+84h] [rbp-7Ch]
  char v35; // [rsp+89h] [rbp-77h]
  int v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+94h] [rbp-6Ch]
  ULONG_PTR v38; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v39; // [rsp+A8h] [rbp-58h]
  _KPROCESS *Process; // [rsp+B0h] [rbp-50h]
  char v41[8]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v42; // [rsp+D8h] [rbp-28h]
  __int64 v43; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  int v47; // [rsp+104h] [rbp+4h]
  char v48; // [rsp+109h] [rbp+9h]
  int v49; // [rsp+110h] [rbp+10h]
  unsigned __int64 *v50; // [rsp+128h] [rbp+28h]
  _KPROCESS *v51; // [rsp+130h] [rbp+30h]
  int v52; // [rsp+1A0h] [rbp+A0h]
  unsigned __int64 v53; // [rsp+1A8h] [rbp+A8h] BYREF
  ULONG_PTR *v54; // [rsp+1B0h] [rbp+B0h]
  ULONG_PTR v55; // [rsp+1B8h] [rbp+B8h] BYREF

  v54 = a3;
  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v55 = 0LL;
  v53 = 0LL;
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  if ( (*(_DWORD *)(a2 + 416) & 0x20) != 0 )
  {
    v14 = -1073741769;
    goto LABEL_34;
  }
  v6 = *(_QWORD *)(a2 + 304);
  v7 = *(unsigned __int64 **)(a2 + 24);
  if ( v6 && v6 < *(_QWORD *)(BugCheckParameter2 + 40) )
  {
    v14 = -1073741756;
    goto LABEL_34;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0
    && (*(_DWORD *)(BugCheckParameter2 + 52) >= 2u || *(_QWORD *)(BugCheckParameter2 + 80)) )
  {
    v14 = -1073741790;
    goto LABEL_34;
  }
  Pool2 = ExAllocatePool2(0x100uLL, 0x90uLL, 0x69566C41u);
  if ( !Pool2 )
    goto LABEL_45;
  *(_WORD *)(Pool2 + 16) = 1536;
  v9 = Pool2 + 48;
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
    v14 = -1073741670;
    goto LABEL_34;
  }
  memset_0((void *)(Pool2 + 48), 0, 0x60uLL);
  v10 = (*(_DWORD *)(a2 + 256) & 0x100000) == 0;
  v11 = *(_QWORD *)(BugCheckParameter2 + 40);
  v53 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( !v10 )
  {
    v27 = 0LL;
    v19 = *(_QWORD *)v3;
    v52 = 1;
    v25 = MiSectionControlArea(*(_QWORD *)v3);
    MiCheckPurgeAndUpMapCount(v25);
    if ( v11 )
    {
      v20 = (unsigned __int16)v53 + v11;
      if ( v20 < (unsigned __int16)v53
        || (LODWORD(v53) = v53 & 0xFFFF0000, v11 = v20, v20 > *(_QWORD *)(v19 + 48) - v53) )
      {
        v14 = -1073741793;
        goto LABEL_42;
      }
    }
    else
    {
      LODWORD(v53) = v53 & 0xFFFF0000;
      v11 = *(_QWORD *)(v19 + 48) - v53;
    }
    v14 = MiInsertInSystemSpace(v11, v19, &v53, 0, 0LL, &v27);
    if ( v14 >= 0 )
    {
      v14 = 0;
      v55 = v27;
      goto LABEL_32;
    }
LABEL_42:
    MiDereferenceControlArea(v25);
LABEL_32:
    if ( v14 < 0 )
    {
LABEL_33:
      AlpcpDereferenceBlobEx(v9);
      goto LABEL_34;
    }
    goto LABEL_18;
  }
  v52 = 0;
  if ( (*(_DWORD *)(v3 + 48) & 2) != 0 )
  {
    v24 = *(_QWORD *)v3;
    MiSectionControlArea(*(_QWORD *)v3);
    memset_0(v28, 0, 0x80uLL);
    Process = KeGetCurrentThread()->ApcState.Process;
    v39 = v7;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v34 = 0;
    v32 = 0;
    v36 = 0;
    v35 = PreviousMode;
    v33 = 4;
    v31 = v11;
    v13 = v7[109] - 1;
    v30 = 0x10000LL;
    if ( v13 >= 0x7FFFFFFEFFFFLL )
      v13 = 0x7FFFFFFEFFFFLL;
    v29 = v13;
    v38 = v9 + 56;
    v37 = 2;
    v14 = MiMapViewOfSection(v24, (unsigned int)v28, (unsigned int)&v55, 0, (__int64)&v53, 2, 1);
    if ( v14 < 0 )
    {
LABEL_12:
      if ( v55 )
        ++dword_140E302EC;
      else
        ++dword_140E302E8;
      goto LABEL_33;
    }
    v11 = v31;
  }
  else
  {
    v26 = **(_QWORD **)(BugCheckParameter2 + 16);
    MiSectionControlArea(v26);
    memset_0(v41, 0, 0x80uLL);
    v51 = KeGetCurrentThread()->ApcState.Process;
    v50 = v7;
    v22 = KeGetCurrentThread()->PreviousMode;
    v47 = 0;
    v45 = 0;
    v49 = 0;
    v48 = v22;
    v46 = 4;
    v44 = v11;
    v23 = v7[109] - 1;
    v43 = 0x10000LL;
    if ( v23 >= 0x7FFFFFFEFFFFLL )
      v23 = 0x7FFFFFFEFFFFLL;
    v42 = v23;
    v14 = MiMapViewOfSection(v26, (unsigned int)v41, (unsigned int)&v55, 0, (__int64)&v53, 2, 1);
    if ( v14 < 0 )
      goto LABEL_12;
    v11 = v44;
  }
LABEL_18:
  AlpcpReferenceBlob(v9);
  *(_QWORD *)(v9 + 40) = v55;
  v15 = *(_DWORD *)(v9 + 72) & 0xFFFFFFF7;
  *(_QWORD *)(v9 + 48) = v11;
  *(_DWORD *)(v9 + 72) = v15 | (8 * v52) | 1;
  ObfReferenceObjectWithTag(v7, 0x63706C41u);
  *(_QWORD *)(v9 + 32) = v7;
  PsReferenceSiloContext((void *)a2);
  *(_QWORD *)(v9 + 24) = a2;
  AlpcpReferenceBlob(BugCheckParameter2);
  *(_QWORD *)(v9 + 16) = BugCheckParameter2;
  v16 = *(_QWORD *)(BugCheckParameter2 + 64);
  *(_QWORD *)v9 = BugCheckParameter2 + 56;
  *(_QWORD *)(v9 + 8) = v16;
  **(_QWORD **)(BugCheckParameter2 + 64) = v9;
  *(_QWORD *)(BugCheckParameter2 + 64) = v9;
  ++*(_DWORD *)(BugCheckParameter2 + 52);
  AlpcpInsertResourcePort(a2, v9);
  v17 = (char *)KeAbPreAcquire((__int64)(v7 + 176), 0LL);
  v18 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 352, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7 + 176, v17, (__int64)(v7 + 176));
  if ( v18 )
    v18[10] = 1;
  *(_QWORD *)(v9 + 88) = v7[178];
  *(_QWORD *)(v9 + 80) = v7 + 177;
  *(_QWORD *)v7[178] = v9 + 80;
  v7[178] = v9 + 80;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 176, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7 + 176);
  KeAbPostRelease((ULONG_PTR)(v7 + 176));
  if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
    *(_QWORD *)(BugCheckParameter2 + 80) = v9;
  v14 = 0;
  *v54 = v9;
LABEL_34:
  AlpcpUnlockBlob(v3);
  return (unsigned int)v14;
}
