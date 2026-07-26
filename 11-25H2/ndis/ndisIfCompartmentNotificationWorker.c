/*
 * XREFs of ndisIfCompartmentNotificationWorker @ 0x1400D0B70
 * Callers:
 *     <none>
 * Callees:
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x140069280 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x140152AD4 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 */

void ndisIfCompartmentNotificationWorker()
{
  KIRQL v0; // si
  _QWORD *v1; // rcx
  __int64 v2; // rax
  _QWORD *v3; // rbx
  int v4; // edi
  unsigned int v5; // edx
  struct _KEVENT *v6; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  while ( 1 )
  {
    v1 = (_QWORD *)qword_140126AE0;
    if ( (__int64 *)qword_140126AE0 == &qword_140126AE0 )
      break;
    if ( *(__int64 **)(qword_140126AE0 + 8) != &qword_140126AE0
      || (v2 = *(_QWORD *)qword_140126AE0, *(_QWORD *)(*(_QWORD *)qword_140126AE0 + 8LL) != qword_140126AE0) )
    {
      __fastfail(3u);
    }
    qword_140126AE0 = *(_QWORD *)qword_140126AE0;
    v3 = v1 - 218;
    *(_QWORD *)(v2 + 8) = &qword_140126AE0;
    v1[1] = v1;
    *v1 = v1;
    v4 = *(_DWORD *)(v1 - 213) & 3;
    if ( ((*(_DWORD *)(v1 - 213) & 4) != 0) != (v4 == 0) )
    {
      v5 = *((_DWORD *)v1 - 426) | 4;
      if ( v4 )
        v5 = *(_DWORD *)(v1 - 213) & 0xFFFFFFFB;
      *((_DWORD *)v3 + 10) = v5;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v0);
      ndisNsiNotifyClientCompartmentChange(v3, (unsigned int)(v4 != 0) + 1);
      v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    }
    if ( v4 )
    {
      v6 = (struct _KEVENT *)v3[220];
      if ( v6 )
      {
        KeSetEvent(v6, 0, 0);
        v3[220] = 0LL;
      }
    }
    COMPARTMENTBLOCK_DECREMENT_REF((struct _NDIS_IF_COMPARTMENT_BLOCK *)v3);
  }
  byte_140126994 = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v0);
}
