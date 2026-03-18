/*
 * XREFs of MiReserveUserMemory @ 0x1408DFE98
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiReferenceVad @ 0x140262A70 (MiReferenceVad.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     MiDecrementVadsBeingDeleted @ 0x140274480 (MiDecrementVadsBeingDeleted.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiSetVadDeleted @ 0x1402B94A0 (MiSetVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiMapUserLargePages @ 0x14036E280 (MiMapUserLargePages.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     MiUpdateVadStartVpn @ 0x140449454 (MiUpdateVadStartVpn.c)
 *     MiFindPlaceholderVadToReplace @ 0x140497E8C (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1404CDEA0 (MiUnlockAndDereferenceNestedVad.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     MiSelectUserAddress @ 0x1408E15D0 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x1408E25B0 (MiAdvanceVadHint.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiCreatePlaceholderStorage @ 0x1408F8210 (MiCreatePlaceholderStorage.c)
 *     MiCommitVadMetadataBits @ 0x1408FA9B0 (MiCommitVadMetadataBits.c)
 *     MiReleaseVadEventBlocks @ 0x1409B0550 (MiReleaseVadEventBlocks.c)
 *     MiCreateWriteWatchView @ 0x1409C39A4 (MiCreateWriteWatchView.c)
 *     MiAddSecureEntry @ 0x1409C3F30 (MiAddSecureEntry.c)
 *     MiSecureVad @ 0x1409EA8FC (MiSecureVad.c)
 *     MiArbitraryCodeBlocked @ 0x140A13140 (MiArbitraryCodeBlocked.c)
 *     MiIsVaRangeAvailable @ 0x140A139AC (MiIsVaRangeAvailable.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A6753C (MiPreparePlaceholderVadReplacement.c)
 *     MiCreateRotateView @ 0x140A680A8 (MiCreateRotateView.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7084C (MiFinishPlaceholderVadReplacement.c)
 *     MiCreateLargePageVad @ 0x140A82E50 (MiCreateLargePageVad.c)
 *     MiLogReserveVaFailed @ 0x140A901E0 (MiLogReserveVaFailed.c)
 *     MiStoreGraphicsProtectionInVad @ 0x140AC0730 (MiStoreGraphicsProtectionInVad.c)
 *     MiCreateUserPhysicalView @ 0x140AE76D8 (MiCreateUserPhysicalView.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveUserMemory(_QWORD *a1, _QWORD *a2, unsigned int a3, unsigned __int64 *a4, _WORD *a5)
{
  int v5; // r12d
  void *PlaceholderVadToReplace; // r13
  int v9; // r15d
  bool v10; // zf
  __int64 v11; // rdi
  __int64 Pool; // rax
  __int64 v13; // r14
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  __int64 v21; // rcx
  _WORD *ProcessPartition; // rax
  int v23; // r8d
  int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  unsigned __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r10
  int v30; // eax
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // edi
  unsigned __int64 v34; // r12
  __int64 v35; // rcx
  unsigned __int64 v36; // r12
  struct _KTHREAD *v37; // rbx
  int v38; // eax
  __int64 result; // rax
  struct _KTHREAD *v40; // r15
  int v41; // ecx
  int v42; // edx
  __int64 v43; // r8
  int v44; // r9d
  signed int v45; // eax
  __int64 v46; // rdx
  signed int v47; // ebx
  _QWORD *v48; // rax
  _QWORD *v49; // rdi
  __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rax
  _WORD **v53; // r15
  int v54; // ecx
  __int64 v55; // rax
  int LargePageVad; // [rsp+50h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-28h]
  unsigned __int64 v58; // [rsp+60h] [rbp-20h] BYREF
  __int64 v59; // [rsp+68h] [rbp-18h]
  __int64 v60; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v61; // [rsp+78h] [rbp-8h]
  _QWORD *v62; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v63; // [rsp+D0h] [rbp+50h]
  unsigned __int64 *v64; // [rsp+D8h] [rbp+58h]

  v64 = a4;
  v63 = a3;
  v62 = a2;
  v5 = 0;
  LargePageVad = 0;
  PlaceholderVadToReplace = 0LL;
  if ( a2 == (_QWORD *)1 )
    return 3221225485LL;
  v9 = 8;
  v10 = a1[1] - *a1 + 1LL == a1[3];
  v59 = *(_QWORD *)(a1[11] + 1040LL) + 768LL;
  if ( !v10 )
    v9 = 0;
  if ( (*((_DWORD *)a1 + 11) & 0x88) != 0 )
    return 3221225541LL;
  if ( (a1[8] & 0x20000000) != 0 && (MiFlags & 0x80000) == 0
    || (a3 & 2) == 0
    || (result = MiArbitraryCodeBlocked(a1[12]), LargePageVad = result, (int)result >= 0) )
  {
    v11 = (a1[3] >> 12) + ((a1[3] & 0xFFFLL) != 0);
    v58 = v11;
    Pool = MiAllocatePool(0x40uLL, 0x40uLL, 1399087446);
    v13 = Pool;
    if ( !Pool )
      return 3221225626LL;
    v14 = *((_DWORD *)a1 + 13);
    *(_QWORD *)(Pool + 16) = -2LL;
    *(_QWORD *)Pool = -2LL;
    *(_QWORD *)(Pool + 8) = -2LL;
    v15 = *(_DWORD *)(Pool + 48);
    *(_QWORD *)(v13 + 40) = 0LL;
    v16 = v15 ^ (v15 ^ (v14 << 12)) & 0x7F000;
    *(_DWORD *)(v13 + 48) = v16;
    if ( v14 )
    {
      *(_BYTE *)(*(_QWORD *)(a1[11] + 1040LL) + 1060LL) = 1;
      v16 = *(_DWORD *)(v13 + 48);
    }
    if ( (a1[5] & 0x1000) != 0 )
    {
      v17 = v11;
      v16 |= 0x2000000u;
    }
    else
    {
      v17 = 0LL;
    }
    v18 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)((_WORD)a3 << 7)) & 0xF80;
    v19 = *((_DWORD *)a1 + 16);
    v20 = v18 | 0x200000;
    *(_DWORD *)(v13 + 48) = v20;
    if ( (v19 & 0x40000000) != 0 )
      *(_DWORD *)(v13 + 48) = v20 | 0x10000000;
    if ( (v19 & 1) != 0 )
    {
      v17 = 0x7FFFFFFFELL;
    }
    else if ( (v19 & 0x8000000) != 0 )
    {
      v17 = 0x7FFFFFFFDLL;
    }
    *(_DWORD *)(v13 + 52) = v17;
    *(_BYTE *)(v13 + 34) = BYTE4(v17);
    v21 = a1[11];
    CurrentThread = KeGetCurrentThread();
    ProcessPartition = (_WORD *)MiGetProcessPartition(v21);
    *a5 = *ProcessPartition;
    v24 = v23 & 0x20400000;
    if ( (v23 & 0x20400000) == 0x20000000 )
    {
      v25 = v9 | 0x10;
      v5 = (*((_DWORD *)a1 + 28) >> 4) & 1 | 2;
      goto LABEL_21;
    }
    if ( v24 == 541065216 )
    {
      v5 = 1;
      v25 = v9;
      if ( (a1[14] & 2) != 0 )
        v25 = v9 | 0x10;
LABEL_21:
      if ( v25 >= 0x10 )
      {
        v52 = a1[14];
        if ( (v52 & 4) != 0 )
        {
          if ( (v52 & 0x1A) == 0
            || ((v53 = (_WORD **)v62) == 0LL ? (v55 = MiGetProcessPartition(a1[11])) : (v55 = *v62),
                (*(_DWORD *)(v55 + 4) & 0x20) == 0) )
          {
            v33 = -1073741811;
            goto LABEL_51;
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, *((_BYTE *)a1 + 57)) )
          {
            v33 = -1073741727;
            goto LABEL_51;
          }
          *(_DWORD *)(v13 + 48) |= 0x1000000u;
        }
        else
        {
          v53 = (_WORD **)v62;
        }
        LargePageVad = MiCreateLargePageVad(a1[11], v13, v53, 0LL);
        v33 = LargePageVad;
        if ( LargePageVad < 0 )
        {
LABEL_51:
          v40 = CurrentThread;
LABEL_52:
          if ( (v25 & 2) != 0 )
            UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v40, a1[11]);
          MiReleaseVadEventBlocks(v13, 0LL);
          ExFreePoolWithTag((PVOID)v13, 0);
          return (unsigned int)v33;
        }
        if ( v53 )
          *a5 = **v53;
        v11 = v58;
        if ( (a1[14] & 0x1A) != 0 )
          *(_DWORD *)(v13 + 48) |= 0x800000u;
      }
      v26 = (v5 << 19) | *(_DWORD *)(v13 + 48) & 0xFFE7FFFF;
      v10 = (a1[5] & 0x200000) == 0;
      *(_DWORD *)(v13 + 48) = v26;
      if ( !v10 )
      {
        LargePageVad = MiCreateWriteWatchView(a1[11], v13, v11);
        v33 = LargePageVad;
        if ( LargePageVad < 0 )
          goto LABEL_51;
        v26 = *(_DWORD *)(v13 + 48) | 0x400000;
        *(_DWORD *)(v13 + 48) = v26;
      }
      if ( (a1[14] & 1) != 0 )
      {
        if ( (a1[5] & 0x20400000) != 0x400000 && (v26 & 0xA00000) != 0xA00000 )
        {
          v33 = -1073741637;
          goto LABEL_51;
        }
        if ( *((_DWORD *)a1 + 12) )
        {
LABEL_25:
          v27 = 0LL;
          v58 = 0LL;
          if ( _bittest((const signed __int32 *)a1 + 16, 0x1Au) )
          {
            LargePageVad = MiCreatePlaceholderStorage(v13);
            v33 = LargePageVad;
            if ( LargePageVad < 0 )
              goto LABEL_50;
            LOBYTE(v25) = v25 | 4;
          }
          v28 = a1[11];
          LOBYTE(v25) = v25 | 2;
          v60 = 0LL;
          LOCK_ADDRESS_SPACE((__int64)CurrentThread, v28);
          v29 = a1[11];
          if ( (*(_DWORD *)(v29 + 500) & 0x20) != 0 )
          {
            v33 = -1073741558;
          }
          else
          {
            v30 = *((_DWORD *)a1 + 16);
            v31 = *a1;
            v32 = a1[1];
            if ( (v25 & 8) != 0 )
            {
              if ( (v30 & 0x4000000) != 0 )
              {
                PlaceholderVadToReplace = (void *)MiFindPlaceholderVadToReplace(
                                                    v31,
                                                    v32,
                                                    *((_BYTE *)a1 + 57),
                                                    &LargePageVad);
                if ( !PlaceholderVadToReplace )
                {
                  v33 = LargePageVad;
                  goto LABEL_50;
                }
              }
              else if ( !(unsigned int)MiIsVaRangeAvailable(v29, v31, a1[3], *a1, a1[1]) )
              {
                v33 = -1073741800;
                goto LABEL_50;
              }
              v27 = *a1;
              v34 = a1[1];
              v58 = *a1;
            }
            else
            {
              v33 = MiSelectUserAddress(
                      *((_DWORD *)a1 + 10),
                      v31,
                      v32,
                      a1[3],
                      a1[2],
                      0LL,
                      v63,
                      v30,
                      (__int64)&v60,
                      (__int64)&v58);
              if ( v33 < 0 )
              {
                MiLogReserveVaFailed(a1[3], a1[2], *a1, a1[1]);
                v27 = v58;
                goto LABEL_50;
              }
              v27 = v58;
              v34 = a1[3] + v58 - 1;
            }
            v61 = v27 >> 12;
            MiUpdateVadStartVpn(v13, v27 >> 12);
            v36 = v34 >> 12;
            *(_DWORD *)(v13 + 28) = v36;
            v10 = (a1[14] & 1) == 0;
            *(_BYTE *)(v13 + 33) = BYTE4(v36);
            if ( v10 )
            {
              LargePageVad = MiInsertVadCharges(v35, a1[11]);
              v33 = LargePageVad;
              if ( LargePageVad >= 0 )
              {
                if ( PlaceholderVadToReplace )
                {
                  MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, a1[11], v59);
                  v48 = KeAbPreAcquire(v13 + 40, 0LL);
                  v49 = v48;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 40), 0LL) )
                    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v13 + 40), (__int64)v48, v13 + 40);
                  v27 = v58;
                  v37 = CurrentThread;
                  if ( v49 )
                    *((_BYTE *)v49 + 10) = 1;
                }
                else
                {
                  v37 = CurrentThread;
                  MiLockVad((__int64)CurrentThread, v13);
                }
                MiInsertVad(v13, a1[11], 0);
                if ( v60 )
                  MiAdvanceVadHint(v61, v36);
                if ( !*((_DWORD *)a1 + 30) )
                {
                  v38 = *(_DWORD *)(v13 + 48);
                  if ( ((v38 & 0x200000) == 0 || (v38 & 0x800000) == 0 && (v38 & 0x180000u) < 0x100000) && !a1[9] )
                  {
                    if ( !PlaceholderVadToReplace )
                    {
                      MiUnlockVad((__int64)v37, v13);
                      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v37, a1[11]);
LABEL_43:
                      *v64 = v27;
                      return 0LL;
                    }
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v13 + 40));
                    KeAbPostRelease(v13 + 40);
                    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v37, a1[11]);
                    v27 = v58;
                    goto LABEL_87;
                  }
                }
                UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v37, a1[11]);
                MiReferenceVad(v13);
                v42 = *(_DWORD *)(v13 + 48);
                if ( (v42 & 0x200000) != 0
                  && ((v42 & 0x800000) != 0 || (v42 & 0x180000u) >= 0x100000)
                  && (v42 & 0x2000000) != 0 )
                {
                  v47 = MiMapUserLargePages(v13, *((_DWORD *)a1 + 13), *((_BYTE *)a1 + 56), (__int64)v62);
                  if ( v47 < 0 )
                    goto LABEL_88;
                }
                v43 = *((unsigned int *)a1 + 30);
                if ( (_DWORD)v43 )
                {
                  v47 = MiCommitVadMetadataBits(v13, 0LL, v43);
                  if ( v47 < 0 )
                    goto LABEL_88;
                }
                if ( a1[9] )
                {
                  v10 = (a1[8] & 0x40000000) == 0;
                  v44 = *((_DWORD *)a1 + 17);
                  v62 = 0LL;
                  if ( v10 )
                  {
                    if ( (unsigned int)(v44 - 1) > 1 && v44 != 4 && v44 != -2147483647 )
                    {
                      v47 = -1073741755;
                      goto LABEL_88;
                    }
                    v45 = MiSecureVad(v13, v27, a1[3], v44, 0, (__int64)&v62);
                    v46 = (__int64)v62;
                    v47 = v45;
                  }
                  else
                  {
                    v46 = MiAddSecureEntry(
                            v13,
                            *(_DWORD *)(v13 + 24) << 12,
                            (*(_DWORD *)(v13 + 28) << 12) | 0xFFFu,
                            v44,
                            1);
                    v47 = v46 == 0 ? 0xC000009A : 0;
                  }
                  if ( v47 < 0 )
                  {
LABEL_88:
                    MiDeleteVad((PVOID)v13);
                    if ( PlaceholderVadToReplace )
                      MiFinishPlaceholderVadReplacement(PlaceholderVadToReplace);
                    return (unsigned int)v47;
                  }
                  *(_QWORD *)a1[9] = qword_140E2DA80 ^ a1[11] ^ v46;
                }
                if ( !PlaceholderVadToReplace )
                {
                  MiUnlockAndDereferenceVad((PVOID)v13);
                  goto LABEL_43;
                }
                MiUnlockAndDereferenceNestedVad((PVOID)v13);
LABEL_87:
                MiSetVadDeleted((__int64)PlaceholderVadToReplace);
                MiDeleteVad(PlaceholderVadToReplace);
                MiDecrementVadsBeingDeleted(v59);
                goto LABEL_43;
              }
            }
            else
            {
              MiStoreGraphicsProtectionInVad(v35, *((unsigned int *)a1 + 12));
              v33 = -1073741637;
            }
          }
LABEL_50:
          *v64 = v27;
          if ( PlaceholderVadToReplace )
          {
            v40 = CurrentThread;
            MiUnlockVad((__int64)CurrentThread, (__int64)PlaceholderVadToReplace);
            goto LABEL_52;
          }
          goto LABEL_51;
        }
      }
      else if ( !*((_DWORD *)a1 + 12) )
      {
        goto LABEL_25;
      }
      v33 = -1073741755;
      goto LABEL_51;
    }
    if ( v24 != 0x400000 )
    {
      v25 = v9;
      if ( (v23 & 0x800000) == 0 )
        goto LABEL_21;
      if ( (unsigned int)MiCreateRotateView(v13) )
      {
        v51 = *(_DWORD *)(v13 + 48) & 0xFFFFFF8F | 0x40;
        goto LABEL_97;
      }
      goto LABEL_122;
    }
    v41 = a3 & 7;
    if ( (a3 & 0xFFFFFFF8) != 0x10 && (v41 == 4 || v41 == 1) )
    {
      v50 = a3;
      if ( (a1[14] & 1) == 0 )
        goto LABEL_95;
      if ( a1[13] )
      {
        v54 = *((_DWORD *)a1 + 12);
        v50 = a3 | 2;
        if ( (v54 & 0x1C000) == 0 )
          v50 = a3;
        if ( (v54 & 0x12000) != 0 )
          v50 = v50 & 0xFFFFFFFA | 4;
LABEL_95:
        LargePageVad = MiCreateUserPhysicalView(v13, v50, a1);
        v25 = v9;
        if ( LargePageVad >= 0 )
        {
          v51 = *(_DWORD *)(v13 + 48) & 0xF7FFFF8F | 0x30;
          *((_DWORD *)a1 + 16) |= 4u;
LABEL_97:
          *(_DWORD *)(v13 + 48) = v51;
          goto LABEL_21;
        }
LABEL_122:
        v33 = -1073741670;
        goto LABEL_51;
      }
    }
    v33 = -1073741755;
    LOBYTE(v25) = v9;
    goto LABEL_51;
  }
  return result;
}
