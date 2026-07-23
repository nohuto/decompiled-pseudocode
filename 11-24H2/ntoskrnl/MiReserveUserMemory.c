/*
 * XREFs of MiReserveUserMemory @ 0x140916A48
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiDecrementVadsBeingDeleted @ 0x140229A10 (MiDecrementVadsBeingDeleted.c)
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiSetVadDeleted @ 0x140360BE0 (MiSetVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MiFindPlaceholderVadToReplace @ 0x1403C6CE0 (MiFindPlaceholderVadToReplace.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     MiUpdateVadStartVpn @ 0x140441BA4 (MiUpdateVadStartVpn.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1404C7270 (MiUnlockAndDereferenceNestedVad.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiAddSecureEntry @ 0x1408DC0A0 (MiAddSecureEntry.c)
 *     MiCreatePlaceholderStorage @ 0x1408DC630 (MiCreatePlaceholderStorage.c)
 *     MiCreateWriteWatchView @ 0x1408DC84C (MiCreateWriteWatchView.c)
 *     MiSelectUserAddress @ 0x140918180 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140919160 (MiAdvanceVadHint.c)
 *     MiCommitVadMetadataBits @ 0x14091D290 (MiCommitVadMetadataBits.c)
 *     MiReleaseVadEventBlocks @ 0x14099A250 (MiReleaseVadEventBlocks.c)
 *     MiSecureVad @ 0x1409E51EC (MiSecureVad.c)
 *     MiArbitraryCodeBlocked @ 0x140A0B8A0 (MiArbitraryCodeBlocked.c)
 *     MiIsVaRangeAvailable @ 0x140A0C10C (MiIsVaRangeAvailable.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A6031C (MiPreparePlaceholderVadReplacement.c)
 *     MiCreateRotateView @ 0x140A615A8 (MiCreateRotateView.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A69CDC (MiFinishPlaceholderVadReplacement.c)
 *     MiCreateLargePageVad @ 0x140A7D970 (MiCreateLargePageVad.c)
 *     MiLogReserveVaFailed @ 0x140A8C8DC (MiLogReserveVaFailed.c)
 *     MiStoreGraphicsProtectionInVad @ 0x140ABB894 (MiStoreGraphicsProtectionInVad.c)
 *     MiCreateUserPhysicalView @ 0x140AEA2A8 (MiCreateUserPhysicalView.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveUserMemory(_QWORD *a1, _QWORD *a2, unsigned int a3, unsigned __int64 *a4, _WORD *a5)
{
  int v5; // r12d
  struct _LIST_ENTRY *PlaceholderVadToReplace; // r13
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
  __int64 v38; // r9
  int v39; // eax
  __int64 result; // rax
  struct _KTHREAD *v41; // r15
  int v42; // ecx
  int v43; // edx
  __int64 v44; // r8
  int v45; // r9d
  signed int v46; // eax
  __int64 v47; // rdx
  signed int v48; // ebx
  char *v49; // rax
  char *v50; // rdi
  __int64 v51; // rdx
  unsigned int v52; // eax
  __int64 v53; // rax
  _WORD **v54; // r15
  int v55; // ecx
  __int64 v56; // rax
  int LargePageVad; // [rsp+50h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-28h]
  unsigned __int64 v59; // [rsp+60h] [rbp-20h] BYREF
  __int64 v60; // [rsp+68h] [rbp-18h]
  __int64 v61; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v62; // [rsp+78h] [rbp-8h]
  _QWORD *v63; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v64; // [rsp+D0h] [rbp+50h]
  unsigned __int64 *v65; // [rsp+D8h] [rbp+58h]

  v65 = a4;
  v64 = a3;
  v63 = a2;
  v5 = 0;
  LargePageVad = 0;
  PlaceholderVadToReplace = 0LL;
  if ( a2 == (_QWORD *)1 )
    return 3221225485LL;
  v9 = 8;
  v10 = a1[1] - *a1 + 1LL == a1[3];
  v60 = *(_QWORD *)(a1[11] + 1040LL) + 768LL;
  if ( !v10 )
    v9 = 0;
  if ( (*((_DWORD *)a1 + 11) & 0x88) != 0 )
    return 3221225541LL;
  if ( (a1[8] & 0x20000000) != 0 && (MiFlags & 0x80000) == 0
    || (a3 & 2) == 0
    || (result = MiArbitraryCodeBlocked(a1[12]), LargePageVad = result, (int)result >= 0) )
  {
    v11 = (a1[3] >> 12) + ((a1[3] & 0xFFFLL) != 0);
    v59 = v11;
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
        v53 = a1[14];
        if ( (v53 & 4) != 0 )
        {
          if ( (v53 & 0x1A) == 0
            || ((v54 = (_WORD **)v63) == 0LL ? (v56 = MiGetProcessPartition(a1[11])) : (v56 = *v63),
                (*(_DWORD *)(v56 + 4) & 0x20) == 0) )
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
          v54 = (_WORD **)v63;
        }
        LargePageVad = MiCreateLargePageVad(a1[11], v13, v54, 0LL);
        v33 = LargePageVad;
        if ( LargePageVad < 0 )
        {
LABEL_51:
          v41 = CurrentThread;
LABEL_52:
          if ( (v25 & 2) != 0 )
            UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v41, a1[11]);
          MiReleaseVadEventBlocks(v13, 0LL);
          ExFreePoolWithTag((PVOID)v13, 0);
          return (unsigned int)v33;
        }
        if ( v54 )
          *a5 = **v54;
        if ( (a1[14] & 0x1A) != 0 )
          *(_DWORD *)(v13 + 48) |= 0x800000u;
      }
      v26 = (v5 << 19) | *(_DWORD *)(v13 + 48) & 0xFFE7FFFF;
      v10 = (a1[5] & 0x200000) == 0;
      *(_DWORD *)(v13 + 48) = v26;
      if ( !v10 )
      {
        LargePageVad = MiCreateWriteWatchView(a1[11], v13);
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
          v59 = 0LL;
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
          v61 = 0LL;
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
                PlaceholderVadToReplace = MiFindPlaceholderVadToReplace(v31, v32, *((_BYTE *)a1 + 57), &LargePageVad);
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
              v59 = *a1;
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
                      v64,
                      v30,
                      (__int64)&v61,
                      (__int64)&v59);
              if ( v33 < 0 )
              {
                MiLogReserveVaFailed(a1[3], a1[2], *a1, a1[1]);
                v27 = v59;
                goto LABEL_50;
              }
              v27 = v59;
              v34 = a1[3] + v59 - 1;
            }
            v62 = v27 >> 12;
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
                  MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, a1[11], v60);
                  v49 = (char *)KeAbPreAcquire(v13 + 40, 0LL);
                  v50 = v49;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 40), 0LL) )
                    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v13 + 40), v49, v13 + 40);
                  v27 = v59;
                  v37 = CurrentThread;
                  if ( v50 )
                    v50[10] = 1;
                }
                else
                {
                  v37 = CurrentThread;
                  MiLockVad((__int64)CurrentThread, v13);
                }
                MiInsertVad(v13, a1[11], 0LL, v38);
                if ( v61 )
                  MiAdvanceVadHint(v62, v36);
                if ( !*((_DWORD *)a1 + 30) )
                {
                  v39 = *(_DWORD *)(v13 + 48);
                  if ( ((v39 & 0x200000) == 0 || (v39 & 0x800000) == 0 && (v39 & 0x180000u) < 0x100000) && !a1[9] )
                  {
                    if ( !PlaceholderVadToReplace )
                    {
                      MiUnlockVad((__int64)v37, v13);
                      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v37, a1[11]);
LABEL_43:
                      *v65 = v27;
                      return 0LL;
                    }
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v13 + 40));
                    KeAbPostRelease(v13 + 40);
                    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v37, a1[11]);
                    v27 = v59;
                    goto LABEL_87;
                  }
                }
                UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v37, a1[11]);
                MiReferenceVad(v13);
                v43 = *(_DWORD *)(v13 + 48);
                if ( (v43 & 0x200000) != 0
                  && ((v43 & 0x800000) != 0 || (v43 & 0x180000u) >= 0x100000)
                  && (v43 & 0x2000000) != 0 )
                {
                  v48 = MiMapUserLargePages(v13, *((_DWORD *)a1 + 13), *((_BYTE *)a1 + 56), (__int64)v63);
                  if ( v48 < 0 )
                    goto LABEL_88;
                }
                v44 = *((unsigned int *)a1 + 30);
                if ( (_DWORD)v44 )
                {
                  v48 = MiCommitVadMetadataBits(v13, 0LL, v44);
                  if ( v48 < 0 )
                    goto LABEL_88;
                }
                if ( a1[9] )
                {
                  v10 = (a1[8] & 0x40000000) == 0;
                  v45 = *((_DWORD *)a1 + 17);
                  v63 = 0LL;
                  if ( v10 )
                  {
                    if ( (unsigned int)(v45 - 1) > 1 && v45 != 4 && v45 != -2147483647 )
                    {
                      v48 = -1073741755;
                      goto LABEL_88;
                    }
                    v46 = MiSecureVad(v13, v27, a1[3], v45, 0, (__int64)&v63);
                    v47 = (__int64)v63;
                    v48 = v46;
                  }
                  else
                  {
                    v47 = MiAddSecureEntry(
                            v13,
                            (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) << 12,
                            ((*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) << 12) | 0xFFF,
                            v45,
                            1);
                    v48 = v47 == 0 ? 0xC000009A : 0;
                  }
                  if ( v48 < 0 )
                  {
LABEL_88:
                    MiDeleteVad((unsigned __int8 *)v13, (__int64)PlaceholderVadToReplace);
                    if ( PlaceholderVadToReplace )
                      MiFinishPlaceholderVadReplacement(PlaceholderVadToReplace);
                    return (unsigned int)v48;
                  }
                  *(_QWORD *)a1[9] = qword_140E2DBC0 ^ a1[11] ^ v47;
                }
                if ( !PlaceholderVadToReplace )
                {
                  MiUnlockAndDereferenceVad((PVOID)v13);
                  goto LABEL_43;
                }
                MiUnlockAndDereferenceNestedVad((PVOID)v13);
LABEL_87:
                MiSetVadDeleted((__int64)PlaceholderVadToReplace);
                MiDeleteVad((unsigned __int8 *)PlaceholderVadToReplace, 0LL);
                MiDecrementVadsBeingDeleted(v60);
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
          *v65 = v27;
          if ( PlaceholderVadToReplace )
          {
            v41 = CurrentThread;
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
        v52 = *(_DWORD *)(v13 + 48) & 0xFFFFFF8F | 0x40;
        goto LABEL_97;
      }
      goto LABEL_122;
    }
    v42 = a3 & 7;
    if ( (a3 & 0xFFFFFFF8) != 0x10 && (v42 == 4 || v42 == 1) )
    {
      v51 = a3;
      if ( (a1[14] & 1) == 0 )
        goto LABEL_95;
      if ( a1[13] )
      {
        v55 = *((_DWORD *)a1 + 12);
        v51 = a3 | 2;
        if ( (v55 & 0x1C000) == 0 )
          v51 = a3;
        if ( (v55 & 0x12000) != 0 )
          v51 = v51 & 0xFFFFFFFA | 4;
LABEL_95:
        LargePageVad = MiCreateUserPhysicalView(v13, v51, a1);
        v25 = v9;
        if ( LargePageVad >= 0 )
        {
          v52 = *(_DWORD *)(v13 + 48) & 0xF7FFFF8F | 0x30;
          *((_DWORD *)a1 + 16) |= 4u;
LABEL_97:
          *(_DWORD *)(v13 + 48) = v52;
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
