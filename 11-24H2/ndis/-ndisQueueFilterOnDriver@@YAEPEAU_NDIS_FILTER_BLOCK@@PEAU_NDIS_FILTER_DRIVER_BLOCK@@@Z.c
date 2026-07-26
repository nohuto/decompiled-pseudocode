/*
 * XREFs of ?ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x140055180
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 */

__int64 __fastcall ndisQueueFilterOnDriver(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_FILTER_DRIVER_BLOCK *a2)
{
  struct _NDIS_FILTER_DRIVER_BLOCK *v2; // rsi
  unsigned __int8 v4; // bl
  KIRQL v5; // al
  KIRQL v6; // r14
  char v8; // [rsp+30h] [rbp-38h]
  char v9[4]; // [rsp+38h] [rbp-30h]

  v2 = a2;
  v4 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      43,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      v8);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v5 = KeAcquireSpinLockRaiseToDpc(&v2->Ref.SpinLock);
  v6 = v5;
  if ( v2->Ref.Closing )
  {
    KeReleaseSpinLock(&v2->Ref.SpinLock, v5);
    v4 = 0;
  }
  else
  {
    KeAcquireSpinLockAtDpcLevel(&v2->Lock);
    a1->NextFilter = v2->FilterQueue;
    v2->FilterQueue = a1;
    KeReleaseSpinLockFromDpcLevel(&v2->Lock);
    KeReleaseSpinLock(&v2->Ref.SpinLock, v6);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Cu,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      (char)v2,
      *(_DWORD *)v9);
  }
  return v4;
}
