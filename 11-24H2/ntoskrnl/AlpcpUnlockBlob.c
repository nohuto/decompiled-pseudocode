/*
 * XREFs of AlpcpUnlockBlob @ 0x1408980A0
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x14073FC54 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpCreateSectionView @ 0x1408950B8 (AlpcpCreateSectionView.c)
 *     AlpcpCaptureViewAttribute @ 0x140895F40 (AlpcpCaptureViewAttribute.c)
 *     AlpcpPrepareViewForDelivery @ 0x140896848 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1408969A0 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCreateView @ 0x140897248 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x140897790 (AlpcViewDestroyProcedure.c)
 *     AlpcpReleaseAttributes @ 0x140899E50 (AlpcpReleaseAttributes.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcSectionDeleteProcedure @ 0x14089CDC0 (AlpcSectionDeleteProcedure.c)
 *     AlpcpExposeAttributes @ 0x1408A0770 (AlpcpExposeAttributes.c)
 *     AlpcpMapLegacyPortView @ 0x1409E98D0 (AlpcpMapLegacyPortView.c)
 *     AlpcRegionDestroyProcedure @ 0x140A1AFE0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpQueryRemoteView @ 0x140A320FC (AlpcpQueryRemoteView.c)
 *     AlpcpReleaseViewAttribute @ 0x140A44954 (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A839EC (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
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

void __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
{
  char v2; // cl
  int v3; // eax
  __int64 v4; // rdx
  signed __int64 BugCheckParameter4; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (__fastcall *v10)(__int64); // rax
  int v11; // eax
  _DWORD *v12; // rcx

  v2 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v2 & 1) != 0
    && (v3 = *(__int16 *)(BugCheckParameter2 - 30),
        *(_BYTE *)(BugCheckParameter2 - 32) = v2 & 0xFE,
        *(_WORD *)(BugCheckParameter2 - 30) = 0,
        0x10000 - v3 > 0)
    && (v4 = (unsigned int)(v3 - 0x10000),
        BugCheckParameter4 = (int)v4
                           + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), (int)v4),
        BugCheckParameter4 <= 0) )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    v6 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    if ( *(__int64 (__fastcall **)(_QWORD))(v6 + 24) == AlpcMessageCleanupProcedure )
      AlpcMessageCleanupProcedure(BugCheckParameter2);
    else
      guard_dispatch_icall_no_overrides(BugCheckParameter2, v4);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
    v10 = *(__int64 (__fastcall **)(__int64))(v6 + 40);
    if ( (char *)v10 == (char *)AlpcMessageDestroyProcedure )
    {
      v11 = AlpcMessageDestroyProcedure(BugCheckParameter2, v7, v8, v9);
    }
    else if ( v10 == AlpcSecurityDestroyProcedure )
    {
      v11 = AlpcSecurityDestroyProcedure(BugCheckParameter2);
    }
    else if ( v10 == AlpcViewDestroyProcedure )
    {
      v11 = AlpcViewDestroyProcedure(BugCheckParameter2);
    }
    else
    {
      v11 = guard_dispatch_icall_no_overrides(BugCheckParameter2, v7);
    }
    if ( v11 >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v6 + 8), (PVOID)(BugCheckParameter2 - 48));
      }
      else if ( *(_QWORD *)(v6 + 48) )
      {
        v12 = (_DWORD *)(BugCheckParameter2 - 48);
        if ( *((void (__fastcall **)(_DWORD *))&AlpcpLookasides.L.FreeEx
             + 16 * (unsigned __int64)*(unsigned int *)(v6 + 8)) == AlpcpFreeMessageFunction )
          AlpcpFreeMessageFunction(v12);
        else
          guard_dispatch_icall_no_overrides(v12, &AlpcpLookasides);
      }
      else
      {
        ExFreePoolWithTag((PVOID)(BugCheckParameter2 - 48), *(_DWORD *)(v6 + 4));
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
