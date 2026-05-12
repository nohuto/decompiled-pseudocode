/*
 * XREFs of StorpAdapterInitializePoFxPower @ 0x140074E94
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x140008324 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x14002B0C0 (RaidGetStorPoFxComponent.c)
 *     RaMiniportGetRaidAdapter @ 0x140036868 (RaMiniportGetRaidAdapter.c)
 *     McTemplateK0pqtqqt_EtwWriteTransfer @ 0x140056AC8 (McTemplateK0pqtqqt_EtwWriteTransfer.c)
 *     RaidAdapterValidateStorPoFxComponent @ 0x140072BC0 (RaidAdapterValidateStorPoFxComponent.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x140072C84 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x140072FB4 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1400781BC (RaidRegisterForRuntimePowerManagement.c)
 *     RaidSetD3Cold @ 0x140078A68 (RaidSetD3Cold.c)
 *     RaidNotifyPoAboutDFxOptOut @ 0x1400BE264 (RaidNotifyPoAboutDFxOptOut.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall StorpAdapterInitializePoFxPower(__int64 a1, int *a2, _BYTE *a3)
{
  _BYTE *v5; // rcx
  __int64 RaidAdapter; // rax
  bool *v8; // r8
  __int64 v9; // rbx
  char v10; // al
  __int64 v11; // rdx
  int *v12; // rcx
  int *StorPoFxComponent; // rax
  int *v14; // rbp
  __int64 v15; // rcx
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v17; // rsi
  _QWORD *Pool; // r15
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  char v22; // cl
  _DWORD *v23; // rsi
  int v24; // eax
  char v25; // al
  char v26; // cl
  char v27; // al
  __int64 v28; // r8
  unsigned int v29; // edx
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned int v32; // [rsp+28h] [rbp-40h]
  __int64 v33; // [rsp+78h] [rbp+10h] BYREF

  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    return 3238002694LL;
  v5 = *(_BYTE **)(a1 - 16);
  if ( (v5[248] & 1) != 0 )
    return 3238002690LL;
  RaidAdapter = RaMiniportGetRaidAdapter(v5);
  v9 = RaidAdapter;
  if ( !RaidAdapter )
    return 3238002694LL;
  if ( RuntimePowerDisabled )
  {
    *(_BYTE *)(RaidAdapter + 110) |= 4u;
    return 0LL;
  }
  v10 = *(_BYTE *)(RaidAdapter + 107);
  if ( (v10 & 0x20) != 0 )
    return 3221225473LL;
  if ( *(_QWORD *)(v9 + 4960) )
  {
    if ( a3 )
      *v8 = (v10 & 0x10) != 0;
    return 0LL;
  }
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid(a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(v11 + 8) != 1 )
    return 3238002694LL;
  StorPoFxComponent = RaidGetStorPoFxComponent(v12, 0);
  v14 = StorPoFxComponent;
  if ( !StorPoFxComponent || !RaidAdapterValidateStorPoFxComponent((__int64)StorPoFxComponent) )
    return 3238002694LL;
  v15 = *(_QWORD *)(v9 + 8);
  v33 = 0LL;
  if ( (int)RaidRegisterForRuntimePowerManagement(v15, a2, v9, &v33) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize(a2);
  v17 = TotalStorPoFxDeviceSize;
  Pool = (_QWORD *)RaidAllocatePool(64LL, TotalStorPoFxDeviceSize + 144, 1330667858LL, *(_QWORD *)(v9 + 8));
  if ( Pool )
  {
    v19 = v33;
    *((_DWORD *)Pool + 4) = 0;
    *Pool = v19;
    v20 = *((_DWORD *)Pool + 5) | 3;
    *((_DWORD *)Pool + 5) = v20;
    if ( v14[2] == 1 )
      *((_DWORD *)Pool + 5) = v20 | 0x100;
    Pool[1] = Pool + 18;
    memmove(Pool + 18, a2, v17);
    v22 = *(_BYTE *)(v9 + 107);
    v23 = a2 + 3;
    if ( (v22 & 8) != 0
      && (*v23 & 4) != 0
      && (LOBYTE(v21) = 1, v24 = RaidSetD3Cold(*(_QWORD *)(v9 + 8), v21), v22 = *(_BYTE *)(v9 + 107), v24 >= 0) )
    {
      *(_BYTE *)(v9 + 107) = v22 | 0x10;
      if ( a3 )
        *a3 = 1;
    }
    else
    {
      *(_BYTE *)(v9 + 107) = v22 & 0xEF;
    }
    if ( (*v23 & 8) != 0 )
      *(_BYTE *)(v9 + 107) |= 0x40u;
    if ( (*v23 & 0x200) != 0 )
    {
      *(_BYTE *)(v9 + 108) |= 0x80u;
      v23 = a2 + 3;
    }
    if ( (*(_BYTE *)(v9 + 112) & 0x40) != 0 && (*(_BYTE *)(v9 + 107) & 0x10) != 0 && (*(_BYTE *)v23 & 0x40) != 0 )
      v25 = *(_BYTE *)(v9 + 110) | 0x40;
    else
      v25 = *(_BYTE *)(v9 + 110) & 0xBF;
    *(_BYTE *)(v9 + 110) = v25;
    v26 = v25;
    if ( (v25 & 0x40) != 0 )
    {
      LOBYTE(v21) = *(_BYTE *)v23 & 0x40;
      RaidNotifyPoAboutDFxOptOut(*(_QWORD *)(v9 + 32), v21);
      v26 = *(_BYTE *)(v9 + 110);
    }
    if ( (*v23 & 0x40) != 0 )
      *(_BYTE *)(v9 + 108) |= 8u;
    if ( (v26 & 0x40) != 0 )
    {
      v27 = *(_BYTE *)(v9 + 108);
      if ( (v27 & 8) != 0 )
        *(_BYTE *)(v9 + 108) = v27 & 0xF7;
    }
    if ( (a2[3] & 0x400) != 0 )
      *(_BYTE *)(v9 + 109) |= 1u;
    PoFxSetComponentLatency(*Pool, 0LL, -1LL);
    PoFxSetComponentResidency(*Pool, 0LL, -1LL);
    if ( *(char *)(v9 + 107) >= 0 && (unsigned int)*a2 >= 2 && (a2[3] & 0x10) != 0 )
      *(_DWORD *)(v9 + 4976) = a2[4];
    v29 = *(_DWORD *)(v9 + 4976);
    *(_QWORD *)(v9 + 4960) = Pool;
    RaidAdapterPoFxSetDeviceIdleTimeout(v9, v29, v28, 0);
    if ( StorEtwLoggingEnabled )
    {
      v31 = *(unsigned int *)(v9 + 56);
      if ( (_DWORD)v31 != -1 && (byte_140171462 & 0x10) != 0 )
      {
        v32 = (*(unsigned __int8 *)(v9 + 107) >> 4) & 1;
        McTemplateK0pqtqqt_EtwWriteTransfer(
          v32,
          v31,
          v30,
          **(_QWORD **)(v9 + 4960),
          v31,
          v32,
          *(_DWORD *)(v9 + 4976),
          v14[2],
          (*(unsigned __int8 *)(v9 + 110) >> 6) & 1);
      }
    }
    PoFxStartDevicePowerManagement(**(_QWORD **)(v9 + 4960));
    return 0LL;
  }
  PoFxUnregisterDevice(v33);
  return 3238002691LL;
}
