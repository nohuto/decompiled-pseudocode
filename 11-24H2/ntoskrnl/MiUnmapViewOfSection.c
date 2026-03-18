/*
 * XREFs of MiUnmapViewOfSection @ 0x1408E4E04
 * Callers:
 *     IopCloseIoRing @ 0x140716490 (IopCloseIoRing.c)
 *     PsShutdownSystem @ 0x140778944 (PsShutdownSystem.c)
 *     NtMapCMFModule @ 0x1407C3080 (NtMapCMFModule.c)
 *     MiFinalizeLagePageImageMapping @ 0x1407ED7C4 (MiFinalizeLagePageImageMapping.c)
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
 *     AlpcViewDestroyProcedure @ 0x1408E49A0 (AlpcViewDestroyProcedure.c)
 *     MmUnmapViewOfSection @ 0x1408E4C50 (MmUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1408E4C70 (NtUnmapViewOfSection.c)
 *     NtUnmapViewOfSectionEx @ 0x1408E4D20 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapImageInSystemSpace @ 0x1408F560C (MiUnmapImageInSystemSpace.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140906720 (EtwpCoverageEnsureUserModeView.c)
 *     PspSchedulerSharedDataRegionDelete @ 0x140A605A0 (PspSchedulerSharedDataRegionDelete.c)
 *     MiUnmapImageForEnclaveUse @ 0x140AA1BA4 (MiUnmapImageForEnclaveUse.c)
 *     MmInitializeImageViewExtension @ 0x140C541D0 (MmInitializeImageViewExtension.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     MiVadMapsLargeImage @ 0x140404B60 (MiVadMapsLargeImage.c)
 *     MiDereferenceControlAreaFile @ 0x14042C500 (MiDereferenceControlAreaFile.c)
 *     MiUpdateVadStartVpn @ 0x140449454 (MiUpdateVadStartVpn.c)
 *     MiReadVadFlags2 @ 0x14044BF3C (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiCheckSecuredVad @ 0x1408DD998 (MiCheckSecuredVad.c)
 *     MiUnmapVad @ 0x1408E5280 (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     DbgkUnMapViewOfSection @ 0x1408E5EFC (DbgkUnMapViewOfSection.c)
 *     PerfLogImageUnload @ 0x1408E6808 (PerfLogImageUnload.c)
 */

__int64 __fastcall MiUnmapViewOfSection(PRKPROCESS PROCESS, unsigned __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rdi
  struct _KPROCESS *v7; // rcx
  ULONG_PTR v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // r9
  unsigned __int64 v13; // rsi
  __int64 v14; // r12
  __int64 *v16; // rsi
  ULONG_PTR v17; // r15
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 LockedVadEvent; // rax
  __int64 v23; // r13
  _QWORD *v24; // rax
  _QWORD *v25; // r15
  int v26; // eax
  int v27[2]; // [rsp+50h] [rbp-29h] BYREF
  int v28; // [rsp+58h] [rbp-21h]
  __int64 v29; // [rsp+60h] [rbp-19h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-11h] BYREF

  v27[0] = 0;
  v28 = 0;
  v4 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v27[1] = a3;
  LODWORD(v29) = a4 & 0x4000000;
  v7 = KeGetCurrentThread()->ApcState.Process;
  if ( (a4 & 0x4000000) != 0 && a2 != (a2 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
  if ( v7 != PROCESS )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v28 = 1;
  }
  v8 = MiObtainReferencedVadEx(a2, 1LL, v27);
  v9 = v8;
  if ( !v8 )
  {
    if ( v27[0] == -1073741664 )
      v27[0] = -1073741799;
    goto LABEL_15;
  }
  v10 = *(_DWORD *)(v8 + 48);
  v11 = v10 >> 4;
  if ( (v10 & 0x200000) == 0 || (v11 & 7) == 1 )
  {
    v12 = *(unsigned int *)(v8 + 24);
    v13 = (v12 | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12;
    if ( (v11 & 7) == 2 && (v10 & 0xF80) == 0x380 )
      v4 = (v12 | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12;
    v14 = ((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32))
         - (v12 | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
         + 1) << 12;
    if ( (v10 & 8) != 0 && (PROCESS[1].DirectoryTableBase & 0x2000000000LL) == 0 )
    {
      v27[0] = MiCheckSecuredVad(v8, v13, v14, 0x55u, KeGetCurrentThread()->PreviousMode, 0LL);
      if ( v27[0] < 0 )
        goto LABEL_38;
    }
    if ( (_DWORD)v29 )
    {
      if ( v13 != a2 || (LockedVadEvent = MiLocateLockedVadEvent(v9, 128)) == 0 )
      {
        v27[0] = -1073741800;
        goto LABEL_38;
      }
      v23 = *(_QWORD *)(LockedVadEvent + 8);
      *(_QWORD *)(LockedVadEvent + 8) = 0LL;
      v24 = KeAbPreAcquire(v23 + 40, 0LL);
      v25 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v23 + 40), (__int64)v24, v23 + 40);
      if ( v25 )
        *((_BYTE *)v25 + 10) = 1;
      MiUpdateVadStartVpn(v23, *(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32));
      v26 = *(_DWORD *)(v9 + 28);
      *(_BYTE *)(v23 + 33) = *(_BYTE *)(v9 + 33);
      *(_DWORD *)(v23 + 28) = v26;
    }
    if ( v4 && (unsigned int)MiVadMapsLargeImage(v9) )
    {
      v21 = MiLocateLockedVadEvent(v20, 16);
      v4 += (unsigned __int64)*(unsigned __int8 *)(v21 + 8) << 16;
      v14 = *(_QWORD *)(v21 + 16) << 12;
    }
    if ( (PerfGlobalGroupMask & 4) != 0 )
    {
      if ( v4 )
      {
        if ( PROCESS[1].Header.WaitListHead.Flink )
        {
          if ( (PROCESS[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
          {
            v16 = **(__int64 ***)(v9 + 72);
            if ( v16 )
            {
              if ( v16[8] )
              {
                v29 = *v16;
                v17 = MiReferenceControlAreaFile((__int64)v16);
                if ( (MiReadVadFlags2(v9) & 8) != 0 )
                {
                  v18 = 0;
                  v19 = 0;
                }
                else
                {
                  v18 = *(_BYTE *)(v29 + 15) & 0xF;
                  v19 = (*(unsigned __int8 *)(v29 + 15) >> 4) & 7;
                }
                PerfLogImageUnload(
                  v17 + 88,
                  v17,
                  PROCESS,
                  v4,
                  v14,
                  *(_DWORD *)(*(_QWORD *)(v29 + 56) + 60LL),
                  v18,
                  v19,
                  1);
                MiDereferenceControlAreaFile((__int64)v16, v17);
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(v9 + 48) & 0x70) == 0x10 )
      MiDeleteVad((PVOID)v9);
    else
      MiUnmapVad((PVOID)v9);
    v27[0] = 0;
    goto LABEL_15;
  }
  v27[0] = -1073741799;
LABEL_38:
  MiUnlockAndDereferenceVad((PVOID)v9);
LABEL_15:
  if ( v28 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  if ( v27[0] >= 0 )
  {
    if ( v4 )
      DbgkUnMapViewOfSection(PROCESS);
  }
  return (unsigned int)v27[0];
}
