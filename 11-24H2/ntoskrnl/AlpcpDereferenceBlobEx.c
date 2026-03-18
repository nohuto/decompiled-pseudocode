/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x140890420
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x140741B20 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpForceUnlinkSecureView @ 0x140741D24 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpFlushCancelQueue @ 0x14088A3C8 (AlpcpFlushCancelQueue.c)
 *     NtSecureConnectPort @ 0x14088AF50 (NtSecureConnectPort.c)
 *     AlpcpDeletePort @ 0x14088B9B0 (AlpcpDeletePort.c)
 *     AlpcpFlushResourcesPort @ 0x14088BD0C (AlpcpFlushResourcesPort.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14088DE30 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     AlpcpReleaseAttributes @ 0x140890220 (AlpcpReleaseAttributes.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408926D0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpDeleteView @ 0x14089310C (AlpcpDeleteView.c)
 *     AlpcpCreateView @ 0x14089328C (AlpcpCreateView.c)
 *     NtAlpcDeleteSecurityContext @ 0x1408937D0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140893A30 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpLocateSectionView @ 0x140893C6C (AlpcpLocateSectionView.c)
 *     AlpcpCaptureViewAttribute @ 0x140894028 (AlpcpCaptureViewAttribute.c)
 *     AlpcpPrepareViewForDelivery @ 0x140894200 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1408949C0 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcCreateSecurityContext @ 0x140894C50 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x1408963D8 (AlpcpCreateSecurityContext.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpExposeAttributes @ 0x1408980D0 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x140898760 (AlpcpExposeHandleAttribute.c)
 *     AlpcpCleanupProcessViews @ 0x1408A977C (AlpcpCleanupProcessViews.c)
 *     AlpcViewDestroyProcedure @ 0x1408E49A0 (AlpcViewDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x14093C1C0 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x14093DA50 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x14093DC88 (AlpcpCreateSectionView.c)
 *     AlpcpLookupMessage @ 0x14093E7E0 (AlpcpLookupMessage.c)
 *     NtAlpcCreatePortSection @ 0x14093EB80 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x14093EF54 (AlpcpCreateSection.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x14093F21C (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateReserve @ 0x14093F62C (AlpcpCreateReserve.c)
 *     NtAlpcDeleteResourceReserve @ 0x140A14C20 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcDeletePortSection @ 0x140A15600 (NtAlpcDeletePortSection.c)
 *     AlpcConnectionDestroyProcedure @ 0x140A1EAA0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140A20580 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     NtAlpcDeleteSectionView @ 0x140A25B50 (NtAlpcDeleteSectionView.c)
 *     AlpcRegionDestroyProcedure @ 0x140A26560 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x140A4DDC4 (AlpcpReleaseViewAttribute.c)
 *     AlpcCreateSecurityContext @ 0x140A59730 (AlpcCreateSecurityContext.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcMessageCleanupProcedure @ 0x140890820 (AlpcMessageCleanupProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x1408E49A0 (AlpcViewDestroyProcedure.c)
 *     AlpcpFreeMessageFunction @ 0x140989F90 (AlpcpFreeMessageFunction.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B08F0 (AlpcMessageDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1409E54D0 (AlpcSecurityDestroyProcedure.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  signed __int64 BugCheckParameter4; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 (__fastcall *v11)(_QWORD); // rax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rcx

  v4 = (unsigned int)-a2;
  BugCheckParameter4 = (int)v4
                     + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), (int)v4);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    v7 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    if ( *(__int64 (__fastcall **)(_QWORD))(v7 + 24) == AlpcMessageCleanupProcedure )
      AlpcMessageCleanupProcedure(BugCheckParameter2);
    else
      guard_dispatch_icall_no_overrides(BugCheckParameter2, v4, (int)v4, a4);
    v11 = *(__int64 (__fastcall **)(_QWORD))(v7 + 40);
    if ( v11 == AlpcMessageDestroyProcedure )
    {
      v12 = AlpcMessageDestroyProcedure(BugCheckParameter2);
    }
    else if ( v11 == AlpcSecurityDestroyProcedure )
    {
      v12 = AlpcSecurityDestroyProcedure(BugCheckParameter2);
    }
    else if ( v11 == AlpcViewDestroyProcedure )
    {
      v12 = AlpcViewDestroyProcedure(BugCheckParameter2);
    }
    else
    {
      v12 = guard_dispatch_icall_no_overrides(BugCheckParameter2, v8, v9, v10);
    }
    if ( v12 >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v7 + 8), (PVOID)(BugCheckParameter2 - 48));
      }
      else if ( *(_QWORD *)(v7 + 48) )
      {
        v15 = (void *)(BugCheckParameter2 - 48);
        if ( *((__int64 (__fastcall **)(PVOID))&AlpcpLookasides.L.FreeEx
             + 16 * (unsigned __int64)*(unsigned int *)(v7 + 8)) == AlpcpFreeMessageFunction )
          AlpcpFreeMessageFunction(v15);
        else
          guard_dispatch_icall_no_overrides(v15, &AlpcpLookasides, v13, v14);
      }
      else
      {
        ExFreePoolWithTag((PVOID)(BugCheckParameter2 - 48), *(_DWORD *)(v7 + 4));
      }
    }
  }
}
