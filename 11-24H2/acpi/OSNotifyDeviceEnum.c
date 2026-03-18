/*
 * XREFs of OSNotifyDeviceEnum @ 0x1400297A0
 * Callers:
 *     NotifyHandler @ 0x140017F80 (NotifyHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 *     AMLIIterateParentNext @ 0x140016084 (AMLIIterateParentNext.c)
 *     ACPIDockIsDockDevice @ 0x1400284D4 (ACPIDockIsDockDevice.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x140029D5C (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x14002AF70 (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEnum(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  int v3; // r9d
  KIRQL v4; // si
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 (__fastcall *v9)(); // rdx

  v1 = a1;
  v2 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_140088A00 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    byte_140088A04 = 0;
    WPP_RECORDER_SF_qs(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      8,
      24,
      (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
      a1,
      (__int64)&dword_140088A00);
  }
  if ( ACPIDockIsDockDevice() )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
    if ( !v7 )
      return 0LL;
    v8 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
    v9 = ACPIBuildIssueNotifyInvalidateRelationsForDockDevice;
LABEL_17:
    ACPIBuildSynchronizationRequestInternal(v7, (_DWORD)v9, v8, v3, 1);
    return 0LL;
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  AMLIReferenceHandleEx(v1);
  if ( v1 )
  {
    while ( !v2 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      if ( v5 )
      {
        v2 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
        if ( *(_DWORD *)(v5 + 16) != 1599293264 )
          v2 = 0LL;
      }
      v1 = AMLIIterateParentNext(v1);
      if ( !v1 )
        goto LABEL_12;
    }
    AMLIDereferenceHandleEx(v1);
  }
LABEL_12:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( v2 )
  {
    LODWORD(v8) = v2;
    v9 = ACPIBuildIssueNotifyInvalidateRelations;
    LODWORD(v7) = v2;
    goto LABEL_17;
  }
  return 0LL;
}
