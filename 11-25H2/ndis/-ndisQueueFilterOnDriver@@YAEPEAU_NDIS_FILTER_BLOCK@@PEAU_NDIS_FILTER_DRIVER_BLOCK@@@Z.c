/*
 * XREFs of ?ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1400702B0
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 */

__int64 __fastcall ndisQueueFilterOnDriver(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_FILTER_DRIVER_BLOCK *a2)
{
  unsigned __int8 v4; // bl
  KIRQL v5; // al
  KIRQL v6; // r14
  char v8[4]; // [rsp+38h] [rbp-30h]

  v4 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Au,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v5 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  v6 = v5;
  if ( a2->Ref.Closing )
  {
    KeReleaseSpinLock(&a2->Ref.SpinLock, v5);
    v4 = 0;
  }
  else
  {
    KeAcquireSpinLockAtDpcLevel(&a2->Lock);
    a1->NextFilter = a2->FilterQueue;
    a2->FilterQueue = a1;
    KeReleaseSpinLockFromDpcLevel(&a2->Lock);
    KeReleaseSpinLock(&a2->Ref.SpinLock, v6);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Bu,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v8);
  }
  return v4;
}
