/*
 * XREFs of UsbhReleaseApiLock @ 0x140023854
 * Callers:
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1400232C8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetHubCaps @ 0x140023CE4 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlCyclePort @ 0x14004C4B0 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetHubCapsEx @ 0x14004C7CC (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004CA94 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004CD78 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004D008 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004D424 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x14004D718 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseApiLock(__int64 a1, unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  struct _KSEMAPHORE *v6; // rbx
  struct _KEVENT *v7; // rax

  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v3 + 880)) & *(_DWORD *)(v3 + 884));
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_QWORD *)(v4 + 16) = 0LL;
        *(_DWORD *)v4 = 758206529;
        *(_QWORD *)(v4 + 24) = a2;
      }
    }
  }
  v5 = FdoExt(a1);
  v6 = (struct _KSEMAPHORE *)FdoExt(a1);
  FdoExt(*((_QWORD *)v5 + 218));
  v5[446] = 1734964085;
  v6[41].Header.WaitListHead.Blink = 0LL;
  KeReleaseSemaphore(v6 + 155, 16, 1, 0);
  v7 = (struct _KEVENT *)FdoExt(a1);
  return KeSetEvent(v7 + 205, 0, 0);
}
