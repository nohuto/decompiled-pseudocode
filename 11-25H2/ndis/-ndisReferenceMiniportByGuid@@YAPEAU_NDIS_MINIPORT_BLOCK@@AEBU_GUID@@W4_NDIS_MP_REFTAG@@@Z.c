/*
 * XREFs of ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x140029710
 * Callers:
 *     ndisLwmIoctlIrpHandler @ 0x1400294D0 (ndisLwmIoctlIrpHandler.c)
 *     ndisHandleBindNotification @ 0x140143F3C (ndisHandleBindNotification.c)
 *     ndisPnpRefresh @ 0x1401748B0 (ndisPnpRefresh.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceMiniportByGuid(const struct _GUID *a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  struct _NDIS_M_DRIVER_BLOCK *v5; // rdi
  KIRQL v6; // bp
  KSPIN_LOCK *p_SpinLock; // rsi
  _NDIS_MINIPORT_BLOCK *i; // rbx
  __int64 v9; // rcx
  _NDIS_MINIPORT_BLOCK *v10; // rdi

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v5 = ndisMiniDriverList;
  v6 = v4;
LABEL_2:
  if ( v5 )
  {
    p_SpinLock = &v5->Ref.SpinLock;
    KeAcquireSpinLockAtDpcLevel(&v5->Ref.SpinLock);
    for ( i = v5->MiniportQueue; ; i = i->NextMiniport )
    {
      if ( !i )
      {
        KeReleaseSpinLockFromDpcLevel(&v5->Ref.SpinLock);
        v5 = v5->NextDriver;
        goto LABEL_2;
      }
      v9 = *(_QWORD *)&i->InterfaceGuid.Data1 - *(_QWORD *)&a1->Data1;
      if ( !v9 )
        v9 = *(_QWORD *)i->InterfaceGuid.Data4 - *(_QWORD *)a1->Data4;
      if ( !v9 )
        break;
    }
    v10 = 0LL;
    if ( (unsigned __int8)ndisReferenceMiniport(i, a2) )
      v10 = i;
    KeReleaseSpinLockFromDpcLevel(p_SpinLock);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v6);
    return v10;
  }
  else
  {
    KeReleaseSpinLock(&ndisMiniDriverListLock, v6);
    return 0LL;
  }
}
