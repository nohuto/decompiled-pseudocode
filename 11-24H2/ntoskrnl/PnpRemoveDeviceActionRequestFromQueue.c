/*
 * XREFs of PnpRemoveDeviceActionRequestFromQueue @ 0x1405A7280
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x1408D1350 (PiControlGetSetDeviceStatus.c)
 *     PiCMDeviceAction @ 0x140A85618 (PiCMDeviceAction.c)
 *     PiQueueDeviceRequest @ 0x140AB84B0 (PiQueueDeviceRequest.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14046C80C (PopDirectedDripsClearDisengageReason.c)
 *     PnpDeleteDeviceActionRequest @ 0x1409EF704 (PnpDeleteDeviceActionRequest.c)
 */

__int64 __fastcall PnpRemoveDeviceActionRequestFromQueue(_QWORD *P)
{
  unsigned __int8 v2; // di
  KIRQL v3; // si
  _QWORD *v4; // rdx
  PVOID *v5; // rcx
  __int64 v6; // rbp
  KIRQL v7; // al
  bool v8; // zf
  KIRQL v9; // r14
  KIRQL v10; // al
  void *v11; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( !*((_BYTE *)P + 84) )
  {
    v4 = (_QWORD *)*P;
    if ( *(_QWORD **)(*P + 8LL) != P || (v5 = (PVOID *)P[1], *v5 != P) )
      __fastfail(3u);
    *v5 = v4;
    v2 = 1;
    v4[1] = v5;
    v6 = *((unsigned int *)P + 6);
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140F0DF60);
    v8 = dword_140F0DF68-- == 1;
    v9 = v7;
    if ( v8 )
      PopDirectedDripsClearDisengageReason(4);
    KeReleaseSpinLock(&qword_140F0DF60, v9);
    v10 = KeAcquireSpinLockRaiseToDpc(&qword_140F06650);
    if ( !--dword_140F06658 && byte_140F066D0 )
    {
      qword_140F066D8 += MEMORY[0xFFFFF78000000008] - qword_140F066E0;
      qword_140F066E0 = 0LL;
    }
    --dword_140F06660[v6];
    KeReleaseSpinLock(&qword_140F06650, v10);
  }
  KeReleaseSpinLock(&PnpSpinLock, v3);
  if ( v2 )
  {
    v11 = (void *)P[2];
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    PnpDeleteDeviceActionRequest(P);
  }
  return v2;
}
