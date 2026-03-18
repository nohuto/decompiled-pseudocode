/*
 * XREFs of IommupMapDeviceInternal @ 0x1405625B8
 * Callers:
 *     IommuMapDevice @ 0x140561BE0 (IommuMapDevice.c)
 *     IommupDeviceEnableSvm @ 0x1406F3754 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053997C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     IommupHvGetDeviceSvmCapabilities @ 0x1405635B0 (IommupHvGetDeviceSvmCapabilities.c)
 *     IommupHvMapDevice @ 0x1405638C4 (IommupHvMapDevice.c)
 *     IommupHvUnmapDevice @ 0x1405639CC (IommupHvUnmapDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall IommupMapDeviceInternal(KSPIN_LOCK *a1, __int64 a2, _DWORD *a3)
{
  KSPIN_LOCK *v5; // rbp
  KSPIN_LOCK *v6; // r15
  __int64 v7; // rsi
  ULONG_PTR v8; // r12
  int v9; // r13d
  int v10; // eax
  __int64 v11; // rcx
  unsigned int DeviceSvmCapabilities; // edi
  __int64 v14; // rdx
  _DWORD *v15; // r9
  _QWORD *v16; // r14
  char v17; // bp
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  KSPIN_LOCK *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v28; // rax
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v30; // rax
  KSPIN_LOCK v31; // rcx
  KSPIN_LOCK *v32; // rax
  KSPIN_LOCK *v33; // rcx
  KSPIN_LOCK v34; // rdx
  KSPIN_LOCK *v35; // r8
  KSPIN_LOCK v36; // rcx
  KSPIN_LOCK **v37; // rax
  KSPIN_LOCK v38; // rdx
  __int64 v39[9]; // [rsp+20h] [rbp-48h] BYREF
  int v42; // [rsp+88h] [rbp+20h] BYREF

  v42 = 0;
  v5 = 0LL;
  v39[0] = 0LL;
  v6 = 0LL;
  if ( !HalpHvIommu )
  {
    v7 = *(_QWORD *)(a2 + 32);
    v8 = *(_QWORD *)(a2 + 48);
    v39[0] = v7;
    v9 = *(_DWORD *)(v7 + 472);
    v42 = v9;
    if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_QWORD *)(v7 + 216) )
        goto LABEL_4;
    }
    else if ( *(_QWORD *)(v7 + 384) )
    {
LABEL_4:
      v10 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v7 + 16));
      goto LABEL_11;
    }
    return (unsigned int)-1073741637;
  }
  v8 = *(_QWORD *)(a2 + 32);
  DeviceSvmCapabilities = IommupHvGetDeviceSvmCapabilities(*(_QWORD *)a2, v39, &v42);
  if ( (DeviceSvmCapabilities & 0x80000000) != 0 )
    return DeviceSvmCapabilities;
  v15 = a3;
  v7 = v39[0];
  v10 = IommupHvMapDevice(*(_QWORD *)(a2 + 32), v14, v39[0], v15);
  v9 = v42;
LABEL_11:
  DeviceSvmCapabilities = v10;
  if ( v10 < 0 )
    return DeviceSvmCapabilities;
  v16 = (_QWORD *)HalpMmAllocCtxAlloc(v11, 4184LL);
  if ( v16 )
  {
    v17 = HalpHvIommu;
    if ( !HalpHvIommu )
    {
      v18 = *(_DWORD *)(a2 + 56);
      if ( !v18 )
      {
        v19 = (*a3 >> 12) & 0x1F;
        *(_QWORD *)(a2 + 64) = 0LL;
        *(_DWORD *)(a2 + 60) = v19;
      }
      *(_DWORD *)(a2 + 56) = v18 + 1;
    }
    *(_QWORD *)(a2 + 96) = v16;
    memset_0(v16, 0, 0x1058uLL);
    v16[9] = a2;
    v16[3] = v7;
    v16[5] = v8;
    *((_DWORD *)v16 + 8) = v9;
    v21 = *a3;
    v16[2] = 0LL;
    *((_DWORD *)v16 + 12) = v21;
    v16[8] = v16 + 7;
    v16[7] = v16 + 7;
    v22 = v7 + 400;
    if ( v17 )
      v22 = v7 + 24;
    *((_DWORD *)v16 + 20) = *(_DWORD *)(v22 + 16);
    v23 = (KSPIN_LOCK *)HalpMmAllocCtxAlloc(v20, 64LL);
    v5 = v23;
    if ( v23 )
    {
      memset_0(v23, 0, 0x40uLL);
      v5[5] = (KSPIN_LOCK)v16;
      v25 = HalpMmAllocCtxAlloc(v24, 40LL);
      v6 = (KSPIN_LOCK *)v25;
      if ( v25 )
      {
        *(_QWORD *)(v25 + 16) = v7;
        v28 = (_QWORD *)(v25 + 24);
        v28[1] = v28;
        *v28 = v28;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
        KxAcquireSpinLock(a1 + 3);
        v30 = a1 + 6;
        v31 = a1[6];
        if ( *(KSPIN_LOCK **)(v31 + 8) == a1 + 6 )
        {
          v16[1] = v30;
          *v16 = v31;
          *(_QWORD *)(v31 + 8) = v16;
          *v30 = v16;
          v32 = a1 + 4;
          v33 = (KSPIN_LOCK *)a1[4];
          if ( v33 == a1 + 4 )
            goto LABEL_36;
          do
          {
            v34 = v33[2];
            v35 = v33;
            if ( v34 == v7 )
              goto LABEL_38;
            v33 = (KSPIN_LOCK *)*v33;
          }
          while ( v33 != v32 );
          if ( v34 != v7 )
          {
LABEL_36:
            v36 = *v32;
            if ( *(KSPIN_LOCK **)(*v32 + 8) != v32 )
              goto LABEL_46;
            *v6 = v36;
            v35 = v6;
            v6[1] = (KSPIN_LOCK)v32;
            *(_QWORD *)(v36 + 8) = v6;
            *v32 = (KSPIN_LOCK)v6;
            v6 = 0LL;
          }
LABEL_38:
          v37 = (KSPIN_LOCK **)(v35 + 3);
          v38 = v35[3];
          if ( *(KSPIN_LOCK **)(v38 + 8) == v35 + 3 )
          {
            *v5 = v38;
            v5[1] = (KSPIN_LOCK)v37;
            *(_QWORD *)(v38 + 8) = v5;
            *v37 = v5;
            v5 = 0LL;
            KxReleaseSpinLock((volatile signed __int64 *)a1 + 3);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
            goto LABEL_42;
          }
        }
LABEL_46:
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
    Feature_Test57481295__private_IsEnabledDeviceUsageNoInline();
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v7 + 16));
  }
  if ( v16 )
  {
    *(_QWORD *)(a2 + 96) = 0LL;
    v16[9] = 0LL;
    if ( !HalpHvIommu && (*(_DWORD *)(a2 + 56))-- == 1 )
    {
      *(_DWORD *)(a2 + 60) = 0;
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 64));
      _InterlockedExchange64((volatile __int64 *)(a2 + 64), 1LL);
    }
    HalpMmAllocCtxFree(v26, (__int64)v16);
LABEL_42:
    if ( v6 )
      HalpMmAllocCtxFree(v26, (__int64)v6);
  }
  if ( v5 )
    HalpMmAllocCtxFree(v26, (__int64)v5);
  return DeviceSvmCapabilities;
}
