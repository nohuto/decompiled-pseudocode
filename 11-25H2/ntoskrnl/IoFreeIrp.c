/*
 * XREFs of IoFreeIrp @ 0x1402508A0
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     IopDropIrp @ 0x140283AE0 (IopDropIrp.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402D4A40 (IopBuildDeviceIoControlRequest.c)
 *     PopFreeIrp @ 0x14035860C (PopFreeIrp.c)
 *     IopCompletePageWrite @ 0x14035A5E0 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14035EFF0 (IopBuildAsynchronousFsdRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x14041AEB0 (IopCancelIrpsInFileObjectList.c)
 *     PnpDeviceCompletionRoutine @ 0x1404639C0 (PnpDeviceCompletionRoutine.c)
 *     PopFxDestroyDeviceDpm @ 0x1404DA3A8 (PopFxDestroyDeviceDpm.c)
 *     FsRtlGetFileExtents @ 0x14057C4C0 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x1405A5B50 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405A5BB0 (PnpDiagnosticCompletionRoutine.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140602CF0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     DifIoFreeIrpWrapper @ 0x14061C4A0 (DifIoFreeIrpWrapper.c)
 *     IoCancelFileOpen @ 0x1406EE040 (IoCancelFileOpen.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140701F90 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140702030 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopCancelPendingEject @ 0x140727708 (IopCancelPendingEject.c)
 *     PopAcquirePowerLimitInterface @ 0x14073EEF0 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x14073FED0 (PopAcquireCoolingInterface.c)
 *     PopConnectToPolicyDevice @ 0x14074DE04 (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x14074E514 (PopPolicyDeviceRemove.c)
 *     SmKmIsVolumeIoPossible @ 0x14078A928 (SmKmIsVolumeIoPossible.c)
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     CmpGetVolumeClusterSize @ 0x1409105D0 (CmpGetVolumeClusterSize.c)
 *     IopExceptionCleanupEx @ 0x1409887B0 (IopExceptionCleanupEx.c)
 *     IopFreeCompletionListPackets @ 0x1409A6BE8 (IopFreeCompletionListPackets.c)
 *     WmipSendWmiIrp @ 0x1409B5630 (WmipSendWmiIrp.c)
 *     CmpFileFlushAndPurge @ 0x1409F83E8 (CmpFileFlushAndPurge.c)
 *     FsRtlQueryKernelEaFile @ 0x140A00250 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x140A00480 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A00640 (FsRtlKernelFsControlFile.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140A121BC (WmipSendWmiIrpToTraceDeviceList.c)
 *     IopUserRundown @ 0x140A20600 (IopUserRundown.c)
 *     FsRtlQueryInformationFile @ 0x140A2B210 (FsRtlQueryInformationFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140A5AAF0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140A636B0 (FsRtlMdlReadEx.c)
 *     WmipGetFilePDO @ 0x140A93244 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x140AA1848 (WmipSetTraceNotify.c)
 *     SmKmFileInfoCleanup @ 0x140AAC740 (SmKmFileInfoCleanup.c)
 *     VfIrpSendSynchronousIrp @ 0x140B7DF20 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x140252920 (IopFreeIrpExtension.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     PspReturnResourceQuota @ 0x1403C651C (PspReturnResourceQuota.c)
 *     ExIsSpecialPoolAddress @ 0x1403C6C50 (ExIsSpecialPoolAddress.c)
 *     IopFreeReserveIrp @ 0x1404D4334 (IopFreeReserveIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140B96F50 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  unsigned int v2; // r14d
  bool v3; // zf
  __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  UCHAR AllocationFlags; // al
  unsigned __int64 v7; // r9
  USHORT Size; // r8
  ULONG_PTR v9; // r8
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rbp
  UCHAR v13; // al
  ULONG_PTR BugCheckParameter4; // r12
  signed __int64 v15; // rdx
  ULONG_PTR v16; // r13
  unsigned __int64 p_OriginalFileObject; // rdi
  __int16 v18; // ax
  __int64 v19; // r8
  ULONG_PTR v20; // rsi
  ULONG_PTR v21; // r13
  ULONG_PTR v22; // r11
  unsigned __int64 *v23; // r13
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rax
  unsigned __int64 *v26; // r9
  unsigned __int64 v27; // rdx
  ULONG_PTR v28; // r10
  signed __int64 v29; // rax
  signed __int64 v30; // r15
  bool v31; // cc
  signed __int64 v32; // r15
  unsigned __int64 v33; // rtt
  __int64 v34; // rax
  KIRQL v35; // al
  KIRQL v36; // r8
  int v37; // esi
  char *v38; // rdx
  ULONG_PTR v39; // [rsp+30h] [rbp-58h]
  ULONG_PTR v40; // [rsp+38h] [rbp-50h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v42; // [rsp+98h] [rbp+10h]
  KIRQL v43; // [rsp+98h] [rbp+10h]
  unsigned int v44; // [rsp+A0h] [rbp+18h]
  __int64 *v45; // [rsp+A8h] [rbp+20h]

  if ( IopDispatchFreeIrp )
  {
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  }
  else
  {
    v2 = 0;
    if ( Irp->Type != 6 )
      KeBugCheckEx(0x44u, (ULONG_PTR)Irp, 0x27A2uLL, 0LL, 0LL);
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
        || (v7 = (unsigned int)(char)IopMediumIrpStackLocations, (IopIrpStackProfilerFlags & 3) != 0)
        && (Size = Irp->Size, Size != 72 * (char)IopLargeIrpStackLocations + 208)
        && Size != 72 * (char)IopMediumIrpStackLocations + 208
        && Size != 280 )
      {
        ExFreePoolWithTag(Irp, 0);
        return;
      }
      v9 = Irp->Size;
      if ( (unsigned __int16)v9 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
      {
        if ( (unsigned __int16)v9 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
        {
          v10 = 2048LL;
          v11 = 2056LL;
        }
        else
        {
          v10 = 2064LL;
          v11 = 2072LL;
        }
      }
      else
      {
        v10 = 2080LL;
        v11 = 2088LL;
      }
      Irp->IoStatus.Information = v9;
      v12 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v10);
      ++*(_DWORD *)(v12 + 28);
      if ( *(_WORD *)v12 >= *(_WORD *)(v12 + 16) )
      {
        ++*(_DWORD *)(v12 + 32);
        v12 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v11);
        ++*(_DWORD *)(v12 + 28);
        if ( *(_WORD *)v12 >= *(_WORD *)(v12 + 16) )
        {
          ++*(_DWORD *)(v12 + 32);
          ExFreePoolWithTag(Irp, 0);
          return;
        }
      }
      v13 = Irp->AllocationFlags;
      if ( (v13 & 1) != 0 )
      {
        v44 = 0;
        Irp->AllocationFlags = v13 ^ 1;
        BugCheckParameter4 = 0LL;
        if ( !ExpSpecialAllocations || !(unsigned int)ExIsSpecialPoolAddress(Irp, CurrentPrcb, v9, v7) )
        {
          v15 = 0xFFFF800000000000uLL;
          if ( (unsigned __int64)Irp >= 0xFFFF800000000000uLL
            && byte_140E38768[(((unsigned __int64)Irp >> 39) & 0x1FF) - 256] == 5 )
          {
            v16 = 256LL;
          }
          else
          {
            v16 = 64LL;
          }
          p_OriginalFileObject = 0LL;
          if ( ((unsigned __int16)Irp & 0xFFF) != 0 )
          {
            p_OriginalFileObject = (unsigned __int64)&Irp[-1].Tail.Overlay.OriginalFileObject;
            if ( (*((_BYTE *)&Irp[-1].Tail.CompletionKey + 75) & 4) != 0 )
              p_OriginalFileObject += -16LL * (unsigned __int8)*(_WORD *)p_OriginalFileObject;
            v18 = *(_WORD *)(p_OriginalFileObject + 2);
            v19 = *(unsigned int *)(p_OriginalFileObject + 4);
            BugCheckParameter4 = 16LL * (unsigned __int8)v18;
            v44 = *(_DWORD *)(p_OriginalFileObject + 4);
            if ( (v18 & 0x800) == 0 )
              goto LABEL_44;
            v20 = ExpPoolQuotaCookie ^ *(_QWORD *)(p_OriginalFileObject + 8) ^ p_OriginalFileObject;
            *(_QWORD *)(p_OriginalFileObject + 8) = ExpPoolQuotaCookie ^ p_OriginalFileObject;
          }
          else
          {
            v35 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
            v36 = v35;
            v37 = 1;
            v43 = v35;
            v7 = ((int)PoolBigPageTableSize - 1) & ((40543 * (unsigned int)((unsigned __int64)Irp >> 12)) ^ ((40543 * ((unsigned __int64)Irp >> 12)) >> 32));
            while ( 1 )
            {
              v38 = (char *)PoolBigPageTable + 32 * (unsigned int)v7;
              if ( *(PIRP *)v38 == Irp )
                break;
              v7 = (unsigned int)(v7 + 1);
              if ( (unsigned int)v7 >= (unsigned __int64)PoolBigPageTableSize )
              {
                if ( !v37 )
                  goto LABEL_64;
                v7 = 0LL;
                v37 = 0;
              }
            }
            if ( !v38 )
LABEL_64:
              KeBugCheckEx(0x19u, 0x22uLL, (ULONG_PTR)Irp, v16, 0LL);
            if ( (*((_DWORD *)v38 + 3) & 0x100) != 0 )
            {
              BugCheckParameter4 = *((_QWORD *)v38 + 2);
              v20 = (unsigned __int64)Irp ^ ExpPoolQuotaCookie ^ *((_QWORD *)v38 + 3);
              *((_QWORD *)v38 + 3) = ExpPoolQuotaCookie ^ (unsigned __int64)Irp;
              v44 = *((_DWORD *)v38 + 2);
            }
            else
            {
              v20 = -1LL;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
              _InterlockedDecrement(&ExpLargePoolTableLock);
            }
            else
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr, v35);
              v36 = v43;
            }
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v36);
            __writecr8(v43);
            v19 = v44;
            v15 = 0xFFFF800000000000uLL;
          }
          if ( v20 && v20 != -1LL )
          {
            if ( v20 < 0xFFFF800000000000uLL || (*(_BYTE *)v20 & 0x7F) != 3 )
            {
              if ( p_OriginalFileObject )
                v2 = *(_DWORD *)(p_OriginalFileObject + 4);
              KeBugCheckEx(0xC2u, 0xDuLL, (ULONG_PTR)Irp, v2, v20);
            }
            v21 = v16 & 0x100;
            if ( (PEPROCESS)v20 != PsInitialSystemProcess )
            {
              v45 = *(__int64 **)(v20 + 760);
              v22 = v21 != 0;
              v39 = v22;
              v42 = PspResourceFlags[8 * v22];
              v40 = v22 << 7;
              v23 = (unsigned __int64 *)&v45[16 * v22];
              _m_prefetchw(v23);
              v24 = *v23;
              v25 = v23[8];
              if ( v23[10] )
              {
                if ( v25 > v24 )
                {
                  v26 = (unsigned __int64 *)&qword_140F05468[7 * v22];
                  v27 = *v26;
                  if ( v25 - v24 > *v26 )
                  {
                    if ( v27 > BugCheckParameter4 )
                      v27 = BugCheckParameter4;
                    v33 = v23[8];
                    if ( v33 == _InterlockedCompareExchange64((volatile signed __int64 *)v23 + 8, v25 - v27, v25)
                      && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 9, v27) + v27 > *v26 )
                    {
                      v34 = _InterlockedExchange64((volatile __int64 *)v23 + 9, 0LL);
                      if ( v34 )
                      {
                        PspReturnResourceQuota((unsigned int)v22, v23, v34, 0LL);
                        v19 = v44;
                        v22 = v39;
                      }
                    }
                  }
                }
              }
              v28 = BugCheckParameter4;
              while ( 1 )
              {
                do
                {
                  v7 = v24;
                  v15 = 0LL;
                  if ( BugCheckParameter4 < v24 )
                  {
                    v7 = BugCheckParameter4;
                    v15 = v24 - BugCheckParameter4;
                  }
                  v29 = _InterlockedCompareExchange64((volatile signed __int64 *)v23, v15, v24);
                  v3 = v24 == v29;
                  v24 = v29;
                }
                while ( !v3 );
                BugCheckParameter4 -= v7;
                if ( !BugCheckParameter4 )
                  break;
                if ( v45 == &PspSystemQuotaBlock )
                  KeBugCheckEx(0x21u, v20, v22, v28, BugCheckParameter4);
                v23 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v40);
                v45 = &PspSystemQuotaBlock;
                _m_prefetchw((char *)&PspSystemQuotaBlock + v40);
                v24 = *v23;
              }
              if ( (v42 & 4) != 0 )
                _InterlockedAdd64((volatile signed __int64 *)(v20 + 8 * v22 + 512), -(__int64)v28);
            }
            if ( ObpTraceFlags )
              ObpPushStackInfo(v20 - 48);
            v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 - 48), 0xFFFFFFFFFFFFFFFFuLL);
            v31 = v30 <= 1;
            v32 = v30 - 1;
            if ( v31 )
            {
              if ( *(_QWORD *)(v20 - 40) )
                KeBugCheckEx(
                  0x18u,
                  ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v20 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v20 - 48) >> 8)],
                  v20,
                  3uLL,
                  *(_QWORD *)(v20 - 40));
              if ( v32 < 0 )
                KeBugCheckEx(0x18u, 0LL, v20, 4uLL, v32);
              ObpDeferObjectDeletion(v20 - 48, v15, v19, v7);
            }
          }
        }
      }
LABEL_44:
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v12, (PSLIST_ENTRY)Irp);
      return;
    }
    IopFreeReserveIrp(Irp);
  }
}
