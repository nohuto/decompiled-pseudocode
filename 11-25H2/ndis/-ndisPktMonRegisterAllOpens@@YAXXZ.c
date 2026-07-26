/*
 * XREFs of ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1400B9D50
 * Callers:
 *     ndisPktMonRegisterComponentsCallback @ 0x1400B9F70 (ndisPktMonRegisterComponentsCallback.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A6A0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline @ 0x14009F4E0 (Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisMTryReferenceOpen@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1400A4F7C (-ndisMTryReferenceOpen@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ndisPktMonOpenRegister @ 0x14016D210 (ndisPktMonOpenRegister.c)
 */

void ndisPktMonRegisterAllOpens(void)
{
  KIRQL v0; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rbx
  KIRQL v2; // si
  KSPIN_LOCK *p_SpinLock; // rdi
  PVOID *Pool2; // rax
  PVOID *v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  p_P = &P;
  P = &P;
  v0 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v2 = v0;
  while ( NextGlobalOpen )
  {
    if ( (unsigned int)Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !ndisMTryReferenceOpen((__int64)NextGlobalOpen, 0x13u) )
        goto LABEL_16;
      p_SpinLock = &NextGlobalOpen->SpinLock;
      KeAcquireSpinLockAtDpcLevel(&NextGlobalOpen->SpinLock);
      if ( (NextGlobalOpen->OpenFlags & 0x8000) != 0 || (NextGlobalOpen->OpenFlags & 0x10000) != 0 )
      {
        KeReleaseSpinLockFromDpcLevel(&NextGlobalOpen->SpinLock);
LABEL_15:
        ndisMDereferenceOpenUnlocked((__int64)NextGlobalOpen, 0x13u);
        goto LABEL_16;
      }
    }
    else
    {
      p_SpinLock = &NextGlobalOpen->SpinLock;
      KeAcquireSpinLockAtDpcLevel(&NextGlobalOpen->SpinLock);
      if ( (NextGlobalOpen->OpenFlags & 0x8000) != 0
        || (NextGlobalOpen->OpenFlags & 0x10000) != 0
        || !NextGlobalOpen->References )
      {
        KeReleaseSpinLockFromDpcLevel(&NextGlobalOpen->SpinLock);
        goto LABEL_16;
      }
      ndisMReferenceOpen((__int64)NextGlobalOpen, 0x13u);
    }
    KeReleaseSpinLockFromDpcLevel(p_SpinLock);
    Pool2 = (PVOID *)ExAllocatePool2(64LL, 24LL, 1836074062);
    if ( !Pool2 )
      goto LABEL_15;
    Pool2[2] = NextGlobalOpen;
    v5 = p_P;
    if ( *p_P != &P )
LABEL_26:
      __fastfail(3u);
    Pool2[1] = p_P;
    *Pool2 = &P;
    *v5 = Pool2;
    p_P = Pool2;
LABEL_16:
    NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v2);
  while ( 1 )
  {
    v6 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_26;
    v7 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_26;
    P = *(PVOID *)P;
    *(_QWORD *)(v7 + 8) = &P;
    v8 = v6[2];
    ExFreePoolWithTag(v6, 0);
    if ( (*(_DWORD *)(v8 + 224) & 0x8000) == 0 && (*(_DWORD *)(v8 + 224) & 0x10000) == 0 )
    {
      memset((void *)(v8 + 920), 0, 0x40uLL);
      ndisPktMonOpenRegister(v8);
    }
    ndisMDereferenceOpenUnlocked(v8, 0x13u);
  }
}
