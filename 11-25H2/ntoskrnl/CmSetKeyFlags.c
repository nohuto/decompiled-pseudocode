/*
 * XREFs of CmSetKeyFlags @ 0x1408640B0
 * Callers:
 *     NtSetInformationKey @ 0x140862E30 (NtSetInformationKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047F774 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404838EC (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140863F7C (CmpLogTransactionAbortedWithChildName.c)
 *     CmpCleanupRollbackPacket @ 0x140865348 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x140865768 (CmpTryAcquireKcbIXLocks.c)
 *     CmAddLogForAction @ 0x140868A1C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14086901C (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140869074 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140869120 (CmpLockIXLockExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086B298 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14086D4B0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140870454 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879920 (CmpGetKeyNodeForKcb.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     CmpRundownUnitOfWork @ 0x140885C90 (CmpRundownUnitOfWork.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpPromoteKey @ 0x140972D04 (CmpPromoteKey.c)
 *     CmpCleanupKcbStack @ 0x140975FA0 (CmpCleanupKcbStack.c)
 *     CmpAbortRollbackPacket @ 0x140AA1760 (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140AB50F4 (CmpRetryBackOff.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140BA9B0C (CmpIsShutdownRundownActive.c)
 */

__int64 __fastcall CmSetKeyFlags(_QWORD *a1, int a2, int a3)
{
  __int128 v3; // xmm0
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  int v11; // edi
  __int64 v12; // rcx
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 KeyNodeForKcb; // rax
  __int64 v22; // rdx
  int v23; // r14d
  int v24; // r14d
  int v25; // r14d
  __int16 v26; // cx
  __int16 v27; // ax
  __int64 v28; // rcx
  _QWORD *UnitOfWork; // rax
  ULONG_PTR v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // [rsp+38h] [rbp-49h] BYREF
  __int64 v33; // [rsp+40h] [rbp-41h] BYREF
  int v34; // [rsp+48h] [rbp-39h] BYREF
  __int128 v35; // [rsp+50h] [rbp-31h] BYREF
  __int128 v36; // [rsp+60h] [rbp-21h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+70h] [rbp-11h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-1h] BYREF

  v3 = 0LL;
  v33 = 0LL;
  v36 = 0LL;
  WORD1(v36) = -1;
  v32 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)Privileges = 0LL;
  *(double *)&v3 = HvpGetCellContextInitialize(&v33);
  v34 = 0;
  v35 = v3;
  CmpAttachToRegistryProcess(&ApcState);
  if ( a2 == 1 && (a3 & 0xFFFFFFF0) != 0 )
  {
    v11 = -1073741811;
  }
  else
  {
    while ( !(unsigned __int8)CmpIsShutdownRundownActive(v7) )
    {
      v9 = MEMORY[0xFFFFF78000000014];
      CmpLockRegistry(v8);
      v10 = a1[1];
      CmpStartKcbStackForTopLayerKcb(&v36, v10);
      CmpLockKcbStackTopExclusiveRestShared(&v36);
      v11 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( v11 < 0 )
        goto LABEL_6;
      if ( a1[7] || a1[8] )
      {
        v11 = CmpTransSearchAddTransFromKeyBody(a1, &v32);
        if ( v11 < 0 )
          goto LABEL_6;
        if ( (*(_DWORD *)(*(_QWORD *)(v10 + 32) + 160LL) & 2) != 0 )
        {
          v11 = -1072103423;
          goto LABEL_6;
        }
        v14 = v32;
        v11 = CmpPerformKeyBodyDeletionCheck(a1, v32);
        if ( v11 < 0 )
          goto LABEL_6;
      }
      else
      {
        v14 = v32;
      }
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v10, a1) == 1 )
      {
        v11 = -1073741790;
        goto LABEL_6;
      }
      if ( (unsigned int)(a2 - 2) <= 2 )
        v14 = v17;
      v32 = v14;
      if ( v14 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v15);
        v30 = (ULONG_PTR)UnitOfWork;
        if ( UnitOfWork )
        {
          CmpTransEnlistUowInKcb(UnitOfWork, v10);
          v11 = CmpTransEnlistUowInCmTrans((_QWORD *)v30, v14);
          if ( v11 >= 0 )
          {
            if ( (unsigned __int8)CmpLockIXLockIntent(v10 + 248, v30)
              && (unsigned __int8)CmpLockIXLockExclusive(v10 + 264, v30, 1LL) )
            {
              *(_DWORD *)(v30 + 68) = 7;
              *(_DWORD *)(v30 + 88) = a3;
              v11 = CmAddLogForAction(v30, 1LL);
              if ( v11 >= 0 )
              {
                v11 = 0;
                goto LABEL_6;
              }
            }
            else
            {
              v11 = -1072103423;
            }
          }
          CmpRundownUnitOfWork(v30);
          ExFreePoolWithTag((PVOID)v30, 0x77554D43u);
          goto LABEL_6;
        }
        v11 = -1073741670;
