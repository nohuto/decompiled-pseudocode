/*
 * XREFs of VslpLockPagesForTransfer @ 0x14025E3AC
 * Callers:
 *     VslValidateSecureImagePages @ 0x14025E250 (VslValidateSecureImagePages.c)
 *     VslIumEfiRuntimeService @ 0x140260670 (VslIumEfiRuntimeService.c)
 *     VslCreateSecureImageSection @ 0x1404A6C40 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404AA5E0 (VslFillSecureAllocation.c)
 *     VslAllocatePool @ 0x1404AB090 (VslAllocatePool.c)
 *     VslTransferSecureImageVersionResource @ 0x1404B3E90 (VslTransferSecureImageVersionResource.c)
 *     VslPrepareSecureImageRelocations @ 0x1404BF800 (VslPrepareSecureImageRelocations.c)
 *     VslRegisterLogPages @ 0x1404C2A70 (VslRegisterLogPages.c)
 *     VslFinishStartSecureProcessor @ 0x14058A25C (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x14058A3B4 (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x14058AA6C (VslInitializeSecureProcess.c)
 *     VslQueryActiveSecurePatches @ 0x14058ADE8 (VslQueryActiveSecurePatches.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058AFAC (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterSecurePatch @ 0x14058B124 (VslRegisterSecurePatch.c)
 *     VslRetrieveMailbox @ 0x14058B5D0 (VslRetrieveMailbox.c)
 *     VslCaptureImageHotPatchMetadata @ 0x14058BEB0 (VslCaptureImageHotPatchMetadata.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14058C0C8 (VslInitFunctionOverrideCapabilities.c)
 *     VslCapturePgoData @ 0x14070D160 (VslCapturePgoData.c)
 *     VslGetOnDemandDebugChallenge @ 0x14070D458 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x14070D58C (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14070D664 (VslInitializeEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x14070D850 (VslObtainHotPatchUndoTable.c)
 *     VslQueryRuntimeAttestationReport @ 0x14070DA00 (VslQueryRuntimeAttestationReport.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x14070DCC4 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslStartSecureProcessor @ 0x14070DF88 (VslStartSecureProcessor.c)
 *     VslTransformDumpKey @ 0x14070E27C (VslTransformDumpKey.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x14070E448 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslDebugReadWriteSecureProcess @ 0x140993CB8 (VslDebugReadWriteSecureProcess.c)
 *     VslLoadEnclaveModule @ 0x140A2A9E8 (VslLoadEnclaveModule.c)
 *     VslValidateDynamicCodePages @ 0x140A3BD6C (VslValidateDynamicCodePages.c)
 *     VslCreateSecureSection @ 0x140A52D90 (VslCreateSecureSection.c)
 *     VslCreateEnclave @ 0x140A7FBF4 (VslCreateEnclave.c)
 *     VslCaptureSecureImageIat @ 0x140A9BDA0 (VslCaptureSecureImageIat.c)
 *     VslRegisterBootDrivers @ 0x140C65AF8 (VslRegisterBootDrivers.c)
 *     VslConnectSwInterrupt @ 0x140C6722C (VslConnectSwInterrupt.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     VslpLockMdlForTransfer @ 0x14025E6AC (VslpLockMdlForTransfer.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MmBuildMdlForNonPagedPool @ 0x140293640 (MmBuildMdlForNonPagedPool.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslpLockPagesForTransfer(
        __int64 a1,
        struct _MDL *a2,
        unsigned int a3,
        LOCK_OPERATION a4,
        unsigned int a5)
{
  LOCK_OPERATION v5; // r11d
  ULONG v6; // r9d
  struct _MDL *v7; // r10
  struct _MDL *Pool2; // rdi
  unsigned int v9; // r14d
  struct _MDL *v10; // r15
  unsigned int v11; // r13d
  int v12; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // r14d
  struct _MDL *Next; // r12
  struct _MDL *v19; // [rsp+28h] [rbp-40h]
  struct _MDL *v21; // [rsp+78h] [rbp+10h]
  unsigned int v22; // [rsp+80h] [rbp+18h]

  v22 = a3;
  v21 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  Pool2 = 0LL;
  v9 = a5;
  if ( (a5 & 0x13) == 0 )
    goto LABEL_2;
  if ( ((((unsigned __int16)a2 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) <= 0x1FA000 )
  {
    v7 = a2;
LABEL_2:
    v10 = 0LL;
    v19 = 0LL;
    while ( 1 )
    {
      v11 = 8 * ((v6 + (unsigned __int64)((unsigned __int16)v7 & 0xFFF) + 4095) >> 12) + 48;
      if ( (v9 & 1) != 0 )
        v11 = 4096;
      if ( (v9 & 4) != 0 )
        v11 = (v11 + 4095) & 0xFFFFF000;
      if ( (v9 & 0x20) != 0 )
      {
        Pool2 = 0LL;
      }
      else
      {
        Pool2 = (struct _MDL *)ExAllocatePool2((v9 & 0x20) + 64, v11, 0x54736D56u);
        v6 = v22;
        v7 = v21;
        v5 = a4;
      }
      if ( !Pool2 )
      {
        if ( (v9 & 0x10) == 0 )
        {
          Pool2 = v10;
          v12 = -1073741670;
          goto LABEL_32;
        }
LABEL_24:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v15 = KeAbPreAcquire(&VslpReservedTransferLock, 0LL, 0LL);
        v16 = v15;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&VslpReservedTransferLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&VslpReservedTransferLock, v15, &VslpReservedTransferLock);
        if ( v16 )
          *(_BYTE *)(v16 + 10) = 1;
        Pool2 = (struct _MDL *)VslpReservedTransferMdl;
        v9 |= 0x20u;
        v6 = v22;
        v7 = v21;
        v5 = a4;
      }
      Pool2->Next = 0LL;
      Pool2->Size = 8 * (((((unsigned __int16)v7 & 0xFFF) + 4095LL + (unsigned __int64)v6) >> 12) + 6);
      Pool2->MdlFlags = 0;
      Pool2->StartVa = (PVOID)((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL);
      Pool2->ByteOffset = (unsigned __int16)v7 & 0xFFF;
      Pool2->ByteCount = v6;
      if ( (v9 & 6) != 0 )
      {
        MmBuildMdlForNonPagedPool(Pool2);
      }
      else if ( v6 )
      {
        MmProbeAndLockPages(Pool2, 0, v5);
      }
      if ( (v9 & 0x10) != 0
        || (Pool2->Next = v10, v10 = Pool2, v19 = Pool2, v7 = Pool2, v21 = Pool2, v6 = v11, v22 = v11, v11 <= 0x1000) )
      {
        v12 = VslpLockMdlForTransfer(a1, Pool2, v9);
        if ( v12 >= 0 )
        {
          *(_DWORD *)(a1 + 64) |= 8u;
          return 0LL;
        }
        if ( (v9 & 0x10) == 0 )
          goto LABEL_32;
        MmUnlockPages(Pool2);
        ExFreePoolWithTag(Pool2, 0);
        v10 = v19;
        goto LABEL_24;
      }
      v5 = a4;
    }
  }
  v12 = -1073741811;
LABEL_32:
  v17 = v9 & 0x20;
  if ( Pool2 )
  {
    do
    {
      Next = Pool2->Next;
      Pool2->Next = 0LL;
      if ( (Pool2->MdlFlags & 2) != 0 )
        MmUnlockPages(Pool2);
      if ( !v17 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = Next;
    }
    while ( Next );
  }
  if ( v17 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VslpReservedTransferLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&VslpReservedTransferLock);
    KeAbPostRelease((ULONG_PTR)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v12;
}
