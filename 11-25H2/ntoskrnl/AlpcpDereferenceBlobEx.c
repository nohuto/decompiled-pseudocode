/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x1408B27D0
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x140735B00 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpForceUnlinkSecureView @ 0x140735D04 (AlpcpForceUnlinkSecureView.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpExposeAttributes @ 0x1408A7C40 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x1408A8710 (AlpcpExposeHandleAttribute.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408AA7F0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1408AD2C8 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     NtAlpcCreatePortSection @ 0x1408AD370 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408AD540 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpCreateSection @ 0x1408AE108 (AlpcpCreateSection.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1408AE47C (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateReserve @ 0x1408AEE08 (AlpcpCreateReserve.c)
 *     AlpcpPrepareViewForDelivery @ 0x1408AF1C8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1408AF320 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x1408AF4B0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpDeleteView @ 0x1408AF704 (AlpcpDeleteView.c)
 *     AlpcpLocateSectionView @ 0x1408AF88C (AlpcpLocateSectionView.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1408AFA20 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcCreateSecurityContext @ 0x1408AFCC0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x1408AFF04 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureViewAttribute @ 0x1408B01AC (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1408B0460 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     AlpcpCreateView @ 0x1408B3D94 (AlpcpCreateView.c)
 *     NtAlpcCreateSectionView @ 0x1408B5800 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x1408B5A38 (AlpcpCreateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x1408B5B70 (NtAlpcDeleteSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x1408B62D4 (AlpcpMapLegacyPortView.c)
 *     AlpcpCleanupProcessViews @ 0x1408E10E0 (AlpcpCleanupProcessViews.c)
 *     AlpcpFlushCancelQueue @ 0x14098AD9C (AlpcpFlushCancelQueue.c)
 *     AlpcConnectionDestroyProcedure @ 0x14098B330 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpDeletePort @ 0x14098B9F0 (AlpcpDeletePort.c)
 *     AlpcpFlushResourcesPort @ 0x14098BDD4 (AlpcpFlushResourcesPort.c)
 *     NtSecureConnectPort @ 0x14098DB40 (NtSecureConnectPort.c)
 *     NtAlpcDeletePortSection @ 0x140A0BDA0 (NtAlpcDeletePortSection.c)
 *     AlpcRegionDestroyProcedure @ 0x140A1D030 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x140A4B79C (AlpcpReleaseViewAttribute.c)
 *     AlpcCreateSecurityContext @ 0x140A55B80 (AlpcCreateSecurityContext.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1403D3020 (ExFreeToPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcMessageCleanupProcedure @ 0x1408B2BD0 (AlpcMessageCleanupProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1408B3330 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1408B3500 (AlpcMessageDestroyProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     AlpcpFreeMessageFunction @ 0x1408B4800 (AlpcpFreeMessageFunction.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  signed __int64 BugCheckParameter4; // rax
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(_QWORD); // rax
  int v6; // eax
  void *v7; // rcx

  BugCheckParameter4 = -a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), -a2);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    v4 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    if ( *(__int64 (__fastcall **)(_QWORD))(v4 + 24) == AlpcMessageCleanupProcedure )
      AlpcMessageCleanupProcedure(BugCheckParameter2);
    else
      guard_dispatch_icall_no_overrides(BugCheckParameter2);
    v5 = *(__int64 (__fastcall **)(_QWORD))(v4 + 40);
    if ( v5 == AlpcSecurityDestroyProcedure )
    {
      v6 = AlpcSecurityDestroyProcedure(BugCheckParameter2);
    }
    else if ( v5 == AlpcMessageDestroyProcedure )
    {
      v6 = AlpcMessageDestroyProcedure(BugCheckParameter2);
    }
    else if ( v5 == AlpcViewDestroyProcedure )
    {
      v6 = AlpcViewDestroyProcedure(BugCheckParameter2);
    }
    else
    {
      v6 = guard_dispatch_icall_no_overrides(BugCheckParameter2);
    }
    if ( v6 >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v4 + 8), (PVOID)(BugCheckParameter2 - 48));
      }
      else if ( *(_QWORD *)(v4 + 48) )
      {
        v7 = (void *)(BugCheckParameter2 - 48);
        if ( *((__int64 (__fastcall **)(PVOID))&AlpcpLookasides.L.FreeEx
             + 16 * (unsigned __int64)*(unsigned int *)(v4 + 8)) == AlpcpFreeMessageFunction )
          AlpcpFreeMessageFunction(v7);
        else
          guard_dispatch_icall_no_overrides(v7);
      }
      else
      {
        ExFreePoolWithTag((PVOID)(BugCheckParameter2 - 48), *(_DWORD *)(v4 + 4));
      }
    }
  }
}
