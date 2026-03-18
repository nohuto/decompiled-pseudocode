/*
 * XREFs of AcpiPrmTargetDeviceChangeCallback @ 0x1400A3160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     AcpiAcquirePrmInterface @ 0x1400A2EE8 (AcpiAcquirePrmInterface.c)
 */

__int64 __fastcall AcpiPrmTargetDeviceChangeCallback(__int64 a1)
{
  __int64 v1; // rax
  int v2; // esi
  __int64 v3; // rax
  PVOID v4; // rdi
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  v2 = 0;
  if ( !v1 )
    v1 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v1 )
  {
    _InterlockedExchange(&AcpiPrmContext, 0);
    ExWaitForRundownProtectionRelease(&RunRef);
    ((void (__fastcall *)(_QWORD))qword_140088C50)(0LL);
    return (unsigned int)v2;
  }
  v3 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v3 )
  {
    _InterlockedExchange(&AcpiPrmContext, 0);
    ExWaitForRundownProtectionRelease(&RunRef);
    v4 = qword_140088C30;
    qword_140088C30 = 0LL;
    goto LABEL_15;
  }
  v5 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v5 )
  {
    v4 = qword_140088C30;
    v2 = AcpiAcquirePrmInterface(&stru_140088C78, 0, &unk_140088C38);
    if ( v2 >= 0 )
      _InterlockedExchange(&AcpiPrmContext, 2);
    else
      _InterlockedExchange(&AcpiPrmContext, 0);
LABEL_15:
    if ( v4 )
      IoUnregisterPlugPlayNotification(v4);
  }
  return (unsigned int)v2;
}
