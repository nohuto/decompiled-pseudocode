/*
 * XREFs of RaidCreateUnit @ 0x140026194
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x140019940 (RaidBusEnumeratorGetUnit.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaidUnitAllocateResources @ 0x1400264C0 (RaidUnitAllocateResources.c)
 *     RaidUnitSetInitialQueueDepth @ 0x1400269E8 (RaidUnitSetInitialQueueDepth.c)
 *     RiDisableDeviceQueueFastPath @ 0x140026CB0 (RiDisableDeviceQueueFastPath.c)
 *     RaidZeroUnit @ 0x140026D48 (RaidZeroUnit.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

NTSTATUS __fastcall RaidCreateUnit(__int64 a1, _QWORD *a2)
{
  __int64 RecommendedSharedDataAlignment; // rdi
  ULONG MaximumProcessorCount; // eax
  __int64 v5; // r14
  int v6; // r12d
  NTSTATUS result; // eax
  char *DeviceExtension; // rbx
  size_t v9; // r14
  __int64 v10; // rsi
  void *v11; // rcx
  __int64 v12; // r15
  char *v13; // rdi
  void *v14; // rcx
  char v15; // al
  int Resources; // esi
  KIRQL v17; // r14
  __int64 v18; // rdx
  char v19; // al
  char v20; // cl
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v26; // [rsp+48h] [rbp-21h]
  __int128 v27; // [rsp+50h] [rbp-19h]
  __int128 v28; // [rsp+60h] [rbp-9h]
  __int128 v29; // [rsp+70h] [rbp+7h]
  __int64 v30; // [rsp+80h] [rbp+17h]

  DeviceObject = 0LL;
  v26 = a2;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v5 = MaximumProcessorCount;
  v6 = (*(_BYTE *)(a1 + 112) & 2) != 0 ? RecommendedSharedDataAlignment + 216 : 0;
  result = IoCreateDevice(
             *(PDRIVER_OBJECT *)(*(_QWORD *)(a1 + 8) + 8LL),
             RecommendedSharedDataAlignment + v6 + ((MaximumProcessorCount + 57) << 6),
             0LL,
             0x2Du,
             0x180u,
             0,
             &DeviceObject);
  if ( result >= 0 )
  {
    DeviceExtension = (char *)DeviceObject->DeviceExtension;
    RaidZeroUnit(DeviceExtension);
    v9 = v5 << 6;
    v10 = ~(RecommendedSharedDataAlignment - 1);
    v11 = (void *)(v10 & (unsigned __int64)&DeviceExtension[RecommendedSharedDataAlignment + 3647]);
    *((_QWORD *)DeviceExtension + 5) = v11;
    v12 = (unsigned int)RecommendedSharedDataAlignment;
    memset_0(v11, 0, v9);
    v13 = DeviceExtension + 32;
    if ( v6 )
    {
      v14 = (void *)(v10 & (*((_QWORD *)DeviceExtension + 5) - 1LL + v9 + v12));
      *(_QWORD *)v13 = v14;
      memset_0(v14, 0, 0xD8uLL);
    }
    *((_QWORD *)DeviceExtension + 3) = a1;
    *((_QWORD *)DeviceExtension + 1) = DeviceObject;
    *(_WORD *)(DeviceExtension + 1861) = 256;
    DeviceExtension[1863] = 1;
    DeviceObject->Flags |= 0x10u;
    DeviceObject->Flags |= 0x1000u;
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 1) + 152LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
    *((_DWORD *)DeviceExtension + 14) = 0;
    v15 = (*(_BYTE *)(a1 + 4892) + 3) & 0xFC;
    if ( ((*(unsigned __int8 *)(a1 + 4892) + 3) & 0xFFFFFFFC) > 0xFF )
      v15 = -1;
    DeviceExtension[1860] = v15;
    Resources = RaidUnitAllocateResources(DeviceExtension);
    if ( Resources >= 0 )
    {
      RaidUnitSetInitialQueueDepth(DeviceExtension);
      DeviceExtension[757] = 1;
      RiDisableDeviceQueueFastPath(DeviceExtension + 720, 0LL);
      v27 = 0LL;
      v30 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      if ( *(_QWORD *)v13 && RaidIsUnitControlSupported((__int64)DeviceExtension, 31) )
      {
        v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)v13 + 24LL));
        *(_DWORD *)(*(_QWORD *)v13 + 80LL) |= 0x20u;
        v18 = *((_QWORD *)DeviceExtension + 3);
        *(_QWORD *)&v27 = 0x3800000038LL;
        v19 = DeviceExtension[105];
        DWORD2(v27) = 2;
        WORD4(v29) = 1;
        HIDWORD(v29) = 4;
        WORD5(v29) = *(_WORD *)(v18 + 56);
        v20 = DeviceExtension[104];
        BYTE1(v30) = v19;
        v21 = DeviceExtension[106];
        LOBYTE(v30) = v20;
        BYTE2(v30) = v21;
        if ( *(_DWORD *)v18 == 1094997074 )
        {
          v22 = v18 + 376;
        }
        else
        {
          v22 = v18 + 168;
          if ( *(_DWORD *)v18 != 1314275652 )
            v22 = 0LL;
        }
        RaCallMiniportUnitControl(v22);
        KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)DeviceExtension + 4) + 24LL), v17);
      }
      v23 = *((_QWORD *)DeviceExtension + 3);
      DeviceExtension[505] &= ~0x80u;
      DeviceExtension[504] &= ~0x80u;
      *((_QWORD *)DeviceExtension + 234) = 0LL;
      if ( *(_QWORD *)(v23 + 4960)
        && (*(_BYTE *)(v23 + 108) & 8) == 0
        && !_InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 902, 1, 0) )
      {
        RaidAdapterPoFxActivateComponent(*((_QWORD *)DeviceExtension + 3), 0LL, 0LL);
      }
      v24 = v26;
      *((_DWORD *)DeviceExtension + 482) = 10;
      *((_DWORD *)DeviceExtension + 483) = 25;
      *((_DWORD *)DeviceExtension + 484) = 125;
      *v24 = DeviceExtension;
    }
    else
    {
      IoDeleteDevice(DeviceObject);
    }
    return Resources;
  }
  return result;
}
