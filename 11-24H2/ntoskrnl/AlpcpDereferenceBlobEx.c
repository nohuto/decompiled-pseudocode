/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x14089EBC0
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x14073FA50 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpForceUnlinkSecureView @ 0x14073FC54 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpFlushCancelQueue @ 0x14088E278 (AlpcpFlushCancelQueue.c)
 *     AlpcpDeletePort @ 0x14088E9A0 (AlpcpDeletePort.c)
 *     AlpcpFlushResourcesPort @ 0x14088ECFC (AlpcpFlushResourcesPort.c)
 *     NtSecureConnectPort @ 0x140890D60 (NtSecureConnectPort.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     NtAlpcCreatePortSection @ 0x1408931C0 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x140893594 (AlpcpCreateSection.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x14089385C (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateReserve @ 0x140893C6C (AlpcpCreateReserve.c)
 *     AlpcpCreateSectionView @ 0x1408950B8 (AlpcpCreateSectionView.c)
 *     NtAlpcCreateSectionView @ 0x1408951F0 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteResourceReserve @ 0x140895430 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpCaptureViewAttribute @ 0x140895F40 (AlpcpCaptureViewAttribute.c)
 *     AlpcpLocateSectionView @ 0x14089630C (AlpcpLocateSectionView.c)
 *     NtAlpcDeleteSecurityContext @ 0x140896480 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140896848 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1408969A0 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCreateView @ 0x140897248 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x140897790 (AlpcViewDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     AlpcpReleaseAttributes @ 0x140899E50 (AlpcpReleaseAttributes.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpDeleteView @ 0x14089CE2C (AlpcpDeleteView.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14089CE60 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcCreateSecurityContext @ 0x14089D0F0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x14089E878 (AlpcpCreateSecurityContext.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14089F010 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpExposeAttributes @ 0x1408A0770 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x1408A0E00 (AlpcpExposeHandleAttribute.c)
 *     AlpcpCleanupProcessViews @ 0x1408FF9DC (AlpcpCleanupProcessViews.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1409C12C0 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpMapLegacyPortView @ 0x1409E98D0 (AlpcpMapLegacyPortView.c)
 *     NtAlpcDeletePortSection @ 0x140A0E420 (NtAlpcDeletePortSection.c)
 *     AlpcConnectionDestroyProcedure @ 0x140A13BA0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140A15680 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     NtAlpcDeleteSectionView @ 0x140A19B40 (NtAlpcDeleteSectionView.c)
 *     AlpcRegionDestroyProcedure @ 0x140A1AFE0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x140A44954 (AlpcpReleaseViewAttribute.c)
 *     AlpcCreateSecurityContext @ 0x140A50FF0 (AlpcCreateSecurityContext.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcpFreeMessageFunction @ 0x140896B30 (AlpcpFreeMessageFunction.c)
 *     AlpcViewDestroyProcedure @ 0x140897790 (AlpcViewDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x140897A40 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x140897C10 (AlpcMessageDestroyProcedure.c)
 *     AlpcMessageCleanupProcedure @ 0x1408982A0 (AlpcMessageCleanupProcedure.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v2; // rdx
  signed __int64 BugCheckParameter4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 (__fastcall *v9)(__int64); // rax
  int v10; // eax
  _DWORD *v11; // rcx

  v2 = (unsigned int)-a2;
  BugCheckParameter4 = (int)v2
                     + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), (int)v2);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    v5 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    if ( *(__int64 (__fastcall **)(__int64))(v5 + 24) == AlpcMessageCleanupProcedure )
      AlpcMessageCleanupProcedure(BugCheckParameter2);
    else
      guard_dispatch_icall_no_overrides(BugCheckParameter2, v2);
    v9 = *(__int64 (__fastcall **)(__int64))(v5 + 40);
    if ( (char *)v9 == (char *)AlpcMessageDestroyProcedure )
    {
      v10 = AlpcMessageDestroyProcedure(BugCheckParameter2, v6, v7, v8);
    }
    else if ( v9 == AlpcSecurityDestroyProcedure )
    {
      v10 = AlpcSecurityDestroyProcedure(BugCheckParameter2);
    }
    else if ( v9 == AlpcViewDestroyProcedure )
    {
      v10 = AlpcViewDestroyProcedure(BugCheckParameter2);
    }
    else
    {
      v10 = guard_dispatch_icall_no_overrides(BugCheckParameter2, v6);
    }
    if ( v10 >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v5 + 8), (PVOID)(BugCheckParameter2 - 48));
      }
      else if ( *(_QWORD *)(v5 + 48) )
      {
        v11 = (_DWORD *)(BugCheckParameter2 - 48);
        if ( *((void (__fastcall **)(_DWORD *))&AlpcpLookasides.L.FreeEx
             + 16 * (unsigned __int64)*(unsigned int *)(v5 + 8)) == AlpcpFreeMessageFunction )
          AlpcpFreeMessageFunction(v11);
        else
          guard_dispatch_icall_no_overrides(v11, &AlpcpLookasides);
      }
      else
      {
        ExFreePoolWithTag((PVOID)(BugCheckParameter2 - 48), *(_DWORD *)(v5 + 4));
      }
    }
  }
}
