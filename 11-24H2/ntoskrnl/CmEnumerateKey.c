/*
 * XREFs of CmEnumerateKey @ 0x140880800
 * Callers:
 *     CmEnumerateKeyCallout @ 0x1406F3100 (CmEnumerateKeyCallout.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14087F9B0 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpQueryKeyDataFromNode @ 0x140880E50 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x140881510 (CmpFindSubKeyByNumberEx.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmEnumerateKey(_QWORD *a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  ULONG_PTR v7; // rdi
  __int64 v11; // rcx
  ULONG_PTR v12; // rsi
  char v13; // r12
  ULONG_PTR v14; // r13
  ULONG_PTR v15; // rcx
  int SubKeyByNumber; // ebx
  ULONG_PTR v17; // r14
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // ebx
  __int64 CellFlat; // rax
  __int64 v23; // r15
  __int64 CellPaged; // rax
  ULONG_PTR v25; // rcx
  __int64 v26; // rcx
  unsigned int v28; // esi
  int v29; // edi
  int v30; // r12d
  int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // ecx
  ULONG_PTR v34; // r14
  unsigned int v35; // eax
  unsigned int v36; // ecx
  ULONG_PTR v37; // rbx
  __int64 v38; // rcx
  __int16 v39; // cx
  __int16 v40; // cx
  __int64 *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r10
  __int16 v44; // ax
  __int16 v45; // ax
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-98h]
  int v50; // [rsp+74h] [rbp-94h]
  __int64 v51; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR v52; // [rsp+80h] [rbp-88h] BYREF
  __int64 v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]
  __int64 v55; // [rsp+98h] [rbp-70h] BYREF
  __int64 v56[2]; // [rsp+A0h] [rbp-68h] BYREF
  int v57; // [rsp+B0h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B8h] [rbp-50h] BYREF

  v7 = 0LL;
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
            goto LABEL_94;
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
          v42 = 0LL;
          v43 = v12;
        }
        SubKeyByNumber = CmpFindSubKeyByNumberFromMergedView(
                           v43,
                           v42,
                           v49,
                           v48,
                           (__int64)v56,
                           &v52,
                           (unsigned int *)&BugCheckParameter4,
                           (ULONG_PTR *)v41,
                           &v57);
        if ( SubKeyByNumber < 0 )
          goto LABEL_94;
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
          v7 = v51;
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
LABEL_53:
            v25 = v14;
LABEL_39:
            CmpUnlockKcb(v25);
            goto LABEL_40;
          }
          v32 = (*(_DWORD *)(v14 + 8) >> 21) & 0x3FF;
          v33 = (*(_DWORD *)(v12 + 8) >> 21) & 0x3FF;
          if ( v32 <= v33 )
          {
            if ( v32 < v33 )
              goto LABEL_63;
            v39 = *(_WORD *)(v14 + 186);
            if ( (v39 & 4) == 0 || (*(_DWORD *)(v12 + 184) & 0x20000) == 0 )
            {
              if ( (v39 & 2) == 0 || (*(_DWORD *)(v12 + 184) & 0x40000) == 0 )
              {
                v45 = *(_WORD *)(v14 + 66);
                if ( v45 > *(__int16 *)(v12 + 66) )
                {
                  v34 = v12;
                  goto LABEL_64;
                }
                if ( v45 >= *(__int16 *)(v12 + 66) && v14 > v12 )
                {
                  v34 = v12;
                  goto LABEL_64;
                }
              }
LABEL_63:
              v34 = v14;
              v14 = v12;
LABEL_64:
              CmpUnlockKcb(v14);
              v14 = v34;
              goto LABEL_53;
            }
          }
          CmpUnlockKcb(v14);
          v14 = v12;
          goto LABEL_53;
        }
        SubKeyByNumber = -2147483622;
LABEL_94:
        v7 = v51;
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
        goto LABEL_72;
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
            goto LABEL_73;
          }
          if ( v44 >= *(__int16 *)(v12 + 66) && v14 > v12 )
          {
            v38 = a1[1];
            v37 = *(_QWORD *)(a2 + 8);
            goto LABEL_73;
          }
        }
LABEL_72:
        v37 = a1[1];
        v38 = *(_QWORD *)(a2 + 8);
LABEL_73:
        CmpLockKcbShared(v38);
        v15 = v37;
        goto LABEL_9;
      }
    }
    CmpLockKcbShared(a1[1]);
    v15 = v14;
    goto LABEL_9;
  }
  v28 = 0;
  v29 = v50;
  v30 = v54;
  do
  {
    v31 = CmpEnumerateLayeredKey((_DWORD)a1, a3, v29, v30, a6, v53, (__int64)&v55, v28++ <= 0xA);
    SubKeyByNumber = v31;
  }
  while ( v31 == -1073741267 );
  v7 = 0LL;
  v13 = 0;
LABEL_40:
  if ( v7 )
    CmpDereferenceKeyControlBlock(v7);
  CmpDrainDelayDerefContext((_QWORD **)v56);
  if ( v13 )
    CmpUnlockRegistry(v26);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)SubKeyByNumber;
}
