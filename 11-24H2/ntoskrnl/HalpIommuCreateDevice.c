/*
 * XREFs of HalpIommuCreateDevice @ 0x14054AEFC
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404B6140 (HalpIommuUnblockDevice.c)
 *     IommuCreateAtsDevice @ 0x1405611B0 (IommuCreateAtsDevice.c)
 *     IommuMapDevice @ 0x1405620B0 (IommuMapDevice.c)
 *     IommuDomainAttachDevice @ 0x140564090 (IommuDomainAttachDevice.c)
 *     IommuDeviceCreate @ 0x1407014F0 (IommuDeviceCreate.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404ACCB0 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuCheckDpptException @ 0x1404B6368 (HalpIommuCheckDpptException.c)
 *     HalpIommuCreateDeviceInternal @ 0x1404C9300 (HalpIommuCreateDeviceInternal.c)
 *     HalpIommuCloneDeviceId @ 0x1404D36B0 (HalpIommuCloneDeviceId.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IommupDeviceGetPasidSettings @ 0x14054B960 (IommupDeviceGetPasidSettings.c)
 *     IommupHvRegisterDeviceId @ 0x140563EA4 (IommupHvRegisterDeviceId.c)
 *     IommupHvUnregisterDeviceId @ 0x140563FA8 (IommupHvUnregisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x14069CFDC (IidAreIdsStrictlyEqual.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x1406FCE68 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FD034 (IommupDeviceEnablePasidTaggedDma.c)
 */

__int64 __fastcall HalpIommuCreateDevice(void *a1, void *a2, __int64 a3, __int32 a4, __int64 *a5)
{
  __int64 v6; // rdi
  PVOID v7; // r13
  char *v8; // rax
  int v9; // edx
  signed __int8 v10; // cf
  char *v11; // rbx
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
  char v30; // r15
  char v31; // r12
  void *v32; // rax
  bool v33; // zf
  ULONG_PTR *v34; // rcx
  PVOID v35; // rbx
  __int64 v36; // rdx
  __int64 *v37; // rax
  unsigned __int8 v38; // di
  __int64 *v39; // rax
  void *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  char v44; // [rsp+33h] [rbp-4Dh] BYREF
  char v45; // [rsp+34h] [rbp-4Ch] BYREF
  char v46; // [rsp+35h] [rbp-4Bh] BYREF
  char v47; // [rsp+36h] [rbp-4Ah]
  char v48; // [rsp+37h] [rbp-49h]
  void *v49; // [rsp+40h] [rbp-40h] BYREF
  __int64 v50; // [rsp+48h] [rbp-38h] BYREF
  __int64 v51; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR *v52; // [rsp+58h] [rbp-28h] BYREF
  __int64 v53; // [rsp+60h] [rbp-20h]
  __int128 v54; // [rsp+68h] [rbp-18h] BYREF
  __int64 v55; // [rsp+78h] [rbp-8h]
  void *Src; // [rsp+C0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h]
  __int64 v58; // [rsp+D0h] [rbp+50h]

  v58 = a3;
  Object = a2;
  Src = a1;
  v53 = 0LL;
  v49 = 0LL;
  v55 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v54 = 0LL;
  v6 = 0LL;
  v44 = 0;
  v45 = 0;
  v7 = 0LL;
  v48 = 0;
  v46 = 0;
  v47 = 0;
  v8 = (char *)KeAbPreAcquire((__int64)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&HalpIommuDeviceCreatedListPushLock, v8, (__int64)&HalpIommuDeviceCreatedListPushLock);
  if ( v11 )
    v11[10] = 1;
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
          PasidSettings = IommupDeviceGetPasidSettings(v58, &v44, &v45, &v46);
          if ( PasidSettings < 0 )
            goto LABEL_24;
          v27 = v45 || v44;
          v28 = *(_QWORD *)(v13 + 24);
          if ( *(_BYTE *)(v28 + 274) != v27 || *(_BYTE *)(v28 + 273) != v44 || *(_BYTE *)(v28 + 272) != v46 )
            goto LABEL_23;
          ++*(_DWORD *)(v13 + 32);
          PasidSettings = 0;
          v25 = Object;
          v7 = *(PVOID *)(v28 + 8);
          v48 = 1;
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
              v47 = 1;
          }
LABEL_41:
          ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          if ( v26 )
          {
            ObfReferenceObjectWithTag(v25, 0x446C6148u);
            if ( v47 )
              ObfDereferenceObjectWithTag(v7, 0x446C6148u);
          }
          v30 = 0;
          v31 = 0;
