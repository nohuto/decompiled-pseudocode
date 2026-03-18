/*
 * XREFs of PiSwDeviceFree @ 0x1409F819C
 * Callers:
 *     PiSwDeviceDereference @ 0x1409FB4F8 (PiSwDeviceDereference.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1408D3F3C (PnpFreeDevPropertyArray.c)
 *     PiSwFreePdoAssociationsList @ 0x1409F8118 (PiSwFreePdoAssociationsList.c)
 *     PiSwPnPInfoFree @ 0x1409F8258 (PiSwPnPInfoFree.c)
 *     PiSwFreeInterfaceList @ 0x1409F84F4 (PiSwFreeInterfaceList.c)
 *     PiSwInstanceInfoFree @ 0x1409FA424 (PiSwInstanceInfoFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x1409FB784 (PiSwQueuedCreateInfoFree.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  PVOID *v5; // rdx

  PiSwInstanceInfoFree(a1 + 8);
  PiSwPnPInfoFree(a1 + 24);
  v2 = *(void **)(a1 + 80);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_OWORD *)(a1 + 72) = 0LL;
  }
  v3 = *(void **)(a1 + 88);
  if ( v3 )
  {
    PiSwQueuedCreateInfoFree(v3);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v4 = *(void **)(a1 + 152);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57706E50u);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v5 = *(PVOID **)(a1 + 168);
  if ( v5 )
  {
    PnpFreeDevPropertyArray(*(_DWORD *)(a1 + 176), v5, 0x57706E50u);
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_DWORD *)(a1 + 176) = 0;
  }
  PiSwFreeInterfaceList(a1 + 184);
  PiSwFreePdoAssociationsList((_QWORD **)(a1 + 128));
}
