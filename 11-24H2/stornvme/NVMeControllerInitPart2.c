/*
 * XREFs of NVMeControllerInitPart2 @ 0x140007440
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeHwInitialize @ 0x140018530 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1400185A0 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerReinitialize @ 0x1400274C4 (NVMeControllerReinitialize.c)
 * Callees:
 *     NVMeInitHostMemoryBuffer @ 0x140006BB0 (NVMeInitHostMemoryBuffer.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x140006E40 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeSetArbitration @ 0x140007010 (NVMeSetArbitration.c)
 *     NVMeSetIoQueueCount @ 0x1400076C0 (NVMeSetIoQueueCount.c)
 *     IoQueuesCreation @ 0x140007860 (IoQueuesCreation.c)
 *     NVMeSetInterruptCoalescing @ 0x14000D410 (NVMeSetInterruptCoalescing.c)
 *     GetInterruptMessageInformation @ 0x1400169A0 (GetInterruptMessageInformation.c)
 *     FillControllerRuntimeLog @ 0x140017B10 (FillControllerRuntimeLog.c)
 *     InitializePerfOptions @ 0x14001A1B0 (InitializePerfOptions.c)
 *     IoQueuesCreationAsync @ 0x14001A314 (IoQueuesCreationAsync.c)
 *     IoQueuesInitialize @ 0x14001A6C8 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x14001ADD8 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x14001AEE8 (IoSqToIoCqMapping.c)
 *     NVMeInitStreams @ 0x14001E0C8 (NVMeInitStreams.c)
 *     NVMeBuildPollingConfiguration @ 0x140026CF4 (NVMeBuildPollingConfiguration.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 */

__int64 __fastcall NVMeControllerInitPart2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // r14
  bool v5; // zf
  unsigned __int8 v6; // bp
  char v7; // di
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _OWORD v16[5]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-48h]

  memset(v16, 0, sizeof(v16));
  v4 = 0;
  v5 = (*(_DWORD *)(a1 + 56) & 0x1000000) == 0;
  v6 = a3;
  v17 = 0LL;
  v7 = a2;
  v9 = 0;
  if ( !v5 )
    v4 = *(_DWORD *)(a1 + 212) == 0;
  if ( (_BYTE)a2 )
  {
    if ( !(unsigned __int8)GetInterruptMessageInformation() )
    {
      *(_DWORD *)(a1 + 28) = 11;
      goto LABEL_28;
    }
    NVMeBuildPollingConfiguration(a1, v6);
  }
  if ( v4 )
    goto LABEL_21;
  if ( (*(_DWORD *)(a1 + 128) & 0x10) == 0 && (*(_DWORD *)(a1 + 24) & 0x2000) != 0 )
    *(_DWORD *)(a1 + 124) = 0xFFFF;
  LOBYTE(a2) = v7 == 0;
  v10 = NVMeSetIoQueueCount(a1, a2, v6);
  v9 = v10;
  if ( v10 || !*(_WORD *)(a1 + 982) && (!*(_WORD *)(a1 + 332) || !*(_WORD *)(a1 + 330)) )
  {
    *(_DWORD *)(a1 + 28) = 12;
    if ( v10 )
      goto LABEL_52;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
    NVMeSetInterruptCoalescing(a1, v6);
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
    NVMeSetArbitration(a1, v6);
  if ( v7 )
  {
    if ( *(_WORD *)(a1 + 332) && *(_WORD *)(a1 + 330) )
    {
      if ( (*(_DWORD *)(a1 + 24) & 0x800000) == 0 && !(unsigned __int8)InitializePerfOptions(a1) )
      {
        *(_DWORD *)(a1 + 330) = 0;
        *(_DWORD *)(a1 + 28) = 21;
        goto LABEL_28;
      }
      if ( !(unsigned __int8)IoQueuesInitialize(a1) )
      {
        *(_DWORD *)(a1 + 28) = 13;
        goto LABEL_28;
      }
      IoSqToIoCqMapping(a1);
    }
    if ( *(_BYTE *)(a1 + 20) || !*(_WORD *)(a1 + 982) || (unsigned __int8)IoReservedQueuesInitialize(a1) )
      goto LABEL_13;
    *(_DWORD *)(a1 + 28) = 17;
LABEL_28:
    v9 = -1056964607;
    goto LABEL_52;
  }
LABEL_13:
  if ( !*(_WORD *)(a1 + 332) || !*(_WORD *)(a1 + 330) )
    goto LABEL_21;
  if ( (*(_DWORD *)(a1 + 128) & 4) == 0 && !v6 )
  {
    if ( !(unsigned __int8)IoQueuesCreationAsync(a1, 0LL) )
      goto LABEL_28;
LABEL_21:
    NVMeInitHostMemoryBuffer(a1, a2, a3, a4);
    if ( v4 )
    {
LABEL_22:
      NVMeControllerGetFeaturesSupportedCacheCapabilities(a1);
      goto LABEL_23;
    }
LABEL_38:
    if ( (*(_BYTE *)(a1 + 3728) & 5) == 5 )
    {
      LOBYTE(v14) = -1;
      NVMeInitStreams(a1, v14);
    }
    goto LABEL_22;
  }
  v9 = IoQueuesCreation(a1, v6);
  if ( !v9 )
  {
    NVMeInitHostMemoryBuffer(a1, v11, v12, v13);
    goto LABEL_38;
  }
LABEL_52:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    FillControllerRuntimeLog(a1, v16);
    StorPortNotification(4109LL, a1, 0LL);
  }
  if ( v9 )
  {
    ++*(_DWORD *)(a1 + 4204);
    return v9;
  }
LABEL_23:
  ++*(_DWORD *)(a1 + 4200);
  return v9;
}
