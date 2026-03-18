/*
 * XREFs of IommupMapDeviceInternal @ 0x140564E48
 * Callers:
 *     IommuMapDevice @ 0x140564480 (IommuMapDevice.c)
 *     IommupDeviceEnableSvm @ 0x1406FF544 (IommupDeviceEnableSvm.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     IommupHvGetDeviceSvmCapabilities @ 0x140565DC0 (IommupHvGetDeviceSvmCapabilities.c)
 *     IommupHvMapDevice @ 0x1405660D4 (IommupHvMapDevice.c)
 *     IommupHvUnmapDevice @ 0x14056623C (IommupHvUnmapDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall IommupMapDeviceInternal(KSPIN_LOCK *a1, __int64 a2, _DWORD *a3)
{
  KSPIN_LOCK *v5; // rbp
  KSPIN_LOCK *v6; // r15
  __int64 v7; // rsi
  ULONG_PTR v8; // r12
  int v9; // r13d
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int DeviceSvmCapabilities; // edi
  __int64 v17; // rdx
  _DWORD *v18; // r9
  _QWORD *v19; // r14
  char v20; // bp
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  KSPIN_LOCK *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r9
  ULONG_PTR v30; // rdx
  __int64 v31; // rcx
  _QWORD *v33; // rax
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v35; // rax
  KSPIN_LOCK v36; // rcx
  KSPIN_LOCK *v37; // rax
  KSPIN_LOCK *v38; // rcx
  KSPIN_LOCK v39; // rdx
  KSPIN_LOCK *v40; // r8
  KSPIN_LOCK v41; // rcx
  KSPIN_LOCK **v42; // rax
  KSPIN_LOCK v43; // rdx
  __int64 v44[9]; // [rsp+20h] [rbp-48h] BYREF
  int v47; // [rsp+88h] [rbp+20h] BYREF

  v47 = 0;
  v5 = 0LL;
  v44[0] = 0LL;
  v6 = 0LL;
  if ( !HalpHvIommu )
  {
    v7 = *(_QWORD *)(a2 + 32);
    v8 = *(_QWORD *)(a2 + 48);
    v44[0] = v7;
    v9 = *(_DWORD *)(v7 + 472);
    v47 = v9;
    if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_QWORD *)(v7 + 216) )
      {
        v12 = *(_QWORD *)(a2 + 40);
        goto LABEL_5;
      }
    }
    else if ( *(_QWORD *)(v7 + 384) )
    {
      v12 = v8;
LABEL_5:
      LOBYTE(v10) = 1;
      v13 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v7 + 16), v12, v10, v11);
      goto LABEL_12;
    }
    return (unsigned int)-1073741637;
  }
  v8 = *(_QWORD *)(a2 + 32);
  DeviceSvmCapabilities = IommupHvGetDeviceSvmCapabilities(*(_QWORD *)a2, v44, &v47);
  if ( (DeviceSvmCapabilities & 0x80000000) != 0 )
    return DeviceSvmCapabilities;
  v18 = a3;
  v7 = v44[0];
  v13 = IommupHvMapDevice(*(_QWORD *)(a2 + 32), v17, v44[0], v18);
  v9 = v47;
LABEL_12:
  DeviceSvmCapabilities = v13;
  if ( v13 < 0 )
    return DeviceSvmCapabilities;
  v19 = (_QWORD *)HalpMmAllocCtxAlloc(v14, 4184LL);
  if ( v19 )
  {
    v20 = HalpHvIommu;
    if ( !HalpHvIommu )
    {
      v21 = *(_DWORD *)(a2 + 56);
      if ( !v21 )
      {
        v22 = (*a3 >> 12) & 0x1F;
        *(_QWORD *)(a2 + 64) = 0LL;
        *(_DWORD *)(a2 + 60) = v22;
      }
      *(_DWORD *)(a2 + 56) = v21 + 1;
    }
    *(_QWORD *)(a2 + 96) = v19;
    memset_0(v19, 0, 0x1058uLL);
    v19[9] = a2;
    v19[3] = v7;
    v19[5] = v8;
    *((_DWORD *)v19 + 8) = v9;
    v24 = *a3;
    v19[2] = 0LL;
    *((_DWORD *)v19 + 12) = v24;
    v19[8] = v19 + 7;
    v19[7] = v19 + 7;
    v25 = v7 + 400;
    if ( v20 )
      v25 = v7 + 24;
    *((_DWORD *)v19 + 20) = *(_DWORD *)(v25 + 16);
    v26 = (KSPIN_LOCK *)HalpMmAllocCtxAlloc(v23, 64LL);
    v5 = v26;
    if ( v26 )
    {
      memset_0(v26, 0, 0x40uLL);
      v5[5] = (KSPIN_LOCK)v19;
      v28 = HalpMmAllocCtxAlloc(v27, 40LL);
      v6 = (KSPIN_LOCK *)v28;
      if ( v28 )
      {
        *(_QWORD *)(v28 + 16) = v7;
        v33 = (_QWORD *)(v28 + 24);
        v33[1] = v33;
        *v33 = v33;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
        KxAcquireSpinLock(a1 + 3);
        v35 = a1 + 6;
        v36 = a1[6];
        if ( *(KSPIN_LOCK **)(v36 + 8) == a1 + 6 )
        {
          v19[1] = v35;
          *v19 = v36;
          *(_QWORD *)(v36 + 8) = v19;
          *v35 = v19;
          v37 = a1 + 4;
          v38 = (KSPIN_LOCK *)a1[4];
          if ( v38 == a1 + 4 )
            goto LABEL_40;
          do
          {
            v39 = v38[2];
            v40 = v38;
            if ( v39 == v7 )
              goto LABEL_42;
            v38 = (KSPIN_LOCK *)*v38;
          }
          while ( v38 != v37 );
          if ( v39 != v7 )
          {
LABEL_40:
            v41 = *v37;
            if ( *(KSPIN_LOCK **)(*v37 + 8) != v37 )
              goto LABEL_50;
            *v6 = v41;
            v40 = v6;
            v6[1] = (KSPIN_LOCK)v37;
            *(_QWORD *)(v41 + 8) = v6;
            *v37 = (KSPIN_LOCK)v6;
            v6 = 0LL;
          }
LABEL_42:
          v42 = (KSPIN_LOCK **)(v40 + 3);
          v43 = v40[3];
          if ( *(KSPIN_LOCK **)(v43 + 8) == v40 + 3 )
          {
            *v5 = v43;
            v5[1] = (KSPIN_LOCK)v42;
            *(_QWORD *)(v43 + 8) = v5;
            *v42 = v5;
            v5 = 0LL;
            KxReleaseSpinLock((volatile signed __int64 *)a1 + 3);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
            goto LABEL_46;
          }
        }
LABEL_50:
        __fastfail(3u);
      }
    }
  }
  DeviceSvmCapabilities = -1073741670;
  if ( HalpHvIommu )
  {
    IommupHvUnmapDevice(v8);
  }
  else
  {
    if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
      v30 = *(_QWORD *)(a2 + 40);
    else
      v30 = v8;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v7 + 16), v30, 0LL, v29);
  }
  if ( !v19 )
    goto LABEL_48;
  *(_QWORD *)(a2 + 96) = 0LL;
  v19[9] = 0LL;
  if ( !HalpHvIommu && (*(_DWORD *)(a2 + 56))-- == 1 )
  {
    *(_DWORD *)(a2 + 60) = 0;
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 64));
    _InterlockedExchange64((volatile __int64 *)(a2 + 64), 1LL);
  }
  HalpMmAllocCtxFree(v31, (__int64)v19);
LABEL_46:
  if ( v6 )
    HalpMmAllocCtxFree(v31, (__int64)v6);
LABEL_48:
  if ( v5 )
    HalpMmAllocCtxFree(v31, (__int64)v5);
  return DeviceSvmCapabilities;
}
