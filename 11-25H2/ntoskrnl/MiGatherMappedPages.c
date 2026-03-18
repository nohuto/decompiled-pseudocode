/*
 * XREFs of MiGatherMappedPages @ 0x14040CB20
 * Callers:
 *     MiMappedPageWriter @ 0x14040C760 (MiMappedPageWriter.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     IoDiskIoAttributionDereference @ 0x14034EA34 (IoDiskIoAttributionDereference.c)
 *     FsRtlReleaseFileForModWrite @ 0x14035B210 (FsRtlReleaseFileForModWrite.c)
 *     IoAsynchronousPageWrite @ 0x14035BA6C (IoAsynchronousPageWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14035BCBC (FsRtlAcquireFileForModWriteEx.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiReferencePageForModifiedWrite @ 0x14040DA18 (MiReferencePageForModifiedWrite.c)
 *     MiBuildMappedCluster @ 0x14040DB84 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     CcNotifyOfMappedWrite @ 0x14040ECD8 (CcNotifyOfMappedWrite.c)
 *     MiDereferenceControlAreaPfnList @ 0x140419984 (MiDereferenceControlAreaPfnList.c)
 *     MiFlushFileOnlyMdl @ 0x1404C7068 (MiFlushFileOnlyMdl.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rdi
  char v10; // al
  unsigned __int8 v11; // r15
  __int64 v12; // r13
  __int64 v13; // r13
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // r12
  unsigned __int64 v17; // r12
  struct _FILE_OBJECT *v18; // rax
  bool v19; // zf
  struct _FILE_OBJECT *v20; // r15
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  unsigned int v22; // eax
  struct _MDL *v23; // rax
  struct _MDL *v24; // rdi
  unsigned __int64 v25; // rax
  int v26; // edx
  unsigned __int64 v27; // rbx
  __int64 ByteCount; // rax
  struct _ERESOURCE **v29; // rdi
  unsigned int v30; // eax
  int v31; // edx
  int v32; // eax
  __int64 v33; // rcx
  NTSTATUS v34; // ebx
  unsigned __int8 CurrentIrql; // bl
  __int64 v36; // rdx
  int v38; // eax
  _QWORD *v39; // rcx
  unsigned int v40; // edx
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rdx
  KIRQL v46; // al
  __int64 v47; // rbx
  LARGE_INTEGER v48; // [rsp+60h] [rbp-68h] BYREF
  struct _MDL *v49; // [rsp+68h] [rbp-60h]
  __int64 v50; // [rsp+70h] [rbp-58h] BYREF
  PSECTION_OBJECT_POINTERS v51; // [rsp+78h] [rbp-50h]
  unsigned int v52; // [rsp+E8h] [rbp+20h]

  v50 = 0LL;
  v4 = a2;
  v48.QuadPart = 0LL;
  if ( (unsigned int)a2 < 0x10 )
    goto LABEL_2;
  v4 = 0;
  v39 = (_QWORD *)(a1 + 5648);
  do
  {
    if ( *v39 != 0x3FFFFFFFFFLL )
      goto LABEL_2;
    ++v4;
    v39 += 11;
  }
  while ( v4 < 0x10 );
  if ( v4 != 16 )
  {
LABEL_2:
    v6 = 0;
    if ( *(_BYTE *)(a1 + 1051) )
    {
      v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1044));
      if ( *(_BYTE *)(a1 + 1053) )
      {
        *(_BYTE *)(a1 + 1053) = 0;
        v6 = 1;
        *(_BYTE *)(a1 + 1051) = 0;
      }
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1044), v46);
    }
    if ( *(_BYTE *)(a1 + 1080) || v6 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
    v7 = 88 * (v4 + 64LL);
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v8 = *(_QWORD *)(v7 + a1 + 16);
          if ( v8 == 0x3FFFFFFFFFLL )
            return 0LL;
          v9 = 48 * v8 - 0x220000000000LL;
          v10 = MiSafeLockPage(*(_QWORD *)(v7 + a1 + 16), a2, a3);
          v11 = v10;
        }
        while ( v10 == 17 );
        if ( v8 == *(_QWORD *)(v7 + a1 + 16) )
          break;
        MiUnlockPage(48 * v8 - 0x220000000000LL, v10);
      }
      v12 = *(_QWORD *)(v9 + 16);
      if ( qword_140E2D940 && (v12 & 0x10) == 0 )
        v12 &= ~qword_140E2D940;
      v13 = v12 >> 16;
      v14 = *(_QWORD *)v13;
      v15 = *(_DWORD *)(*(_QWORD *)v13 + 56LL);
      if ( (v15 & 0x20) != 0 )
      {
        MiUnlinkPageFromListEx(48 * v8 - 0x220000000000LL, 0);
        v47 = (*(_QWORD *)(v9 + 16) >> 5) & 0x1FLL;
        if ( (*(_DWORD *)(v14 + 56) & 0x800) == 0
          && ((*(_QWORD *)(v9 + 16) >> 5) & 5) != 5
          && ((*(_QWORD *)(v9 + 16) >> 5) & 4) == 0 )
        {
          KeBugCheckEx(0x1Au, 0x8840uLL, v9, 0LL, 0LL);
        }
        if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 3 )
          MiClearPfnImageVerified(v9, 0);
        *(_QWORD *)(v9 + 16) = MiMakeDemandZeroPte(v47);
        MiDereferenceControlAreaPfnList(v14, 0LL, 1LL, 3LL);
        v40 = 8;
      }
      else
      {
        if ( (v15 & 8) == 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
          if ( (*(_DWORD *)(v14 + 56) & 8) == 0 )
          {
            v16 = *(_QWORD *)(v14 + 120);
            ++*(_DWORD *)(v14 + 76);
            v17 = v16 & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v17 && _InterlockedIncrement64((volatile signed __int64 *)(v17 + 32)) <= 1 )
              __fastfail(0xEu);
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
            MiReferencePageForModifiedWrite(v9);
            MiUnlockPage(v9, v11);
            v18 = (struct _FILE_OBJECT *)MiReferenceControlAreaFileWithTag(v14, 0x63536D4Du, 0);
            v19 = *(_BYTE *)(a1 + 1051) == 0;
            v20 = v18;
            SectionObjectPointer = v18->SectionObjectPointer;
            v51 = SectionObjectPointer;
            if ( v19 )
              v22 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CcNotifyOfMappedWrite)(
                      SectionObjectPointer,
                      (LARGE_INTEGER)v48.QuadPart,
                      0LL);
            else
              v22 = 0;
            v23 = (struct _MDL *)MiBuildMappedCluster(v9, a3 + 104, v22);
            *(_QWORD *)(a3 + 96) = v23;
            v24 = v23;
            *(_QWORD *)(a3 + 72) = v14;
            v49 = v23;
            v25 = MiStartingOffset(
                    v13,
                    *(_QWORD *)(48 * (__int64)v23[1].Next - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL,
                    0xFFFFFFFF);
            v26 = *(_DWORD *)(a3 + 40);
            v27 = v25;
            v48.QuadPart = v25;
            LODWORD(v25) = v24->ByteCount;
            *(_DWORD *)(a3 + 44) = v25;
            v52 = (unsigned int)v25 >> 12;
            *(_DWORD *)(a3 + 48) = ((unsigned int)v25 >> 12) - 1;
            ByteCount = v24->ByteCount;
            v29 = (struct _ERESOURCE **)(a3 + 80);
            *(_QWORD *)(a3 + 80) = 0LL;
            v50 = v27 + ByteCount;
            v30 = v26 & 0xFFFFFFFD;
            v31 = v26 | 2;
            if ( (v20->DeviceObject->Characteristics & 0x10) == 0 )
              v31 = v30;
            *(_DWORD *)(a3 + 40) = v31;
            v32 = *(_DWORD *)(v14 + 56);
            if ( (v32 & 4) != 0 )
            {
              ObFastDereferenceObjectDeferDelete((__int64 *)(v14 + 64), (ULONG_PTR)v20, 1666411853LL);
              v34 = -1073741740;
              goto LABEL_23;
            }
            if ( (v32 & 0x10) != 0 )
            {
              ObFastDereferenceObjectDeferDelete((__int64 *)(v14 + 64), (ULONG_PTR)v20, 1666411853LL);
              v34 = -1073741672;
            }
            else
            {
              *(_QWORD *)(a3 + 64) = v20;
              if ( (int)FsRtlAcquireFileForModWriteEx(v20, (__int64)&v50, a3 + 80) < 0 )
              {
                v34 = -1073741740;
                ObFastDereferenceObjectDeferDelete((__int64 *)(v14 + 64), (ULONG_PTR)v20, 1666411853LL);
                *(_QWORD *)(a3 + 64) = 0LL;
                *v29 = 0LL;
              }
              else
              {
                v38 = CcNotifyOfMappedWrite(v51, v27, v49->ByteCount);
                if ( !v38 )
                {
                  FsRtlReleaseFileForModWrite(v20, *v29);
                  ObFastDereferenceObjectDeferDelete((__int64 *)(v14 + 64), (ULONG_PTR)v20, 1666411853LL);
                  *(_QWORD *)(a3 + 64) = 0LL;
                  *v29 = 0LL;
                  v34 = -1073741740;
                  goto LABEL_23;
                }
                if ( v38 == 1 )
                  *v29 = (struct _ERESOURCE *)((unsigned __int64)*v29 | 1);
                *(_QWORD *)(a3 + 88) = v27;
                v41 = *(unsigned int *)(a1 + 736);
                v42 = *(_QWORD *)(a1 + 18688);
                if ( (_DWORD)v41 )
                {
                  v43 = 2;
                  v41 = (unsigned int)(v41 - 1);
                  if ( v42 < 0x420 )
                    v43 = 4;
                  *(_DWORD *)(a1 + 736) = v42 < 0x420 ? v41 : 0;
                }
                else if ( v42 < 0x120 )
                {
                  v43 = 4;
                  *(_DWORD *)(a1 + 736) = v42 < 0xA0 ? 32 : 8;
                }
                else
                {
                  v43 = 2;
                }
                __incgsdword(0x2EB4u);
                __addgsdword(0x2EB0u, v52);
                if ( (*(_BYTE *)(v14 + 62) & 0xC) != 0 )
                {
                  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))MiFlushFileOnlyMdl)(
                    v41,
                    v49,
                    (LARGE_INTEGER)v48.QuadPart);
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( KiIrqlFlags )
                  {
                    LOBYTE(v44) = CurrentIrql;
                    KiRaiseIrqlProcessIrqlFlags(v44);
                  }
                  MiWriteComplete((PVOID)a3);
                  if ( KiIrqlFlags )
                  {
                    LOBYTE(v45) = CurrentIrql;
                    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v45);
                  }
LABEL_27:
                  __writecr8(CurrentIrql);
LABEL_28:
                  if ( v17 )
                    IoDiskIoAttributionDereference(v17);
                  return 1LL;
                }
                v34 = IoAsynchronousPageWrite(
                        v20,
                        v49,
                        &v48,
                        (LARGE_INTEGER)MiWriteComplete,
                        (void *)a3,
                        v43,
                        0,
                        0,
                        v17,
                        (struct _IO_STATUS_BLOCK *)(a3 + 24),
                        (IRP **)(a3 + 16));
                v33 = v34 & 0xC0000000;
                if ( (_DWORD)v33 != -1073741824 )
                  goto LABEL_28;
              }
            }
LABEL_23:
            *(_QWORD *)(a3 + 32) = 0LL;
            *(_DWORD *)(a3 + 24) = v34;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v33) = CurrentIrql;
              KiRaiseIrqlProcessIrqlFlags(v33);
            }
            MiWriteComplete((PVOID)a3);
            if ( KiIrqlFlags )
            {
              LOBYTE(v36) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v36);
            }
            goto LABEL_27;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
        }
        MiUnlinkPageFromListEx(v9, 0);
        v40 = 16;
      }
      MiInsertPageInList(v9, v40);
      MiUnlockPage(v9, v11);
    }
  }
  return 0LL;
}