LABEL_6:
        CmpUnlockKcbStack(&v36);
LABEL_7:
        CmpUnlockRegistry(v12);
        goto LABEL_8;
      }
      v18 = CmpTryAcquireKcbIXLocks(v10, 0LL, v16, &v35);
      v11 = v18;
      if ( v18 == -1073741267 )
      {
        CmpLogTransactionAbortedWithChildName(v10, 0LL, 3, v19, v35);
        CmpUnlockKcbStack(&v36);
        CmpUnlockRegistry(v31);
        v11 = CmpAbortRollbackPacket(&v35, 0LL);
        if ( v11 < 0 )
          goto LABEL_8;
        CmpRetryBackOff(&v34);
        CmpCleanupRollbackPacket(&v35);
        v35 = 0LL;
      }
      else
      {
        if ( v18 < 0 )
          goto LABEL_6;
        if ( *(_DWORD *)(v10 + 40) != -1 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v10 + 32));
          v11 = HvpMarkCellDirty(*(_QWORD *)(v10 + 32), *(unsigned int *)(v10 + 40));
          if ( v11 >= 0 )
          {
            LOBYTE(v20) = 1;
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v10, &v33, v20);
            v22 = KeyNodeForKcb;
            v23 = a2 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  if ( v25 == 1 )
                  {
                    *(_BYTE *)(KeyNodeForKcb + 55) = a3;
                    *(_BYTE *)(v10 + 185) = a3;
                  }
                }
                else
                {
                  v26 = *(_WORD *)(KeyNodeForKcb + 2);
                  if ( (a3 & 4) != 0 )
                  {
                    v27 = 128;
                    *(_WORD *)(v22 + 2) = v26 | 0x80;
LABEL_52:
                    *(_WORD *)(v10 + 186) |= v27;
                  }
                  else
                  {
                    if ( (a3 & 1) != 0 )
                    {
                      *(_WORD *)(KeyNodeForKcb + 2) = v26 | 0x300;
                      *(_WORD *)(v10 + 186) |= 0x300u;
                    }
                    else
                    {
                      *(_WORD *)(KeyNodeForKcb + 2) = v26 & 0xFEFF;
                      *(_WORD *)(v10 + 186) &= ~0x100u;
                    }
                    if ( (a3 & 2) != 0 )
                    {
                      v27 = 512;
                      *(_WORD *)(v22 + 2) |= 0x200u;
                      goto LABEL_52;
                    }
                  }
                }
              }
              else
              {
                *(_DWORD *)(KeyNodeForKcb + 52) ^= (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 20)) & 0xF00000;
                *(_DWORD *)(v10 + 184) ^= ((unsigned __int8)*(_DWORD *)(v10 + 184) ^ (unsigned __int8)*(_WORD *)(KeyNodeForKcb + 54)) & 0xF0;
                if ( (a3 & 2) != 0 )
                {
                  *(_WORD *)(KeyNodeForKcb + 2) &= ~0x80u;
                  *(_WORD *)(v10 + 186) = *(_WORD *)(KeyNodeForKcb + 2);
                }
              }
            }
            else
            {
              *(_DWORD *)(KeyNodeForKcb + 52) ^= (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 16)) & 0xF0000;
              *(_DWORD *)(v10 + 184) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(v10 + 184)) & 0xF;
            }
            *(_QWORD *)(v22 + 4) = v9;
            v11 = 0;
            ++*(_QWORD *)(v10 + 304);
            *(_QWORD *)(v10 + 168) = v9;
            v28 = *(_QWORD *)(v10 + 32);
            if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v28, &v33);
            else
              HvpReleaseCellPaged(v28, &v33);
          }
          HvUnlockHiveFlusherShared(*(_QWORD *)(v10 + 32));
          goto LABEL_6;
        }
        CmpUnlockKcbStack(&v36);
        v11 = CmpPromoteKey(&v36, 0LL, 0LL);
        if ( v11 < 0 )
          goto LABEL_7;
        CmpUnlockRegistry(v12);
        CmpCleanupKcbStack(&v36);
        v36 = 0LL;
        WORD1(v36) = -1;
        *(_OWORD *)Privileges = 0LL;
      }
    }
    v11 = -1073741431;
  }
LABEL_8:
  CmpDetachFromRegistryProcess(&ApcState);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket(&v35);
  return (unsigned int)v11;
}
