/*
 * XREFs of HalpIommuCreateDevice @ 0x14054D63C
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BB2D0 (HalpIommuUnblockDevice.c)
 *     IommuCreateAtsDevice @ 0x140563580 (IommuCreateAtsDevice.c)
 *     IommuMapDevice @ 0x140564480 (IommuMapDevice.c)
 *     IommuDomainAttachDevice @ 0x140566390 (IommuDomainAttachDevice.c)
 *     IommuDeviceCreate @ 0x140703920 (IommuDeviceCreate.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404B2420 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuCheckDpptException @ 0x1404BB4F8 (HalpIommuCheckDpptException.c)
 *     HalpIommuCreateDeviceInternal @ 0x1404D0198 (HalpIommuCreateDeviceInternal.c)
 *     HalpIommuCloneDeviceId @ 0x1404D9C34 (HalpIommuCloneDeviceId.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline @ 0x14054D414 (Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline.c)
 *     IommupDeviceGetPasidSettings @ 0x14054E0B0 (IommupDeviceGetPasidSettings.c)
 *     IommupHvRegisterDeviceId @ 0x1405661A4 (IommupHvRegisterDeviceId.c)
 *     IommupHvUnregisterDeviceId @ 0x1405662A8 (IommupHvUnregisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x14069BF5C (IidAreIdsStrictlyEqual.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x1406FF228 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FF3F4 (IommupDeviceEnablePasidTaggedDma.c)
 */

