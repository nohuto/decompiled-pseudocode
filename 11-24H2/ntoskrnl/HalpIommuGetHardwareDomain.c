/*
 * XREFs of HalpIommuGetHardwareDomain @ 0x1404C7308
 * Callers:
 *     HalpIommuLeaveDmaDomain @ 0x1404AF300 (HalpIommuLeaveDmaDomain.c)
 *     IommupDomainAttachPasidDevice @ 0x14054B9D4 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BD54 (IommupDomainDetachPasidDevice.c)
 *     HalpIommuInitializeDmar @ 0x14055191C (HalpIommuInitializeDmar.c)
 *     HalpIommuJoinDmaDomain @ 0x1405519E8 (HalpIommuJoinDmaDomain.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpIommuAcquireNewDomain @ 0x14054F89C (HalpIommuAcquireNewDomain.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1405655F0 (HalpIommuGetDmarptRootAddress.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpIommuGetHardwareDomain(__int64 a1, __int64 a2, char a3, char a4, char a5, __int64 *a6)
{
  __int64 v6; // rbx
  int DmarptRootAddress; // ebp
  _QWORD *v12; // r14
  __int64 v13; // rcx
  _QWORD *i; // rax
  void *v15; // rax
  char v16; // cl
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v22; // [rsp+28h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-38h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h]

  v22 = 0LL;
  v6 = 0LL;
  SpinLock = (PKSPIN_LOCK)(a1 + 32);
  DmarptRootAddress = 0;
  v12 = (_QWORD *)(a1 + 16);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
  for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*i )
  {
    v6 = (__int64)i;
    if ( i[3] == a2 )
      break;
  }
  if ( i != v12 )
  {
    if ( a1 != HalpIommuBypassDomain && a4 )
      ++*(_QWORD *)(v6 + 16);
    goto LABEL_24;
  }
  if ( !a3 )
  {
LABEL_24:
    *a6 = v6;
    goto LABEL_25;
  }
  v15 = (void *)HalpMmAllocCtxAlloc(v13, 144LL);
  v6 = (__int64)v15;
  if ( v15 )
  {
    memset_0(v15, 0, 0x90uLL);
    *(_QWORD *)(v6 + 16) = 1LL;
    *(_QWORD *)(v6 + 24) = a2;
    *(_DWORD *)(v6 + 32) = 1;
    if ( !*(_BYTE *)(a1 + 52)
      || (v16 = *(_BYTE *)(v6 + 48),
          v17 = a1 + 48,
          *(_DWORD *)(v6 + 32) = 0,
          *(_BYTE *)(v6 + 48) = v16 ^ (v16 ^ (4 * a5)) & 4,
          !a5) )
    {
      v17 = 0LL;
    }
    v18 = *(_QWORD *)(a1 + 40);
    if ( v18 && !*(_BYTE *)(a1 + 52) )
    {
      DmarptRootAddress = HalpIommuGetDmarptRootAddress(
                            v18,
                            (unsigned int)((unsigned __int8)HIBYTE(*(_WORD *)(a2 + 472)) >> 5) + 1,
                            &v22);
      if ( DmarptRootAddress < 0 )
        goto LABEL_20;
      *(_QWORD *)(v6 + 72) = v22;
      *(_BYTE *)(v6 + 64) = 3;
    }
    *(_DWORD *)(v6 + 36) = *(_DWORD *)(a1 + 12);
    DmarptRootAddress = HalpIommuAcquireNewDomain(a2, v6 + 32, v17);
    if ( DmarptRootAddress >= 0 )
    {
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(v6 + 80);
      v20 = *(__int64 **)(a1 + 24);
      if ( (_QWORD *)*v20 != v12 )
        __fastfail(3u);
      *(_QWORD *)v6 = v12;
      *(_QWORD *)(v6 + 8) = v20;
      *v20 = v6;
      *(_QWORD *)(a1 + 24) = v6;
      goto LABEL_24;
    }
LABEL_20:
    HalpMmAllocCtxFree(v19, v6);
    goto LABEL_25;
  }
  DmarptRootAddress = -1073741670;
LABEL_25:
  KeReleaseSpinLock(SpinLock, NewIrql);
  return (unsigned int)DmarptRootAddress;
}
