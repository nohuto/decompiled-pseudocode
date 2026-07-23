/*
 * XREFs of CmpDoBuildVirtualStack @ 0x1407DBB34
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1407DC15C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DD0CC (CmpCopySaclToVirtualKey.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     CmpUnlockHashEntryByKcb @ 0x140840720 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpStartKcbStack @ 0x140872120 (CmpStartKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140884764 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140884794 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpCleanupKcbStack @ 0x14090AD10 (CmpCleanupKcbStack.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpInitializeParseContext @ 0x14092F540 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 *     CmpAssignSecurityToKcb @ 0x1409C5710 (CmpAssignSecurityToKcb.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140A6F1E8 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpDoBuildVirtualStack(__int64 a1, unsigned int a2, ULONG_PTR a3, __int64 a4, int a5)
{
  unsigned int v6; // edi
  __int64 v7; // r12
  __int64 v9; // rdx
  int AccessStateFromSubjectContext; // ebx
  unsigned int i; // r14d
  __int64 v12; // r15
  __int64 v13; // r12
  int v14; // eax
  int v15; // eax
  ULONG_PTR v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // r15d
  ULONG_PTR v19; // r12
  ULONG_PTR v20; // rcx
  __int64 CellFlat; // rax
  __int64 v22; // r14
  __int64 CellPaged; // rax
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  ULONG_PTR v28; // [rsp+38h] [rbp-C8h]
  char v29; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v30; // [rsp+64h] [rbp-9Ch]
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h] BYREF
  int v34[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v35; // [rsp+90h] [rbp-70h]
  int v36[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  _DWORD v39[6]; // [rsp+D0h] [rbp-30h] BYREF
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+170h] [rbp+70h]
  struct _KAPC_STATE ApcState; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v43[160]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v44[224]; // [rsp+340h] [rbp+240h] BYREF

  v6 = a2;
  v30 = a2;
  v7 = a1;
  v38 = a1;
  memset_0(v39, 0, 0x1D0uLL);
  v31 = 0LL;
  v32 = 0LL;
  memset_0(v43, 0, sizeof(v43));
  memset_0(v44, 0, sizeof(v44));
  v29 = 0;
  BugCheckParameter2 = 0LL;
  HvpGetCellContextInitialize(&v31);
  HvpGetCellContextInitialize(&v32);
  CmpInitializeParseContext(v39);
  *(_OWORD *)v34 = 0LL;
  HIWORD(v34[0]) = -1;
  *(_OWORD *)v36 = 0LL;
  HIWORD(v36[0]) = -1;
  v35 = 0LL;
  v37 = 0LL;
  CmpAttachToRegistryProcess(&ApcState);
  v41 |= 1u;
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a5,
                                    (unsigned int)v43,
                                    (unsigned int)v44,
                                    4,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    for ( i = 0; i < v6; ++i )
    {
      v40 = 0;
      *(_OWORD *)v36 = 0LL;
      *(_OWORD *)v34 = 0LL;
      v37 = 0LL;
      HIWORD(v36[0]) = -1;
      v35 = 0LL;
      HIWORD(v34[0]) = -1;
      v12 = v7 + 48LL * i;
      v13 = *(_QWORD *)(v12 + 16);
      AccessStateFromSubjectContext = CmpStartKcbStack(v36, *(unsigned __int16 *)(v13 + 66));
      if ( AccessStateFromSubjectContext < 0 )
        goto LABEL_19;
      AccessStateFromSubjectContext = CmpStartKcbStackForTopLayerKcb(v34, v13);
      if ( AccessStateFromSubjectContext < 0 )
        goto LABEL_19;
      v14 = CmpHashUnicodeComponent(v12);
      LODWORD(v28) = v14 + 37 * *(_DWORD *)(v13 + 16);
      v15 = CmpWalkOneLevel(
              v13,
              (int)v34,
              (int)&BugCheckParameter2,
              (int)v36,
              (__int64)&v29,
              v12,
              v14,
              v28,
              0LL,
              1,
              (__int64)v39);
      v16 = BugCheckParameter2;
      AccessStateFromSubjectContext = v15;
      if ( v15 < 0 )
        goto LABEL_17;
      if ( *(_DWORD *)(BugCheckParameter2 + 40) == -1 )
      {
        if ( *(_DWORD *)(v12 + 40) == 1 || *(int *)(v13 + 40) < 0 )
          v40 = 1;
        v39[0] = 1;
        CmpLockKcbStackTopExclusiveRestShared(v34);
        CmpLockKcbStackTopExclusiveRestShared(v36);
        AccessStateFromSubjectContext = CmpCreateChild(
                                          (unsigned int)v34,
                                          (unsigned int)v36,
                                          (unsigned int)v43,
                                          v12,
                                          (__int64)v39,
                                          512,
                                          3,
                                          0,
                                          0LL);
        if ( AccessStateFromSubjectContext < 0 )
        {
          CmpUnlockKcbStack(v36);
          CmpUnlockKcbStack(v34);
LABEL_17:
          if ( v16 )
            CmpDereferenceKeyControlBlock(v16);
LABEL_19:
          CmpCleanupKcbStack(v36);
          CmpCleanupKcbStack(v34);
          goto LABEL_41;
        }
        CmpUnlockKcbStack(v36);
        CmpUnlockKcbStack(v34);
      }
      CmpUnlockHashEntryByKcb(v16);
      v7 = v38;
      *(_QWORD *)(v12 + 24) = v16;
      *(_DWORD *)(v12 + 36) = *(_DWORD *)(v16 + 40);
      if ( i < v30 - 1 )
      {
        v17 = 6LL * (i + 1);
        *(_QWORD *)(v7 + 8 * v17 + 16) = v16;
        *(_DWORD *)(v7 + 8 * v17 + 32) = *(_DWORD *)(v16 + 40);
      }
      BugCheckParameter2 = 0LL;
      CmpCleanupKcbStack(v36);
      CmpCleanupKcbStack(v34);
      v6 = v30;
    }
    _mm_lfence();
    v18 = *(_DWORD *)(v7 + 48LL * (v6 - 1) + 36);
    v19 = *(_QWORD *)(v7 + 48LL * (v6 - 1) + 24);
    AccessStateFromSubjectContext = HvpMarkCellDirty(*(_QWORD *)(a4 + 32), *(unsigned int *)(a4 + 40));
    if ( AccessStateFromSubjectContext >= 0 )
    {
      AccessStateFromSubjectContext = HvpMarkCellDirty(a3, v18);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        v20 = *(_QWORD *)(a4 + 32);
        if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v20, *(unsigned int *)(a4 + 40));
        else
          CellFlat = HvpGetCellPaged(v20);
        v22 = CellFlat;
        if ( CellFlat )
        {
          if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(a3, v18);
          else
            CellPaged = HvpGetCellPaged(a3);
          v24 = CellPaged;
          if ( CellPaged )
          {
            CmpLockTwoSecurityCachesExclusiveShared(a3, *(_QWORD *)(a4 + 32));
            AccessStateFromSubjectContext = CmpCopySaclToVirtualKey(*(_QWORD *)(a4 + 32), v18);
            CmpUnlockTwoSecurityCaches(a3, *(_QWORD *)(a4 + 32));
            if ( AccessStateFromSubjectContext >= 0 )
            {
              CmpAssignSecurityToKcb(v19, *(unsigned int *)(v24 + 44), 0);
              *(_WORD *)(v19 + 186) |= 0x100u;
              *(_WORD *)(v24 + 2) |= 0x100u;
              *(_WORD *)(a4 + 186) |= 0x80u;
              *(_WORD *)(v22 + 2) |= 0x80u;
              AccessStateFromSubjectContext = 0;
            }
          }
          else
          {
            AccessStateFromSubjectContext = -1073741670;
          }
          v25 = *(_QWORD *)(a4 + 32);
          if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v25, &v31);
          else
            HvpReleaseCellPaged(v25, &v31);
          if ( v24 )
          {
            v26 = *(_QWORD *)(v19 + 32);
            if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v26, &v32);
            else
              HvpReleaseCellPaged(v26, &v32);
          }
        }
        else
        {
          AccessStateFromSubjectContext = -1073741670;
        }
      }
    }
LABEL_41:
    SeDeleteAccessState(v43);
  }
  if ( (v41 & 1) != 0 )
  {
    CmpDetachFromRegistryProcess(&ApcState);
    v41 &= ~1u;
  }
  LOBYTE(v9) = 1;
  CmpCleanupParseContext(v39, v9);
  return (unsigned int)AccessStateFromSubjectContext;
}
