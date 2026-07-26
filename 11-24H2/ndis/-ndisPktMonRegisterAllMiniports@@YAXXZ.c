/*
 * XREFs of ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1400B1E1C
 * Callers:
 *     ndisPktMonRegisterComponentsCallback @ 0x1400B2140 (ndisPktMonRegisterComponentsCallback.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007D730 (-ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ndisPktMonMiniportRegister @ 0x14016BAF0 (ndisPktMonMiniportRegister.c)
 */

void ndisPktMonRegisterAllMiniports(void)
{
  KIRQL v0; // al
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  KIRQL v2; // di
  PVOID **Pool2; // rax
  PVOID *v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  p_P = &P;
  P = &P;
  v0 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v1 = ndisMiniportList;
  v2 = v0;
  while ( v1 )
  {
    if ( ndisIsMiniportReady(v1) && (unsigned __int8)ndisReferenceMiniport(v1, 0x55u) )
    {
      Pool2 = (PVOID **)ExAllocatePool2(64LL, 24LL, 1836074062LL);
      if ( Pool2 )
      {
        Pool2[2] = (PVOID *)v1;
        v4 = p_P;
        if ( *p_P != &P )
LABEL_17:
          __fastfail(3u);
        Pool2[1] = p_P;
        *Pool2 = &P;
        *v4 = Pool2;
        p_P = (PVOID *)Pool2;
      }
      else
      {
        ndisDereferenceMiniport(v1, 0x55u);
      }
    }
    v1 = v1->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
  while ( 1 )
  {
    v5 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_17;
    v6 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_17;
    P = *(PVOID *)P;
    *(_QWORD *)(v6 + 8) = &P;
    v7 = (struct _NDIS_MINIPORT_BLOCK *)v5[2];
    ExFreePoolWithTag(v5, 0);
    if ( ndisIsMiniportReady(v7) )
    {
      memset(&v7->PktMonComp, 0, sizeof(v7->PktMonComp));
      ndisPktMonMiniportRegister(v7);
    }
    ndisDereferenceMiniport(v7, 0x55u);
  }
}
