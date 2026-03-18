/*
 * XREFs of ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14001415C
 * Callers:
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1401AED80 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1401AF3C8 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1402947A4 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x140296D80 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1402DF238 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035B3A4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035C5F8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x14039D488 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1403A43C0 (DxgkGetResourcePresentPrivateDriverData.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

DXGRESOURCEREFERENCE *__fastcall DXGPROCESS::GetResourceSafe(__int64 a1, DXGRESOURCEREFERENCE *a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // ecx
  struct DXGRESOURCE *v10; // rbx
  int v12; // edx
  int v13; // r8d

  v3 = a1 + 248;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 248));
  v7 = (a3 >> 6) & 0xFFFFFF;
  if ( v7 < *(_DWORD *)(a1 + 296)
    && (v8 = *(_QWORD *)(a1 + 280), ((a3 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x60))
    && (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x2000) == 0
    && (v9 = *(_DWORD *)(v8 + 16LL * v7 + 8) & 0x1F) != 0 )
  {
    if ( v9 == 4 )
    {
      v10 = *(struct DXGRESOURCE **)(v8 + 16LL * v7);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v10 = 0LL;
      WdLogGlobalForLineNumber = 318;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          318,
          v12,
          v13,
          0,
          0,
          -1,
          (__int64)L"Handle type mismatch",
          318LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  else
  {
    v10 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(a2, v10);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 16));
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return a2;
}
