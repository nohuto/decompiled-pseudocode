/*
 * XREFs of HvcallFastExtended @ 0x14032C840
 * Callers:
 *     HvlParkedVirtualProcessors @ 0x14026C074 (HvlParkedVirtualProcessors.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x14026DBD0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x14026E010 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlFlushTbAllPartitions @ 0x140270B80 (HvlFlushTbAllPartitions.c)
 *     HvlFlushRangeListTb @ 0x14032CB20 (HvlFlushRangeListTb.c)
 *     HvlDmaMapDeviceSparsePages @ 0x14046FDA0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140477CC0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1404C2F48 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1404C62C0 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpReadPerfRegister @ 0x1405811CC (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140582400 (HvlpWritePerfRegister.c)
 *     HvlAttachPasidSpace @ 0x140582650 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140582700 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x1405827B0 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x140582810 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x1405828D0 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x1405829C0 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x140582A20 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x140582A70 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x140582AC0 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140582B40 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140582C10 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140582CD0 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140582D90 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140582E20 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x140582E80 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405831A0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x140583260 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x1405832B0 (HvlEnablePasid.c)
 *     HvlRestoreTime @ 0x140584880 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x1405849E0 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x140584A80 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x140584D80 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x140584E30 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x140585040 (HvlUnblockDefaultDma.c)
 *     HvlUnregisterDeviceId @ 0x140585180 (HvlUnregisterDeviceId.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x1405851D0 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1405853B8 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x140585410 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFlushPasidAddressSpace @ 0x1405854DC (HvlpFlushPasidAddressSpace.c)
 *     HvlWakeVirtualProcessors @ 0x140586170 (HvlWakeVirtualProcessors.c)
 *     HvlpProcessIommuPrq @ 0x1405879A0 (HvlpProcessIommuPrq.c)
 *     HvlpGetVtlCallVa @ 0x140695790 (HvlpGetVtlCallVa.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140695980 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpFastFlushListTbEx @ 0x140695B20 (HvlpFastFlushListTbEx.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140703488 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     RtlGetSystemTimePrecise @ 0x14031AAC0 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1403F6D7C (EtwpGetHostPerfCounter.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1406A9E90 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1406A9EF0 (HvcallpExtendedFastHypercallWithOutput.c)
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
  if ( qword_140FCED00 )
  {
    v22 = *(_DWORD *)(qword_140FCED00 + 4248);
    for ( i = !_BitScanForward((unsigned int *)&v23, v22); !i; i = !_BitScanForward((unsigned int *)&v23, v22) )
    {
      v22 &= v22 - 1;
      v24 = qword_140FCED00 + 32 * v23 + 4284;
      if ( v24 && (*(_DWORD *)(v24 + 20) & 0x10) != 0 )
        v21 |= 1 << *(_BYTE *)(qword_140FCED00 + 2 * v23 + 4233);
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
      v17 = *(_DWORD *)(EtwpHostSiloState + 4248);
      for ( i = !_BitScanForward((unsigned int *)&v18, v17); !i; i = !_BitScanForward((unsigned int *)&v18, v17) )
      {
        v17 &= v17 - 1;
        v19 = EtwpHostSiloState + 32LL * (unsigned int)v18 + 4284;
        if ( v19 && (*(_DWORD *)(v19 + 20) & 0x10) != 0 )
        {
          v20 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v18 + 4233);
          v33 = 8LL;
          v32 = &v29[8 * v20];
          EtwpLogKernelEvent(
            (struct _KTHREAD *)&v32,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v18 + 4232),
            2u,
            0xF72u,
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
      v11 = *(_DWORD *)(EtwpHostSiloState + 4248);
      for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
      {
        v11 &= v11 - 1;
        v14 = EtwpHostSiloState + 32LL * (unsigned int)v13 + 4284;
        if ( v14 && (*(_DWORD *)(v14 + 20) & 0x10) != 0 )
        {
          v15 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4233);
          v33 = 8LL;
          v32 = &v29[8 * v15];
          EtwpLogKernelEvent(
            (struct _KTHREAD *)&v32,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v13 + 4232),
            2u,
            0xF72u,
            0x500E02u);
        }
      }
    }
  }
  return v10;
}
