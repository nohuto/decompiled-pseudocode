/*
 * XREFs of ndisNsiQueuedIfBlockRodChangeNotification @ 0x14005AE50
 * Callers:
 *     <none>
 * Callees:
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1400110D0 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1401606E0 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisNsiQueuedIfBlockRodChangeNotification(__int64 a1, __int64 a2)
{
  struct _NDIS_IF_BLOCK *v2; // rsi
  __int64 v3; // rbx
  KIRQL v4; // di
  int v5; // edx
  char v6[8]; // [rsp+28h] [rbp-30h]
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  v2 = *(struct _NDIS_IF_BLOCK **)(a2 + 80);
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_QWORD *)v6 = *(_QWORD *)(a2 + 80);
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      34,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      v6[0]);
  }
  v7[1] = *(_QWORD *)(v3 + 88);
  v8 = *(_DWORD *)(v3 + 96);
  v9 = *(_DWORD *)(v3 + 100);
  v7[0] = 1LL;
  ndisNsiNotifyClientInterfaceChange(v2, 0LL, v7, 1LL);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  IFBLOCK_DECREMENT_REF(v2, IFREF_ASYNCCHANGE);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
  ExFreePoolWithTag((PVOID)v3, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      22,
      35,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids);
  }
}
