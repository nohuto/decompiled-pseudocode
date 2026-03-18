/*
 * XREFs of AlpcpUnlockBlob @ 0x140890620
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x140741D24 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpQueryRemoteView @ 0x14088A6E4 (AlpcpQueryRemoteView.c)
 *     AlpcpReleaseAttributes @ 0x140890220 (AlpcpReleaseAttributes.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408926D0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcSectionDeleteProcedure @ 0x140893220 (AlpcSectionDeleteProcedure.c)
 *     AlpcpCreateView @ 0x14089328C (AlpcpCreateView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140893A30 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCaptureViewAttribute @ 0x140894028 (AlpcpCaptureViewAttribute.c)
 *     AlpcpPrepareViewForDelivery @ 0x140894200 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeAttributes @ 0x1408980D0 (AlpcpExposeAttributes.c)
 *     AlpcViewDestroyProcedure @ 0x1408E49A0 (AlpcViewDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x14093C1C0 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x14093DC88 (AlpcpCreateSectionView.c)
 *     AlpcRegionDestroyProcedure @ 0x140A26560 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x140A4DDC4 (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A874FC (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
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

void __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // cl
  int v6; // eax
  __int64 v7; // rdx
  signed __int64 BugCheckParameter4; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 (__fastcall *v13)(_QWORD); // rax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rcx

  v5 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v5 & 1) != 0
    && (v6 = *(__int16 *)(BugCheckParameter2 - 30),
        *(_BYTE *)(BugCheckParameter2 - 32) = v5 & 0xFE,
        *(_WORD *)(BugCheckParameter2 - 30) = 0,
        0x10000 - v6 > 0)
    && (v7 = (unsigned int)(v6 - 0x10000),
        BugCheckParameter4 = (int)v7
                           + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), (int)v7),
        BugCheckParameter4 <= 0) )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    v9 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    if ( *(__int64 (__fastcall **)(_QWORD))(v9 + 24) == AlpcMessageCleanupProcedure )
      AlpcMessageCleanupProcedure(BugCheckParameter2);
    else
      guard_dispatch_icall_no_overrides(BugCheckParameter2, v7, a3, a4);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
    v13 = *(__int64 (__fastcall **)(_QWORD))(v9 + 40);
    if ( v13 == AlpcMessageDestroyProcedure )
    {
      v14 = AlpcMessageDestroyProcedure(BugCheckParameter2);
    }
    else if ( v13 == AlpcSecurityDestroyProcedure )
    {
      v14 = AlpcSecurityDestroyProcedure(BugCheckParameter2);
    }
    else if ( v13 == AlpcViewDestroyProcedure )
    {
      v14 = AlpcViewDestroyProcedure(BugCheckParameter2);
    }
    else
    {
      v14 = guard_dispatch_icall_no_overrides(BugCheckParameter2, v10, v11, v12);
    }
    if ( v14 >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v9 + 8), (PVOID)(BugCheckParameter2 - 48));
      }
      else if ( *(_QWORD *)(v9 + 48) )
      {
        v17 = (void *)(BugCheckParameter2 - 48);
        if ( *((__int64 (__fastcall **)(PVOID))&AlpcpLookasides.L.FreeEx
             + 16 * (unsigned __int64)*(unsigned int *)(v9 + 8)) == AlpcpFreeMessageFunction )
          AlpcpFreeMessageFunction(v17);
        else
          guard_dispatch_icall_no_overrides(v17, &AlpcpLookasides, v15, v16);
      }
      else
      {
        ExFreePoolWithTag((PVOID)(BugCheckParameter2 - 48), *(_DWORD *)(v9 + 4));
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
