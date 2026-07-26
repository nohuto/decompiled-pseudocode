/*
 * XREFs of ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1400B1C84
 * Callers:
 *     ndisPktMonRegisterComponentsCallback @ 0x1400B2140 (ndisPktMonRegisterComponentsCallback.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140010EE0 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x14004EC40 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ndisPktMonFilterRegister @ 0x140164210 (ndisPktMonFilterRegister.c)
 */

void ndisPktMonRegisterAllFilters(void)
{
  KIRQL v0; // al
  struct _NDIS_FILTER_BLOCK *v1; // rbx
  KIRQL v2; // di
  const struct _NDIS_FILTER_BLOCK *v3; // rcx
  PVOID **Pool2; // rax
  PVOID *v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _NDIS_FILTER_BLOCK *v8; // rbx
  const struct _NDIS_FILTER_BLOCK *v9; // rcx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]
  int v12; // [rsp+40h] [rbp+10h] BYREF

  p_P = &P;
  P = &P;
  v0 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
  v1 = ndisGlobalFilterList;
  v2 = v0;
  while ( v1 )
  {
    if ( !FILTER_TEST_FLAG(v1, 8) && !FILTER_TEST_FLAG(v3, 256) )
    {
      v12 = 0;
      if ( ndisReferenceRefEx(&v1->Ref.SpinLock, 2u, (enum _NDIS_REFERENCE_STATUS *)&v12) )
      {
        Pool2 = (PVOID **)ExAllocatePool2(64LL, 24LL, 1836074062LL);
        if ( Pool2 )
        {
          Pool2[2] = (PVOID *)v1;
          v5 = p_P;
          if ( *p_P != &P )
LABEL_19:
            __fastfail(3u);
          Pool2[1] = p_P;
          *Pool2 = &P;
          *v5 = Pool2;
          p_P = (PVOID *)Pool2;
        }
        else
        {
          ndisDereferenceFilter(v1, 2u);
        }
      }
    }
    v1 = v1->NextGlobalFilter;
  }
  KeReleaseSpinLock(&ndisGlobalFilterListLock, v2);
  while ( 1 )
  {
    v6 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_19;
    v7 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_19;
    P = *(PVOID *)P;
    *(_QWORD *)(v7 + 8) = &P;
    v8 = (_NDIS_FILTER_BLOCK *)v6[2];
    ExFreePoolWithTag(v6, 0);
    if ( !FILTER_TEST_FLAG(v8, 8) && !FILTER_TEST_FLAG(v9, 256) )
    {
      memset(&v8->PktMonComp, 0, sizeof(v8->PktMonComp));
      ndisPktMonFilterRegister((char)v8);
    }
    ndisDereferenceFilter(v8, 2u);
  }
}
