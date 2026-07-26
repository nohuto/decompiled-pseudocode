/*
 * XREFs of ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140056B20
 * Callers:
 *     ?ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140056AE0 (-ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_M.c)
 *     ?ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140056B00 (-ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000CBF0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140048E80 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x14004C620 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMRawOidRequestComplete(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  int v3; // eax
  UCHAR *NdisReserved; // rbx
  NDIS_OID Oid; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  struct NDISWATCHDOG__ *v11; // rcx
  __int64 v12; // rdi
  int v13; // ebx
  KIRQL v14; // al
  KIRQL v15; // r14
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  struct _NDIS_OID_REQUEST *v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a1 + 30);
  NdisReserved = a2->NdisReserved;
  v17 = a2;
  if ( (v3 & 0x80u) == 0
    || (Oid = a2->DATA.QUERY_INFORMATION.Oid, Oid != 131334) && Oid != -50265847
    || *(_UNKNOWN **)&a2->NdisReserved[32] != &ndisIntReqGeneric )
  {
    v9 = *((_QWORD *)a1 + 470);
    v10 = *(_QWORD *)(v9 + 352);
    if ( !v10 || *(_QWORD *)(v10 + 64) == *(_QWORD *)(v9 + 176) )
      v11 = (struct NDISWATCHDOG__ *)*((_QWORD *)a1 + 683);
    else
      v11 = (struct NDISWATCHDOG__ *)*((_QWORD *)a1 + 684);
    ndisDisarmWatchdogAsync(v11);
  }
  if ( (*((_DWORD *)NdisReserved + 4) & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest((struct _NDIS_OBJECT_HEADER *)a1, a2, 1, &v17);
    NdisReserved = v17->NdisReserved;
  }
  if ( (*((_DWORD *)NdisReserved + 4) & 0x400) != 0 )
  {
    *((_DWORD *)NdisReserved + 2) = a3;
    KeSetEvent((PRKEVENT)(NdisReserved + 40), 0, 0);
  }
  else
  {
    if ( (*((_DWORD *)a1 + 30) & 0x80u) == 0 )
    {
      v12 = *((_QWORD *)a1 + 556);
      if ( v12 )
      {
        v13 = *((_DWORD *)a1 + 30);
        v14 = KeAcquireSpinLockRaiseToDpc(*((PKSPIN_LOCK *)a1 + 556));
        *(_DWORD *)(v12 + 512) &= ~1u;
        v15 = v14;
        if ( (v13 & 0x80u) != 0
          && !*(_DWORD *)(v12 + 512)
          && !*(_DWORD *)(v12 + 516)
          && !*(_DWORD *)(v12 + 528)
          && !*(_DWORD *)(v12 + 532)
          && !*(_DWORD *)(v12 + 520)
          && !*(_DWORD *)(v12 + 524)
          && !*(_DWORD *)(v12 + 576)
          && !*(_DWORD *)(v12 + 508) )
        {
          CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport((struct _NDIS_MINIPORT_BLOCK *)a1);
          CxBlockFromMiniport->Chars.EvtCxPowerDereference((void *)*((_QWORD *)a1 + 3));
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v12, v15);
      }
    }
    ndisMOidRequestCompleteInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v17, a3, 0LL);
  }
}
