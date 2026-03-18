/*
 * XREFs of HalpIommuCreateDevice @ 0x14054ACF8
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BC0D0 (HalpIommuUnblockDevice.c)
 *     IommuCreateAtsDevice @ 0x140560CE0 (IommuCreateAtsDevice.c)
 *     IommuMapDevice @ 0x140561BE0 (IommuMapDevice.c)
 *     IommuDomainAttachDevice @ 0x140563B20 (IommuDomainAttachDevice.c)
 *     IommuDeviceCreate @ 0x1406F7AC0 (IommuDeviceCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404B1354 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuCheckDpptException @ 0x1404BC2F8 (HalpIommuCheckDpptException.c)
 *     HalpIommuCreateDeviceInternal @ 0x1404D0210 (HalpIommuCreateDeviceInternal.c)
 *     HalpIommuCloneDeviceId @ 0x1404DACA4 (HalpIommuCloneDeviceId.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     IommupDeviceGetPasidSettings @ 0x14054B7A0 (IommupDeviceGetPasidSettings.c)
 *     IommupHvUnregisterDeviceId @ 0x140563A38 (IommupHvUnregisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x140690C0C (IidAreIdsStrictlyEqual.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x1406F3438 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406F3604 (IommupDeviceEnablePasidTaggedDma.c)
 */

