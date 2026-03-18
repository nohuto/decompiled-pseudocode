/*
 * XREFs of HvcallFastExtended @ 0x1403AF3C0
 * Callers:
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1403AD990 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1403ADFF0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlFlushTbAllPartitions @ 0x1403AEB30 (HvlFlushTbAllPartitions.c)
 *     HvlFlushRangeListTb @ 0x1403AEEF0 (HvlFlushRangeListTb.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1403C8838 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlParkedVirtualProcessors @ 0x1403C8E74 (HvlParkedVirtualProcessors.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1403C9984 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x1403C9B54 (HvlpFastFlushListTbEx.c)
 *     HvlDmaMapDeviceSparsePages @ 0x14046E870 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140477AA0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlpFastFlushPasidAddressList @ 0x1404972DC (HvlpFastFlushPasidAddressList.c)
 *     HvlpFlushPasidAddressSpace @ 0x1404973D0 (HvlpFlushPasidAddressSpace.c)
 *     HvlpReadPerfRegister @ 0x14058497C (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140585BB0 (HvlpWritePerfRegister.c)
 *     HvlAttachPasidSpace @ 0x140585E00 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140585EB0 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x140585F60 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x140585FC0 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140586080 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x140586170 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x1405861D0 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x140586220 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x140586270 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1405862F0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1405863C0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140586480 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140586540 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1405865D0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x140586630 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x140586950 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x140586A10 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140586A60 (HvlEnablePasid.c)
 *     HvlRestoreTime @ 0x140588000 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x140588160 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x140588200 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x140588500 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x1405885B0 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x1405887C0 (HvlUnblockDefaultDma.c)
 *     HvlUnregisterDeviceId @ 0x140588900 (HvlUnregisterDeviceId.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x140588950 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpFastAcknowledgePageRequest @ 0x140588B38 (HvlpFastAcknowledgePageRequest.c)
 *     HvlWakeVirtualProcessors @ 0x1405897E0 (HvlWakeVirtualProcessors.c)
 *     HvlpProcessIommuPrq @ 0x14058B010 (HvlpProcessIommuPrq.c)
 *     HvlpGetVtlCallVa @ 0x1406A0B30 (HvlpGetVtlCallVa.c)
 *     HvlpAddRemovePhysicalMemory @ 0x1406A0D20 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070F368 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     RtlGetSystemTimePrecise @ 0x14034EB80 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1403FF27C (EtwpGetHostPerfCounter.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1406B5160 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1406B51C0 (HvcallpExtendedFastHypercallWithOutput.c)
 */

__int64 __fastcall HvcallFastExtended(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  char v9; // si
  __int64 v10; // rdi
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edi
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // [rsp+30h] [rbp-51h] BYREF
  char v26; // [rsp+34h] [rbp-4Dh]
  __int16 v27; // [rsp+35h] [rbp-4Ch]
  char v28; // [rsp+37h] [rbp-4Ah]
  _BYTE v29[8]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v30; // [rsp+40h] [rbp-41h]
  __int128 v31; // [rsp+50h] [rbp-31h]
  _BYTE *v32; // [rsp+60h] [rbp-21h] BYREF
  __int64 v33; // [rsp+68h] [rbp-19h]
  int *v34; // [rsp+70h] [rbp-11h]
  __int64 v35; // [rsp+78h] [rbp-9h]

  v30 = 0LL;
  v31 = 0LL;
  if ( (BYTE4(xmmword_140FC5B10) & 0x10) == 0 )
  {
    v9 = 0;
    goto LABEL_3;
  }
  v9 = 1;
  v21 = 0;
  if ( qword_140FCEC80 )
  {
    v22 = *(_DWORD *)(qword_140FCEC80 + 4520);
    for ( i = !_BitScanForward((unsigned int *)&v23, v22); !i; i = !_BitScanForward((unsigned int *)&v23, v22) )
    {
      v22 &= v22 - 1;
      v24 = qword_140FCEC80 + 32 * v23 + 4556;
      if ( v24 && (*(_DWORD *)(v24 + 20) & 0x10) != 0 )
        v21 |= 1 << *(_BYTE *)(qword_140FCEC80 + 2 * v23 + 4505);
    }
    if ( (v21 & 2) == 0 )
      goto LABEL_25;
  }
  else
  {
    LOBYTE(v21) = 30;
  }
  *(LARGE_INTEGER *)&v30 = KeQueryPerformanceCounter(0LL);
LABEL_25:
  if ( (v21 & 4) != 0 )
    *((_QWORD *)&v30 + 1) = RtlGetSystemTimePrecise();
  else
    *((_QWORD *)&v30 + 1) = 0LL;
  if ( (v21 & 8) != 0 )
    *(_QWORD *)&v31 = __rdtsc();
  else
    *(_QWORD *)&v31 = 0LL;
  if ( (v21 & 0x10) != 0 )
    *((_QWORD *)&v31 + 1) = EtwpGetHostPerfCounter(v23);
  else
    *((_QWORD *)&v31 + 1) = 0LL;
LABEL_3:
  if ( a5 )
  {
    v10 = HvcallpExtendedFastHypercallWithOutput(a1, a2, (a3 + 15) >> 4, 0, a4, a5 >> 4);
    if ( v9 )
    {
      v28 = 0;
      v25 = (unsigned __int16)a1;
      v26 = BYTE2(a1) & 1;
      v34 = &v25;
      v27 = (int)a1 < 0;
      v35 = 8LL;
      v17 = *(_DWORD *)(EtwpHostSiloState + 4520);
      for ( i = !_BitScanForward((unsigned int *)&v18, v17); !i; i = !_BitScanForward((unsigned int *)&v18, v17) )
      {
        v17 &= v17 - 1;
        v19 = EtwpHostSiloState + 32LL * (unsigned int)v18 + 4556;
        if ( v19 && (*(_DWORD *)(v19 + 20) & 0x10) != 0 )
        {
          v20 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v18 + 4505);
          v33 = 8LL;
          v32 = &v29[8 * v20];
          EtwpLogKernelEvent(
            (__int64)&v32,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v18 + 4504),
            2u,
            3954,
            0x500E02u);
        }
      }
    }
  }
  else
  {
    v10 = HvcallpExtendedFastHypercall(a1, a2, a3);
    if ( v9 )
    {
      v28 = 0;
      v25 = (unsigned __int16)a1;
      v27 = (int)a1 < 0;
      v26 = BYTE2(a1) & 1;
      v34 = &v25;
      v35 = 8LL;
      v11 = *(_DWORD *)(EtwpHostSiloState + 4520);
      for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
      {
        v11 &= v11 - 1;
        v14 = EtwpHostSiloState + 32LL * (unsigned int)v13 + 4556;
        if ( v14 && (*(_DWORD *)(v14 + 20) & 0x10) != 0 )
        {
          v15 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4505);
          v33 = 8LL;
          v32 = &v29[8 * v15];
          EtwpLogKernelEvent(
            (__int64)&v32,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v13 + 4504),
            2u,
            3954,
            0x500E02u);
        }
      }
    }
  }
  return v10;
}
