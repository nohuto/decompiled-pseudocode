/*
 * XREFs of IommupMapDeviceInternal @ 0x140562A78
 * Callers:
 *     IommuMapDevice @ 0x1405620B0 (IommuMapDevice.c)
 *     IommupDeviceEnableSvm @ 0x1406FD184 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     IommupHvGetDeviceSvmCapabilities @ 0x140563AC4 (IommupHvGetDeviceSvmCapabilities.c)
 *     IommupHvMapDevice @ 0x140563DD4 (IommupHvMapDevice.c)
 *     IommupHvUnmapDevice @ 0x140563F3C (IommupHvUnmapDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IommupMapDeviceInternal(KSPIN_LOCK *a1, __int64 a2, _DWORD *a3)
{
  KSPIN_LOCK *v5; // rbp
  KSPIN_LOCK *v6; // r15
  __int64 v7; // rsi
  ULONG_PTR v8; // r12
  int v9; // r13d
  ULONG_PTR v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int DeviceSvmCapabilities; // edi
  __int64 v15; // rdx
  _DWORD *v16; // r9
  _QWORD *v17; // r14
  char v18; // bp
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  KSPIN_LOCK *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  ULONG_PTR v27; // rdx
  __int64 v28; // rcx
  _QWORD *v30; // rax
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v32; // rax
  KSPIN_LOCK v33; // rcx
  KSPIN_LOCK *v34; // rax
  KSPIN_LOCK *v35; // rcx
  KSPIN_LOCK v36; // rdx
  KSPIN_LOCK *v37; // r8
  KSPIN_LOCK v38; // rcx
  KSPIN_LOCK **v39; // rax
  KSPIN_LOCK v40; // rdx
  __int64 v41[9]; // [rsp+20h] [rbp-48h] BYREF
  int v44; // [rsp+88h] [rbp+20h] BYREF

  v44 = 0;
  v5 = 0LL;
  v41[0] = 0LL;
  v6 = 0LL;
  if ( !HalpHvIommu )
  {
    v7 = *(_QWORD *)(a2 + 32);
    v8 = *(_QWORD *)(a2 + 48);
    v41[0] = v7;
    v9 = *(_DWORD *)(v7 + 472);
    v44 = v9;
    if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_QWORD *)(v7 + 216) )
      {
        v10 = *(_QWORD *)(a2 + 40);
        goto LABEL_5;
      }
    }
    else if ( *(_QWORD *)(v7 + 384) )
    {
      v10 = v8;
LABEL_5:
      v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v7 + 16), v10);
      goto LABEL_12;
    }
    return (unsigned int)-1073741637;
  }
  v8 = *(_QWORD *)(a2 + 32);
  DeviceSvmCapabilities = IommupHvGetDeviceSvmCapabilities(*(_QWORD *)a2, v41, &v44);
  if ( (DeviceSvmCapabilities & 0x80000000) != 0 )
    return DeviceSvmCapabilities;
  v16 = a3;
  v7 = v41[0];
  v11 = IommupHvMapDevice(*(_QWORD *)(a2 + 32), v15, v41[0], v16);
  v9 = v44;
LABEL_12:
  DeviceSvmCapabilities = v11;
  if ( v11 < 0 )
    return DeviceSvmCapabilities;
  v17 = (_QWORD *)HalpMmAllocCtxAlloc(v12, 4184LL);
  if ( v17 )
  {
    v18 = HalpHvIommu;
    if ( !HalpHvIommu )
    {
      v19 = *(_DWORD *)(a2 + 56);
      if ( !v19 )
      {
        v20 = (*a3 >> 12) & 0x1F;
        *(_QWORD *)(a2 + 64) = 0LL;
        *(_DWORD *)(a2 + 60) = v20;
      }
      *(_DWORD *)(a2 + 56) = v19 + 1;
    }
    *(_QWORD *)(a2 + 96) = v17;
    memset_0(v17, 0, 0x1058uLL);
    v17[9] = a2;
    v17[3] = v7;
    v17[5] = v8;
    *((_DWORD *)v17 + 8) = v9;
    v22 = *a3;
    v17[2] = 0LL;
    *((_DWORD *)v17 + 12) = v22;
    v17[8] = v17 + 7;
    v17[7] = v17 + 7;
    v23 = v7 + 400;
    if ( v18 )
      v23 = v7 + 24;
    *((_DWORD *)v17 + 20) = *(_DWORD *)(v23 + 16);
    v24 = (KSPIN_LOCK *)HalpMmAllocCtxAlloc(v21, 64LL);
    v5 = v24;
    if ( v24 )
    {
      memset_0(v24, 0, 0x40uLL);
      v5[5] = (KSPIN_LOCK)v17;
      v26 = HalpMmAllocCtxAlloc(v25, 40LL);
      v6 = (KSPIN_LOCK *)v26;
      if ( v26 )
      {
        *(_QWORD *)(v26 + 16) = v7;
        v30 = (_QWORD *)(v26 + 24);
        v30[1] = v30;
        *v30 = v30;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
        KxAcquireSpinLock(a1 + 3);
        v32 = a1 + 6;
        v33 = a1[6];
        if ( *(KSPIN_LOCK **)(v33 + 8) == a1 + 6 )
        {
          v17[1] = v32;
          *v17 = v33;
          *(_QWORD *)(v33 + 8) = v17;
          *v32 = v17;
          v34 = a1 + 4;
          v35 = (KSPIN_LOCK *)a1[4];
          if ( v35 == a1 + 4 )
            goto LABEL_40;
          do
          {
            v36 = v35[2];
            v37 = v35;
            if ( v36 == v7 )
              goto LABEL_42;
            v35 = (KSPIN_LOCK *)*v35;
          }
          while ( v35 != v34 );
          if ( v36 != v7 )
          {
LABEL_40:
            v38 = *v34;
            if ( *(KSPIN_LOCK **)(*v34 + 8) != v34 )
              goto LABEL_50;
            *v6 = v38;
            v37 = v6;
            v6[1] = (KSPIN_LOCK)v34;
            *(_QWORD *)(v38 + 8) = v6;
            *v34 = (KSPIN_LOCK)v6;
            v6 = 0LL;
          }
LABEL_42:
          v39 = (KSPIN_LOCK **)(v37 + 3);
          v40 = v37[3];
          if ( *(KSPIN_LOCK **)(v40 + 8) == v37 + 3 )
          {
            *v5 = v40;
            v5[1] = (KSPIN_LOCK)v39;
            *(_QWORD *)(v40 + 8) = v5;
            *v39 = v5;
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
      v27 = *(_QWORD *)(a2 + 40);
    else
      v27 = v8;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v7 + 16), v27);
  }
  if ( !v17 )
    goto LABEL_48;
  *(_QWORD *)(a2 + 96) = 0LL;
  v17[9] = 0LL;
  if ( !HalpHvIommu && (*(_DWORD *)(a2 + 56))-- == 1 )
  {
    *(_DWORD *)(a2 + 60) = 0;
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 64));
    _InterlockedExchange64((volatile __int64 *)(a2 + 64), 1LL);
  }
  HalpMmAllocCtxFree(v28, (__int64)v17);
LABEL_46:
  if ( v6 )
    HalpMmAllocCtxFree(v28, (__int64)v6);
LABEL_48:
  if ( v5 )
    HalpMmAllocCtxFree(v28, (__int64)v5);
  return DeviceSvmCapabilities;
}
