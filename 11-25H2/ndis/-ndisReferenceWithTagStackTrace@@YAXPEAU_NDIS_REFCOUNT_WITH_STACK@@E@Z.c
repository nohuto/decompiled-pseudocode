/*
 * XREFs of ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140004BD0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140007EC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000B1E0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000EB80 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F380 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x14000F5C0 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F9B0 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     NdisDereferenceWithTag @ 0x1400107F0 (NdisDereferenceWithTag.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400110C0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140013AB0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x140015A90 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ndisMTimerObjectDpc @ 0x140016010 (ndisMTimerObjectDpc.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140022730 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400235C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140024E00 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14002B200 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x140044880 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisInterruptDpc @ 0x140045600 (ndisInterruptDpc.c)
 *     ndisQueueDpcWorkItem @ 0x140045F60 (ndisQueueDpcWorkItem.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14004B0D0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x14004C210 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059CB0 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A740 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14005DD00 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 *     ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x140061320 (-ndisMWakeUpDpcX@@YAXPEAX000@Z.c)
 * Callees:
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x140071D40 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x14007CF60 (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisReferenceWithTagStackTrace(struct _NDIS_REFCOUNT_WITH_STACK *a1, char a2)
{
  int v2; // eax
  unsigned int *v3; // rsi
  struct _NDIS_REFCOUNT_WITH_STACK *v5; // rbx
  int v6; // edx
  unsigned int v7; // ebp
  struct _NDIS_REFCOUNT_WITH_STACK *Next; // r8
  __int64 v9; // r11
  _QWORD *v10; // r11
  __int64 i; // rcx
  int v12; // edx
  _NDIS_REFCOUNT_STACK_BLOCK *Pool2; // rcx
  int v14; // eax
  __int64 v15; // rsi

  v2 = *((_DWORD *)a1 + 14);
  v3 = 0LL;
  v5 = a1;
  if ( a2 )
  {
    if ( (*((_DWORD *)a1 + 14) & 0xFFFE) == 0x7FFE )
    {
      *((_DWORD *)a1 + 14) = v2 | 1;
      return;
    }
    v6 = v2 ^ ((unsigned __int16)v2 ^ (unsigned __int16)(v2 + 2)) & 0xFFFE;
  }
  else
  {
    if ( (v2 & 0xFFFE0000) == 0x7FFE0000 )
    {
      *((_DWORD *)a1 + 14) = v2 | 0x10000;
      return;
    }
    LODWORD(a1) = v2 + 0x20000;
    v6 = (v2 + 0x20000) ^ (v2 ^ (v2 + 0x20000)) & 0x1FFFF;
  }
  *((_DWORD *)v5 + 14) = v6;
  v7 = ndisCaptureStackTrace((unsigned int)a1);
  Next = v5;
LABEL_9:
  if ( !Next )
  {
    if ( !v3 )
    {
      Pool2 = (_NDIS_REFCOUNT_STACK_BLOCK *)ExAllocatePool2(64LL, 56LL, 2020754510LL);
      if ( !Pool2 )
      {
        v14 = 1;
        if ( !a2 )
          v14 = 0x10000;
        *((_DWORD *)v5 + 14) |= v14;
        ndisReleaseStackTrace(v7);
        return;
      }
      v15 = 8LL;
      Pool2->Next = v5->Block.Next;
      if ( !a2 )
        v15 = 32LL;
      v5->Block.Next = Pool2;
      v3 = (unsigned int *)((char *)Pool2 + v15);
    }
    *v3 = (*v3 & 0x3FFFFFF | 0x4000000) ^ (v7 ^ (*v3 & 0x3FFFFFF | 0x4000000)) & 0x3FFFFFF;
    return;
  }
  v9 = 8LL;
  if ( !a2 )
    v9 = 32LL;
  v10 = (_NDIS_REFCOUNT_STACK_BLOCK **)((char *)&Next->Block.Next + v9);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 6 )
    {
      Next = (struct _NDIS_REFCOUNT_WITH_STACK *)Next->Block.Next;
      goto LABEL_9;
    }
    v12 = *((_DWORD *)v10 + i);
    if ( (v12 & 0x3FFFFFF) == v7 && (v12 & 0xFC000000) < 0xFC000000 )
      break;
    if ( !v3 && (v12 & 0x3FFFFFF) == 0 )
      v3 = (unsigned int *)v10 + i;
  }
  *((_DWORD *)v10 + i) = (v12 + 0x4000000) ^ (v12 ^ (v12 + 0x4000000)) & 0x3FFFFFF;
  ndisReleaseStackTrace(v7);
}
