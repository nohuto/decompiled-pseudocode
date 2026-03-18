/*
 * XREFs of UsbhDisarmHubForWakeDetect @ 0x140014368
 * Callers:
 *     UsbhArmHubForWakeDetect @ 0x140013CAC (UsbhArmHubForWakeDetect.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x140014314 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhFdoD0Worker_Action @ 0x14002D060 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002E74C (UsbhFdoPower_PowerFailureEntry.c)
 *     Usbh_SSH_HubPendingResume @ 0x1400310F4 (Usbh_SSH_HubPendingResume.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400372B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhUninitialize @ 0x14003D740 (UsbhUninitialize.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

void __fastcall UsbhDisarmHubForWakeDetect(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v2 = *(_QWORD *)(a1 + 64);
      if ( v2 )
      {
        v3 = *(_QWORD *)(v2 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v2 + 880)) & *(_DWORD *)(v2 + 884));
        *(_DWORD *)v3 = 760698728;
        *(_QWORD *)(v3 + 8) = 0LL;
        *(_QWORD *)(v3 + 16) = 0LL;
        *(_QWORD *)(v3 + 24) = 0LL;
      }
    }
  }
  v4 = FdoExt(a1);
  v5 = v4;
  if ( v4[1221] )
  {
    _m_prefetchw(v4 + 1221);
    v6 = v4[1221];
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange(v5 + 1221, v6 | 1, v6);
    }
    while ( v7 != v6 );
    if ( v6 == 4 )
    {
      IoCancelIrp(*((PIRP *)v5 + 611));
      if ( _InterlockedCompareExchange(v5 + 1221, 4, 5) == 7 )
        IofCompleteRequest(*((PIRP *)v5 + 611), 0);
    }
  }
}