LABEL_75:
          if ( PasidSettings >= 0 )
            goto LABEL_94;
          if ( v6 )
          {
            if ( *(_BYTE *)(v6 + 274) )
              IommupDeviceDisablePasidTaggedDma(v6);
            v40 = *(void **)(v6 + 8);
            if ( v40 )
              ObfDereferenceObjectWithTag(v40, 0x446C6148u);
            if ( v30 )
            {
              v41 = *(_QWORD *)(v6 + 32);
              if ( HalpHvIommu )
                IommupHvUnregisterDeviceId(v41);
              else
                guard_dispatch_icall_no_overrides(*(_QWORD *)(v41 + 16), *(_QWORD *)(v6 + 40));
            }
            HalpMmAllocCtxFree((__int64)v40, v6);
          }
          if ( v48 )
            --*(_DWORD *)(v13 + 32);
          if ( v31 )
          {
LABEL_89:
            v42 = *(_QWORD *)(v13 + 16);
            if ( v42 )
              HalpMmAllocCtxFree(v29, v42);
            HalpMmAllocCtxFree(v29, v13);
          }
          if ( v49 )
            HalpMmAllocCtxFree(v29, (__int64)v49);
          goto LABEL_94;
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
    goto LABEL_94;
  }
  *(_OWORD *)v17 = 0LL;
  *(_OWORD *)(v17 + 16) = 0LL;
  *(_QWORD *)(v17 + 32) = 0LL;
  v31 = 1;
  PasidSettings = HalpIommuCloneDeviceId(v15, (__int64 *)(v17 + 16));
  if ( PasidSettings < 0 )
  {
    v30 = 0;
    goto LABEL_75;
  }
  v32 = (void *)HalpMmAllocCtxAlloc(v29, 424LL);
  v6 = (__int64)v32;
  if ( !v32 )
  {
    PasidSettings = -1073741670;
    goto LABEL_89;
  }
  memset_0(v32, 0, 0x1A8uLL);
  v33 = HalpHvIommu == 0;
  *(_QWORD *)(v13 + 24) = v6;
  *(_DWORD *)(v6 + 388) = a4;
  *(_DWORD *)(v6 + 392) = a4;
  *(_QWORD *)(v6 + 416) = 0LL;
  if ( !v33 )
  {
    if ( *v15 == 2 )
    {
      PasidSettings = HalpIommuQueryAcpiDeviceMapping((__int64)v15, (__int64)&v54);
      if ( PasidSettings < 0 )
        goto LABEL_74;
      PasidSettings = HalpIommuCloneDeviceId(&v54, (__int64 *)&Src);
      if ( PasidSettings < 0 )
        goto LABEL_74;
      v15 = Src;
      v49 = Src;
    }
    PasidSettings = IommupHvRegisterDeviceId(v15, &v50);
    if ( PasidSettings >= 0 )
    {
      *(_QWORD *)(v6 + 32) = v50;
      goto LABEL_61;
    }
LABEL_74:
    v30 = 0;
    goto LABEL_75;
  }
  PasidSettings = HalpIommuCreateDeviceInternal((__int64)v15, v6, &v51, &v52);
  if ( PasidSettings < 0 )
    goto LABEL_74;
  v34 = v52;
  *(_QWORD *)(v6 + 40) = v51;
  *(_QWORD *)(v6 + 32) = v34;
  if ( v34[26] )
  {
    guard_dispatch_icall_no_overrides(v34[2], v15);
    *(_QWORD *)(v6 + 48) = v53;
  }
  *(_QWORD *)(v6 + 64) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v6 + 64));
  _InterlockedExchange64((volatile __int64 *)(v6 + 64), 1LL);
  *(_DWORD *)(v6 + 72) = -1;
  v15 = Src;
LABEL_61:
  v30 = 1;
  if ( !v49 )
  {
    PasidSettings = HalpIommuCloneDeviceId(v15, (__int64 *)&v49);
    if ( PasidSettings < 0 )
      goto LABEL_75;
  }
  v35 = Object;
  *(_QWORD *)v6 = v49;
  if ( v35 )
    ObfReferenceObjectWithTag(v35, 0x446C6148u);
  v36 = v58;
  *(_QWORD *)(v6 + 368) = v6 + 360;
  *(_QWORD *)(v6 + 360) = v6 + 360;
  *(_QWORD *)(v6 + 8) = v35;
  *(_QWORD *)(v6 + 376) = 0LL;
  PasidSettings = IommupDeviceEnablePasidTaggedDma(v6, v36);
  if ( PasidSettings < 0 )
    goto LABEL_75;
  *(_BYTE *)(v6 + 88) = HalpIommuCheckDpptException(v15);
  v37 = a5;
  *(_DWORD *)(v13 + 32) = 1;
  *v37 = v6;
  v38 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v38, 15);
  ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  v39 = (__int64 *)qword_140FC0D78;
  if ( *(__int64 **)qword_140FC0D78 != &HalpIommuDeviceCreatedList )
    __fastfail(3u);
  *(_QWORD *)v13 = &HalpIommuDeviceCreatedList;
  *(_QWORD *)(v13 + 8) = v39;
  *v39 = v13;
  qword_140FC0D78 = v13;
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
  __writecr8(v38);
LABEL_94:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock);
  KeAbPostRelease((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock);
  return (unsigned int)PasidSettings;
}
