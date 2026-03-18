/*
 * XREFs of AlpcpUnlockBlob @ 0x1408B29D0
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x140735D04 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpExposeAttributes @ 0x1408A7C40 (AlpcpExposeAttributes.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408AA7F0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x1408AF1C8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1408AF320 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcSectionDeleteProcedure @ 0x1408AF820 (AlpcSectionDeleteProcedure.c)
 *     AlpcpCaptureViewAttribute @ 0x1408B01AC (AlpcpCaptureViewAttribute.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     AlpcpCreateView @ 0x1408B3D94 (AlpcpCreateView.c)
 *     AlpcpCreateSectionView @ 0x1408B5A38 (AlpcpCreateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x1408B62D4 (AlpcpMapLegacyPortView.c)
 *     AlpcpQueryRemoteView @ 0x14098EA38 (AlpcpQueryRemoteView.c)
 *     AlpcRegionDestroyProcedure @ 0x140A1D030 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x140A4B79C (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A82DE8 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExFreeToPagedLookasideList @ 0x1403D3020 (ExFreeToPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcMessageCleanupProcedure @ 0x1408B2BD0 (AlpcMessageCleanupProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1408B3330 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1408B3500 (AlpcMessageDestroyProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     AlpcpFreeMessageFunction @ 0x1408B4800 (AlpcpFreeMessageFunction.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
{
  char v2; // cl
  int v3; // eax
  signed __int64 BugCheckParameter4; // rcx
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(_QWORD); // rax
  int v7; // eax
  void *v8; // rcx

  v2 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v2 & 1) != 0
    && (v3 = *(__int16 *)(BugCheckParameter2 - 30),
        *(_BYTE *)(BugCheckParameter2 - 32) = v2 & 0xFE,
        *(_WORD *)(BugCheckParameter2 - 30) = 0,
        0x10000 - v3 > 0)
    && (BugCheckParameter4 = v3
                           - 0x10000
                           + _InterlockedExchangeAdd64(
                               (volatile signed __int64 *)(BugCheckParameter2 - 24),
                               v3 - 0x10000),
        BugCheckParameter4 <= 0) )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    v5 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    if ( *(__int64 (__fastcall **)(_QWORD))(v5 + 24) == AlpcMessageCleanupProcedure )
      AlpcMessageCleanupProcedure(BugCheckParameter2);
    else
      guard_dispatch_icall_no_overrides(BugCheckParameter2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
    v6 = *(__int64 (__fastcall **)(_QWORD))(v5 + 40);
    if ( v6 == AlpcSecurityDestroyProcedure )
    {
      v7 = AlpcSecurityDestroyProcedure(BugCheckParameter2);
    }
    else if ( v6 == AlpcMessageDestroyProcedure )
    {
      v7 = AlpcMessageDestroyProcedure(BugCheckParameter2);
    }
    else if ( v6 == AlpcViewDestroyProcedure )
    {
      v7 = AlpcViewDestroyProcedure(BugCheckParameter2);
    }
    else
    {
      v7 = guard_dispatch_icall_no_overrides(BugCheckParameter2);
    }
    if ( v7 >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v5 + 8), (PVOID)(BugCheckParameter2 - 48));
      }
      else if ( *(_QWORD *)(v5 + 48) )
      {
        v8 = (void *)(BugCheckParameter2 - 48);
        if ( *((__int64 (__fastcall **)(PVOID))&AlpcpLookasides.L.FreeEx
             + 16 * (unsigned __int64)*(unsigned int *)(v5 + 8)) == AlpcpFreeMessageFunction )
          AlpcpFreeMessageFunction(v8);
        else
          guard_dispatch_icall_no_overrides(v8);
      }
      else
      {
        ExFreePoolWithTag((PVOID)(BugCheckParameter2 - 48), *(_DWORD *)(v5 + 4));
      }
    }
  }
  else if ( BugCheckParameter2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
  }
}
