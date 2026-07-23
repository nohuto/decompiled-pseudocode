/*
 * XREFs of MmExtendSection @ 0x14098A134
 * Callers:
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 *     MiCommitFileBackedSection @ 0x1409147D8 (MiCommitFileBackedSection.c)
 *     NtExtendSection @ 0x140989CF0 (NtExtendSection.c)
 *     MmCreateSectionEx @ 0x14098AECC (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x14098B1B8 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x14098B3C0 (MiCreateSection.c)
 * Callees:
 *     MiUpdateLastSubsectionSize @ 0x14026B000 (MiUpdateLastSubsectionSize.c)
 *     MiLockControlAreaSectionExtend @ 0x140270E50 (MiLockControlAreaSectionExtend.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiFindLastSubsection @ 0x1403F2490 (MiFindLastSubsection.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     MiUnlockControlAreaSectionExtend @ 0x14043D6F4 (MiUnlockControlAreaSectionExtend.c)
 *     MiSubsectionNeedsExtents @ 0x14067A128 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x14067A164 (MiUpdateActiveSubsection.c)
 *     FsRtlSetFileSize @ 0x14098A000 (FsRtlSetFileSize.c)
 *     MiExtendSection @ 0x14098A4D8 (MiExtendSection.c)
 *     FsRtlGetFileSize @ 0x14098C9D0 (FsRtlGetFileSize.c)
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
  char *v19; // rax
  char *v20; // rsi
  LARGE_INTEGER *v21; // rcx
  bool v22; // zf
  ULONG_PTR v23; // r14
  int v24; // eax
  unsigned __int64 v25; // rax
  _OWORD v26[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+58h] BYREF

  FileSize.QuadPart = 0LL;
  memset(v26, 0, sizeof(v26));
  v27 = 0LL;
  v6 = MiSectionControlArea(a1);
  v7 = v6;
  if ( (*(_DWORD *)(v6 + 56) & 0x420) != 0 || !*(_QWORD *)(v6 + 64) )
    return 3221225607LL;
  if ( a2->QuadPart <= 0x40000000000000uLL )
  {
    v8 = *(_QWORD *)v6;
    v9 = a2->QuadPart + 4095;
    DWORD2(v26[0]) = 16;
    v10 = v9 >> 12;
    MiLockControlAreaSectionExtend(v6, (__int64)v26);
    if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
    {
      v25 = *(_QWORD *)(a1 + 48);
      if ( a2->QuadPart <= v25 )
      {
        a2->QuadPart = v25;
        MiUnlockControlAreaSectionExtend(v7, (__int64)v26);
        return 0LL;
      }
    }
    if ( a3 )
      goto LABEL_6;
    MiUnlockControlAreaSectionExtend(v7, (__int64)v26);
    BugCheckParameter2 = MiReferenceControlAreaFile(v7);
    DWORD2(v26[0]) = 32;
    v17 = (struct _FILE_OBJECT *)BugCheckParameter2;
    MiLockControlAreaSectionExtend(v7, (__int64)v26);
    v11 = FsRtlGetFileSize(v17, &FileSize);
    if ( v11 < 0 )
    {
      v23 = BugCheckParameter2;
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
          v19 = (char *)KeAbPreAcquire((__int64)&qword_140E2CD50, 0LL);
          v20 = v19;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2CD50, 0LL) )
            ExfAcquirePushLockExclusiveEx(&qword_140E2CD50, v19, (__int64)&qword_140E2CD50);
          if ( v20 )
            v20[10] = 1;
          v21 = *(LARGE_INTEGER **)(v8 + 32);
          if ( v21 )
            *v21 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CD50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CD50);
          KeAbPostRelease((ULONG_PTR)&qword_140E2CD50);
          v22 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v22
            && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v26);
        MiDereferenceControlAreaFile(v7, BugCheckParameter2);
        DWORD2(v26[0]) = 16;
        MiLockControlAreaSectionExtend(v7, (__int64)v26);
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
        MiUnlockControlAreaSectionExtend(v7, (__int64)v26);
        if ( BugCheckParameter2 )
          return (unsigned int)MiUpdateActiveSubsection((_QWORD *)BugCheckParameter2);
        return (unsigned int)v11;
      }
      v23 = BugCheckParameter2;
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
      {
        FileSize = *a2;
        v24 = FsRtlSetFileSize((PFILE_OBJECT)BugCheckParameter2, (__int64 *)&FileSize);
        if ( v24 >= 0 )
          goto LABEL_19;
        v11 = v24;
      }
      else
      {
        v11 = -1073741689;
      }
    }
    MiUnlockControlAreaSectionExtend(v7, (__int64)v26);
    MiDereferenceControlAreaFile(v7, v23);
    return (unsigned int)v11;
  }
  return 3221225536LL;
}
