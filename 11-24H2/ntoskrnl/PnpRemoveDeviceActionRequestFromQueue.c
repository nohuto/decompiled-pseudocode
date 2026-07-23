/*
 * XREFs of PnpRemoveDeviceActionRequestFromQueue @ 0x1405A4270
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x1408CED40 (PiControlGetSetDeviceStatus.c)
 *     PiCMDeviceAction @ 0x140A80158 (PiCMDeviceAction.c)
 *     PiQueueDeviceRequest @ 0x140AB2974 (PiQueueDeviceRequest.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1404673AC (PopDirectedDripsClearDisengageReason.c)
 *     PnpDeleteDeviceActionRequest @ 0x1409ECFD4 (PnpDeleteDeviceActionRequest.c)
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
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140F0E200);
    v8 = dword_140F0E208-- == 1;
    v9 = v7;
    if ( v8 )
      PopDirectedDripsClearDisengageReason(4);
    KeReleaseSpinLock(&qword_140F0E200, v9);
    v10 = KeAcquireSpinLockRaiseToDpc(&qword_140F06950);
    if ( !--dword_140F06958 && byte_140F069D0 )
    {
      qword_140F069D8 += MEMORY[0xFFFFF78000000008] - qword_140F069E0;
      qword_140F069E0 = 0LL;
    }
    --dword_140F06960[v6];
    KeReleaseSpinLock(&qword_140F06950, v10);
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
