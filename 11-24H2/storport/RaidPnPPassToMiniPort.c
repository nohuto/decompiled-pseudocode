/*
 * XREFs of RaidPnPPassToMiniPort @ 0x140010ED8
 * Callers:
 *     RaidAdapterQueryCapabilitiesIrpCompletion @ 0x140010C00 (RaidAdapterQueryCapabilitiesIrpCompletion.c)
 *     NvmeAdapterQueryCapabilitiesIrpCompletion @ 0x1400D58C0 (NvmeAdapterQueryCapabilitiesIrpCompletion.c)
 *     RaidAdapterStopDeviceIrp @ 0x140183020 (RaidAdapterStopDeviceIrp.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019C384 (NvmeAdapterStopDeviceIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1401B7B2C (RaUnitQueryCapabilitiesIrp.c)
 *     RaidAdapterReleaseResources @ 0x1401BD580 (RaidAdapterReleaseResources.c)
 * Callees:
 *     IsDmarEnabled @ 0x140011E00 (IsDmarEnabled.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x14001BDD0 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x14001C05C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzzuuujsssqpquqqq_EtwWriteTransfer @ 0x140058048 (McTemplateK0qjzzuuujsssqpquqqq_EtwWriteTransfer.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 *     WPP_SF_qDD @ 0x140067DBC (WPP_SF_qDD.c)
 *     WPP_SF_qqq @ 0x140067F40 (WPP_SF_qqq.c)
 *     RaidLogAllocationFailure @ 0x14008D748 (RaidLogAllocationFailure.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidPnPPassToMiniPort(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int *v5; // rdi
  __int64 v6; // r11
  _BYTE *v7; // r15
  char v8; // bl
  int *v9; // rsi
  int v10; // ecx
  __int64 v11; // rax
  __int64 ContiguousIoResources; // rdx
  unsigned int *v13; // r14
  __int64 v14; // rbp
  unsigned int v15; // r13d
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 Pool2; // rax
  char *v20; // rdx
  __int64 v21; // rax
  char *v22; // rcx
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rax
  char v26; // cl
  __int64 v27; // r15
  volatile signed __int32 *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // eax
  int v32; // r15d
  unsigned int v33; // r15d
  unsigned int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rax
  PDEVICE_OBJECT v38; // rcx
  char v39; // al
  __int64 v40; // r15
  int v41; // eax
  __int64 v42; // rdx
  int v43; // r8d
  __int64 v44; // r9
  __int64 v45; // r12
  unsigned int *v46; // rax
  int v47; // r8d
  __int64 v48; // rcx
  void *v49; // r13
  int v50; // r8d
  const wchar_t *v51; // rcx
  char v52; // bl
  const wchar_t *v53; // r9
  char v54; // r12
  const wchar_t *v55; // r10
  __int128 *v56; // r11
  int v57; // edi
  void *v58; // rdx
  int v59; // [rsp+20h] [rbp-128h]
  unsigned int v61; // [rsp+B8h] [rbp-90h]
  char *BaseAddress; // [rsp+C0h] [rbp-88h]
  char *i; // [rsp+C8h] [rbp-80h]
  unsigned int *v64; // [rsp+D0h] [rbp-78h]
  __int128 v65; // [rsp+D8h] [rbp-70h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v67; // [rsp+F0h] [rbp-58h] BYREF
  __int128 v68; // [rsp+100h] [rbp-48h] BYREF

  v5 = *(int **)(a1 + 64);
  v6 = 0LL;
  *(_QWORD *)&v65 = a1;
  v7 = 0LL;
  *(_QWORD *)&v67 = a4;
  v8 = 0;
  v64 = 0LL;
  if ( *v5 == 1431193940 )
    v9 = (int *)*((_QWORD *)v5 + 3);
  else
    v9 = v5;
  if ( *v5 != 1431193940 )
    v5 = 0LL;
  if ( !*((_QWORD *)v9 + 76) || !*((_QWORD *)v9 + 77) )
    return 0LL;
  Interval.QuadPart = -1000LL;
  v10 = *v9;
  v11 = 79LL;
  v61 = 0;
  ContiguousIoResources = 0LL;
  if ( *v9 != 1314275652 )
    v11 = 131LL;
  BaseAddress = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v16 = (v9[v11] + 7) & 0xFFFFFFF8;
  if ( v10 == 1314275652 )
  {
    v17 = (__int64)v9 + 274;
  }
  else
  {
    v17 = (__int64)v9 + 482;
    if ( v10 != 1094997074 )
      v17 = 98LL;
  }
  for ( i = (char *)v17; ; v17 = (__int64)i )
  {
    if ( v13 )
      goto LABEL_17;
    v18 = *((_QWORD *)v9 + 1);
    if ( *(_BYTE *)v17 != 1 )
    {
      Pool2 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
      v6 = 0LL;
      v13 = (unsigned int *)Pool2;
      if ( Pool2 || !v18 )
        goto LABEL_16;
      v47 = 88;
LABEL_128:
      RaidLogAllocationFailure(v18, 64, v47, 1918067026, 0x80000000);
      v6 = 0LL;
      goto LABEL_16;
    }
    v36 = ExAllocatePool2(64LL, 168LL, 1918067026LL);
    v6 = 0LL;
    v13 = (unsigned int *)v36;
    if ( !v36 )
    {
      if ( !v18 )
        goto LABEL_16;
      v47 = 168;
      goto LABEL_128;
    }
    *(_BYTE *)(v36 + 2) = 40;
    *(_WORD *)v36 = 8;
    *(_DWORD *)(v36 + 8) = 1397899864;
    *(_DWORD *)(v36 + 12) = 1;
    *(_DWORD *)(v36 + 16) = 168;
    *(_DWORD *)(v36 + 20) = 37;
    *(_WORD *)(v36 + 36) = 2;
    *(_DWORD *)(v36 + 52) = 128;
    *(_DWORD *)(v36 + 56) = 1;
    *(_WORD *)(v36 + 128) = 1;
    *(_DWORD *)(v36 + 132) = 4;
    *(_DWORD *)(v36 + 120) = 144;
LABEL_16:
    v15 = v61;
    ContiguousIoResources = (__int64)BaseAddress;
LABEL_17:
    if ( !ContiguousIoResources )
    {
      ContiguousIoResources = StorAllocateContiguousIoResources(v16 + 1184);
      BaseAddress = (char *)ContiguousIoResources;
      v6 = 0LL;
    }
    if ( v13 && ContiguousIoResources )
      break;
    v35 = v15++;
    v61 = v15;
    if ( v35 >= 3 )
    {
      v33 = -1073741801;
      goto LABEL_59;
    }
    KeDelayExecutionThread(0, 0, &Interval);
    ContiguousIoResources = (__int64)BaseAddress;
    v6 = 0LL;
  }
  v14 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, ContiguousIoResources, 0LL, 0LL);
  *(_QWORD *)(v14 + 168) = v13;
  *(_QWORD *)(v14 + 176) = *((_QWORD *)v13 + 6);
  if ( *i == 1 )
  {
    v40 = v13[13];
    *((_QWORD *)v13 + 8) = v67;
    v7 = (char *)v13 + v40;
    v13[15] = a5;
    v13[5] = 37;
    v20 = (char *)v13 + v13[30];
    *((_QWORD *)v13 + 12) = v14;
    v13[6] = 256;
    v13[10] = 10;
    v64 = v13;
    *(_DWORD *)v20 = 98;
    *((_DWORD *)v20 + 1) = 16;
    *((_DWORD *)v20 + 3) = a2;
    v20[8] = 0;
    v21 = *((_QWORD *)v13 + 8);
  }
  else
  {
    *((_QWORD *)v13 + 3) = v67;
    v20 = 0LL;
    v13[4] = a5;
    v13[2] = a2;
    v21 = v67;
    *((_QWORD *)v13 + 6) = v14;
    *((_BYTE *)v13 + 2) = 37;
    *(_WORD *)v13 = 88;
    *((_BYTE *)v13 + 4) = 0;
    v13[3] = 256;
    v13[5] = 10;
  }
  *(_QWORD *)(v14 + 184) = v21;
  v22 = BaseAddress + 1184;
  v23 = *v9;
  if ( *((_BYTE *)v13 + 2) == 40 )
  {
    v24 = v23 == 1314275652;
    v25 = 79LL;
    if ( !v24 )
      v25 = 131LL;
    if ( ((v9[v25] + 7) & 0xFFFFFFF8) != 0 )
      *((_QWORD *)v13 + 13) = v22;
  }
  else
  {
    v24 = v23 == 1314275652;
    v37 = 79LL;
    if ( !v24 )
      v37 = 131LL;
    if ( ((v9[v37] + 7) & 0xFFFFFFF8) != 0 )
      *((_QWORD *)v13 + 7) = v22;
  }
  v26 = *i;
  if ( **(_DWORD **)(v65 + 64) == 1431193940 )
  {
    v39 = *((_BYTE *)v5 + 104);
    if ( v26 == 1 )
    {
      v7[8] = v39;
      v7[9] = *((_BYTE *)v5 + 105);
      v7[10] = *((_BYTE *)v5 + 106);
    }
    else
    {
      *((_BYTE *)v13 + 5) = v39;
      *((_BYTE *)v13 + 6) = *((_BYTE *)v5 + 105);
      *((_BYTE *)v13 + 7) = *((_BYTE *)v5 + 106);
    }
  }
  else if ( v26 == 1 )
  {
    *((_DWORD *)v20 + 4) = 1;
    *((_WORD *)v7 + 4) = 0;
    v7[10] = 0;
  }
  else
  {
    *(_WORD *)((char *)v13 + 5) = 0;
    v13[16] = 1;
    *((_BYTE *)v13 + 7) = 0;
  }
  KeInitializeEvent((PRKEVENT)(v14 + 664), NotificationEvent, 0);
  *(_QWORD *)(v14 + 656) = RaidXrbSignalCompletion;
  if ( *i == 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          55LL,
          &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
          v14,
          v64,
          *((_QWORD *)v64 + 13));
      v38 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        v41 = (unsigned __int8)v7[10];
        v42 = 56LL;
        v43 = (unsigned __int8)v7[9];
        v44 = (unsigned __int8)v7[8];
        goto LABEL_129;
      }
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        57LL,
        &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
        v14,
        v13,
        *((_QWORD *)v13 + 7));
    v38 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v41 = *((unsigned __int8 *)v13 + 7);
      v42 = 58LL;
      v43 = *((unsigned __int8 *)v13 + 6);
      v44 = *((unsigned __int8 *)v13 + 5);
LABEL_129:
      WPP_SF_DDD(v38->AttachedDevice, v42, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids, v44, v43, v41);
    }
  }
  if ( v5 )
  {
    v27 = *((_QWORD *)v5 + 3);
    if ( *(_QWORD *)(v27 + 4960) )
    {
      RaidAdapterPoFxActivateComponent(*((_QWORD *)v5 + 3), 0LL, 1LL);
      v8 = 2;
    }
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v5) )
    {
      if ( (*(_BYTE *)(v27 + 108) & 1) != 0 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v5 + 271, 1uLL);
        if ( (*(_BYTE *)(v27 + 108) & 2) != 0 )
          _InterlockedAdd64((volatile signed __int64 *)v5 + 272, 1uLL);
      }
      v28 = (volatile signed __int32 *)*((_QWORD *)v5 + 234);
      if ( (v28[37] & 1) != 0 )
      {
        _InterlockedAdd(v28 + 36, 1u);
        v28 = (volatile signed __int32 *)*((_QWORD *)v5 + 234);
      }
      v29 = 5LL;
      v30 = *(_QWORD *)v28;
      if ( !v5[259] )
        v29 = 1LL;
      PoFxActivateComponent(v30, 0LL, v29);
      v8 |= 1u;
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v5 + 233));
    }
  }
  else if ( *((_QWORD *)v9 + 620) )
  {
    RaidAdapterPoFxActivateComponent(v9, 0LL, 1LL);
  }
  if ( *((_BYTE *)v9 + 4370) )
    v31 = RaidAdapterRaiseIrqlAndExecuteXrb(v9, v14);
  else
    v31 = RaidAdapterPostScatterGatherExecute(v9, v14);
  v32 = v31;
  if ( v31 >= 0 )
    KeWaitForSingleObject((PVOID)(v14 + 664), Executive, 0, 0, 0LL);
  if ( v32 == 258 )
  {
    _InterlockedAdd(v9 + 1546, 1u);
    v33 = -1073741643;
  }
  else
  {
    v33 = 0;
  }
  if ( (*(_BYTE *)(v14 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(v9, *(unsigned int *)(v14 + 748));
    *(_BYTE *)(v14 + 17) &= ~1u;
  }
  v6 = 0LL;
  if ( v5 )
  {
    v45 = *((_QWORD *)v5 + 3);
    if ( (v8 & 1) != 0 && (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v5) )
    {
      PoFxIdleComponent(**((_QWORD **)v5 + 234), 0LL, 0LL);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v5 + 233));
    }
    if ( (unsigned __int8)v8 >= 2u && *(_QWORD *)(v45 + 4960) )
      RaidAdapterPoFxIdleComponent(v45, 0LL, 0LL);
    if ( (*(_BYTE *)(v14 + 17) & 2) != 0 )
    {
      RaidUnitPoFxIdleComponentFromMiniport(v5, *(unsigned int *)(v14 + 748));
      *(_BYTE *)(v14 + 17) &= ~2u;
LABEL_56:
      v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
  }
  else if ( *((_QWORD *)v9 + 620) )
  {
    RaidAdapterPoFxIdleComponent(v9, 0LL, 0LL);
    goto LABEL_56;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, 59LL, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids, v9, 0, a2);
    v6 = 0LL;
  }
LABEL_59:
  if ( StorEtwLoggingEnabled && (v33 == -1073741643 || v33 == -1073741801) )
  {
    v48 = *((_QWORD *)v9 + 2);
    v49 = (void *)*((_QWORD *)v9 + 635);
    v65 = 0LL;
    v67 = *(_OWORD *)(v9 + 1266);
    v68 = 0LL;
    RaidDriverGetName(v48, &v65);
    if ( byte_140171466 < 0 )
    {
      if ( v5 )
      {
        LOBYTE(v50) = *((_BYTE *)v5 + 106);
        v51 = (const wchar_t *)v5 + 121;
        v52 = *((_BYTE *)v5 + 105);
        v53 = (const wchar_t *)((char *)v5 + 177);
        v54 = *((_BYTE *)v5 + 104);
        v55 = (const wchar_t *)(v5 + 42);
        v56 = (__int128 *)(v5 + 526);
        v57 = v5[126];
      }
      else
      {
        v51 = &word_140150F48;
        LOBYTE(v50) = -1;
        v53 = &word_140150F48;
        v56 = &v68;
        v55 = &word_140150F48;
        v52 = -1;
        v54 = -1;
        LOBYTE(v57) = 0;
      }
      v58 = &unk_140151214;
      if ( v49 )
        v58 = v49;
      McTemplateK0qjzzuuujsssqpquqqq_EtwWriteTransfer(
        (_DWORD)v51,
        (_DWORD)v58,
        v50,
        v9[14],
        (__int64)&v67,
        *((__int64 *)&v65 + 1),
        (__int64)v58,
        v54,
        v52,
        v50,
        (__int64)v56,
        (__int64)v55,
        (__int64)v53,
        (__int64)v51,
        v57,
        (char)v13,
        a2);
      v6 = 0LL;
    }
  }
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v14, 0LL);
    if ( (unsigned __int8)IsDmarEnabled(v9) )
    {
      LOBYTE(v59) = 1;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *, int))(*(_QWORD *)(*((_QWORD *)v9 + 110) + 8LL) + 24LL))(
        *((_QWORD *)v9 + 110),
        *((unsigned int *)BaseAddress + 4),
        *((_QWORD *)BaseAddress + 3),
        BaseAddress,
        v59);
    }
    else
    {
      MmFreeContiguousMemory(BaseAddress);
    }
    v6 = 0LL;
  }
  if ( v13 )
  {
    if ( *i == 1 )
    {
      v46 = v64;
      if ( !v64 )
        v46 = v13;
      *((_QWORD *)v46 + 10) = v6;
      *((_QWORD *)v46 + 13) = v6;
    }
    else
    {
      *((_QWORD *)v13 + 6) = v6;
      *((_QWORD *)v13 + 7) = v6;
    }
    ExFreePoolWithTag(v13, 0x72536152u);
  }
  return v33;
}
