/*
 * XREFs of ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x1400588D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qs @ 0x14002AF70 (WPP_RECORDER_SF_qs.c)
 */

void __fastcall ACPIBuildIssueNotifyInvalidateRelationsForDockDevice(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx

  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  if ( RootDeviceExtension )
  {
    v3 = *(_QWORD **)(RootDeviceExtension + 800);
    while ( v3 != (_QWORD *)(RootDeviceExtension + 800) )
    {
      v4 = v3 - 102;
      v3 = (_QWORD *)*v3;
      if ( v4 && _bittest64(v4 + 1, 0x39u) && v4[23] == a2 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v4 + 50, 1, 0);
        if ( *((_DWORD *)v4 + 50) == 1 )
        {
          if ( (v4[1] & 8) != 0 )
            _InterlockedOr64(v4 + 1, 0x400000000uLL);
          if ( (*(_DWORD *)(RootDeviceExtension + 8) & 0x208) == 0x200LL )
            IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(RootDeviceExtension + 784), SingleBusRelations);
        }
        goto LABEL_14;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      dword_140088A80 = *(_DWORD *)(**(_QWORD **)(a2 + 760) + 40LL);
      byte_140088A84 = 0;
      WPP_RECORDER_SF_qs(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v3,
        21,
        23,
        (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
        *(_QWORD *)(a2 + 760),
        (__int64)&dword_140088A80);
    }
  }
LABEL_14:
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
}
