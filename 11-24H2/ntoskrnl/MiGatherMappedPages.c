/*
 * XREFs of MiGatherMappedPages @ 0x1402EB8C0
 * Callers:
 *     MiMappedPageWriter @ 0x1402EB500 (MiMappedPageWriter.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     MiDereferenceControlAreaPfnList @ 0x14021DC9C (MiDereferenceControlAreaPfnList.c)
 *     FsRtlReleaseFileForModWrite @ 0x14025A8C4 (FsRtlReleaseFileForModWrite.c)
 *     IoAsynchronousPageWrite @ 0x14025B12C (IoAsynchronousPageWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14025B37C (FsRtlAcquireFileForModWriteEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiReferencePageForModifiedWrite @ 0x1402EC7E8 (MiReferencePageForModifiedWrite.c)
 *     MiBuildMappedCluster @ 0x1402EC958 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     CcNotifyOfMappedWrite @ 0x1402EDA4C (CcNotifyOfMappedWrite.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiFlushFileOnlyMdl @ 0x1404C0FF0 (MiFlushFileOnlyMdl.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD *v6; // rcx
  int v7; // edi
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int8 v11; // al
  unsigned __int8 v12; // r15
  __int64 v13; // r13
  __int64 v14; // r13
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // r12
  unsigned __int64 v18; // r12
  ULONG_PTR v19; // rax
  bool v20; // zf
  struct _FILE_OBJECT *v21; // r15
  __int64 v22; // rax
  unsigned int v23; // eax
  struct _MDL *v24; // rax
  struct _MDL *v25; // rdi
  unsigned __int64 v26; // rax
  int v27; // edx
  unsigned __int64 v28; // rbx
  __int64 ByteCount; // rax
  struct _ERESOURCE **v30; // rdi
  unsigned int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rcx
  NTSTATUS v36; // ebx
  unsigned __int8 CurrentIrql; // bl
  __int64 v38; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  KIRQL v47; // al
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rbx
  LARGE_INTEGER v52; // [rsp+60h] [rbp-68h] BYREF
  struct _MDL *v53; // [rsp+68h] [rbp-60h]
  __int64 v54; // [rsp+70h] [rbp-58h] BYREF
  __int64 v55; // [rsp+78h] [rbp-50h]
  unsigned int v56; // [rsp+E8h] [rbp+20h]

  v54 = 0LL;
  v4 = a2;
  v52.QuadPart = 0LL;
  if ( a2 < 0x10 )
    goto LABEL_6;
  v4 = 0;
  v6 = (_QWORD *)(a1 + 5648);
  do
  {
    if ( *v6 != 0x3FFFFFFFFFLL )
      goto LABEL_6;
    ++v4;
    v6 += 11;
  }
  while ( v4 < 0x10 );
  if ( v4 != 16 )
  {
LABEL_6:
    v7 = 0;
    if ( *(_BYTE *)(a1 + 1051) )
    {
      v47 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1044));
      if ( *(_BYTE *)(a1 + 1053) )
      {
        *(_BYTE *)(a1 + 1053) = 0;
        v7 = 1;
        *(_BYTE *)(a1 + 1051) = 0;
      }
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1044), v47);
    }
    if ( *(_BYTE *)(a1 + 1080) || v7 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
    v8 = 88 * (v4 + 64LL);
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v9 = *(_QWORD *)(v8 + a1 + 16);
          if ( v9 == 0x3FFFFFFFFFLL )
            return 0LL;
          v10 = 48 * v9 - 0x220000000000LL;
          v11 = MiSafeLockPage(*(_QWORD *)(v8 + a1 + 16));
          v12 = v11;
        }
        while ( v11 == 17 );
        if ( v9 == *(_QWORD *)(v8 + a1 + 16) )
          break;
        MiUnlockPage(48 * v9 - 0x220000000000LL, v11);
      }
      v13 = *(_QWORD *)(v10 + 16);
      if ( qword_140E2DCC0 && (v13 & 0x10) == 0 )
        v13 &= ~qword_140E2DCC0;
      v14 = v13 >> 16;
      v15 = *(_QWORD *)v14;
      v16 = *(_DWORD *)(*(_QWORD *)v14 + 56LL);
      if ( (v16 & 0x20) != 0 )
      {
        MiUnlinkPageFromListEx(48 * v9 - 0x220000000000LL);
        v51 = (*(_QWORD *)(v10 + 16) >> 5) & 0x1FLL;
        if ( (*(_DWORD *)(v15 + 56) & 0x800) == 0
          && ((*(_QWORD *)(v10 + 16) >> 5) & 5) != 5
          && ((*(_QWORD *)(v10 + 16) >> 5) & 4) == 0 )
        {
          KeBugCheckEx(0x1Au, 0x8840uLL, v10, 0LL, 0LL);
        }
        if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 3 )
          MiClearPfnImageVerified(v10, 0LL, v49, v50);
        *(_QWORD *)(v10 + 16) = MiMakeDemandZeroPte((unsigned int)v51, v48, v49, v50);
        MiDereferenceControlAreaPfnList(v15, 0LL, 1LL, 3);
        v46 = 8LL;
      }
      else
      {
        if ( (v16 & 8) == 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
          if ( (*(_DWORD *)(v15 + 56) & 8) == 0 )
          {
            v17 = *(_QWORD *)(v15 + 120);
            ++*(_DWORD *)(v15 + 76);
            v18 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v18 && _InterlockedIncrement64((volatile signed __int64 *)(v18 + 32)) <= 1 )
              __fastfail(0xEu);
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
            MiReferencePageForModifiedWrite(v10);
            MiUnlockPage(v10, v12);
            v19 = MiReferenceControlAreaFileWithTag(v15, 0x63536D4Du, 0);
            v20 = *(_BYTE *)(a1 + 1051) == 0;
            v21 = (struct _FILE_OBJECT *)v19;
            v22 = *(_QWORD *)(v19 + 40);
            v55 = v22;
            if ( v20 )
              v23 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CcNotifyOfMappedWrite)(
                      v22,
                      (LARGE_INTEGER)v52.QuadPart,
                      0LL);
            else
              v23 = 0;
            v24 = (struct _MDL *)MiBuildMappedCluster(v10, a3 + 104, v23);
            *(_QWORD *)(a3 + 96) = v24;
            v25 = v24;
            *(_QWORD *)(a3 + 72) = v15;
            v53 = v24;
            v26 = MiStartingOffset(
                    (__int64 *)v14,
                    *(_QWORD *)(48 * (__int64)v24[1].Next - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL,
                    0xFFFFFFFF);
            v27 = *(_DWORD *)(a3 + 40);
            v28 = v26;
            v52.QuadPart = v26;
            LODWORD(v26) = v25->ByteCount;
            *(_DWORD *)(a3 + 44) = v26;
            v56 = (unsigned int)v26 >> 12;
            *(_DWORD *)(a3 + 48) = ((unsigned int)v26 >> 12) - 1;
            ByteCount = v25->ByteCount;
            v30 = (struct _ERESOURCE **)(a3 + 80);
            *(_QWORD *)(a3 + 80) = 0LL;
            v54 = v28 + ByteCount;
            v31 = v27 & 0xFFFFFFFD;
            v32 = v27 | 2;
            if ( (v21->DeviceObject->Characteristics & 0x10) == 0 )
              v32 = v31;
            *(_DWORD *)(a3 + 40) = v32;
            v33 = *(_DWORD *)(v15 + 56);
            if ( (v33 & 4) != 0 )
            {
              ObFastDereferenceObjectDeferDelete((__int64 *)(v15 + 64), (ULONG_PTR)v21);
              v36 = -1073741740;
            }
            else if ( (v33 & 0x10) != 0 )
            {
              ObFastDereferenceObjectDeferDelete((__int64 *)(v15 + 64), (ULONG_PTR)v21);
              v36 = -1073741672;
            }
            else
            {
              *(_QWORD *)(a3 + 64) = v21;
              if ( (int)FsRtlAcquireFileForModWriteEx(v21, (__int64)&v54, a3 + 80) < 0 )
              {
                v36 = -1073741740;
                ObFastDereferenceObjectDeferDelete((__int64 *)(v15 + 64), (ULONG_PTR)v21);
                *(_QWORD *)(a3 + 64) = 0LL;
                *v30 = 0LL;
              }
              else
              {
                v34 = CcNotifyOfMappedWrite(v55, v28, v53->ByteCount);
                if ( !v34 )
                {
                  FsRtlReleaseFileForModWrite(v21, *v30);
                  ObFastDereferenceObjectDeferDelete((__int64 *)(v15 + 64), (ULONG_PTR)v21);
                  *(_QWORD *)(a3 + 64) = 0LL;
                  *v30 = 0LL;
                  v36 = -1073741740;
                  goto LABEL_31;
                }
                if ( v34 == 1 )
                  *v30 = (struct _ERESOURCE *)((unsigned __int64)*v30 | 1);
                *(_QWORD *)(a3 + 88) = v28;
                v40 = *(unsigned int *)(a1 + 736);
                v41 = *(_QWORD *)(a1 + 18688);
                if ( (_DWORD)v40 )
                {
                  v42 = 2;
                  v40 = (unsigned int)(v40 - 1);
                  if ( v41 < 0x420 )
                    v42 = 4;
                  *(_DWORD *)(a1 + 736) = v41 < 0x420 ? v40 : 0;
                }
                else if ( v41 < 0x120 )
                {
                  v42 = 4;
                  *(_DWORD *)(a1 + 736) = v41 < 0xA0 ? 32 : 8;
                }
                else
                {
                  v42 = 2;
                }
                __incgsdword(0x2EB4u);
                __addgsdword(0x2EB0u, v56);
                if ( (*(_BYTE *)(v15 + 62) & 0xC) != 0 )
                {
                  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))MiFlushFileOnlyMdl)(
                    v40,
                    v53,
                    (LARGE_INTEGER)v52.QuadPart);
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( KiIrqlFlags )
                  {
                    LOBYTE(v43) = 1;
                    LOBYTE(v44) = CurrentIrql;
                    KiRaiseIrqlProcessIrqlFlags(v44, v43);
                  }
                  MiWriteComplete((PVOID)a3);
                  if ( KiIrqlFlags )
                  {
                    LOBYTE(v45) = CurrentIrql;
                    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v45);
                  }
LABEL_35:
                  __writecr8(CurrentIrql);
LABEL_36:
                  if ( v18 )
                    IoDiskIoAttributionDereference(v18);
                  return 1LL;
                }
                v36 = IoAsynchronousPageWrite(
                        v21,
                        v53,
                        &v52,
                        (LARGE_INTEGER)MiWriteComplete,
                        (void *)a3,
                        v42,
                        0,
                        0,
                        v18,
                        (struct _IO_STATUS_BLOCK *)(a3 + 24),
                        (IRP **)(a3 + 16));
                v35 = v36 & 0xC0000000;
                if ( (_DWORD)v35 != -1073741824 )
                  goto LABEL_36;
              }
            }
LABEL_31:
            *(_QWORD *)(a3 + 32) = 0LL;
            *(_DWORD *)(a3 + 24) = v36;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v35) = CurrentIrql;
              KiRaiseIrqlProcessIrqlFlags(v35, 1LL);
            }
            MiWriteComplete((PVOID)a3);
            if ( KiIrqlFlags )
            {
              LOBYTE(v38) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
            }
            goto LABEL_35;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
        }
        MiUnlinkPageFromListEx(v10);
        v46 = 16LL;
      }
      MiInsertPageInList(v10, v46);
      MiUnlockPage(v10, v12);
    }
  }
  return 0LL;
}
