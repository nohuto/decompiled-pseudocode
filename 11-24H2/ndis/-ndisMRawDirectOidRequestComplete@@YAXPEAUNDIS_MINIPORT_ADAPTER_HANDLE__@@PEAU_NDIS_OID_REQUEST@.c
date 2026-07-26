/*
 * XREFs of ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140069000
 * Callers:
 *     ?ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140068FC0 (-ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140068FE0 (-ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAU.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x14004C620 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMRawDirectOidRequestComplete(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  __int64 v6; // rdi
  int v7; // ebx
  KIRQL v8; // al
  KIRQL v9; // r15
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  KIRQL v11; // al
  int v12; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x19u,
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( (*((_DWORD *)a1 + 30) & 0x80u) == 0 )
  {
    v6 = *((_QWORD *)a1 + 556);
    if ( v6 )
    {
      v7 = *((_DWORD *)a1 + 30);
      v8 = KeAcquireSpinLockRaiseToDpc(*((PKSPIN_LOCK *)a1 + 556));
      --*(_DWORD *)(v6 + 528);
      v9 = v8;
      if ( (v7 & 0x80u) != 0
        && !*(_DWORD *)(v6 + 512)
        && !*(_DWORD *)(v6 + 516)
        && !*(_DWORD *)(v6 + 528)
        && !*(_DWORD *)(v6 + 532)
        && !*(_DWORD *)(v6 + 520)
        && !*(_DWORD *)(v6 + 524)
        && !*(_DWORD *)(v6 + 576)
        && !*(_DWORD *)(v6 + 508) )
      {
        CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport((struct _NDIS_MINIPORT_BLOCK *)a1);
        CxBlockFromMiniport->Chars.EvtCxPowerDereference((void *)*((_QWORD *)a1 + 3));
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v6, v9);
    }
  }
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
  --*((_DWORD *)a1 + 1062);
  *((_QWORD *)a1 + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v11);
  ndisMOidRequestCompleteInternal((struct _NDIS_MINIPORT_BLOCK *)a1, a2, a3, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      26,
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      (char)a1,
      (char)a2);
  }
}
