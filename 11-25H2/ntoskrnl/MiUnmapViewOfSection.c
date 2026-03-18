/*
 * XREFs of MiUnmapViewOfSection @ 0x1408B4494
 * Callers:
 *     IopCloseIoRing @ 0x14070A390 (IopCloseIoRing.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 *     NtMapCMFModule @ 0x1407B4B70 (NtMapCMFModule.c)
 *     MiFinalizeLagePageImageMapping @ 0x1407DD924 (MiFinalizeLagePageImageMapping.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     MmUnmapViewOfSection @ 0x1408B42E0 (MmUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1408B4300 (NtUnmapViewOfSection.c)
 *     NtUnmapViewOfSectionEx @ 0x1408B43B0 (NtUnmapViewOfSectionEx.c)
 *     MiMapViewOfSection @ 0x1408FC9F0 (MiMapViewOfSection.c)
 *     MiUnmapImageInSystemSpace @ 0x140944164 (MiUnmapImageInSystemSpace.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140A57A78 (EtwpCoverageEnsureUserModeView.c)
 *     PspSchedulerSharedDataRegionDelete @ 0x140A5FA20 (PspSchedulerSharedDataRegionDelete.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A9C2B4 (MiUnmapImageForEnclaveUse.c)
 *     MmInitializeImageViewExtension @ 0x140C42F58 (MmInitializeImageViewExtension.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     MiVadMapsLargeImage @ 0x1403D9300 (MiVadMapsLargeImage.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     MiUpdateVadStartVpn @ 0x14044B674 (MiUpdateVadStartVpn.c)
 *     MiReadVadFlags2 @ 0x140455FA8 (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiUnmapVad @ 0x1408B4E4C (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiCheckSecuredVad @ 0x1408F8A18 (MiCheckSecuredVad.c)
 *     PerfLogImageUnload @ 0x140A0BE8C (PerfLogImageUnload.c)
 *     DbgkUnMapViewOfSection @ 0x140A2AB58 (DbgkUnMapViewOfSection.c)
 */

__int64 __fastcall MiUnmapViewOfSection(PRKPROCESS PROCESS, unsigned __int64 a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // r13
  struct _KPROCESS *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r12
  __int64 *v17; // rsi
  ULONG_PTR v18; // r15
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 LockedVadEvent; // rax
  __int64 *v24; // rax
  __int64 *v25; // r15
  int v26; // eax
  int v27; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-25h]
  int v29; // [rsp+58h] [rbp-21h]
  __int64 v30; // [rsp+60h] [rbp-19h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-11h] BYREF

  v27 = 0;
  v29 = 0;
  v4 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v5 = 0LL;
  v28 = a3;
  LODWORD(v30) = a4 & 0x4000000;
  v8 = KeGetCurrentThread()->ApcState.Process;
  if ( (a4 & 0x4000000) != 0 && a2 != (a2 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
  if ( v8 != PROCESS )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v29 = 1;
  }
  v9 = MiObtainReferencedVadEx(a2, 1, &v27);
  v10 = v9;
  if ( !v9 )
  {
    if ( v27 == -1073741664 )
      v27 = -1073741799;
    goto LABEL_15;
  }
  v11 = *(_DWORD *)(v9 + 48);
  v12 = v11 >> 4;
  if ( (v11 & 0x200000) == 0 || (v12 & 7) == 1 )
  {
    v13 = *(unsigned int *)(v9 + 24);
    v14 = (v13 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)) << 12;
    if ( (v12 & 7) == 2 && (v11 & 0xF80) == 0x380 )
      v4 = (v13 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)) << 12;
    v15 = ((*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
         - (v13 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
         + 1) << 12;
    if ( (v11 & 8) != 0 && (PROCESS[1].DirectoryTableBase & 0x2000000000LL) == 0 )
    {
      v27 = MiCheckSecuredVad(
              v9,
              (_DWORD)v13 << 12,
              (*(_DWORD *)(v9 + 28) - (int)v13 + 1) << 12,
              85,
              KeGetCurrentThread()->PreviousMode,
              0LL);
      if ( v27 < 0 )
        goto LABEL_38;
    }
    if ( (_DWORD)v30 )
    {
      if ( v14 != a2 || (LockedVadEvent = MiLocateLockedVadEvent(v10, 128)) == 0 )
      {
        v27 = -1073741800;
        goto LABEL_38;
      }
      v5 = *(_QWORD *)(LockedVadEvent + 8);
      *(_QWORD *)(LockedVadEvent + 8) = 0LL;
      v24 = KeAbPreAcquire(v5 + 40, 0LL);
      v25 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 40), v24, v5 + 40);
      if ( v25 )
        *((_BYTE *)v25 + 10) = 1;
      MiUpdateVadStartVpn(v5, *(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32));
      v26 = *(_DWORD *)(v10 + 28);
      *(_BYTE *)(v5 + 33) = *(_BYTE *)(v10 + 33);
      *(_DWORD *)(v5 + 28) = v26;
    }
    if ( v4 && (unsigned int)MiVadMapsLargeImage(v10) )
    {
      v22 = MiLocateLockedVadEvent(v21, 16);
      v4 += (unsigned __int64)*(unsigned __int8 *)(v22 + 8) << 16;
      v15 = *(_QWORD *)(v22 + 16) << 12;
    }
    if ( (PerfGlobalGroupMask & 4) != 0 )
    {
      if ( v4 )
      {
        if ( PROCESS[1].Header.WaitListHead.Flink )
        {
          if ( (PROCESS[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
          {
            v17 = **(__int64 ***)(v10 + 72);
            if ( v17 )
            {
              if ( v17[8] )
              {
                v30 = *v17;
                v18 = MiReferenceControlAreaFile((__int64)v17);
                if ( (MiReadVadFlags2(v10) & 8) != 0 )
                {
                  v19 = 0;
                  v20 = 0;
                }
                else
                {
                  v19 = *(_BYTE *)(v30 + 15) & 0xF;
                  v20 = (*(unsigned __int8 *)(v30 + 15) >> 4) & 7;
                }
                PerfLogImageUnload(
                  v18 + 88,
                  v18,
                  PROCESS,
                  v4,
                  v15,
                  *(_DWORD *)(*(_QWORD *)(v30 + 56) + 60LL),
                  v19,
                  v20,
                  1);
                MiDereferenceControlAreaFile((__int64)v17, v18);
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(v10 + 48) & 0x70) == 0x10 )
      MiDeleteVad(v10, v5, v28);
    else
      MiUnmapVad(v10, v5, v28);
    v27 = 0;
    goto LABEL_15;
  }
  v27 = -1073741799;
LABEL_38:
  MiUnlockAndDereferenceVad((char *)v10);
LABEL_15:
  if ( v29 )
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  if ( v27 >= 0 )
  {
    if ( v4 )
      DbgkUnMapViewOfSection(PROCESS);
  }
  return (unsigned int)v27;
}
