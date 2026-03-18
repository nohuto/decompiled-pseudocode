/*
 * XREFs of CmQueryKey @ 0x14087AC40
 * Callers:
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 *     PsGetCurrentThreadProcess @ 0x1404725F0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x140841680 (CmpIsKcbInsideVirtualizedHive.c)
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
 *     SeCaptureSubjectContextEx @ 0x1408436C0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     CmpUnlockTwoKcbs @ 0x14086CD24 (CmpUnlockTwoKcbs.c)
 *     CmpTransReferenceTransaction @ 0x140870E50 (CmpTransReferenceTransaction.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpConstructName @ 0x14087A050 (CmpConstructName.c)
 *     CmpQueryKeyData @ 0x14087BF70 (CmpQueryKeyData.c)
 *     CmpQueryKeyDataFromCache @ 0x14087C070 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x14087CC80 (CmpQueryKeyDataFromNode.c)
 *     CmpTransSearchAddTrans @ 0x140885A48 (CmpTransSearchAddTrans.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     CmpLockTwoKcbsShared @ 0x1409385D8 (CmpLockTwoKcbsShared.c)
 *     CmVirtualKCBToRealPath @ 0x140A5D600 (CmVirtualKCBToRealPath.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A639DC (CmEnumerateValueKeyFromMergedView.c)
 *     CmGetKeyFlags @ 0x140A85B90 (CmGetKeyFlags.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140A9B4D4 (CmpFindSubKeyByNumberFromMergedView.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, __int64 a6)
{
  __int64 v10; // r13
  __int64 v11; // rcx
  ULONG_PTR v12; // r15
  int KeyData; // edi
  unsigned int *v14; // r15
  __int64 v15; // rcx
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // rcx
  __int64 CellFlat; // rax
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  const void **v24; // rax
  unsigned int v25; // eax
  unsigned int *v26; // r15
  __int64 v27; // rax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v32; // edi
  __int64 v33; // r8
  bool v34; // r10
  unsigned int *v35; // rdx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  int v38; // r9d
  unsigned int v39; // r9d
  unsigned int v40; // ecx
  unsigned int KeyFlags; // eax
  unsigned int *v42; // rdx
  int v43; // ecx
  int v44; // r8d
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
    {
LABEL_4:
      if ( a2 )
        v12 = *(_QWORD *)(a2 + 8);
      v62 = v12;
      if ( a2 )
        CmpLockTwoKcbsShared(*(_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 8));
      else
        CmpLockKcbShared(*(_QWORD *)(a1 + 8));
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
                v42 = v57;
                *v57 = KeyFlags;
                v42[1] = 0;
                v43 = 0;
                if ( *(int *)(v12 + 40) < 0 )
                {
                  v43 = 1;
                  v42[1] = 1;
                }
                if ( (*(_DWORD *)(v12 + 184) & 0x100000) != 0 )
                  v42[1] = v43 | 2;
                v42[2] = (*(_DWORD *)(v12 + 184) >> 4) & 0xF;
                KeyData = 0;
              }
              break;
            case 6:
              memset(&SubjectContext, 0, sizeof(SubjectContext));
              CurrentThread = KeGetCurrentThread();
              CurrentThreadProcess = PsGetCurrentThreadProcess();
              SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
              v32 = 4;
              *(_DWORD *)v56 = 4;
              if ( a5 < 4 )
              {
                KeyData = -1073741789;
              }
              else
              {
                v33 = v62;
                if ( CmpVEEnabled && (*(_DWORD *)(v62 + 184) & 0x2000000) == 0 && CmpIsKcbInsideVirtualizedHive(v62) )
                {
                  v34 = !CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, &SubjectContext, 0LL);
                  v33 = v62;
                }
                else
                {
                  v34 = 0;
                }
                v35 = v57;
                v36 = v34 | *v57 & 0xFFFFFFFE;
                *v57 = v36;
                v37 = v36 & 0xFFFFFFFD;
                *v35 = v37;
                v38 = v37;
                if ( v34 && (*(_DWORD *)(v33 + 184) & 0x20) == 0 )
                {
                  v38 = v37 | 2;
                  *v35 = v37 | 2;
                }
                if ( !CmpVEEnabled || (*(_DWORD *)(v33 + 184) & 0x1000000) == 0 )
                  v32 = 0;
                v39 = v32 | v38 & 0xFFFFFFFB;
                *v35 = v39;
                v40 = v39 & 0xFFFFFFF7 | (*(_DWORD *)(v33 + 184) >> 22) & 8;
                *v35 = v40;
                *v35 = v40 & 0xFFFFFFEF | (*(_DWORD *)(v33 + 184) >> 19) & 0x10;
                KeyData = 0;
              }
              SeReleaseSubjectContext(&SubjectContext);
              break;
            case 8:
              *(_DWORD *)v56 = 4;
              if ( a5 >= 4 )
              {
                v27 = *(_QWORD *)(v12 + 32);
                v14 = v57;
                v28 = *v57;
                if ( (*(_DWORD *)(v27 + 4112) & 1) != 0 )
                  v29 = v28 & 0xFFFFFFFE;
                else
                  v29 = v28 | 1;
                *v57 = v29;
                KeyData = 0;
LABEL_18:
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
                    LOBYTE(v44) = 1;
                    if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v44, -1, 0, 0LL, 0, 0LL, (__int64)v59) == -2147483622 )
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
                goto LABEL_115;
              }
              KeyData = -1073741789;
LABEL_115:
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
LABEL_16:
          if ( KeyData >= 0 )
          {
            v14 = v57;
            goto LABEL_18;
          }
          goto LABEL_115;
        }
        if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        {
          KeyData = -1073741444;
          goto LABEL_115;
        }
LABEL_36:
        KeyData = -1073740763;
        goto LABEL_115;
      }
      v20 = *(_QWORD *)(a1 + 8);
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
      {
        if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
          goto LABEL_36;
        KeyData = -1073741444;
      }
      else
      {
        KeyData = 0;
      }
      if ( !*(_QWORD *)(v20 + 80) )
      {
LABEL_37:
        KeyData = -1073741670;
        goto LABEL_115;
      }
      if ( CmpVEEnabled && (*(_DWORD *)(v20 + 184) & 0x1000000) != 0 )
      {
        if ( (int)CmVirtualKCBToRealPath(v20, P) < 0 )
        {
LABEL_47:
          if ( v61 )
          {
            v25 = *(unsigned __int16 *)v61;
            *(_DWORD *)v56 = v25 + 4;
            if ( a5 < 4 )
            {
              KeyData = -1073741789;
            }
            else
            {
              v26 = v57;
              *v57 = v25;
              if ( a5 - 4 < v25 )
              {
                v25 = a5 - 4;
                KeyData = -2147483643;
              }
              memmove(v26 + 1, v61[1], v25);
            }
            goto LABEL_16;
          }
          goto LABEL_37;
        }
        v24 = (const void **)P;
      }
      else
      {
        v24 = (const void **)CmpConstructName(v20, v21, v22, v23);
      }
      v61 = v24;
      goto LABEL_47;
    }
    CmpLockKcbShared(v12);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      KeyData = -1073740763;
      if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        KeyData = -1073741444;
      CmpUnlockKcb(v12);
      goto LABEL_142;
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
          goto LABEL_135;
        }
        KeyData = CmpTransSearchAddTrans(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), v53, v52, 0, (__int64)&v58);
        v51 = v58;
      }
      if ( KeyData < 0 )
        goto LABEL_142;
      v10 = v51;
      v65 = v51;
      KeyData = 0;
    }
    else
    {
      KeyData = -1072103422;
    }
LABEL_135:
    if ( KeyData >= 0 )
      goto LABEL_4;
LABEL_142:
    CmpUnlockRegistry(v48);
    CmpDetachFromRegistryProcess(&ApcState);
    return (unsigned int)KeyData;
  }
  LayeredKey = CmQueryLayeredKey(a1, a3, a4, a5, (unsigned int *)v56);
  CmpUnlockRegistry(v55);
  CmpDetachFromRegistryProcess(&ApcState);
  return LayeredKey;
}