__int64 __fastcall HalpIommuCreateDevice(void *a1, void *a2, __int64 a3, __int32 a4, __int64 *a5)
{
  __int64 v6; // rdi
  PVOID v7; // r13
  _QWORD *v8; // rax
  int v9; // edx
  signed __int8 v10; // cf
  _QWORD *v11; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 v13; // rsi
  __int64 *v14; // r11
  _DWORD *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  int PasidSettings; // ebx
  __int64 v19; // r8
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // ecx
  bool v24; // al
  PVOID v25; // r14
  char v26; // r15
  char v27; // dl
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r9
  char v31; // r15
  char v32; // r12
  void *v33; // rax
  __int64 v34; // r8
  ULONG_PTR *v35; // rcx
  PVOID v36; // rbx
  __int64 v37; // rdx
  __int64 *v38; // rax
  unsigned __int8 v39; // di
  __int64 *v40; // rax
  void *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  char v45; // [rsp+33h] [rbp-4Dh] BYREF
  char v46; // [rsp+34h] [rbp-4Ch] BYREF
  char v47; // [rsp+35h] [rbp-4Bh] BYREF
  char v48; // [rsp+36h] [rbp-4Ah]
  char v49; // [rsp+37h] [rbp-49h]
  void *v50; // [rsp+40h] [rbp-40h] BYREF
  __int64 v51; // [rsp+48h] [rbp-38h] BYREF
  __int64 v52; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR *v53; // [rsp+58h] [rbp-28h] BYREF
  __int64 v54; // [rsp+60h] [rbp-20h] BYREF
  __int128 v55; // [rsp+68h] [rbp-18h] BYREF
  __int64 v56; // [rsp+78h] [rbp-8h]
  void *Src; // [rsp+C0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h]
  __int64 v59; // [rsp+D0h] [rbp+50h]

  v59 = a3;
  Object = a2;
  Src = a1;
  v54 = 0LL;
  v50 = 0LL;
  v56 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  v55 = 0LL;
  v6 = 0LL;
  v45 = 0;
  v46 = 0;
  v7 = 0LL;
  v49 = 0;
  v47 = 0;
  v48 = 0;
  v8 = KeAbPreAcquire((__int64)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(
      &HalpIommuDeviceCreatedListPushLock,
      (__int64)v8,
      (__int64)&HalpIommuDeviceCreatedListPushLock);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = 15;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  v13 = HalpIommuDeviceCreatedList;
  v14 = &HalpIommuDeviceCreatedList;
  v15 = Src;
  while ( (__int64 *)v13 != v14 )
  {
    if ( (unsigned __int8)IidAreIdsStrictlyEqual(*(_QWORD *)(v13 + 16), v15) )
    {
      v19 = *(_QWORD *)(v13 + 24);
      v20 = *(_DWORD *)(v19 + 392);
      v21 = *(_DWORD *)(v19 + 388);
      if ( v20 == a4 )
        goto LABEL_28;
      if ( v20 )
      {
        v22 = v20 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 == 1 )
              goto LABEL_20;
LABEL_23:
            PasidSettings = -1073741637;
LABEL_24:
            v25 = Object;
            v26 = 0;
            goto LABEL_41;
          }
LABEL_28:
          _InterlockedExchange((volatile __int32 *)(v19 + 392), a4);
          PasidSettings = IommupDeviceGetPasidSettings(v59, &v45, &v46, &v47);
          if ( PasidSettings < 0 )
            goto LABEL_24;
          v27 = v46 || v45;
          v28 = *(_QWORD *)(v13 + 24);
          if ( *(_BYTE *)(v28 + 274) != v27 || *(_BYTE *)(v28 + 273) != v45 || *(_BYTE *)(v28 + 272) != v47 )
            goto LABEL_23;
          ++*(_DWORD *)(v13 + 32);
          PasidSettings = 0;
          v25 = Object;
          v7 = *(PVOID *)(v28 + 8);
          v49 = 1;
          *a5 = v28;
          if ( !v25 || v25 == v7 )
          {
            v26 = 0;
          }
          else
          {
            *(_QWORD *)(v28 + 8) = v25;
            v26 = 1;
            if ( v7 )
              v48 = 1;
          }
LABEL_41:
          ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          if ( v26 )
          {
            ObfReferenceObjectWithTag(v25, 0x446C6148u);
            if ( v48 )
              ObfDereferenceObjectWithTag(v7, 0x446C6148u);
          }
          v31 = 0;
          v32 = 0;
LABEL_77:
          if ( PasidSettings >= 0 )
            goto LABEL_96;
          if ( v6 )
          {
            if ( *(_BYTE *)(v6 + 274) )
              IommupDeviceDisablePasidTaggedDma(v6);
            v41 = *(void **)(v6 + 8);
            if ( v41 )
              ObfDereferenceObjectWithTag(v41, 0x446C6148u);
            if ( v31 )
            {
              v42 = *(_QWORD *)(v6 + 32);
              if ( HalpHvIommu )
                IommupHvUnregisterDeviceId(v42);
              else
                guard_dispatch_icall_no_overrides(*(_QWORD *)(v42 + 16), *(_QWORD *)(v6 + 40), 0LL, v30);
            }
            HalpMmAllocCtxFree((__int64)v41, v6);
          }
          if ( v49 )
            --*(_DWORD *)(v13 + 32);
          if ( v32 )
          {
LABEL_91:
            v43 = *(_QWORD *)(v13 + 16);
            if ( v43 )
              HalpMmAllocCtxFree(v29, v43);
            HalpMmAllocCtxFree(v29, v13);
          }
          if ( v50 )
            HalpMmAllocCtxFree(v29, (__int64)v50);
          goto LABEL_96;
        }
        if ( a4 != 2 )
          goto LABEL_23;
        if ( v21 == 2 )
          goto LABEL_28;
        v24 = 0;
      }
      else
      {
LABEL_20:
        v24 = a4 != 1;
        if ( a4 == 2 && v21 != 2 )
          goto LABEL_23;
      }
      if ( !v24 )
        goto LABEL_23;
      goto LABEL_28;
    }
    v13 = *(_QWORD *)v13;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v17 = HalpMmAllocCtxAlloc(v16, 40LL);
  v13 = v17;
  if ( !v17 )
  {
    PasidSettings = -1073741670;
    goto LABEL_96;
  }
  *(_OWORD *)v17 = 0LL;
  *(_OWORD *)(v17 + 16) = 0LL;
  *(_QWORD *)(v17 + 32) = 0LL;
  v32 = 1;
  PasidSettings = HalpIommuCloneDeviceId(v15, (__int64 *)(v17 + 16));
  if ( PasidSettings < 0 )
  {
    v31 = 0;
    goto LABEL_77;
  }
  v33 = (void *)HalpMmAllocCtxAlloc(v29, 424LL);
  v6 = (__int64)v33;
  if ( !v33 )
  {
    PasidSettings = -1073741670;
    goto LABEL_91;
  }
  memset_0(v33, 0, 0x1A8uLL);
  *(_QWORD *)(v13 + 24) = v6;
  *(_DWORD *)(v6 + 388) = a4;
  *(_DWORD *)(v6 + 392) = a4;
  if ( (unsigned int)Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline() )
    *(_QWORD *)(v6 + 416) = 0LL;
  if ( HalpHvIommu )
  {
    v55 = 0LL;
    v56 = 0LL;
    if ( *v15 == 2 )
    {
      PasidSettings = HalpIommuQueryAcpiDeviceMapping((__int64)v15, (__int64)&v55);
      if ( PasidSettings < 0 )
        goto LABEL_76;
      PasidSettings = HalpIommuCloneDeviceId(&v55, (__int64 *)&Src);
      if ( PasidSettings < 0 )
        goto LABEL_76;
      v15 = Src;
      v50 = Src;
    }
    PasidSettings = IommupHvRegisterDeviceId(v15, &v51);
    if ( PasidSettings >= 0 )
    {
      *(_QWORD *)(v6 + 32) = v51;
      goto LABEL_63;
    }
LABEL_76:
    v31 = 0;
    goto LABEL_77;
  }
  PasidSettings = HalpIommuCreateDeviceInternal((__int64)v15, v6, &v52, &v53);
  if ( PasidSettings < 0 )
    goto LABEL_76;
  v35 = v53;
  *(_QWORD *)(v6 + 40) = v52;
  *(_QWORD *)(v6 + 32) = v35;
  if ( v35[26] )
  {
    LOBYTE(v34) = 1;
    guard_dispatch_icall_no_overrides(v35[2], v15, v34, &v54);
    *(_QWORD *)(v6 + 48) = v54;
  }
  *(_QWORD *)(v6 + 64) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v6 + 64));
  _InterlockedExchange64((volatile __int64 *)(v6 + 64), 1LL);
  *(_DWORD *)(v6 + 72) = -1;
  v15 = Src;
