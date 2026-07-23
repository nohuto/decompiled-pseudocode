/*
 * XREFs of MiUnmapViewOfSection @ 0x140896E14
 * Callers:
 *     IopCloseIoRing @ 0x140714020 (IopCloseIoRing.c)
 *     PsShutdownSystem @ 0x140778A44 (PsShutdownSystem.c)
 *     NtMapCMFModule @ 0x1407C42B0 (NtMapCMFModule.c)
 *     MiFinalizeLagePageImageMapping @ 0x1407EDD94 (MiFinalizeLagePageImageMapping.c)
 *     MmUnmapViewOfSection @ 0x140896C60 (MmUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x140896C80 (NtUnmapViewOfSection.c)
 *     NtUnmapViewOfSectionEx @ 0x140896D30 (NtUnmapViewOfSectionEx.c)
 *     AlpcViewDestroyProcedure @ 0x140897790 (AlpcViewDestroyProcedure.c)
 *     MiMapViewOfSection @ 0x1408A2840 (MiMapViewOfSection.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1408DCCEC (EtwpCoverageEnsureUserModeView.c)
 *     MiUnmapImageInSystemSpace @ 0x14093E4B4 (MiUnmapImageInSystemSpace.c)
 *     PspSchedulerSharedDataRegionDelete @ 0x140A58AF0 (PspSchedulerSharedDataRegionDelete.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A9CF34 (MiUnmapImageForEnclaveUse.c)
 *     MmInitializeImageViewExtension @ 0x140C56360 (MmInitializeImageViewExtension.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiVadMapsLargeImage @ 0x1403C7440 (MiVadMapsLargeImage.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     MiUpdateVadStartVpn @ 0x140441BA4 (MiUpdateVadStartVpn.c)
 *     MiReadVadFlags2 @ 0x14044307C (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiUnmapVad @ 0x140895E38 (MiUnmapVad.c)
 *     MiCheckSecuredVad @ 0x1408DBE18 (MiCheckSecuredVad.c)
 *     PerfLogImageUnload @ 0x140A0E50C (PerfLogImageUnload.c)
 *     DbgkUnMapViewOfSection @ 0x140A25518 (DbgkUnMapViewOfSection.c)
 */

__int64 __fastcall MiUnmapViewOfSection(PRKPROCESS PROCESS, unsigned __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v7; // r9
  struct _KPROCESS *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r12
  __int64 *v20; // rsi
  ULONG_PTR v21; // r15
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 LockedVadEvent; // rax
  char *v27; // rax
  char *v28; // r15
  int v29; // eax
  int v30[2]; // [rsp+50h] [rbp-29h] BYREF
  int v31; // [rsp+58h] [rbp-21h]
  __int64 v32; // [rsp+60h] [rbp-19h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-11h] BYREF

  v30[0] = 0;
  v31 = 0;
  v4 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v5 = 0LL;
  v7 = a4 & 0x4000000;
  v30[1] = a3;
  LODWORD(v32) = v7;
  v9 = KeGetCurrentThread()->ApcState.Process;
  if ( (_DWORD)v7 && a2 != (a2 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
  if ( v9 != PROCESS )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v31 = 1;
  }
  v10 = MiObtainReferencedVadEx(a2, 1LL, v30, v7);
  v13 = v10;
  if ( !v10 )
  {
    if ( v30[0] == -1073741664 )
      v30[0] = -1073741799;
    goto LABEL_15;
  }
  v14 = *(_DWORD *)(v10 + 48);
  v15 = v14 >> 4;
  if ( (v14 & 0x200000) == 0 || (v15 & 7) == 1 )
  {
    v16 = *(unsigned int *)(v10 + 24);
    v17 = (v16 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12;
    if ( (v15 & 7) == 2 && (v14 & 0xF80) == 0x380 )
      v4 = (v16 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12;
    v18 = ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32))
         - (v16 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32))
         + 1) << 12;
    if ( (v14 & 8) != 0 && (PROCESS[1].DirectoryTableBase & 0x2000000000LL) == 0 )
    {
      v30[0] = MiCheckSecuredVad(
                 v10,
                 (_DWORD)v16 << 12,
                 (*(_DWORD *)(v10 + 28) - (int)v16 + 1) << 12,
                 85,
                 KeGetCurrentThread()->PreviousMode,
                 0LL);
      if ( v30[0] < 0 )
        goto LABEL_38;
    }
    if ( (_DWORD)v32 )
    {
      if ( v17 != a2 || (LockedVadEvent = MiLocateLockedVadEvent(v13, 128)) == 0 )
      {
        v30[0] = -1073741800;
        goto LABEL_38;
      }
      v5 = *(_QWORD *)(LockedVadEvent + 8);
      *(_QWORD *)(LockedVadEvent + 8) = 0LL;
      v27 = (char *)KeAbPreAcquire(v5 + 40, 0LL);
      v28 = v27;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 40), v27, v5 + 40);
      if ( v28 )
        v28[10] = 1;
      MiUpdateVadStartVpn(v5, *(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32));
      v29 = *(_DWORD *)(v13 + 28);
      *(_BYTE *)(v5 + 33) = *(_BYTE *)(v13 + 33);
      *(_DWORD *)(v5 + 28) = v29;
    }
    if ( v4 && (unsigned int)MiVadMapsLargeImage(v13) )
    {
      v25 = MiLocateLockedVadEvent(v24, 16);
      v4 += (unsigned __int64)*(unsigned __int8 *)(v25 + 8) << 16;
      v18 = *(_QWORD *)(v25 + 16) << 12;
    }
    if ( (PerfGlobalGroupMask[0] & 4) != 0 )
    {
      if ( v4 )
      {
        if ( PROCESS[1].Header.WaitListHead.Flink )
        {
          if ( (PROCESS[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
          {
            v20 = **(__int64 ***)(v13 + 72);
            if ( v20 )
            {
              if ( v20[8] )
              {
                v32 = *v20;
                v21 = MiReferenceControlAreaFile((__int64)v20);
                if ( (MiReadVadFlags2(v13) & 8) != 0 )
                {
                  v22 = 0;
                  v23 = 0;
                }
                else
                {
                  v22 = *(_BYTE *)(v32 + 15) & 0xF;
                  v23 = (*(unsigned __int8 *)(v32 + 15) >> 4) & 7;
                }
                PerfLogImageUnload(
                  v21 + 88,
                  v21,
                  PROCESS,
                  v4,
                  v18,
                  *(_DWORD *)(*(_QWORD *)(v32 + 56) + 60LL),
                  v22,
                  v23,
                  1);
                MiDereferenceControlAreaFile((__int64)v20, v21);
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(v13 + 48) & 0x70) == 0x10 )
      MiDeleteVad((unsigned __int8 *)v13, v5);
    else
      MiUnmapVad((unsigned __int8 *)v13, v5);
    v30[0] = 0;
    goto LABEL_15;
  }
  v30[0] = -1073741799;
LABEL_38:
  MiUnlockAndDereferenceVad((PVOID)v13);
LABEL_15:
  if ( v31 )
    KiUnstackDetachProcess((__int64)&ApcState, 0, v11, v12);
  if ( v30[0] >= 0 )
  {
    if ( v4 )
      DbgkUnMapViewOfSection(PROCESS);
  }
  return (unsigned int)v30[0];
}
