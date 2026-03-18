/*
 * XREFs of IoFreeIrp @ 0x14031A520
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140267920 (IopBuildDeviceIoControlRequest.c)
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     IopCompletePageWrite @ 0x140370E60 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403754A0 (IopBuildAsynchronousFsdRequest.c)
 *     PopFreeIrp @ 0x1403764AC (PopFreeIrp.c)
 *     IopDropIrp @ 0x1403C5110 (IopDropIrp.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x140418C10 (IopCancelIrpsInFileObjectList.c)
 *     PnpDeviceCompletionRoutine @ 0x14043B090 (PnpDeviceCompletionRoutine.c)
 *     PopFxDestroyDeviceDpm @ 0x1404D9358 (PopFxDestroyDeviceDpm.c)
 *     FsRtlGetFileExtents @ 0x14057F7E0 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x1405A94E0 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405A9540 (PnpDiagnosticCompletionRoutine.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14060ECB0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     DifIoFreeIrpWrapper @ 0x140628460 (DifIoFreeIrpWrapper.c)
 *     IoCancelFileOpen @ 0x1406F9E00 (IoCancelFileOpen.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070DE70 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070DF10 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopCancelPendingEject @ 0x1407339A0 (IopCancelPendingEject.c)
 *     PopAcquirePowerLimitInterface @ 0x14074AFC0 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x14074BFA0 (PopAcquireCoolingInterface.c)
 *     PopConnectToPolicyDevice @ 0x14075A3DC (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x14075AAE4 (PopPolicyDeviceRemove.c)
 *     SmKmIsVolumeIoPossible @ 0x140799CF0 (SmKmIsVolumeIoPossible.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     CmpGetVolumeClusterSize @ 0x140930B1C (CmpGetVolumeClusterSize.c)
 *     IopExceptionCleanupEx @ 0x140970628 (IopExceptionCleanupEx.c)
 *     CmpFileFlushAndPurge @ 0x140981014 (CmpFileFlushAndPurge.c)
 *     IopFreeCompletionListPackets @ 0x1409A7128 (IopFreeCompletionListPackets.c)
 *     WmipSendWmiIrp @ 0x1409CD990 (WmipSendWmiIrp.c)
 *     FsRtlQueryKernelEaFile @ 0x1409FD030 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x1409FD260 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1409FD420 (FsRtlKernelFsControlFile.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140A16598 (WmipSendWmiIrpToTraceDeviceList.c)
 *     IopUserRundown @ 0x140A2B860 (IopUserRundown.c)
 *     FsRtlQueryInformationFile @ 0x140A2EF10 (FsRtlQueryInformationFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140A5CD70 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140A65BD0 (FsRtlMdlReadEx.c)
 *     WmipGetFilePDO @ 0x140A97574 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x140AA6BEC (WmipSetTraceNotify.c)
 *     SmKmFileInfoCleanup @ 0x140AB19B0 (SmKmFileInfoCleanup.c)
 *     VfIrpSendSynchronousIrp @ 0x140B8DF00 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     PspReturnResourceQuota @ 0x14024B468 (PspReturnResourceQuota.c)
 *     ExIsSpecialPoolAddress @ 0x1402B4928 (ExIsSpecialPoolAddress.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     IopFreeIrpExtension @ 0x14031B360 (IopFreeIrpExtension.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     IopFreeReserveIrp @ 0x1404D420C (IopFreeReserveIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140BA6F30 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  unsigned int v2; // r14d
  bool v3; // zf
  __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  UCHAR AllocationFlags; // al
  USHORT Size; // r8
  ULONG_PTR v8; // r8
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rbp
  UCHAR v12; // al
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v14; // r13
  unsigned __int64 p_OriginalFileObject; // rdi
  __int16 v16; // ax
  ULONG_PTR v17; // rsi
  ULONG_PTR v18; // r13
  ULONG_PTR v19; // r11
  unsigned __int64 *v20; // r13
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 *v23; // r9
  unsigned __int64 v24; // rdx
  ULONG_PTR v25; // r10
  unsigned __int64 v26; // r9
  signed __int64 v27; // rdx
  signed __int64 v28; // rax
  signed __int64 v29; // r15
  bool v30; // cc
  signed __int64 v31; // r15
  unsigned __int64 v32; // rtt
  __int64 v33; // rax
  KIRQL v34; // r8
  int v35; // esi
  unsigned int v36; // r9d
  char *v37; // rdx
  ULONG_PTR v38; // [rsp+30h] [rbp-58h]
  ULONG_PTR v39; // [rsp+38h] [rbp-50h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  char v41; // [rsp+98h] [rbp+10h]
  KIRQL v42; // [rsp+98h] [rbp+10h]
  __int64 *v43; // [rsp+A8h] [rbp+20h]

  if ( IopDispatchFreeIrp )
  {
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  }
  else
  {
    v2 = 0;
    if ( Irp->Type != 6 )
      KeBugCheckEx(IopDispatchFreeIrp + 68, (ULONG_PTR)Irp, 0x2817uLL, 0LL, 0LL);
    v3 = (Irp->AllocationFlags & 0x40) == 0;
    Irp->Type = 0;
    if ( !v3 )
      IopFreeIrpExtension(Irp, 0xFFFFFFFFLL, 1);
    if ( (Irp->AllocationFlags & 0x21) != 0x21 )
    {
      v4 = *(&Irp->Size + 1);
      if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
      }
      else
      {
        _mm_lfence();
        CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v4];
      }
      AllocationFlags = Irp->AllocationFlags;
      if ( (AllocationFlags & 8) != 0 )
      {
        Irp->AllocationFlags = AllocationFlags ^ 8;
        _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
      }
      if ( (Irp->AllocationFlags & 4) == 0
        || (IopIrpStackProfilerFlags & 3) != 0
        && (Size = Irp->Size, Size != 72 * (char)IopLargeIrpStackLocations + 208)
        && Size != 72 * (char)IopMediumIrpStackLocations + 208
        && Size != 280 )
      {
        ExFreePoolWithTag(Irp, 0);
        return;
      }
      v8 = Irp->Size;
      if ( (unsigned __int16)v8 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
      {
        if ( (unsigned __int16)v8 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
        {
          v9 = 2048LL;
          v10 = 2056LL;
        }
        else
        {
          v9 = 2064LL;
          v10 = 2072LL;
        }
      }
      else
      {
        v9 = 2080LL;
        v10 = 2088LL;
      }
      Irp->IoStatus.Information = v8;
      v11 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v9);
      ++*(_DWORD *)(v11 + 28);
      if ( *(_WORD *)v11 >= *(_WORD *)(v11 + 16) )
      {
        ++*(_DWORD *)(v11 + 32);
        v11 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v10);
        ++*(_DWORD *)(v11 + 28);
        if ( *(_WORD *)v11 >= *(_WORD *)(v11 + 16) )
        {
          ++*(_DWORD *)(v11 + 32);
          ExFreePoolWithTag(Irp, 0);
          return;
        }
      }
      v12 = Irp->AllocationFlags;
      if ( (v12 & 1) != 0 )
      {
        Irp->AllocationFlags = v12 ^ 1;
        BugCheckParameter4 = 0LL;
        if ( !ExpSpecialAllocations || !(unsigned int)ExIsSpecialPoolAddress((ULONG_PTR)Irp) )
        {
          if ( (unsigned __int64)Irp >= 0xFFFF800000000000uLL
            && byte_140E389A8[(((unsigned __int64)Irp >> 39) & 0x1FF) - 256] == 5 )
          {
            v14 = 256LL;
          }
          else
          {
            v14 = 64LL;
          }
          p_OriginalFileObject = 0LL;
          if ( ((unsigned __int16)Irp & 0xFFF) != 0 )
          {
            p_OriginalFileObject = (unsigned __int64)&Irp[-1].Tail.Overlay.OriginalFileObject;
            if ( (*((_BYTE *)&Irp[-1].Tail.CompletionKey + 75) & 4) != 0 )
              p_OriginalFileObject += -16LL * (unsigned __int8)*(_WORD *)p_OriginalFileObject;
            v16 = *(_WORD *)(p_OriginalFileObject + 2);
            BugCheckParameter4 = 16LL * (unsigned __int8)v16;
            if ( (v16 & 0x800) == 0 )
              goto LABEL_46;
            v17 = ExpPoolQuotaCookie ^ *(_QWORD *)(p_OriginalFileObject + 8) ^ p_OriginalFileObject;
            *(_QWORD *)(p_OriginalFileObject + 8) = ExpPoolQuotaCookie ^ p_OriginalFileObject;
          }
          else
          {
            v34 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
            v35 = 1;
            v42 = v34;
            v36 = (PoolBigPageTableSize - 1) & ((40543 * ((unsigned __int64)Irp >> 12)) ^ ((40543
                                                                                          * ((unsigned __int64)Irp >> 12)) >> 32));
            while ( 1 )
            {
              v37 = (char *)PoolBigPageTable + 32 * v36;
              if ( *(PIRP *)v37 == Irp )
                break;
              if ( ++v36 >= (unsigned __int64)PoolBigPageTableSize )
              {
                if ( !v35 )
                  goto LABEL_64;
                v36 = 0;
                v35 = 0;
              }
            }
            if ( !v37 )
LABEL_64:
              KeBugCheckEx(0x19u, 0x22uLL, (ULONG_PTR)Irp, v14, 0LL);
            if ( (*((_DWORD *)v37 + 3) & 0x100) != 0 )
            {
              BugCheckParameter4 = *((_QWORD *)v37 + 2);
              v17 = (unsigned __int64)Irp ^ ExpPoolQuotaCookie ^ *((_QWORD *)v37 + 3);
              *((_QWORD *)v37 + 3) = ExpPoolQuotaCookie ^ (unsigned __int64)Irp;
            }
            else
            {
              v17 = -1LL;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
              _InterlockedDecrement(&ExpLargePoolTableLock);
            }
            else
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
              v34 = v42;
            }
            if ( KiIrqlFlags )
            {
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v34);
              v34 = v42;
            }
            __writecr8(v34);
          }
          if ( v17 && v17 != -1LL )
          {
            if ( v17 < 0xFFFF800000000000uLL || (*(_BYTE *)v17 & 0x7F) != 3 )
            {
              if ( p_OriginalFileObject )
                v2 = *(_DWORD *)(p_OriginalFileObject + 4);
              KeBugCheckEx(0xC2u, 0xDuLL, (ULONG_PTR)Irp, v2, v17);
            }
            v18 = v14 & 0x100;
            if ( (PEPROCESS)v17 != PsInitialSystemProcess )
            {
              v43 = *(__int64 **)(v17 + 760);
              v19 = v18 != 0;
              v38 = v19;
              v41 = PspResourceFlags[8 * v19];
              v39 = v19 << 7;
              v20 = (unsigned __int64 *)&v43[16 * v19];
              _m_prefetchw(v20);
              v21 = *v20;
              v22 = v20[8];
              if ( v20[10] )
              {
                if ( v22 > v21 )
                {
                  v23 = (unsigned __int64 *)&qword_140F05848[7 * v19];
                  v24 = *v23;
                  if ( v22 - v21 > *v23 )
                  {
                    if ( v24 > BugCheckParameter4 )
                      v24 = BugCheckParameter4;
                    v32 = v20[8];
                    if ( v32 == _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 8, v22 - v24, v22)
                      && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 9, v24) + v24 > *v23 )
                    {
                      v33 = _InterlockedExchange64((volatile __int64 *)v20 + 9, 0LL);
                      if ( v33 )
                      {
                        PspReturnResourceQuota(v19, (__int64)v20, v33, 0);
                        v19 = v38;
                      }
                    }
                  }
                }
              }
              v25 = BugCheckParameter4;
              while ( 1 )
              {
                do
                {
                  v26 = v21;
                  v27 = 0LL;
                  if ( BugCheckParameter4 < v21 )
                  {
                    v26 = BugCheckParameter4;
                    v27 = v21 - BugCheckParameter4;
                  }
                  v28 = _InterlockedCompareExchange64((volatile signed __int64 *)v20, v27, v21);
                  v3 = v21 == v28;
                  v21 = v28;
                }
                while ( !v3 );
                BugCheckParameter4 -= v26;
                if ( !BugCheckParameter4 )
                  break;
                if ( v43 == &PspSystemQuotaBlock )
                  KeBugCheckEx(0x21u, v17, v19, v25, BugCheckParameter4);
                v20 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v39);
                v43 = &PspSystemQuotaBlock;
                _m_prefetchw((char *)&PspSystemQuotaBlock + v39);
                v21 = *v20;
              }
              if ( (v41 & 4) != 0 )
                _InterlockedAdd64((volatile signed __int64 *)(v17 + 8 * v19 + 512), -(__int64)v25);
            }
            if ( ObpTraceFlags )
              ObpPushStackInfo(v17 - 48);
            v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 - 48), 0xFFFFFFFFFFFFFFFFuLL);
            v30 = v29 <= 1;
            v31 = v29 - 1;
            if ( v30 )
            {
              if ( *(_QWORD *)(v17 - 40) )
                KeBugCheckEx(
                  0x18u,
                  ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v17 - 48) >> 8)],
                  v17,
                  3uLL,
                  *(_QWORD *)(v17 - 40));
              if ( v31 < 0 )
                KeBugCheckEx(0x18u, 0LL, v17, 4uLL, v31);
              ObpDeferObjectDeletion(v17 - 48);
            }
          }
        }
      }
LABEL_46:
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v11, (PSLIST_ENTRY)Irp);
      return;
    }
    IopFreeReserveIrp(Irp);
  }
}
