/*
 * XREFs of ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1400CC034
 * Callers:
 *     WppClassicProviderCallback @ 0x1400CC970 (WppClassicProviderCallback.c)
 *     WppTraceCallback @ 0x14014C890 (WppTraceCallback.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ndisMEmitTraceRundown @ 0x1400CC20C (ndisMEmitTraceRundown.c)
 *     ndisWppExtendedCallback @ 0x1400CC544 (ndisWppExtendedCallback.c)
 */

void __fastcall ndisEnableWppTracingCallback(const struct _GUID *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  char v5; // bl
  char v6; // di
  int v7; // esi
  int v8; // edx
  KIRQL v9; // al
  int v10; // edx
  struct _NDIS_MINIPORT_BLOCK *v11; // rbx
  KIRQL v12; // di
  int v13; // edx

  v5 = a3;
  LOBYTE(a3) = a5;
  LOBYTE(a1) = v5;
  v6 = a4;
  v7 = 0;
  ndisWppExtendedCallback(a1, a4, a3);
  if ( v5 && (v6 & 2) != 0 && a5 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 1;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        2,
        23,
        (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids);
    }
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v11 = ndisMiniportList;
    v12 = v9;
    while ( v11 )
    {
      if ( (unsigned int)++v7 > 1 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 1;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          2,
          24,
          (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids);
      }
      if ( v11->PnPDeviceState == NdisPnPDeviceStarted && (unsigned __int8)ndisReferenceMiniport(v11, 0x54u) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v12);
        ndisMEmitTraceRundown(v11);
        v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport(v11, 0x54u);
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x19u,
          (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids,
          (char)v11,
          v11->DriverHandle);
      }
      v11 = v11->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v12);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 1;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        2,
        26,
        (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids);
    }
  }
}
