/*
 * XREFs of NvmeControllerInitPhase2 @ 0x1400EFCD4
 * Callers:
 *     NvmeControllerAdvancedInitialize @ 0x1400EA71C (NvmeControllerAdvancedInitialize.c)
 *     NvmeControllerPowerUp @ 0x1400F2E00 (NvmeControllerPowerUp.c)
 *     NvmeControllerReinitialize @ 0x1400F3C7C (NvmeControllerReinitialize.c)
 * Callees:
 *     StorpMarkDeviceFailed @ 0x140075234 (StorpMarkDeviceFailed.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerGetFeaturesSupportedCacheCapabilities @ 0x1400C8E14 (NvmeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NvmeControllerSetArbitration @ 0x1400C941C (NvmeControllerSetArbitration.c)
 *     NvmeControllerSetInterruptCoalescing @ 0x1400C9E90 (NvmeControllerSetInterruptCoalescing.c)
 *     NvmeControllerSetIoQueueCount @ 0x1400C9FFC (NvmeControllerSetIoQueueCount.c)
 *     NvmeControllerConfigureCQIoPolling @ 0x1400EBD04 (NvmeControllerConfigureCQIoPolling.c)
 *     NvmeControllerGetInterruptMessageInfo @ 0x1400EDF04 (NvmeControllerGetInterruptMessageInfo.c)
 *     NvmeControllerInitHostMemoryBuffer @ 0x1400EF734 (NvmeControllerInitHostMemoryBuffer.c)
 *     NvmeControllerInitializePerfOptions @ 0x1400F0C40 (NvmeControllerInitializePerfOptions.c)
 *     NvmeControllerIoQueuesCreation @ 0x1400F1200 (NvmeControllerIoQueuesCreation.c)
 *     NvmeControllerIoQueuesInitialize @ 0x1400F159C (NvmeControllerIoQueuesInitialize.c)
 *     NvmeControllerIoSqToCqMapping @ 0x1400F18F0 (NvmeControllerIoSqToCqMapping.c)
 *     NvmeControllerProcessorToSqMapping @ 0x1400F33F0 (NvmeControllerProcessorToSqMapping.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeControllerInitPhase2(__int64 a1, __int64 a2, char a3)
{
  char v4; // r14
  bool v6; // bp
  __int64 v7; // rax
  int InterruptMessageInfo; // edi
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int16 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  char v18; // r8
  int v19; // ecx
  __int64 v20; // rax
  __int64 v22; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-40h] BYREF
  int v24; // [rsp+B0h] [rbp-38h]
  int v25; // [rsp+B4h] [rbp-34h]

  v4 = a2;
  v22 = 0LL;
  v25 = 0;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 656) )
  {
    v7 = *(_QWORD *)(a1 + 592);
    if ( v7 )
      v6 = *(_DWORD *)(v7 + 516) == 0;
  }
  if ( (_BYTE)a2 )
  {
    InterruptMessageInfo = NvmeControllerGetInterruptMessageInfo(a1);
    if ( InterruptMessageInfo < 0 )
    {
      *(_DWORD *)(a1 + 1192) = 33;
      v9 = L"Get interrupt information failed";
      goto LABEL_39;
    }
  }
  if ( v6 )
  {
LABEL_47:
    NvmeControllerInitHostMemoryBuffer((_QWORD *)a1, a3);
    NvmeControllerGetFeaturesSupportedCacheCapabilities(a1, a3);
    InterruptMessageInfo = 0;
    goto LABEL_48;
  }
  if ( (*(_QWORD *)(a1 + 968) & 0x2000LL) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 1048);
    if ( v10 )
      *(_DWORD *)(v10 + 92) = 0xFFFF;
  }
  LOBYTE(a2) = v4 == 0;
  InterruptMessageInfo = NvmeControllerSetIoQueueCount((_WORD *)a1, a2, a3);
  if ( InterruptMessageInfo < 0 )
  {
    *(_DWORD *)(a1 + 1192) = 12;
    v9 = L"Set IO queue count failed";
    goto LABEL_39;
  }
  if ( *(_WORD *)(a1 + 26) && *(_WORD *)(a1 + 22) )
  {
    v12 = *(_QWORD *)(a1 + 1048);
    if ( v12 && (*(_DWORD *)(v12 + 24) & 4) == 0 && *(_BYTE *)(a1 + 1728) != 1 )
    {
      NvmeControllerSetInterruptCoalescing(a1, a3);
      NvmeControllerSetArbitration(a1, a3);
    }
    if ( v4 )
    {
      if ( (*(_QWORD *)(a1 + 968) & 0x800000LL) == 0
        && *(_BYTE *)(a1 + 1728) != 1
        && !(unsigned __int8)NvmeControllerInitializePerfOptions(a1) )
      {
        *(_WORD *)(a1 + 26) = 0;
        v9 = L"Initialize perf options failed";
        *(_WORD *)(a1 + 22) = 0;
        InterruptMessageInfo = -1073741595;
        *(_DWORD *)(a1 + 1192) = 21;
        goto LABEL_39;
      }
      InterruptMessageInfo = NvmeControllerIoQueuesInitialize(a1);
      if ( InterruptMessageInfo < 0 )
      {
        *(_DWORD *)(a1 + 1192) = 13;
        v9 = L"Initialize IO queues failed";
        goto LABEL_39;
      }
      InterruptMessageInfo = NvmeControllerIoSqToCqMapping(a1);
      if ( InterruptMessageInfo < 0 )
      {
        *(_DWORD *)(a1 + 1192) = 32;
        v9 = L"IO queues mapping failed";
        goto LABEL_39;
      }
      InterruptMessageInfo = NvmeControllerProcessorToSqMapping(a1);
      if ( InterruptMessageInfo < 0 )
      {
        *(_DWORD *)(a1 + 1192) = 32;
        v9 = L"Processor to SQ mapping failed";
        goto LABEL_39;
      }
      NvmeControllerConfigureCQIoPolling(a1);
    }
    if ( *(_WORD *)(a1 + 26) && *(_WORD *)(a1 + 22) )
    {
      v13 = *(_QWORD *)(a1 + 1048);
      if ( (!v13 || (*(_DWORD *)(v13 + 96) & 4) == 0) && !a3 )
      {
        InterruptMessageInfo = -1073741822;
        v9 = L"IO queues async creation failed";
LABEL_39:
        v14 = *(_WORD *)(a1 + 1192);
        v23 = *(_QWORD *)(a1 + 968);
        v24 = *(_DWORD *)(a1 + 1192);
        StorpMarkDeviceFailed(*(_QWORD *)(a1 + 128), 0LL, 0, v14, v9, 8u, &v22, 0x10u, &v23);
        v15 = *(_QWORD *)(a1 + 1288);
        if ( v15 )
          ++*(_DWORD *)(v15 + 20);
        return (unsigned int)InterruptMessageInfo;
      }
      LOBYTE(v11) = a3;
      InterruptMessageInfo = NvmeControllerIoQueuesCreation(a1, v11);
      if ( InterruptMessageInfo < 0 )
      {
        v9 = L"IO queues sync creation failed";
        goto LABEL_39;
      }
    }
    if ( FeatureFixFUAForReadIoPerf && v4 )
    {
      v16 = *(_QWORD *)(a1 + 600);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 8);
        v18 = *(_BYTE *)(v16 + 3);
        v19 = *(_DWORD *)(v16 + 4);
      }
      else
      {
        LOBYTE(v17) = 0;
        v18 = 0;
        LOBYTE(v19) = 0;
      }
      StorEtwNvmeControllerEvent(
        a1,
        1,
        4,
        (__int64)L"Controller configuration",
        L"IO submission queue count",
        *(_WORD *)(a1 + 22),
        L"IO completion queue count",
        *(_WORD *)(a1 + 26),
        L"IO queue depth",
        *(_DWORD *)(a1 + 8),
        L"Bypass DMA API",
        HIDWORD(*(_QWORD *)(a1 + 136)) & 1,
        L"Maximum transfer length",
        *(_DWORD *)(a1 + 620),
        L"Dataset management range size limit",
        v19,
        L"Dataset management ranges limit",
        v18,
        L"Dataset management size limit",
        v17);
    }
    goto LABEL_47;
  }
  *(_DWORD *)(a1 + 1192) = 12;
LABEL_48:
  v20 = *(_QWORD *)(a1 + 1288);
  if ( v20 )
    ++*(_DWORD *)(v20 + 16);
  return (unsigned int)InterruptMessageInfo;
}
