/*
 * XREFs of HvcallFastExtended @ 0x14039DBD0
 * Callers:
 *     HvlDmaUnmapDeviceLogicalRange @ 0x14039C1A0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x14039C800 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlFlushTbAllPartitions @ 0x14039D340 (HvlFlushTbAllPartitions.c)
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 *     HvlParkedVirtualProcessors @ 0x1403A3A14 (HvlParkedVirtualProcessors.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1403A4524 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x1403A46F4 (HvlpFastFlushListTbEx.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1403A4C68 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140468D00 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404740A0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlpFastFlushPasidAddressList @ 0x140491C6C (HvlpFastFlushPasidAddressList.c)
 *     HvlpFlushPasidAddressSpace @ 0x140491D60 (HvlpFlushPasidAddressSpace.c)
 *     HvlpReadPerfRegister @ 0x140581CFC (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140582F30 (HvlpWritePerfRegister.c)
 *     HvlAttachPasidSpace @ 0x140583180 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140583230 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x1405832E0 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x140583340 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140583400 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x1405834F0 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x140583550 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x1405835A0 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x1405835F0 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140583670 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140583740 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140583800 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1405838C0 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140583950 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x1405839B0 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x140583CD0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x140583D90 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140583DE0 (HvlEnablePasid.c)
 *     HvlRestoreTime @ 0x140585320 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x140585440 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x1405854E0 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x1405857E0 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x140585890 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x140585AA0 (HvlUnblockDefaultDma.c)
 *     HvlUnregisterDeviceId @ 0x140585BE0 (HvlUnregisterDeviceId.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x140585C30 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpFastAcknowledgePageRequest @ 0x140585E18 (HvlpFastAcknowledgePageRequest.c)
 *     HvlWakeVirtualProcessors @ 0x140586AD0 (HvlWakeVirtualProcessors.c)
 *     HvlpProcessIommuPrq @ 0x140588300 (HvlpProcessIommuPrq.c)
 *     HvlpGetVtlCallVa @ 0x1405895B0 (HvlpGetVtlCallVa.c)
 *     HvlpAddRemovePhysicalMemory @ 0x1406A1D78 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070CEF8 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1403F98CC (EtwpGetHostPerfCounter.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1406B6100 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1406B6160 (HvcallpExtendedFastHypercallWithOutput.c)
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
  if ( (BYTE4(xmmword_140FC6B50) & 0x10) == 0 )
  {
    v9 = 0;
    goto LABEL_3;
  }
  v9 = 1;
  v21 = 0;
  if ( qword_140FCFC80 )
  {
    v22 = *(_DWORD *)(qword_140FCFC80 + 4520);
    for ( i = !_BitScanForward((unsigned int *)&v23, v22); !i; i = !_BitScanForward((unsigned int *)&v23, v22) )
    {
      v22 &= v22 - 1;
      v24 = qword_140FCFC80 + 32 * v23 + 4556;
      if ( v24 && (*(_DWORD *)(v24 + 20) & 0x10) != 0 )
        v21 |= 1 << *(_BYTE *)(qword_140FCFC80 + 2 * v23 + 4505);
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
    *((LARGE_INTEGER *)&v30 + 1) = RtlGetSystemTimePrecise();
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
