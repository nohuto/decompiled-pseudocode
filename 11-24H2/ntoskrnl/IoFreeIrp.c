/*
 * XREFs of IoFreeIrp @ 0x1402C30B0
 * Callers:
 *     IopCompletePageWrite @ 0x1402593B0 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14025DD60 (IopBuildAsynchronousFsdRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x14025EF00 (IopBuildDeviceIoControlRequest.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     PnpDeviceCompletionRoutine @ 0x1402F0310 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x1403A7BB8 (PopFreeIrp.c)
 *     IopDropIrp @ 0x1403B3CD0 (IopDropIrp.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x1404089C0 (IopCancelIrpsInFileObjectList.c)
 *     PopFxDestroyDeviceDpm @ 0x1404D27A8 (PopFxDestroyDeviceDpm.c)
 *     FsRtlGetFileExtents @ 0x14057CC20 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x1405A6450 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405A64B0 (PnpDiagnosticCompletionRoutine.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14060D270 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     DifIoFreeIrpWrapper @ 0x140626A20 (DifIoFreeIrpWrapper.c)
 *     IoCancelFileOpen @ 0x1406F7A40 (IoCancelFileOpen.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070BA10 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070BAB0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopCancelPendingEject @ 0x1407318D4 (IopCancelPendingEject.c)
 *     PopAcquirePowerLimitInterface @ 0x1407492F0 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x14074A2D0 (PopAcquireCoolingInterface.c)
 *     PopConnectToPolicyDevice @ 0x140758ACC (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x1407591D4 (PopPolicyDeviceRemove.c)
 *     SmKmIsVolumeIoPossible @ 0x140799E00 (SmKmIsVolumeIoPossible.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     CmpGetVolumeClusterSize @ 0x140932C5C (CmpGetVolumeClusterSize.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     CmpFileFlushAndPurge @ 0x140969824 (CmpFileFlushAndPurge.c)
 *     IopFreeCompletionListPackets @ 0x1409905F8 (IopFreeCompletionListPackets.c)
 *     WmipSendWmiIrp @ 0x1409B2964 (WmipSendWmiIrp.c)
 *     FsRtlQueryKernelEaFile @ 0x1409F5D70 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x1409F5FA0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1409F6160 (FsRtlKernelFsControlFile.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140A0F778 (WmipSendWmiIrpToTraceDeviceList.c)
 *     IopUserRundown @ 0x140A1EB00 (IopUserRundown.c)
 *     FsRtlQueryInformationFile @ 0x140A23950 (FsRtlQueryInformationFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140A54590 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140A5E3A0 (FsRtlMdlReadEx.c)
 *     WmipGetFilePDO @ 0x140A93DA4 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x140AA1CE8 (WmipSetTraceNotify.c)
 *     SmKmFileInfoCleanup @ 0x140AAC920 (SmKmFileInfoCleanup.c)
 *     VfIrpSendSynchronousIrp @ 0x140B8FF00 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     IopFreeIrpExtension @ 0x1402C3EF0 (IopFreeIrpExtension.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     ExIsSpecialPoolAddress @ 0x14048BD64 (ExIsSpecialPoolAddress.c)
 *     IopFreeReserveIrp @ 0x1404CD41C (IopFreeReserveIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140BA8F30 (IovFreeIrpPrivate.c)
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
      KeBugCheckEx(IopDispatchFreeIrp + 68, (ULONG_PTR)Irp, 0x27C1uLL, 0LL, 0LL);
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
        if ( !ExpSpecialAllocations || !(unsigned int)ExIsSpecialPoolAddress(Irp) )
        {
          if ( (unsigned __int64)Irp >= 0xFFFF800000000000uLL
            && byte_140E38AE8[(((unsigned __int64)Irp >> 39) & 0x1FF) - 256] == 5 )
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
                  v23 = (unsigned __int64 *)&qword_140F05B28[7 * v19];
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