LABEL_63:
  v31 = 1;
  if ( !v50 )
  {
    PasidSettings = HalpIommuCloneDeviceId(v15, (__int64 *)&v50);
    if ( PasidSettings < 0 )
      goto LABEL_77;
  }
  v36 = Object;
  *(_QWORD *)v6 = v50;
  if ( v36 )
    ObfReferenceObjectWithTag(v36, 0x446C6148u);
  v37 = v59;
  *(_QWORD *)(v6 + 368) = v6 + 360;
  *(_QWORD *)(v6 + 360) = v6 + 360;
  *(_QWORD *)(v6 + 8) = v36;
  *(_QWORD *)(v6 + 376) = 0LL;
  PasidSettings = IommupDeviceEnablePasidTaggedDma(v6, v37);
  if ( PasidSettings < 0 )
    goto LABEL_77;
  *(_BYTE *)(v6 + 88) = HalpIommuCheckDpptException(v15);
  v38 = a5;
  *(_DWORD *)(v13 + 32) = 1;
  *v38 = v6;
  v39 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v39, 15);
  ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  v40 = (__int64 *)qword_140FC0B18;
  if ( *(__int64 **)qword_140FC0B18 != &HalpIommuDeviceCreatedList )
    __fastfail(3u);
  *(_QWORD *)v13 = &HalpIommuDeviceCreatedList;
  *(_QWORD *)(v13 + 8) = v40;
  *v40 = v13;
  qword_140FC0B18 = v13;
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v39);
  __writecr8(v39);
LABEL_96:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock);
  KeAbPostRelease((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock);
  return (unsigned int)PasidSettings;
}
