/*
 * XREFs of OSNotifyDeviceCheck @ 0x140029BD4
 * Callers:
 *     NotifyHandler @ 0x140017F80 (NotifyHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIIterateParentNext @ 0x140016084 (AMLIIterateParentNext.c)
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     ACPIDockIsDockDevice @ 0x1400284D4 (ACPIDockIsDockDevice.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x140029D5C (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x14002AF70 (WPP_RECORDER_SF_qs.c)
 *     OSNotifyDeviceEject @ 0x140063E20 (OSNotifyDeviceEject.c)
 */

__int64 __fastcall OSNotifyDeviceCheck(__int64 a1)
{
  int v2; // edx
  int v3; // edx
  KIRQL v5; // si
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 i; // rax
  __int64 v9; // rdx
  int v10; // r9d

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_140088A80 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    v2 = dword_140088A80;
    LOBYTE(v2) = 4;
    byte_140088A84 = 0;
    WPP_RECORDER_SF_qs(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      8,
      22,
      (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
      a1,
      (__int64)&dword_140088A80);
  }
  if ( ACPIDockIsDockDevice() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        21,
        23,
        (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids);
    }
    return OSNotifyDeviceEject(a1);
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
    if ( v6 && _bittest64((const signed __int64 *)(v6 + 8), 0x25u) && (unsigned int)(*(_DWORD *)(v6 + 368) - 2) > 1 )
      *(_BYTE *)(v6 + 185) = 0;
    v7 = 0LL;
    for ( i = AMLIGetParent(a1); i; i = AMLIIterateParentNext(i) )
    {
      if ( v7 )
      {
        AMLIDereferenceHandleEx(i);
        break;
      }
      v9 = *(_QWORD *)(*(_QWORD *)i + 104LL);
      if ( v9 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)i + 104LL);
        if ( *(_DWORD *)(v9 + 16) != 1599293264 )
          v7 = 0LL;
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
    if ( v7 )
      ACPIBuildSynchronizationRequestInternal(v7, (unsigned int)ACPIBuildIssueNotifyInvalidateRelations, v7, v10, 1);
    return 0LL;
  }
}