__int64 __fastcall HalpIommuCreateDevice(void *a1, void *a2, __int64 a3, __int32 a4, __int64 *a5)
{
  __int64 v6; // rdi
  PVOID v7; // r13
  __int64 *v8; // rax
  int v9; // edx
  signed __int8 v10; // cf
  __int64 *v11; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 v13; // rsi
  _DWORD *v14; // r14
  __int64 v15; // r8
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // ecx
  bool v20; // al
  int PasidSettings; // ebx
  PVOID v22; // r14
  char v23; // r15
  char v24; // dl
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v27; // al
  char v28; // r14
  char v29; // r15
  void *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  void *v34; // rax
  bool v35; // zf
  unsigned __int64 v36; // r14
  _DWORD *v37; // r15
  ULONG_PTR *v38; // rcx
  PVOID v39; // rbx
  __int64 v40; // rdx
  __int64 *v41; // rax
  unsigned __int8 v42; // di
  __int64 *v43; // rax
  __int64 v44; // rdx
  char v46; // [rsp+31h] [rbp-4Fh]
  char v47; // [rsp+32h] [rbp-4Eh]
  char v48; // [rsp+33h] [rbp-4Dh]
  char v49; // [rsp+35h] [rbp-4Bh] BYREF
  char v50; // [rsp+36h] [rbp-4Ah] BYREF
  char v51; // [rsp+37h] [rbp-49h] BYREF
  char v52; // [rsp+38h] [rbp-48h]
  void *v53; // [rsp+40h] [rbp-40h] BYREF
  __int64 v54; // [rsp+48h] [rbp-38h] BYREF
  ULONG_PTR *v55; // [rsp+50h] [rbp-30h] BYREF
  __int64 v56; // [rsp+58h] [rbp-28h]
  __int128 v57; // [rsp+68h] [rbp-18h] BYREF
  __int64 v58; // [rsp+78h] [rbp-8h]
  void *Src; // [rsp+C0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h]
  __int64 v61; // [rsp+D0h] [rbp+50h]

  v61 = a3;
  Object = a2;
  Src = a1;
  v56 = 0LL;
  v53 = 0LL;
  v58 = 0LL;
  v55 = 0LL;
  v54 = 0LL;
  v49 = 0;
  v57 = 0LL;
  v6 = 0LL;
  v50 = 0;
  v48 = 0;
  v7 = 0LL;
  v46 = 0;
  v51 = 0;
  v47 = 0;
  v52 = 0;
  v8 = KeAbPreAcquire((__int64)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&HalpIommuDeviceCreatedListPushLock, v8, (__int64)&HalpIommuDeviceCreatedListPushLock);
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
  v14 = Src;
  while ( (__int64 *)v13 != &HalpIommuDeviceCreatedList )
  {
    if ( (unsigned __int8)IidAreIdsStrictlyEqual(*(_QWORD *)(v13 + 16), v14) )
    {
      v15 = *(_QWORD *)(v13 + 24);
      v16 = *(_DWORD *)(v15 + 392);
      v17 = *(_DWORD *)(v15 + 388);
      if ( v16 == a4 )
        goto LABEL_24;
      if ( v16 )
      {
        v18 = v16 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
              goto LABEL_16;
LABEL_19:
            PasidSettings = -1073741637;
LABEL_20:
            v22 = Object;
            v23 = 0;
            goto LABEL_37;
          }
LABEL_24:
          _InterlockedExchange((volatile __int32 *)(v15 + 392), a4);
          PasidSettings = IommupDeviceGetPasidSettings(v61, &v49, &v50, &v51);
          if ( PasidSettings < 0 )
            goto LABEL_20;
          v24 = v50 || v49;
          v25 = *(_QWORD *)(v13 + 24);
          if ( *(_BYTE *)(v25 + 274) != v24 || *(_BYTE *)(v25 + 273) != v49 || *(_BYTE *)(v25 + 272) != v51 )
            goto LABEL_19;
          ++*(_DWORD *)(v13 + 32);
          PasidSettings = 0;
          v22 = Object;
          v7 = *(PVOID *)(v25 + 8);
          v46 = 1;
          *a5 = v25;
          if ( !v22 || v22 == v7 )
          {
            v23 = 0;
          }
          else
          {
            *(_QWORD *)(v25 + 8) = v22;
            v23 = 1;
            if ( v7 )
              v52 = 1;
          }
LABEL_37:
          ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          if ( v23 )
          {
            ObfReferenceObjectWithTag(v22, 0x446C6148u);
            if ( v52 )
              ObfDereferenceObjectWithTag(v7, 0x446C6148u);
          }
LABEL_42:
          v27 = v48;
          v28 = v46;
          v29 = v47;
          if ( PasidSettings >= 0 )
            goto LABEL_94;
          if ( v6 )
          {
LABEL_44:
            if ( *(_BYTE *)(v6 + 274) )
              IommupDeviceDisablePasidTaggedDma(v6);
            v30 = *(void **)(v6 + 8);
            if ( v30 )
              ObfDereferenceObjectWithTag(v30, 0x446C6148u);
            if ( v29 )
            {
              v31 = *(_QWORD *)(v6 + 32);
              if ( HalpHvIommu )
                IommupHvUnregisterDeviceId(v31);
              else
                guard_dispatch_icall_no_overrides(*(_QWORD *)(v31 + 16));
            }
            HalpMmAllocCtxFree((__int64)v30, v6);
            v27 = v48;
          }
          if ( v28 )
            --*(_DWORD *)(v13 + 32);
          if ( v27 )
          {
LABEL_89:
            v44 = *(_QWORD *)(v13 + 16);
            if ( v44 )
              HalpMmAllocCtxFree(v26, v44);
            HalpMmAllocCtxFree(v26, v13);
          }
          if ( v53 )
            HalpMmAllocCtxFree(v26, (__int64)v53);
          goto LABEL_94;
        }
        if ( a4 != 2 )
          goto LABEL_19;
        if ( v17 == 2 )
          goto LABEL_24;
        v20 = 0;
      }
      else
      {
LABEL_16:
        v20 = a4 != 1;
        if ( a4 == 2 && v17 != 2 )
          goto LABEL_19;
      }
      if ( !v20 )
        goto LABEL_19;
      goto LABEL_24;
    }
    v13 = *(_QWORD *)v13;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v33 = HalpMmAllocCtxAlloc(v32, 40LL);
  v13 = v33;
  if ( !v33 )
  {
    PasidSettings = -1073741670;
    goto LABEL_94;
  }
  *(_OWORD *)v33 = 0LL;
  *(_OWORD *)(v33 + 16) = 0LL;
  *(_QWORD *)(v33 + 32) = 0LL;
  v48 = 1;
  PasidSettings = HalpIommuCloneDeviceId(v14, (__int64 *)(v33 + 16));
  if ( PasidSettings < 0 )
    goto LABEL_42;
  v34 = (void *)HalpMmAllocCtxAlloc(v26, 416LL);
  v6 = (__int64)v34;
  if ( !v34 )
  {
    PasidSettings = -1073741670;
    goto LABEL_89;
  }
  memset_0(v34, 0, 0x1A0uLL);
  v35 = HalpHvIommu == 0;
  *(_QWORD *)(v13 + 24) = v6;
  *(_DWORD *)(v6 + 388) = a4;
  *(_DWORD *)(v6 + 392) = a4;
  if ( v35 )
  {
    PasidSettings = HalpIommuCreateDeviceInternal((__int64)v14, v6, &v54, &v55);
    if ( PasidSettings < 0 )
      goto LABEL_42;
    v38 = v55;
    *(_QWORD *)(v6 + 40) = v54;
    *(_QWORD *)(v6 + 32) = v38;
    if ( v38[26] )
    {
      guard_dispatch_icall_no_overrides(v38[2]);
      *(_QWORD *)(v6 + 48) = v56;
    }
    *(_QWORD *)(v6 + 64) = 0LL;
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v6 + 64));
    _InterlockedExchange64((volatile __int64 *)(v6 + 64), 1LL);
    *(_DWORD *)(v6 + 72) = -1;
    v37 = Src;
  }
  else
  {
    if ( *v14 == 2 )
    {
      PasidSettings = HalpIommuQueryAcpiDeviceMapping((__int64)v14, (__int64)&v57);
      if ( PasidSettings < 0 )
        goto LABEL_42;
      PasidSettings = HalpIommuCloneDeviceId(&v57, (__int64 *)&Src);
      if ( PasidSettings < 0 )
        goto LABEL_42;
      v53 = Src;
    }
    v36 = _InterlockedIncrement(&HalpHvLogicalId);
    if ( v36 > 0x1FFFFFFFFFFFFFFFLL )
    {
      PasidSettings = -1073741670;
LABEL_65:
      v29 = 0;
      v28 = 0;
      goto LABEL_44;
    }
    v37 = Src;
    PasidSettings = guard_dispatch_icall_no_overrides(Src);
    if ( PasidSettings < 0 )
      goto LABEL_65;
    *(_QWORD *)(v6 + 32) = v36;
  }
  v47 = 1;
  if ( !v53 )
  {
    PasidSettings = HalpIommuCloneDeviceId(v37, (__int64 *)&v53);
    if ( PasidSettings < 0 )
      goto LABEL_42;
  }
  v39 = Object;
  *(_QWORD *)v6 = v53;
  if ( v39 )
    ObfReferenceObjectWithTag(v39, 0x446C6148u);
  v40 = v61;
  *(_QWORD *)(v6 + 8) = v39;
  *(_QWORD *)(v6 + 368) = v6 + 360;
  *(_QWORD *)(v6 + 360) = v6 + 360;
  *(_QWORD *)(v6 + 376) = 0LL;
  PasidSettings = IommupDeviceEnablePasidTaggedDma(v6, v40);
  if ( PasidSettings < 0 )
    goto LABEL_42;
  *(_BYTE *)(v6 + 88) = HalpIommuCheckDpptException(v37);
  v41 = a5;
  *(_DWORD *)(v13 + 32) = 1;
  *v41 = v6;
  v42 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v42, 15);
  ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  v43 = (__int64 *)qword_140FC0378;
  if ( *(__int64 **)qword_140FC0378 != &HalpIommuDeviceCreatedList )
    __fastfail(3u);
  *(_QWORD *)v13 = &HalpIommuDeviceCreatedList;
  *(_QWORD *)(v13 + 8) = v43;
  *v43 = v13;
  qword_140FC0378 = v13;
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v42);
  __writecr8(v42);
LABEL_94:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock);
  KeAbPostRelease((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock);
  return (unsigned int)PasidSettings;
}
