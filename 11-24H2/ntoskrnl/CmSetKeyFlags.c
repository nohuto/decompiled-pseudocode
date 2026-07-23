/*
 * XREFs of CmSetKeyFlags @ 0x140963680
 * Callers:
 *     NtSetInformationKey @ 0x140960DB0 (NtSetInformationKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047B08C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x14047F6A0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879FC0 (CmpGetKeyNodeForKcb.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x14087EED4 (CmpRundownUnitOfWork.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140908010 (CmpGetEffectiveKcbSemantics.c)
 *     CmpCleanupKcbStack @ 0x14090AD10 (CmpCleanupKcbStack.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1409634D8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14096360C (CmpTryAcquireKcbIXLocks.c)
 *     CmpCleanupRollbackPacket @ 0x140964460 (CmpCleanupRollbackPacket.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 *     CmAddLogForAction @ 0x140A01858 (CmAddLogForAction.c)
 *     CmpLockIXLockIntent @ 0x140A22FF4 (CmpLockIXLockIntent.c)
 *     CmpAllocateUnitOfWork @ 0x140A230A0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x140A230F8 (CmpLockIXLockExclusive.c)
 *     CmpAbortRollbackPacket @ 0x140AA17AC (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140AB45A0 (CmpRetryBackOff.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140BBBA84 (CmpIsShutdownRundownActive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmSetKeyFlags(_QWORD *a1, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  ULONG_PTR v9; // rsi
  int v10; // edi
  __int64 v11; // rcx
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r9
  __int64 KeyNodeForKcb; // rax
  __int64 v20; // rdx
  int v21; // r14d
  int v22; // r14d
  int v23; // r14d
  __int16 v24; // cx
  __int16 v25; // ax
  __int64 v26; // rcx
  _QWORD *UnitOfWork; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // [rsp+38h] [rbp-49h] BYREF
  __int64 v31; // [rsp+40h] [rbp-41h] BYREF
  int v32; // [rsp+48h] [rbp-39h] BYREF
  __int128 v33; // [rsp+50h] [rbp-31h] BYREF
  __int128 v34; // [rsp+60h] [rbp-21h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+70h] [rbp-11h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-1h] BYREF

  v31 = 0LL;
  v34 = 0LL;
  WORD1(v34) = -1;
  v30 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextInitialize(&v31);
  v32 = 0;
  v33 = 0LL;
  CmpAttachToRegistryProcess(&ApcState);
  if ( a2 == 1 && (a3 & 0xFFFFFFF0) != 0 )
  {
    v10 = -1073741811;
  }
  else
  {
    while ( !(unsigned __int8)CmpIsShutdownRundownActive(v6) )
    {
      v8 = MEMORY[0xFFFFF78000000014];
      CmpLockRegistry(v7);
      v9 = a1[1];
      CmpStartKcbStackForTopLayerKcb((__int64)&v34, v9);
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v34);
      v10 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( v10 < 0 )
        goto LABEL_6;
      if ( a1[7] || a1[8] )
      {
        v10 = CmpTransSearchAddTransFromKeyBody(a1, &v30);
        if ( v10 < 0 )
          goto LABEL_6;
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
        {
          v10 = -1072103423;
          goto LABEL_6;
        }
        v13 = v30;
        v10 = CmpPerformKeyBodyDeletionCheck(a1, v30);
        if ( v10 < 0 )
          goto LABEL_6;
      }
      else
      {
        v13 = v30;
      }
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v9, (__int64)a1) == 1 )
      {
        v10 = -1073741790;
        goto LABEL_6;
      }
      if ( (unsigned int)(a2 - 2) <= 2 )
        v13 = v16;
      v30 = v13;
      if ( v13 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v14);
        v28 = UnitOfWork;
        if ( UnitOfWork )
        {
          CmpTransEnlistUowInKcb(UnitOfWork, v9);
          v10 = CmpTransEnlistUowInCmTrans(v28, v13);
          if ( v10 >= 0 )
          {
            if ( (unsigned __int8)CmpLockIXLockIntent(v9 + 248, v28)
              && (unsigned __int8)CmpLockIXLockExclusive(v9 + 264, v28, 1LL) )
            {
              *((_DWORD *)v28 + 17) = 7;
              *((_DWORD *)v28 + 22) = a3;
              v10 = CmAddLogForAction(v28, 1LL);
              if ( v10 >= 0 )
              {
                v10 = 0;
                goto LABEL_6;
              }
            }
            else
            {
              v10 = -1072103423;
            }
          }
          CmpRundownUnitOfWork(v28);
          ExFreePoolWithTag(v28, 0x77554D43u);
          goto LABEL_6;
        }
        v10 = -1073741670;
LABEL_6:
        CmpUnlockKcbStack((__int64)&v34);
LABEL_7:
        CmpUnlockRegistry(v11);
        goto LABEL_8;
      }
      v17 = CmpTryAcquireKcbIXLocks(v9, 0, v15, (unsigned int *)&v33);
      v10 = v17;
      if ( v17 == -1073741267 )
      {
        CmpLogTransactionAbortedWithChildName(v9, 0LL, 3, v18, v33);
        CmpUnlockKcbStack((__int64)&v34);
        CmpUnlockRegistry(v29);
        v10 = CmpAbortRollbackPacket(&v33, 0LL);
        if ( v10 < 0 )
          goto LABEL_8;
        CmpRetryBackOff(&v32);
        CmpCleanupRollbackPacket(&v33);
        v33 = 0LL;
      }
      else
      {
        if ( v17 < 0 )
          goto LABEL_6;
        if ( *(_DWORD *)(v9 + 40) != -1 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
          v10 = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40), 0);
          if ( v10 >= 0 )
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v9, (unsigned int *)&v31, 1);
            v20 = KeyNodeForKcb;
            v21 = a2 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  if ( v23 == 1 )
                  {
                    *(_BYTE *)(KeyNodeForKcb + 55) = a3;
                    *(_BYTE *)(v9 + 185) = a3;
                  }
                }
                else
                {
                  v24 = *(_WORD *)(KeyNodeForKcb + 2);
                  if ( (a3 & 4) != 0 )
                  {
                    v25 = 128;
                    *(_WORD *)(v20 + 2) = v24 | 0x80;
LABEL_52:
                    *(_WORD *)(v9 + 186) |= v25;
                  }
                  else
                  {
                    if ( (a3 & 1) != 0 )
                    {
                      *(_WORD *)(KeyNodeForKcb + 2) = v24 | 0x300;
                      *(_WORD *)(v9 + 186) |= 0x300u;
                    }
                    else
                    {
                      *(_WORD *)(KeyNodeForKcb + 2) = v24 & 0xFEFF;
                      *(_WORD *)(v9 + 186) &= ~0x100u;
                    }
                    if ( (a3 & 2) != 0 )
                    {
                      v25 = 512;
                      *(_WORD *)(v20 + 2) |= 0x200u;
                      goto LABEL_52;
                    }
                  }
                }
              }
              else
              {
                *(_DWORD *)(KeyNodeForKcb + 52) ^= (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 20)) & 0xF00000;
                *(_DWORD *)(v9 + 184) ^= ((unsigned __int8)*(_DWORD *)(v9 + 184) ^ (unsigned __int8)*(_WORD *)(KeyNodeForKcb + 54)) & 0xF0;
                if ( (a3 & 2) != 0 )
                {
                  *(_WORD *)(KeyNodeForKcb + 2) &= ~0x80u;
                  *(_WORD *)(v9 + 186) = *(_WORD *)(KeyNodeForKcb + 2);
                }
              }
            }
            else
            {
              *(_DWORD *)(KeyNodeForKcb + 52) ^= (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 16)) & 0xF0000;
              *(_DWORD *)(v9 + 184) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(v9 + 184)) & 0xF;
            }
            *(_QWORD *)(v20 + 4) = v8;
            v10 = 0;
            ++*(_QWORD *)(v9 + 304);
            *(_QWORD *)(v9 + 168) = v8;
            v26 = *(_QWORD *)(v9 + 32);
            if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v26, (__int64)&v31);
            else
              HvpReleaseCellPaged(v26, (unsigned int *)&v31);
          }
          HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
          goto LABEL_6;
        }
        CmpUnlockKcbStack((__int64)&v34);
        v10 = CmpPromoteKey(&v34, 0LL, 0LL);
        if ( v10 < 0 )
          goto LABEL_7;
        CmpUnlockRegistry(v11);
        CmpCleanupKcbStack((__int64)&v34);
        v34 = 0LL;
        WORD1(v34) = -1;
        *(_OWORD *)Privileges = 0LL;
      }
    }
    v10 = -1073741431;
  }
LABEL_8:
  CmpDetachFromRegistryProcess(&ApcState);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket(&v33);
  return (unsigned int)v10;
}
