/*
 * XREFs of PiDcHandleContainerEvent @ 0x140A37FB0
 * Callers:
 *     PiDcHandleObjectEvent @ 0x140A37C9C (PiDcHandleObjectEvent.c)
 * Callees:
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140A3802C (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcHandleContainerEvent(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int i; // r8d
  __int64 v3; // r9
  __int64 v4; // rax

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 76); ++i )
  {
    v3 = 32LL * i;
    if ( !*(_DWORD *)(v3 + a1 + 100) && !*(_QWORD *)(v3 + a1 + 104) && *(_DWORD *)(32 * (i + 3LL) + a1) == 55 )
    {
      v4 = *(_QWORD *)(v3 + a1 + 80) - *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1;
      if ( !v4 )
        v4 = *(_QWORD *)(v3 + a1 + 88) - *(_QWORD *)DEVPKEY_DeviceContainer_IsConnected.fmtid.Data4;
      if ( !v4 )
        return (unsigned int)PiDcGenerateConfigNotificationIfContainerRequiresConfiguration(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL));
    }
  }
  return v1;
}
