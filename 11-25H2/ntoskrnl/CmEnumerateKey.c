/*
 * XREFs of CmEnumerateKey @ 0x14087C630
 * Callers:
 *     CmEnumerateKeyCallout @ 0x1407BFC20 (CmEnumerateKeyCallout.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140870454 (CmpTransSearchAddTransFromKeyBody.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpQueryKeyDataFromNode @ 0x14087CC80 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x14087D350 (CmpFindSubKeyByNumberEx.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140A9B4D4 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmEnumerateKey(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  ULONG_PTR v8; // rdi
  __int64 v11; // rcx
  ULONG_PTR v12; // r14
  char v13; // r12
  ULONG_PTR v14; // r13
  ULONG_PTR v15; // rcx
  int SubKeyByNumber; // ebx
  ULONG_PTR v17; // rsi
  __int64 *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ebx
  __int64 CellFlat; // rax
  __int64 v23; // r15
  __int64 CellPaged; // rax
  ULONG_PTR v25; // rcx
  __int64 v26; // rcx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  ULONG_PTR v30; // rsi
  unsigned int v31; // r14d
  int v32; // edi
  int v33; // r12d
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // ecx
  ULONG_PTR v37; // rbx
  __int64 v38; // rcx
  __int16 v39; // cx
  __int16 v40; // cx
  __int64 *v41; // rcx
  int v42; // edx
  int v43; // r10d
  __int16 v44; // ax
  __int16 v45; // ax
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-A0h] BYREF
  int v49; // [rsp+70h] [rbp-98h]
  int v50; // [rsp+74h] [rbp-94h]
  __int64 v51; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR v52; // [rsp+80h] [rbp-88h] BYREF
  __int64 v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]
  __int64 v55; // [rsp+98h] [rbp-70h] BYREF
  __int64 v56[2]; // [rsp+A0h] [rbp-68h] BYREF
  char v57[8]; // [rsp+B0h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B8h] [rbp-50h] BYREF

  v8 = 0LL;
  v54 = a5;
  v50 = a4;
  v49 = a3;
  v53 = a7;
  LODWORD(BugCheckParameter4) = 0;
  v46 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v52 = 0LL;
  *(_OWORD *)v56 = 0LL;
  HvpGetCellContextInitialize(&v46);
  v48 = 0LL;
  v51 = 0LL;
  v55 = 0LL;
  CmpInitializeDelayDerefContext(v56);
  CmpAttachToRegistryProcess(&ApcState);
  if ( !*(_WORD *)(a1[1] + 66LL) )
  {
    if ( a1[7] || a1[8] )
      CmpLockRegistryExclusive(v11);
    else
      CmpLockRegistry(v11);
    v12 = a1[1];
    v13 = 1;
    if ( !a2 )
    {
      v14 = 0LL;
LABEL_7:
      if ( !v12 )
      {
LABEL_10:
        SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
        if ( SubKeyByNumber < 0 )
          goto LABEL_36;
        if ( a1[7] || a1[8] )
        {
          SubKeyByNumber = CmpTransSearchAddTransFromKeyBody(a1, &v48);
          if ( SubKeyByNumber < 0 )
            goto LABEL_36;
          SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, v48);
          if ( SubKeyByNumber < 0 )
            goto LABEL_36;
        }
        if ( a2 )
        {
          SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a2, v48);
          if ( SubKeyByNumber < 0 )
            goto LABEL_36;
        }
        else if ( !CmpVEEnabled || (*(_DWORD *)(v12 + 184) & 0x1000000) == 0 )
        {
          v17 = *(_QWORD *)(v12 + 32);
          v52 = v17;
          if ( v48 )
          {
            v18 = &v51;
            v19 = v14;
            v20 = v12;
          }
          else
          {
            v18 = 0LL;
            v19 = 0LL;
            v20 = 0LL;
          }
          SubKeyByNumber = CmpFindSubKeyByNumberEx(v17, v20, v19, v48, (__int64)v56, (__int64)v18);
          if ( SubKeyByNumber < 0 )
            goto LABEL_95;
          goto LABEL_19;
        }
        v41 = &v51;
        if ( !v48 )
          v41 = 0LL;
        if ( a2 )
        {
          v42 = v12;
          v43 = v14;
        }
        else
        {
          v42 = 0;
          v43 = v12;
        }
        SubKeyByNumber = CmpFindSubKeyByNumberFromMergedView(
                           v43,
                           v42,
                           v49,
                           v48,
                           (__int64)v56,
                           (__int64)&v52,
                           (__int64)&BugCheckParameter4,
                           (__int64)v41,
                           (__int64)v57);
        if ( SubKeyByNumber < 0 )
          goto LABEL_95;
        v17 = v52;
LABEL_19:
        v21 = BugCheckParameter4;
        if ( (_DWORD)BugCheckParameter4 != -1 )
        {
          if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v17, (unsigned int)BugCheckParameter4, &v46);
          else
            CellFlat = HvpGetCellPaged(v17, BugCheckParameter4, &v46);
          v23 = CellFlat;
          if ( (*(_DWORD *)(v17 + 160) & 0x8001) == 0
            && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
          {
            if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v17, &v46);
            else
              HvpReleaseCellPaged(v17, (unsigned int *)&v46);
            HvLockHiveFlusherShared(v17);
            if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
              CellPaged = HvpGetCellFlat(v17, v21, &v46);
            else
              CellPaged = HvpGetCellPaged(v17, v21, &v46);
            v23 = CellPaged;
            if ( (*(_DWORD *)(v17 + 160) & 0x8001) == 0
              && (*(_BYTE *)(CellPaged + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
              && (int)HvpMarkCellDirty(v17, v21, 0) >= 0 )
            {
              *(_BYTE *)(v23 + 12) |= CmpAccessBitForPhase;
            }
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v17 + 72));
            KeAbPostRelease(v17 + 72);
            v17 = v52;
          }
          v8 = v51;
          SubKeyByNumber = CmpQueryKeyDataFromNode(v17, a6, v53, v51, v48);
          if ( v23 )
          {
            if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v17, &v46);
            else
              HvpReleaseCellPaged(v17, (unsigned int *)&v46);
          }
LABEL_36:
          if ( !v14 )
          {
            if ( !v12 )
              goto LABEL_40;
            v25 = v12;
            goto LABEL_39;
          }
          if ( !v12 || v14 == v12 )
          {
LABEL_54:
            v25 = v14;
LABEL_39:
            CmpUnlockKcb(v25);
            goto LABEL_40;
          }
          v28 = (*(_DWORD *)(v14 + 8) >> 21) & 0x3FF;
          v29 = (*(_DWORD *)(v12 + 8) >> 21) & 0x3FF;
          if ( v28 <= v29 )
          {
            if ( v28 < v29 )
              goto LABEL_61;
            v39 = *(_WORD *)(v14 + 186);
            if ( (v39 & 4) == 0 || (*(_DWORD *)(v12 + 184) & 0x20000) == 0 )
            {
              if ( (v39 & 2) == 0 || (*(_DWORD *)(v12 + 184) & 0x40000) == 0 )
              {
                v45 = *(_WORD *)(v14 + 66);
                if ( v45 > *(__int16 *)(v12 + 66) )
                {
                  v30 = v12;
                  goto LABEL_62;
                }
                if ( v45 >= *(__int16 *)(v12 + 66) && v14 > v12 )
                {
                  v30 = v12;
                  goto LABEL_62;
                }
              }
LABEL_61:
              v30 = v14;
              v14 = v12;
LABEL_62:
              CmpUnlockKcb(v14);
              v14 = v30;
              goto LABEL_54;
            }
          }
          CmpUnlockKcb(v14);
          v14 = v12;
          goto LABEL_54;
        }
        SubKeyByNumber = -2147483622;
LABEL_95:
        v8 = v51;
        goto LABEL_36;
      }
      v15 = a1[1];
LABEL_9:
      CmpLockKcbShared(v15);
      goto LABEL_10;
    }
    v14 = *(_QWORD *)(a2 + 8);
    if ( !v14 )
      goto LABEL_7;
    if ( !v12 )
    {
      v15 = *(_QWORD *)(a2 + 8);
      goto LABEL_9;
    }
    if ( v14 == v12 )
    {
      v15 = *(_QWORD *)(a2 + 8);
      goto LABEL_9;
    }
    v35 = (*(_DWORD *)(v14 + 8) >> 21) & 0x3FF;
    v36 = (*(_DWORD *)(v12 + 8) >> 21) & 0x3FF;
    if ( v35 <= v36 )
    {
      if ( v35 < v36 )
        goto LABEL_73;
      v40 = *(_WORD *)(v14 + 186);
      if ( (v40 & 4) == 0 || (*(_DWORD *)(v12 + 184) & 0x20000) == 0 )
      {
        if ( (v40 & 2) == 0 || (*(_DWORD *)(v12 + 184) & 0x40000) == 0 )
        {
          v44 = *(_WORD *)(v14 + 66);
          if ( v44 > *(__int16 *)(v12 + 66) )
          {
            v38 = a1[1];
            v37 = *(_QWORD *)(a2 + 8);
            goto LABEL_74;
          }
          if ( v44 >= *(__int16 *)(v12 + 66) && v14 > v12 )
          {
            v38 = a1[1];
            v37 = *(_QWORD *)(a2 + 8);
            goto LABEL_74;
          }
        }
LABEL_73:
        v37 = a1[1];
        v38 = *(_QWORD *)(a2 + 8);
LABEL_74:
        CmpLockKcbShared(v38);
        v15 = v37;
        goto LABEL_9;
      }
    }
    CmpLockKcbShared(a1[1]);
    v15 = v14;
    goto LABEL_9;
  }
  v31 = 0;
  v32 = v50;
  v33 = v54;
  do
  {
    v34 = CmpEnumerateLayeredKey((_DWORD)a1, a3, v32, v33, a6, v53, (__int64)&v55, v31++ <= 0xA);
    SubKeyByNumber = v34;
  }
  while ( v34 == -1073741267 );
  v8 = 0LL;
  v13 = 0;
LABEL_40:
  if ( v8 )
    CmpDereferenceKeyControlBlock(v8);
  CmpDrainDelayDerefContext((_QWORD **)v56);
  if ( v13 )
    CmpUnlockRegistry(v26);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)SubKeyByNumber;
}
