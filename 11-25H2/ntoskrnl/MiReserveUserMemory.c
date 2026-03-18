/*
 * XREFs of MiReserveUserMemory @ 0x1409012DC
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402A3F10 (MiDecrementVadsBeingDeleted.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiSetVadDeleted @ 0x14031F8D0 (MiSetVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
 *     MiMapUserLargePages @ 0x14040538C (MiMapUserLargePages.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     MiUpdateVadStartVpn @ 0x14044B674 (MiUpdateVadStartVpn.c)
 *     MiFindPlaceholderVadToReplace @ 0x14049EEB8 (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1404CE0C0 (MiUnlockAndDereferenceNestedVad.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiAddSecureEntry @ 0x1408F8CA0 (MiAddSecureEntry.c)
 *     MiCreatePlaceholderStorage @ 0x1408F9230 (MiCreatePlaceholderStorage.c)
 *     MiCreateWriteWatchView @ 0x1408F944C (MiCreateWriteWatchView.c)
 *     MiSelectUserAddress @ 0x1408FF930 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140900910 (MiAdvanceVadHint.c)
 *     MiReleaseVadEventBlocks @ 0x140901E30 (MiReleaseVadEventBlocks.c)
 *     MiIsVaRangeAvailable @ 0x140902548 (MiIsVaRangeAvailable.c)
 *     MiArbitraryCodeBlocked @ 0x140902858 (MiArbitraryCodeBlocked.c)
 *     MiCommitVadMetadataBits @ 0x140906D54 (MiCommitVadMetadataBits.c)
 *     MiSecureVad @ 0x1409F01EC (MiSecureVad.c)
 *     MiCreateRotateView @ 0x140A65608 (MiCreateRotateView.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A68E90 (MiPreparePlaceholderVadReplacement.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7248C (MiFinishPlaceholderVadReplacement.c)
 *     MiCreateLargePageVad @ 0x140A7F47C (MiCreateLargePageVad.c)
 *     MiLogReserveVaFailed @ 0x140A8B44C (MiLogReserveVaFailed.c)
 *     MiStoreGraphicsProtectionInVad @ 0x140ABC43C (MiStoreGraphicsProtectionInVad.c)
 *     MiCreateUserPhysicalView @ 0x140ABCAD0 (MiCreateUserPhysicalView.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveUserMemory(_QWORD *a1, _QWORD *a2, unsigned int a3, unsigned __int64 *a4, _WORD *a5)
{
  int v5; // r12d
  void *PlaceholderVadToReplace; // r13
  int v9; // r15d
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 Pool; // rax
  __int64 v14; // r14
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  _WORD *ProcessPartition; // rax
  int v24; // r8d
  int v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // ecx
  unsigned __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // r10
  int v31; // eax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  int v34; // edi
  unsigned __int64 v35; // r12
  __int64 v36; // rcx
  unsigned __int64 v37; // r12
  struct _KTHREAD *v38; // rbx
  int v39; // eax
  int v40; // ecx
  struct _KTHREAD *v41; // r15
  int v42; // edx
  __int64 v43; // r8
  int v44; // r9d
  signed int v45; // eax
  __int64 v46; // rdx
  signed int v47; // ebx
  __int64 *v48; // rax
  __int64 *v49; // rdi
  __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rax
  _WORD **v53; // r15
  int v54; // ecx
  __int64 v55; // rax
  int UserPhysicalView; // [rsp+50h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-28h]
  unsigned __int64 v58; // [rsp+60h] [rbp-20h] BYREF
  __int64 v59; // [rsp+68h] [rbp-18h]
  unsigned __int64 *v60; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v61; // [rsp+78h] [rbp-8h]
  _QWORD *v62; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v63; // [rsp+D0h] [rbp+50h]
  unsigned __int64 *v64; // [rsp+D8h] [rbp+58h]

  v64 = a4;
  v63 = a3;
  v62 = a2;
  v5 = 0;
  UserPhysicalView = 0;
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
    || (result = MiArbitraryCodeBlocked(a1[12]), UserPhysicalView = result, (int)result >= 0) )
  {
    v12 = (a1[3] >> 12) + ((a1[3] & 0xFFFLL) != 0);
    v58 = v12;
    Pool = MiAllocatePool(0x40uLL, 0x40uLL, 1399087446);
    v14 = Pool;
    if ( !Pool )
      return 3221225626LL;
    v15 = *((_DWORD *)a1 + 13);
    *(_QWORD *)(Pool + 16) = -2LL;
    *(_QWORD *)Pool = -2LL;
    *(_QWORD *)(Pool + 8) = -2LL;
    v16 = *(_DWORD *)(Pool + 48);
    *(_QWORD *)(v14 + 40) = 0LL;
    v17 = v16 ^ (v16 ^ (v15 << 12)) & 0x7F000;
    *(_DWORD *)(v14 + 48) = v17;
    if ( v15 )
    {
      *(_BYTE *)(*(_QWORD *)(a1[11] + 1040LL) + 1060LL) = 1;
      v17 = *(_DWORD *)(v14 + 48);
    }
    if ( (a1[5] & 0x1000) != 0 )
    {
      v18 = v12;
      v17 |= 0x2000000u;
    }
    else
    {
      v18 = 0LL;
    }
    v19 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)((_WORD)a3 << 7)) & 0xF80;
    v20 = *((_DWORD *)a1 + 16);
    v21 = v19 | 0x200000;
    *(_DWORD *)(v14 + 48) = v21;
    if ( (v20 & 0x40000000) != 0 )
      *(_DWORD *)(v14 + 48) = v21 | 0x10000000;
    if ( (v20 & 1) != 0 )
    {
      v18 = 0x7FFFFFFFELL;
    }
    else if ( (v20 & 0x8000000) != 0 )
    {
      v18 = 0x7FFFFFFFDLL;
    }
    *(_DWORD *)(v14 + 52) = v18;
    *(_BYTE *)(v14 + 34) = BYTE4(v18);
    v22 = a1[11];
    CurrentThread = KeGetCurrentThread();
    ProcessPartition = (_WORD *)MiGetProcessPartition(v22);
    *a5 = *ProcessPartition;
    v25 = v24 & 0x20400000;
    if ( (v24 & 0x20400000) == 0x20000000 )
    {
      v26 = v9 | 0x10;
      v5 = (*((_DWORD *)a1 + 28) >> 4) & 1 | 2;
    }
    else
    {
      if ( v25 != 541065216 )
      {
        if ( v25 != 0x400000 )
        {
          v26 = v9;
          if ( (v24 & 0x800000) == 0 )
            goto LABEL_24;
          if ( (unsigned int)MiCreateRotateView(v14) )
          {
            v51 = *(_DWORD *)(v14 + 48) & 0xFFFFFF8F | 0x40;
            goto LABEL_90;
          }
          goto LABEL_121;
        }
        v40 = a3 & 7;
        if ( (a3 & 0xFFFFFFF8) != 0x10 && (v40 == 4 || v40 == 1) )
        {
          v50 = a3;
          if ( (a1[14] & 1) == 0 )
            goto LABEL_88;
          if ( a1[13] )
          {
            v54 = *((_DWORD *)a1 + 12);
            v50 = a3 | 2;
            if ( (v54 & 0x1C000) == 0 )
              v50 = a3;
            if ( (v54 & 0x12000) != 0 )
              v50 = v50 & 0xFFFFFFFA | 4;
LABEL_88:
            UserPhysicalView = MiCreateUserPhysicalView(v14, v50, a1);
            v26 = v9;
            if ( UserPhysicalView >= 0 )
            {
              v51 = *(_DWORD *)(v14 + 48) & 0xF7FFFF8F | 0x30;
              *((_DWORD *)a1 + 16) |= 4u;
LABEL_90:
              *(_DWORD *)(v14 + 48) = v51;
              goto LABEL_24;
            }
LABEL_121:
            v34 = -1073741670;
            goto LABEL_49;
          }
        }
        v34 = -1073741755;
        LOBYTE(v26) = v9;
        goto LABEL_49;
      }
      v5 = 1;
      v26 = v9;
      if ( (a1[14] & 2) != 0 )
        v26 = v9 | 0x10;
    }
LABEL_24:
    if ( v26 >= 0x10 )
    {
      v52 = a1[14];
      if ( (v52 & 4) != 0 )
      {
        if ( (v52 & 0x1A) == 0
          || ((v53 = (_WORD **)v62) == 0LL ? (v55 = MiGetProcessPartition(a1[11])) : (v55 = *v62),
              (*(_DWORD *)(v55 + 4) & 0x20) == 0) )
        {
          v34 = -1073741811;
          goto LABEL_49;
        }
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, *((_BYTE *)a1 + 57)) )
        {
          v34 = -1073741727;
          goto LABEL_49;
        }
        *(_DWORD *)(v14 + 48) |= 0x1000000u;
      }
      else
      {
        v53 = (_WORD **)v62;
      }
      UserPhysicalView = MiCreateLargePageVad(a1[11], v14, v53, 0LL);
      v34 = UserPhysicalView;
      if ( UserPhysicalView < 0 )
      {
LABEL_49:
        v41 = CurrentThread;
LABEL_50:
        if ( (v26 & 2) != 0 )
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v41, a1[11]);
        MiReleaseVadEventBlocks(v14, 0LL);
        ExFreePoolWithTag((PVOID)v14, 0);
        return (unsigned int)v34;
      }
      if ( v53 )
        *a5 = **v53;
      if ( (a1[14] & 0x1A) != 0 )
        *(_DWORD *)(v14 + 48) |= 0x800000u;
    }
    v27 = (v5 << 19) | *(_DWORD *)(v14 + 48) & 0xFFE7FFFF;
    v10 = (a1[5] & 0x200000) == 0;
    *(_DWORD *)(v14 + 48) = v27;
    if ( !v10 )
    {
      UserPhysicalView = MiCreateWriteWatchView(a1[11], v14);
      v34 = UserPhysicalView;
      if ( UserPhysicalView < 0 )
        goto LABEL_49;
      v27 = *(_DWORD *)(v14 + 48) | 0x400000;
      *(_DWORD *)(v14 + 48) = v27;
    }
    if ( (a1[14] & 1) != 0 )
    {
      if ( (a1[5] & 0x20400000) != 0x400000 && (v27 & 0xA00000) != 0xA00000 )
      {
        v34 = -1073741637;
        goto LABEL_49;
      }
      if ( *((_DWORD *)a1 + 12) )
      {
LABEL_28:
        v28 = 0LL;
        v58 = 0LL;
        if ( _bittest((const signed __int32 *)a1 + 16, 0x1Au) )
        {
          UserPhysicalView = MiCreatePlaceholderStorage(v14);
          v34 = UserPhysicalView;
          if ( UserPhysicalView < 0 )
            goto LABEL_58;
          LOBYTE(v26) = v26 | 4;
        }
        v29 = a1[11];
        LOBYTE(v26) = v26 | 2;
        v60 = 0LL;
        LOCK_ADDRESS_SPACE((__int64)CurrentThread, v29);
        v30 = a1[11];
        if ( (*(_DWORD *)(v30 + 500) & 0x20) != 0 )
        {
          v34 = -1073741558;
        }
        else
        {
          v31 = *((_DWORD *)a1 + 16);
          v32 = *a1;
          v33 = a1[1];
          if ( (v26 & 8) != 0 )
          {
            if ( (v31 & 0x4000000) != 0 )
            {
              PlaceholderVadToReplace = (void *)MiFindPlaceholderVadToReplace(
                                                  v32,
                                                  v33,
                                                  *((_BYTE *)a1 + 57),
                                                  &UserPhysicalView);
              if ( !PlaceholderVadToReplace )
              {
                v34 = UserPhysicalView;
                goto LABEL_58;
              }
            }
            else if ( !(unsigned int)MiIsVaRangeAvailable(v30, v32, a1[3], *a1, a1[1]) )
            {
              v34 = -1073741800;
              goto LABEL_58;
            }
            v28 = *a1;
            v35 = a1[1];
            v58 = *a1;
          }
          else
          {
            v34 = MiSelectUserAddress(*((_DWORD *)a1 + 10), v32, v33, a1[3], a1[2], 0LL, v63, v31, &v60, &v58);
            if ( v34 < 0 )
            {
              MiLogReserveVaFailed(a1[3], a1[2], *a1, a1[1]);
              v28 = v58;
              goto LABEL_58;
            }
            v28 = v58;
            v35 = a1[3] + v58 - 1;
          }
          v61 = v28 >> 12;
          MiUpdateVadStartVpn(v14, v28 >> 12);
          v37 = v35 >> 12;
          *(_DWORD *)(v14 + 28) = v37;
          v10 = (a1[14] & 1) == 0;
          *(_BYTE *)(v14 + 33) = BYTE4(v37);
          if ( v10 )
          {
            UserPhysicalView = MiInsertVadCharges(v36, a1[11]);
            v34 = UserPhysicalView;
            if ( UserPhysicalView >= 0 )
            {
              if ( PlaceholderVadToReplace )
              {
                MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, a1[11], v59);
                v48 = KeAbPreAcquire(v14 + 40, 0LL);
                v49 = v48;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 40), 0LL) )
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 + 40), v48, v14 + 40);
                v28 = v58;
                v38 = CurrentThread;
                if ( v49 )
                  *((_BYTE *)v49 + 10) = 1;
              }
              else
              {
                v38 = CurrentThread;
                MiLockVad((__int64)CurrentThread, v14);
              }
              MiInsertVad(v14, a1[11], 0);
              if ( v60 )
                MiAdvanceVadHint(v61, v37, v60);
              if ( !*((_DWORD *)a1 + 30) )
              {
                v39 = *(_DWORD *)(v14 + 48);
                if ( ((v39 & 0x200000) == 0 || (v39 & 0x800000) == 0 && (v39 & 0x180000u) < 0x100000) && !a1[9] )
                {
                  if ( !PlaceholderVadToReplace )
                  {
                    MiUnlockVad((__int64)v38, v14);
                    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v38, a1[11]);
LABEL_46:
                    *v64 = v28;
                    return 0LL;
                  }
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 40));
                  KeAbPostRelease(v14 + 40);
                  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v38, a1[11]);
                  v28 = v58;
                  goto LABEL_85;
                }
              }
              UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v38, a1[11]);
              MiReferenceVad(v14);
              v42 = *(_DWORD *)(v14 + 48);
              if ( (v42 & 0x200000) != 0
                && ((v42 & 0x800000) != 0 || (v42 & 0x180000u) >= 0x100000)
                && (v42 & 0x2000000) != 0 )
              {
                v47 = MiMapUserLargePages(v14, *((_DWORD *)a1 + 13), *((_BYTE *)a1 + 56), (__int64)v62);
                if ( v47 < 0 )
                  goto LABEL_95;
              }
              v43 = *((unsigned int *)a1 + 30);
              if ( (_DWORD)v43 )
              {
                v47 = MiCommitVadMetadataBits(v14, 0LL, v43);
                if ( v47 < 0 )
                  goto LABEL_95;
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
                    goto LABEL_95;
                  }
                  v45 = MiSecureVad(v14, v28, a1[3], v44, 0, (__int64)&v62);
                  v46 = (__int64)v62;
                  v47 = v45;
                }
                else
                {
                  v46 = MiAddSecureEntry(
                          v14,
                          (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12,
                          ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) << 12) | 0xFFF,
                          v44,
                          1);
                  v47 = v46 == 0 ? 0xC000009A : 0;
                }
                if ( v47 < 0 )
                {
LABEL_95:
                  MiDeleteVad(v14, (__int64)PlaceholderVadToReplace);
                  if ( PlaceholderVadToReplace )
                    MiFinishPlaceholderVadReplacement(PlaceholderVadToReplace);
                  return (unsigned int)v47;
                }
                *(_QWORD *)a1[9] = qword_140E2D840 ^ a1[11] ^ v46;
              }
              if ( !PlaceholderVadToReplace )
              {
                MiUnlockAndDereferenceVad((char *)v14);
                goto LABEL_46;
              }
              MiUnlockAndDereferenceNestedVad((PVOID)v14);
LABEL_85:
              MiSetVadDeleted((__int64)PlaceholderVadToReplace);
              MiDeleteVad((__int64)PlaceholderVadToReplace, 0LL);
              MiDecrementVadsBeingDeleted(v59);
              goto LABEL_46;
            }
          }
          else
          {
            MiStoreGraphicsProtectionInVad(v36, *((unsigned int *)a1 + 12));
            v34 = -1073741637;
          }
        }
LABEL_58:
        *v64 = v28;
        if ( PlaceholderVadToReplace )
        {
          v41 = CurrentThread;
          MiUnlockVad((__int64)CurrentThread, (__int64)PlaceholderVadToReplace);
          goto LABEL_50;
        }
        goto LABEL_49;
      }
    }
    else if ( !*((_DWORD *)a1 + 12) )
    {
      goto LABEL_28;
    }
    v34 = -1073741755;
    goto LABEL_49;
  }
  return result;
}
