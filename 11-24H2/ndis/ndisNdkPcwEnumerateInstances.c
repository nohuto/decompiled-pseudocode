/*
 * XREFs of ndisNdkPcwEnumerateInstances @ 0x14006FD70
 * Callers:
 *     ?ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x140162510 (-ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401645E0 (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisNdkPcwEnumerateInstances(PPCW_BUFFER Buffer)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  KIRQL i; // di
  const UNICODE_STRING *MiniportName; // rax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-18h] BYREF

  Data.Data = 0LL;
  Data.Size = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v3 = ndisMiniportList;
  for ( i = v2; v3; v3 = v3->NextGlobalMiniport )
  {
    if ( v3->NDKBlock && (unsigned __int8)ndisReferenceMiniport(v3, 0x5Bu) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, i);
      MiniportName = ndisPcwGetMiniportName(v3);
      PcwAddInstance(Buffer, MiniportName, v3->IfBlock->ifIndex, 1u, &Data);
      i = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport(v3, 0x5Bu);
    }
  }
  KeReleaseSpinLock(&ndisMiniportListLock, i);
  return 0LL;
}
