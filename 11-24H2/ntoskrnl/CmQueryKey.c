/*
 * XREFs of CmQueryKey @ 0x14087BBC0
 * Callers:
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeCaptureSubjectContextEx @ 0x14083BF00 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     CmpQueryKeyData @ 0x14087C7F0 (CmpQueryKeyData.c)
 *     CmpQueryKeyDataFromCache @ 0x14087C8F0 (CmpQueryKeyDataFromCache.c)
 *     CmpTransReferenceTransaction @ 0x14087D3B8 (CmpTransReferenceTransaction.c)
 *     CmpTransSearchAddTrans @ 0x14087E39C (CmpTransSearchAddTrans.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14087F9B0 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpQueryKeyDataFromNode @ 0x140880E50 (CmpQueryKeyDataFromNode.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x1408E4D60 (CmpIsKcbInsideVirtualizedHive.c)
 *     CmpIsSystemEntity @ 0x1408E4D80 (CmpIsSystemEntity.c)
 *     CmpLockTwoKcbsShared @ 0x1409E8950 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1409EA714 (CmpUnlockTwoKcbs.c)
 *     CmVirtualKCBToRealPath @ 0x140A57538 (CmVirtualKCBToRealPath.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A5F148 (CmEnumerateValueKeyFromMergedView.c)
 *     CmGetKeyFlags @ 0x140A86838 (CmGetKeyFlags.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, __int64 a6)
{
  __int64 v10; // r13
  __int64 v11; // rcx
  ULONG_PTR v12; // rdi
  int KeyData; // r14d
  unsigned int *v14; // rdi
  __int64 v15; // rcx
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // rcx
  __int64 CellFlat; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v25; // r14d
  ULONG_PTR v26; // r8
  bool v27; // r10
  unsigned int *v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  int v31; // r9d
  unsigned int v32; // r9d
  unsigned int v33; // ecx
  unsigned int KeyFlags; // eax
  unsigned int *v35; // rdx
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  const void **v42; // rax
  unsigned int v43; // eax
  unsigned int *v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // r8
  unsigned int LayeredKey; // ebx
  __int64 v55; // rcx
  __int64 v56; // [rsp+58h] [rbp-130h] BYREF
  unsigned int *v57; // [rsp+60h] [rbp-128h] BYREF
  __int64 v58; // [rsp+68h] [rbp-120h] BYREF
  __int64 v59[2]; // [rsp+70h] [rbp-118h] BYREF
  unsigned int *v60; // [rsp+80h] [rbp-108h] BYREF
  const void **v61; // [rsp+88h] [rbp-100h]
  ULONG_PTR v62; // [rsp+90h] [rbp-F8h]
  __int64 v63; // [rsp+98h] [rbp-F0h]
  __int64 v64; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-E0h]
  unsigned __int64 v66; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-D0h]
  __int128 v68; // [rsp+C0h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+D0h] [rbp-B8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-A8h] BYREF
  __int128 v71; // [rsp+100h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-78h] BYREF

  v57 = a4;
  v63 = a1;
  v67 = a1;
  v59[1] = a2;
  v60 = a4;
  v56 = a6;
  v61 = 0LL;
  v10 = 0LL;
  v65 = 0LL;
  *(_OWORD *)P = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v68 = 0LL;
  CmpInitializeDelayDerefContext(&v68);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v11);
  v12 = *(_QWORD *)(a1 + 8);
  v62 = v12;
  if ( !*(_WORD *)(v12 + 66) )
  {
    if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
      goto LABEL_4;
    CmpLockKcbShared(v12);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      KeyData = -1073740763;
      if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        KeyData = -1073741444;
      CmpUnlockKcb(v12);
      goto LABEL_141;
    }
    CmpUnlockKcb(v12);
    v64 = 0LL;
    v58 = 0LL;
    v49 = *(_QWORD *)(a1 + 56);
    v59[0] = v49;
    if ( v49 || *(_QWORD *)(a1 + 64) )
    {
      v48 = *(_QWORD *)(a1 + 8);
      v50 = v48 ^ 1;
      if ( (v48 & 1) == 0 )
        v50 = *(_QWORD *)(a1 + 8);
      if ( (v49 & 1) != 0 )
      {
        v66 = v49 & 0xFFFFFFFFFFFFFFFEuLL;
        KeyData = CmpTransReferenceTransaction(v49);
        if ( KeyData < 0 )
        {
          v48 = 0LL;
        }
        else
        {
          v64 = *(_QWORD *)(v66 + 16);
          v12 = v62;
          v48 = v59[0];
          if ( v64 )
          {
            KeyData = 0;
          }
          else
          {
            KeyData = -1072103422;
            v64 = v58;
          }
        }
        if ( v48 )
          ObfDereferenceObject((PVOID)(v48 & 0xFFFFFFFFFFFFFFFEuLL));
        v51 = v64;
      }
      else
      {
        v52 = *(_QWORD *)(v50 + 32);
        v53 = *(_QWORD *)(v52 + 4152);
        if ( !v53 )
        {
          KeyData = -1072103419;
          goto LABEL_134;
        }
        KeyData = CmpTransSearchAddTrans(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), v53, v52, 0, (__int64)&v58);
        v51 = v58;
      }
      if ( KeyData < 0 )
        goto LABEL_141;
      v10 = v51;
      v65 = v51;
      KeyData = 0;
    }
    else
    {
      KeyData = -1072103422;
    }
LABEL_134:
    if ( KeyData >= 0 )
    {
LABEL_4:
      if ( a2 )
      {
        v12 = *(_QWORD *)(a2 + 8);
        v62 = v12;
        CmpLockTwoKcbsShared(*(_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 8));
      }
      else
      {
        CmpLockKcbShared(*(_QWORD *)(a1 + 8));
      }
      if ( a3 != 3 )
      {
        if ( (!a2 || !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v10))
          && !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
        {
          switch ( a3 )
          {
            case 5:
              *(_DWORD *)v56 = 12;
              if ( a5 < 0xC )
              {
                KeyData = -1073741789;
              }
              else
              {
                KeyFlags = CmGetKeyFlags(v12, v10);
                v35 = v57;
                *v57 = KeyFlags;
                v35[1] = 0;
                v36 = 0;
                if ( *(int *)(v12 + 40) < 0 )
                {
                  v36 = 1;
                  v35[1] = 1;
                }
                if ( (*(_DWORD *)(v12 + 184) & 0x100000) != 0 )
                  v35[1] = v36 | 2;
                v35[2] = (*(_DWORD *)(v12 + 184) >> 4) & 0xF;
                KeyData = 0;
              }
              break;
            case 6:
              memset(&SubjectContext, 0, sizeof(SubjectContext));
              CurrentThread = KeGetCurrentThread();
              CurrentThreadProcess = PsGetCurrentThreadProcess();
              SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
              v25 = 4;
              *(_DWORD *)v56 = 4;
              if ( a5 < 4 )
              {
                KeyData = -1073741789;
              }
              else
              {
                v26 = v62;
                if ( CmpVEEnabled
                  && (*(_DWORD *)(v62 + 184) & 0x2000000) == 0
                  && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v62) )
                {
                  v27 = (unsigned __int8)CmpIsSystemEntity((unsigned __int8)KeGetCurrentThread()->PreviousMode) == 0;
                  v26 = v62;
                }
                else
                {
                  v27 = 0;
                }
                v28 = v57;
                v29 = v27 | *v57 & 0xFFFFFFFE;
                *v57 = v29;
                v30 = v29 & 0xFFFFFFFD;
                *v28 = v30;
                v31 = v30;
                if ( v27 && (*(_DWORD *)(v26 + 184) & 0x20) == 0 )
                {
                  v31 = v30 | 2;
                  *v28 = v30 | 2;
                }
                if ( !CmpVEEnabled || (*(_DWORD *)(v26 + 184) & 0x1000000) == 0 )
                  v25 = 0;
                v32 = v25 | v31 & 0xFFFFFFFB;
                *v28 = v32;
                v33 = v32 & 0xFFFFFFF7 | (*(_DWORD *)(v26 + 184) >> 22) & 8;
                *v28 = v33;
                *v28 = v33 & 0xFFFFFFEF | (*(_DWORD *)(v26 + 184) >> 19) & 0x10;
                KeyData = 0;
              }
              SeReleaseSubjectContext(&SubjectContext);
              break;
            case 8:
              *(_DWORD *)v56 = 4;
              if ( a5 >= 4 )
              {
                v20 = *(_QWORD *)(v12 + 32);
                v14 = v57;
                v21 = *v57;
                if ( (*(_DWORD *)(v20 + 4112) & 1) != 0 )
                  v22 = v21 & 0xFFFFFFFE;
                else
                  v22 = v21 | 1;
                *v57 = v22;
                KeyData = 0;
LABEL_17:
                if ( a2 )
                {
                  if ( ((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4 )
                  {
                    v45 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL);
                    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) < v45 )
                      *(_QWORD *)v14 = v45;
                  }
                  if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
                  {
                    LODWORD(v59[0]) = 0;
                    v66 = 0LL;
                    LODWORD(v57) = 0;
                    memset(&SubjectContext, 0, sizeof(SubjectContext));
                    v71 = 0LL;
                    if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                         *(_QWORD *)(a2 + 8),
                                         *(_QWORD *)(a1 + 8),
                                         -1,
                                         v10,
                                         (__int64)&v68,
                                         (__int64)&v66,
                                         (__int64)&v57,
                                         0LL,
                                         (__int64)v59) == -2147483622 )
                    {
                      if ( a3 == 2 )
                        v14[5] = v59[0];
                      else
                        v14[3] = v59[0];
                    }
                    LOBYTE(v37) = 1;
                    if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v37, -1, 0, 0LL, 0, 0LL, (__int64)v59) == -2147483622 )
                    {
                      if ( a3 == 2 )
                        v14[8] = v59[0];
                      else
                        v14[5] = v59[0];
                    }
                    KeyData = CmpQueryKeyData(*(_QWORD *)(a1 + 8), v56, v10);
                    if ( (int)(KeyData + 0x80000000) < 0 || KeyData == -2147483643 )
                    {
                      if ( a3 == 2 )
                      {
                        if ( LODWORD(SubjectContext.ProcessAuditId) > v14[6] )
                          v14[6] = (unsigned int)SubjectContext.ProcessAuditId;
                        if ( DWORD1(v71) > v14[9] )
                          v14[9] = DWORD1(v71);
                        if ( DWORD2(v71) > v14[10] )
                          v14[10] = DWORD2(v71);
                      }
                      else
                      {
                        if ( LODWORD(SubjectContext.PrimaryToken) > v14[4] )
                          v14[4] = (unsigned int)SubjectContext.PrimaryToken;
                        if ( LODWORD(SubjectContext.ProcessAuditId) > v14[6] )
                          v14[6] = (unsigned int)SubjectContext.ProcessAuditId;
                        if ( HIDWORD(SubjectContext.ProcessAuditId) > v14[7] )
                          v14[7] = HIDWORD(SubjectContext.ProcessAuditId);
                      }
                    }
                  }
                }
                else if ( CmpVEEnabled )
                {
                  v15 = *(_QWORD *)(a1 + 8);
                  if ( (*(_DWORD *)(v15 + 184) & 0x1000000) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
                  {
                    LODWORD(v60) = 0;
                    v64 = 0LL;
                    LODWORD(v56) = 0;
                    KeyData = CmpFindSubKeyByNumberFromMergedView(
                                v15,
                                0,
                                -1,
                                v10,
                                (__int64)&v68,
                                (__int64)&v64,
                                (__int64)&v56,
                                0LL,
                                (__int64)&v60);
                    if ( KeyData == -2147483622 )
                    {
                      if ( a3 == 2 )
                        v14[5] = (unsigned int)v60;
                      else
                        v14[3] = (unsigned int)v60;
                      KeyData = 0;
                    }
                  }
                }
                goto LABEL_114;
              }
              KeyData = -1073741789;
LABEL_114:
              if ( a2 )
                CmpUnlockTwoKcbs(*(_QWORD *)(a2 + 8), *(_QWORD *)(v67 + 8));
              else
                CmpUnlockKcb(*(_QWORD *)(v67 + 8));
              CmpDrainDelayDerefContext((_QWORD **)&v68);
              CmpUnlockRegistry(v46);
              CmpDetachFromRegistryProcess(&ApcState);
              if ( P[1] )
              {
                ExFreePool(P[1]);
              }
              else if ( v61 )
              {
                CmpFreeTransientPoolWithTag(v61, 0x624E4D43u);
              }
              return (unsigned int)KeyData;
            default:
              v58 = 0xFFFFFFFFLL;
              if ( a3 == 4 )
              {
                KeyData = CmpQueryKeyDataFromCache(v12, 4, (_DWORD)v57, a5, v56, v10);
              }
              else
              {
                v16 = *(unsigned int *)(v12 + 40);
                v17 = *(_QWORD *)(v12 + 32);
                if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v17, v16, &v58);
                else
                  CellFlat = HvpGetCellPaged(v17, v16, &v58);
                if ( CellFlat )
                {
                  KeyData = CmpQueryKeyDataFromNode(*(_QWORD *)(v12 + 32), a5, v56, v12, v10);
                  v19 = *(_QWORD *)(v12 + 32);
                  if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v19, &v58);
                  else
                    HvpReleaseCellPaged(v19, (unsigned int *)&v58);
                }
                else
                {
                  KeyData = -1073741670;
                }
              }
              break;
          }
LABEL_15:
          if ( KeyData >= 0 )
          {
            v14 = v57;
            goto LABEL_17;
          }
          goto LABEL_114;
        }
        if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        {
          KeyData = -1073741444;
          goto LABEL_114;
        }
LABEL_35:
        KeyData = -1073740763;
        goto LABEL_114;
      }
      v38 = *(_QWORD *)(a1 + 8);
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
      {
        if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
          goto LABEL_35;
        KeyData = -1073741444;
      }
      else
      {
        KeyData = 0;
      }
      if ( !*(_QWORD *)(v38 + 80) )
      {
LABEL_36:
        KeyData = -1073741670;
        goto LABEL_114;
      }
      if ( CmpVEEnabled && (*(_DWORD *)(v38 + 184) & 0x1000000) != 0 )
      {
        if ( (int)CmVirtualKCBToRealPath(v38, P) < 0 )
        {
LABEL_101:
          if ( v61 )
          {
            v43 = *(unsigned __int16 *)v61;
            *(_DWORD *)v56 = v43 + 4;
            if ( a5 < 4 )
            {
              KeyData = -1073741789;
            }
            else
            {
              v44 = v57;
              *v57 = v43;
              if ( a5 - 4 < v43 )
              {
                v43 = a5 - 4;
                KeyData = -2147483643;
              }
              memmove(v44 + 1, v61[1], v43);
            }
            goto LABEL_15;
          }
          goto LABEL_36;
        }
        v42 = (const void **)P;
      }
      else
      {
        v42 = (const void **)CmpConstructName(v38, v39, v40, v41);
      }
      v61 = v42;
      goto LABEL_101;
    }
LABEL_141:
    CmpUnlockRegistry(v48);
    CmpDetachFromRegistryProcess(&ApcState);
    return (unsigned int)KeyData;
  }
  LayeredKey = CmQueryLayeredKey(a1, a3, a4, a5, (unsigned int *)v56);
  CmpUnlockRegistry(v55);
  CmpDetachFromRegistryProcess(&ApcState);
  return LayeredKey;
}
