/*
 * XREFs of PnpRemoveDeviceActionRequestFromQueue @ 0x1405A3A70
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x1408CEC60 (PiControlGetSetDeviceStatus.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     PiQueueDeviceRequest @ 0x140AB40E8 (PiQueueDeviceRequest.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14046DFD4 (PopDirectedDripsClearDisengageReason.c)
 *     PnpDeleteDeviceActionRequest @ 0x14096DC14 (PnpDeleteDeviceActionRequest.c)
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
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140F0D880);
    v8 = dword_140F0D888-- == 1;
    v9 = v7;
    if ( v8 )
      PopDirectedDripsClearDisengageReason(4);
    KeReleaseSpinLock(&qword_140F0D880, v9);
    v10 = KeAcquireSpinLockRaiseToDpc(&qword_140F06090);
    if ( !--dword_140F06098 && byte_140F06110 )
    {
      qword_140F06118 += MEMORY[0xFFFFF78000000008] - qword_140F06120;
      qword_140F06120 = 0LL;
    }
    --dword_140F060A0[v6];
    KeReleaseSpinLock(&qword_140F06090, v10);
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
