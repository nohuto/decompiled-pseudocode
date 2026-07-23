/*
 * XREFs of ExpPrmNotifyInterfaceChange @ 0x1407BF830
 * Callers:
 *     <none>
 * Callees:
 *     ExpPrmWaitForForZeroActiveCount @ 0x140656010 (ExpPrmWaitForForZeroActiveCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpAcquirePrmInterface @ 0x1407BF6F8 (ExpAcquirePrmInterface.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall ExpPrmNotifyInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rax
  signed __int32 v5; // ebp
  __int64 v6; // rdx

  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  v3 = 0;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v2 )
  {
    v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v4 )
    {
      v5 = _InterlockedCompareExchange(&ExPrmContext, 0, 2);
      if ( UnicodeString.Buffer )
        RtlFreeAnsiString(&UnicodeString);
      if ( v5 == 2 )
      {
        ExpPrmWaitForForZeroActiveCount();
        guard_dispatch_icall_no_overrides(qword_140EFA8C0, v6);
        memset_0(&unk_140EFA8B8, 0, 0x40uLL);
      }
    }
  }
  else
  {
    v3 = ExpAcquirePrmInterface(*((UNICODE_STRING **)NotificationStructure + 5), 1, &unk_140EFA8B8);
    if ( v3 >= 0 )
      _InterlockedExchange(&ExPrmContext, 2);
    else
      _InterlockedExchange(&ExPrmContext, 0);
  }
  return (unsigned int)v3;
}
