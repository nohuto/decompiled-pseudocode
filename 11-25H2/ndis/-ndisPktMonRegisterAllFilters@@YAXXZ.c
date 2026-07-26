/*
 * XREFs of ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1400B9A50
 * Callers:
 *     ndisPktMonRegisterComponentsCallback @ 0x1400B9F70 (ndisPktMonRegisterComponentsCallback.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x14000E770 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x140018580 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ndisPktMonFilterRegister @ 0x14016FF90 (ndisPktMonFilterRegister.c)
 */

void ndisPktMonRegisterAllFilters(void)
{
  KIRQL v0; // al
  _NDIS_FILTER_BLOCK *v1; // rbx
  KIRQL v2; // di
  PVOID *Pool2; // rax
  PVOID *v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _NDIS_FILTER_BLOCK *v7; // rbx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]
  int v10; // [rsp+40h] [rbp+10h] BYREF

  p_P = &P;
  P = &P;
  v0 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
  v1 = ndisGlobalFilterList;
  v2 = v0;
  while ( v1 )
  {
    if ( !FILTER_TEST_FLAG(v1, 8) && !FILTER_TEST_FLAG(v1, 256) )
    {
      v10 = 0;
      if ( ndisReferenceRefEx(&v1->Ref.SpinLock, 2u, (enum _NDIS_REFERENCE_STATUS *)&v10) )
      {
        Pool2 = (PVOID *)ExAllocatePool2(64LL, 24LL, 1836074062);
        if ( Pool2 )
        {
          Pool2[2] = v1;
          v4 = p_P;
          if ( *p_P != &P )
LABEL_19:
            __fastfail(3u);
          Pool2[1] = p_P;
          *Pool2 = &P;
          *v4 = Pool2;
          p_P = Pool2;
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
    v5 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_19;
    v6 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_19;
    P = *(PVOID *)P;
    *(_QWORD *)(v6 + 8) = &P;
    v7 = (_NDIS_FILTER_BLOCK *)v5[2];
    ExFreePoolWithTag(v5, 0);
    if ( !FILTER_TEST_FLAG(v7, 8) && !FILTER_TEST_FLAG(v7, 256) )
    {
      memset(&v7->PktMonComp, 0, sizeof(v7->PktMonComp));
      ndisPktMonFilterRegister(v7);
    }
    ndisDereferenceFilter(v7, 2u);
  }
}
