/*
 * XREFs of ndisNsiQueuedTimestampingChangeNotification @ 0x1400D3580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x14004C210 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisNsiQueuedTimestampingChangeNotification(PVOID P, char *a2)
{
  char *v2; // rdi
  KIRQL v4; // bl
  int v5; // edx
  char v6; // [rsp+28h] [rbp-50h]
  _QWORD v7[8]; // [rsp+30h] [rbp-48h] BYREF

  v2 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      10,
      (struct _GUID *)&WPP_9c5ba4de329e350b3ef3aa77f1331679_Traceguids,
      v6);
  }
  memset(v7, 0, sizeof(v7));
  HIDWORD(v7[1]) = 0;
  v7[5] = 0LL;
  v7[0] = ndisNsiSavedClientNpi;
  LOWORD(v7[1]) = 17;
  v7[2] = v2 + 1312;
  LODWORD(v7[3]) = 8;
  (*(void (__fastcall **)(_QWORD *))(qword_1401275F8 + 8))(v7);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  IFBLOCK_DECREMENT_REF(v2, 0xAu);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
  ExFreePoolWithTag(P, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      22,
      11,
      (struct _GUID *)&WPP_9c5ba4de329e350b3ef3aa77f1331679_Traceguids);
  }
}
