/*
 * XREFs of MmExtendSection @ 0x140946018
 * Callers:
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 *     MiCommitFileBackedSection @ 0x1408DDC1C (MiCommitFileBackedSection.c)
 *     MmCreateSectionEx @ 0x140940C6C (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x140940F58 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x140941160 (MiCreateSection.c)
 *     NtExtendSection @ 0x1409469D0 (NtExtendSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiFindLastSubsection @ 0x140314EB0 (MiFindLastSubsection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiUpdateLastSubsectionSize @ 0x14036F080 (MiUpdateLastSubsectionSize.c)
 *     MiLockControlAreaSectionExtend @ 0x140414FF0 (MiLockControlAreaSectionExtend.c)
 *     MiDereferenceControlAreaFile @ 0x14042C500 (MiDereferenceControlAreaFile.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140445544 (MiUnlockControlAreaSectionExtend.c)
 *     MiSubsectionNeedsExtents @ 0x140678F48 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x140678F84 (MiUpdateActiveSubsection.c)
 *     FsRtlGetFileSize @ 0x140942760 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x14094588C (FsRtlSetFileSize.c)
 *     MiExtendSection @ 0x1409463BC (MiExtendSection.c)
 */

__int64 __fastcall MmExtendSection(__int64 a1, LARGE_INTEGER *a2, int a3)
{
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  NTSTATUS v11; // esi
  __int64 LastSubsection; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  int updated; // eax
  struct _FILE_OBJECT *v17; // rsi
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  LARGE_INTEGER *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // zf
  ULONG_PTR v25; // r14
  int v26; // eax
  unsigned __int64 v27; // rax
  _OWORD v28[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+58h] BYREF

  FileSize.QuadPart = 0LL;
  memset(v28, 0, sizeof(v28));
  v29 = 0LL;
  v6 = MiSectionControlArea(a1);
  v7 = v6;
  if ( (*(_DWORD *)(v6 + 56) & 0x420) != 0 || !*(_QWORD *)(v6 + 64) )
    return 3221225607LL;
  if ( a2->QuadPart <= 0x40000000000000uLL )
  {
    v8 = *(_QWORD *)v6;
    v9 = a2->QuadPart + 4095;
    DWORD2(v28[0]) = 16;
    v10 = v9 >> 12;
    MiLockControlAreaSectionExtend(v6, (__int64)v28);
    if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
    {
      v27 = *(_QWORD *)(a1 + 48);
      if ( a2->QuadPart <= v27 )
      {
        a2->QuadPart = v27;
        MiUnlockControlAreaSectionExtend(v7, (__int64)v28);
        return 0LL;
      }
    }
    if ( a3 )
      goto LABEL_6;
    MiUnlockControlAreaSectionExtend(v7, (__int64)v28);
    BugCheckParameter2 = MiReferenceControlAreaFile(v7);
    DWORD2(v28[0]) = 32;
    v17 = (struct _FILE_OBJECT *)BugCheckParameter2;
    MiLockControlAreaSectionExtend(v7, (__int64)v28);
    v11 = FsRtlGetFileSize(v17, &FileSize);
    if ( v11 < 0 )
    {
      v25 = BugCheckParameter2;
    }
    else
    {
      if ( a2->QuadPart <= (unsigned __int64)FileSize.QuadPart )
      {
LABEL_19:
        if ( *(_QWORD *)(v8 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          v19 = KeAbPreAcquire((__int64)&qword_140E2CC10, 0LL);
          v20 = v19;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2CC10, 0LL) )
            ExfAcquirePushLockExclusiveEx(&qword_140E2CC10, (__int64)v19, (__int64)&qword_140E2CC10);
          if ( v20 )
            *((_BYTE *)v20 + 10) = 1;
          v21 = *(LARGE_INTEGER **)(v8 + 32);
          if ( v21 )
            *v21 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CC10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CC10);
          KeAbPostRelease((ULONG_PTR)&qword_140E2CC10);
          v24 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v24
            && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v23, v22);
          }
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v28);
        MiDereferenceControlAreaFile(v7, BugCheckParameter2);
        DWORD2(v28[0]) = 16;
        MiLockControlAreaSectionExtend(v7, (__int64)v28);
LABEL_6:
        v11 = 0;
        BugCheckParameter2 = 0LL;
        LastSubsection = MiFindLastSubsection(v7, 0);
        v13 = *(unsigned int *)(v8 + 8) | ((unsigned __int64)(*(_WORD *)(v8 + 12) & 0x3FF) << 32);
        if ( v10 <= v13 )
        {
          *(LARGE_INTEGER *)(a1 + 48) = *a2;
          if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), -1LL, -1LL) < a2->QuadPart )
          {
            _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
            MiUpdateLastSubsectionSize(LastSubsection, a2, 0);
          }
        }
        else
        {
          v14 = v10 - v13;
          if ( v14 <= (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) )
          {
            if ( (*(_BYTE *)(v7 + 62) & 0xC) != 0 && *(_QWORD *)(LastSubsection + 8) )
            {
              MiSubsectionNeedsExtents((_DWORD *)LastSubsection);
              BugCheckParameter2 = LastSubsection;
            }
            updated = MiUpdateLastSubsectionSize(LastSubsection, a2, v14);
          }
          else
          {
            updated = MiExtendSection(
                        LastSubsection,
                        (_DWORD)a2,
                        *(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF,
                        (unsigned int)v14 - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF),
                        (__int64)&BugCheckParameter2);
          }
          v11 = updated;
          if ( updated >= 0 )
          {
            v11 = 0;
            _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
            *(LARGE_INTEGER *)(a1 + 48) = *a2;
          }
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v28);
        if ( BugCheckParameter2 )
          return (unsigned int)MiUpdateActiveSubsection((_QWORD *)BugCheckParameter2);
        return (unsigned int)v11;
      }
      v25 = BugCheckParameter2;
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
      {
        FileSize = *a2;
        v26 = FsRtlSetFileSize((PFILE_OBJECT)BugCheckParameter2, (__int64 *)&FileSize);
        if ( v26 >= 0 )
          goto LABEL_19;
        v11 = v26;
      }
      else
      {
        v11 = -1073741689;
      }
    }
    MiUnlockControlAreaSectionExtend(v7, (__int64)v28);
    MiDereferenceControlAreaFile(v7, v25);
    return (unsigned int)v11;
  }
  return 3221225536LL;
}
