/*
 * XREFs of RaidAcquireNvmeIceKeyResources @ 0x1400697EC
 * Callers:
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidGetNvmeIceKeyIndex @ 0x14006A7E0 (RaidGetNvmeIceKeyIndex.c)
 *     WPP_SF_qLL @ 0x14006AF40 (WPP_SF_qLL.c)
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400A8EE0 (StorEtwNVMeICEInterfaceEvent.c)
 *     StorpTelemetryNvmeIceKeySlotFull @ 0x1400B6F70 (StorpTelemetryNvmeIceKeySlotFull.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidAcquireNvmeIceKeyResources(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // r15
  __int64 v6; // rcx
  unsigned int AdapterCryptoEngineExtension; // ebx
  ULONG_PTR v8; // r13
  __int64 v9; // r8
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned int *v12; // rsi
  unsigned int NvmeIceKeyIndex; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  char v16; // r8
  unsigned int v17; // edi
  unsigned int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // eax
  const wchar_t *v24; // r9
  __int64 v25; // rbx
  unsigned int v26; // r8d
  const wchar_t *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rdx
  const wchar_t *v30; // r9
  __int64 v31; // r12
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned int v37; // eax
  _WORD *v38; // rdi
  void *v39; // rcx
  __int64 Pool; // rax
  volatile LONG *v41; // rcx
  _WORD *v42; // rbx
  void *v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  unsigned int v55; // [rsp+30h] [rbp-49h]
  __int64 v56; // [rsp+38h] [rbp-41h]
  volatile LONG *SpinLock; // [rsp+40h] [rbp-39h]
  PEX_SPIN_LOCK SpinLocka; // [rsp+40h] [rbp-39h]
  unsigned int v59; // [rsp+48h] [rbp-31h]
  __int64 v60; // [rsp+48h] [rbp-31h]
  __int64 v61; // [rsp+50h] [rbp-29h] BYREF
  int v62; // [rsp+58h] [rbp-21h] BYREF
  __int64 *v63; // [rsp+60h] [rbp-19h] BYREF
  __int64 v64; // [rsp+68h] [rbp-11h]
  int v65; // [rsp+78h] [rbp-1h] BYREF
  __int16 v66; // [rsp+7Ch] [rbp+3h]
  __int16 v67; // [rsp+7Eh] [rbp+5h]
  int v68; // [rsp+80h] [rbp+7h]
  __int64 v69; // [rsp+84h] [rbp+Bh]

  v2 = *(_DWORD *)(a1 + 932);
  v4 = *(_QWORD *)(a1 + 24);
  v61 = a1;
  v63 = 0LL;
  v6 = *(_QWORD *)(a2 + 160);
  v62 = 0;
  LODWORD(v64) = v2;
  v59 = 0;
  AdapterCryptoEngineExtension = IoGetAdapterCryptoEngineExtension(v6, &v63);
  if ( (AdapterCryptoEngineExtension & 0x80000000) != 0 )
    return 0;
  if ( !v63 )
    return 0;
  v8 = v63[1];
  if ( !v8 )
    return 0;
  if ( !*(_DWORD *)v8 || *(_DWORD *)(v8 + 4) < 0x48u )
    return (unsigned int)-1073741811;
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v10 = *(_QWORD *)(v4 + 6192);
    v11 = *(unsigned int *)(v8 + 20);
    v56 = v10;
    v12 = (unsigned int *)(v10 + 56);
    if ( (unsigned int)v11 > *(_DWORD *)(v10 + 60) )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_qLL(WPP_GLOBAL_Control->AttachedDevice, v11, v9, v4, v11, *(_DWORD *)(v10 + 60));
      }
      return (unsigned int)-1073741811;
    }
LABEL_19:
    SpinLock = (volatile LONG *)(v12 + 6);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)v12 + 6);
    NvmeIceKeyIndex = RaidGetNvmeIceKeyIndex(v12, v8 + 24);
    if ( NvmeIceKeyIndex != *v12 )
    {
      v49 = *((_QWORD *)v12 + 2);
      v50 = 9LL * NvmeIceKeyIndex;
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
        v51 = *(_QWORD *)(v49 + 8 * v50 + 56);
      else
        v51 = *(_QWORD *)(*(_QWORD *)(v49 + 8 * v50 + 48) + 8LL);
      v52 = *v63;
      v53 = *(_DWORD *)(v49 + 8 * v50);
      *(_DWORD *)(a2 + 808) = 4718593;
      *(_QWORD *)(a2 + 824) = v51;
      *(_QWORD *)(a2 + 832) = v52;
      *(_DWORD *)(a2 + 800) = v53;
      _InterlockedAdd((volatile signed __int32 *)(v49 + 8 * v50 + 36), 1u);
      ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
      return AdapterCryptoEngineExtension;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v12 + 6);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v12 + 6);
    v14 = RaidGetNvmeIceKeyIndex(v12, v8 + 24);
    v15 = *v12;
    if ( v14 == *v12 )
    {
      v16 = *((_BYTE *)v12 + 8);
      if ( (v16 & 1) != 0 )
        goto LABEL_27;
      v55 = 0;
      v17 = 0;
      if ( v15 )
      {
        do
        {
          if ( (*(_BYTE *)(*((_QWORD *)v12 + 2) + 72LL * v17 + 64) & 1) == 0 )
            break;
          ++v17;
        }
        while ( v17 < v15 );
        v55 = v17;
      }
      if ( v17 == v15 )
      {
LABEL_27:
        v55 = 0;
        *((_BYTE *)v12 + 8) = v16 | 1;
        v17 = 0;
        if ( v15 )
        {
          v18 = 0;
          do
          {
            v19 = 9LL * v17;
            if ( !*(_DWORD *)(*((_QWORD *)v12 + 2) + 72LL * v17 + 36) )
              break;
            ++v17;
            v18 += *(_DWORD *)(*((_QWORD *)v12 + 2) + 8 * v19 + 36);
          }
          while ( v17 < *v12 );
          v59 = v18;
          v10 = v56;
          v55 = v17;
        }
      }
      if ( v17 == *v12 )
      {
        ++v12[7];
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v12 + 6);
        v20 = v61;
        StorpTelemetryNvmeIceKeySlotFull(v61, v12, v59);
        v21 = *(_QWORD *)(*(_QWORD *)(a2 + 160) + 184LL);
        v22 = *(_QWORD *)(v21 + 24);
        if ( *(_BYTE *)(v61 + 3368) && (g_QosFlags & 1) == 0
          || (v23 = *(_DWORD *)(v61 + 1928), (unsigned int)v22 >= v23) && v23 )
        {
          AdapterCryptoEngineExtension = -2147483631;
          v24 = L"NVMe ICE Key table is full. Can't program (v2) new capability.";
        }
        else
        {
          *(_QWORD *)(v21 + 24) = v22 + 1;
          *(_BYTE *)(*(_QWORD *)(a2 + 168) + 3LL) = 5;
          RaidUnitProcessBusyRequest(v20, a2, 0LL);
          v24 = L"NVMe ICE Key slot is full. Retry program (v2) new capability.";
          AdapterCryptoEngineExtension = 259;
        }
        StorEtwNVMeICEInterfaceEvent(v4, v10, AdapterCryptoEngineExtension, (_DWORD)v24, 3);
        return AdapterCryptoEngineExtension;
      }
      if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(v4 + 6192) + 40LL);
        v66 = *(_WORD *)(v8 + 8);
        v68 = v64;
        v67 = *(_DWORD *)(v4 + 408) >> 10;
        v69 = 4096LL;
        v65 = 1310721;
        v26 = (*(__int64 (__fastcall **)(_QWORD, int *, _QWORD))(v25 + 40))(*(_QWORD *)(v25 + 8), &v65, 0LL);
        if ( v26 == -1056964596 )
        {
          v27 = L"NVMe ICE ConfigureCapability returned a transient error.";
LABEL_43:
          v28 = *(_QWORD *)(v4 + 6192);
LABEL_65:
          StorEtwNVMeICEInterfaceEvent(v4, v28, -1056964596, (_DWORD)v27, 3);
          AdapterCryptoEngineExtension = -2147483631;
LABEL_66:
          v41 = (volatile LONG *)(v12 + 6);
          goto LABEL_58;
        }
        if ( v26 )
        {
          v29 = *(_QWORD *)(v4 + 6192);
          v30 = L"Failed to configure NVMe ICE capability.";
LABEL_71:
          StorEtwNVMeICEInterfaceEvent(v4, v29, v26, (_DWORD)v30, 2);
          AdapterCryptoEngineExtension = -1073741823;
          goto LABEL_66;
        }
        v31 = *((_QWORD *)v12 + 2) + 72LL * v17;
        v62 = *(_DWORD *)(v8 + 20) + 16;
        v32 = *(_QWORD *)(v31 + 48);
        v64 = v32;
        *(_DWORD *)v32 = 1572865;
        *(_WORD *)(v32 + 4) = *(_WORD *)(v8 + 20);
        *(_WORD *)(v32 + 6) = WORD2(v69);
        memmove((void *)(v32 + 16), *(const void **)(v8 + 56), *(unsigned int *)(v8 + 20));
        AdapterCryptoEngineExtension = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(v25 + 48))(
                                         *(_QWORD *)(v25 + 8),
                                         v32,
                                         &v62);
        if ( AdapterCryptoEngineExtension == -1056964596 )
        {
          v27 = L"NVMe ICE ProgramKey returned a transient error.";
          goto LABEL_43;
        }
        memset((void *)(v32 + 16), 0, *(unsigned int *)(v8 + 20));
        v33 = v64;
        *(_WORD *)(v64 + 4) = 0;
        KeSweepLocalCaches();
        v34 = *(_QWORD *)(v33 + 8);
LABEL_76:
        if ( AdapterCryptoEngineExtension )
        {
          v30 = L"Failed to program NVMe ICE key.";
          goto LABEL_69;
        }
        goto LABEL_73;
      }
      v60 = *(_QWORD *)(v10 + 48);
      v31 = *((_QWORD *)v12 + 2) + 72LL * v17;
      if ( !v60 )
      {
        v34 = 0LL;
        goto LABEL_76;
      }
      v35 = *(unsigned int *)(v8 + 8);
      v36 = *(_QWORD *)(v56 + 104);
      if ( (unsigned int)v35 >= *(unsigned __int16 *)(v36 + 2) )
        KeBugCheckEx(0x176u, 2uLL, 6uLL, v8, *(unsigned int *)(v8 + 8));
      v37 = *(_DWORD *)(v8 + 20) + 48;
      v38 = (_WORD *)(v36 + 16 * (v35 + 1));
      LODWORD(v61) = v37;
      if ( *(_DWORD *)(v31 + 40) < v37 )
      {
        v39 = *(void **)(v31 + 48);
        if ( v39 )
        {
          ExFreePoolWithTag(v39, 0x72436152u);
          v37 = v61;
          *(_QWORD *)(v31 + 48) = 0LL;
        }
        *(_DWORD *)(v31 + 40) = 0;
        Pool = RaidAllocatePool(64LL, v37, 1917018450LL, *(_QWORD *)(v4 + 8));
        *(_QWORD *)(v31 + 48) = Pool;
        if ( !Pool )
        {
          AdapterCryptoEngineExtension = -1073741670;
LABEL_57:
          v41 = SpinLock;
LABEL_58:
          ExReleaseSpinLockExclusiveFromDpcLevel(v41);
          return AdapterCryptoEngineExtension;
        }
        v37 = v61;
        *(_DWORD *)(v31 + 40) = v61;
      }
      v42 = *(_WORD **)(v31 + 48);
      SpinLocka = (PEX_SPIN_LOCK)v42;
      memset_0(v42, 0, v37);
      *v42 = *v38;
      v42[1] = *(_DWORD *)(v4 + 408) >> 10;
      *((_DWORD *)v42 + 1) = v64;
      *((_DWORD *)v42 + 2) = 4096;
      *((_QWORD *)v42 + 5) = *(_QWORD *)(v31 + 56);
      if ( *(_DWORD *)v8 < 2u )
      {
        *((_DWORD *)v42 + 3) = 0;
      }
      else
      {
        *((_DWORD *)v42 + 3) = *(_DWORD *)(v8 + 88);
        *(_OWORD *)(v42 + 10) = *(_OWORD *)(v8 + 72);
      }
      v43 = v42 + 24;
      v42[8] = *(_WORD *)(v8 + 20);
      memmove(v42 + 24, *(const void **)(v8 + 56), *(unsigned int *)(v8 + 20));
      AdapterCryptoEngineExtension = (*(__int64 (__fastcall **)(_QWORD, _WORD *, __int64 *))(v60 + 40))(
                                       *(_QWORD *)(v60 + 8),
                                       v42,
                                       &v61);
      memset(v43, 0, *(unsigned int *)(v8 + 20));
      if ( AdapterCryptoEngineExtension == -1056964596 )
      {
        LODWORD(v28) = v56;
        v27 = L"NVMe ICE ProgramKeyV2 returned a transient error.";
        goto LABEL_65;
      }
      if ( AdapterCryptoEngineExtension )
      {
        v30 = L"Failed to program (v2) NVMe ICE capability.";
LABEL_69:
        v26 = AdapterCryptoEngineExtension;
LABEL_70:
        LODWORD(v29) = v56;
        goto LABEL_71;
      }
      v34 = *((_QWORD *)SpinLocka + 5);
      *(_QWORD *)(v31 + 56) = v34;
LABEL_73:
      if ( v34 )
      {
        *(_DWORD *)v31 = v55;
        *(_OWORD *)(v31 + 4) = *(_OWORD *)(v8 + 24);
        *(_OWORD *)(v31 + 20) = *(_OWORD *)(v8 + 40);
        *(_BYTE *)(v31 + 64) |= 1u;
        *(_QWORD *)(a2 + 832) = *v63;
        *(_DWORD *)(a2 + 808) = 4718593;
        *(_QWORD *)(a2 + 824) = v34;
        *(_DWORD *)(a2 + 800) = v55;
        _InterlockedAdd((volatile signed __int32 *)(v31 + 36), 1u);
        goto LABEL_66;
      }
      v30 = L"Invalid key handle returned.";
      v26 = 0;
      goto LABEL_70;
    }
    v44 = *((_QWORD *)v12 + 2);
    v45 = 9LL * v14;
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      v46 = *(_QWORD *)(v44 + 8 * v45 + 56);
    else
      v46 = *(_QWORD *)(*(_QWORD *)(v44 + 8 * v45 + 48) + 8LL);
    v47 = *v63;
    v48 = *(_DWORD *)(v44 + 8 * v45);
    *(_DWORD *)(a2 + 808) = 4718593;
    *(_QWORD *)(a2 + 824) = v46;
    *(_QWORD *)(a2 + 832) = v47;
    *(_DWORD *)(a2 + 800) = v48;
    _InterlockedAdd((volatile signed __int32 *)(v44 + 8 * v45 + 36), 1u);
    goto LABEL_57;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 224) + 1048LL) )
  {
    v10 = *(_QWORD *)(a1 + 3600);
    v56 = v10;
    v12 = (unsigned int *)(v10 + 56);
    goto LABEL_19;
  }
  AdapterCryptoEngineExtension = -1073741436;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x11u,
      (__int64)&WPP_cd59b0b4142e33753252084084bd022f_Traceguids);
  }
  return AdapterCryptoEngineExtension;
}
