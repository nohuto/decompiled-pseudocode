/*
 * XREFs of ndisWnfPdcCallback @ 0x140061C70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005E750 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x14006CFD0 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140075740 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14008D350 (McTemplateK0_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisWnfPdcCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 v4; // bl
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  KIRQL v9; // al
  struct _NDIS_MINIPORT_BLOCK *v10; // rbx
  KIRQL i; // di
  unsigned __int8 v13; // dl
  unsigned __int64 v14; // r8
  int v15; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v17[3]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v18; // [rsp+58h] [rbp-20h] BYREF

  v16 = a4;
  memset(v17, 0, sizeof(v17));
  v15 = 24;
  v4 = 0;
  v5 = ExQueryWnfStateData(a1, &v16, v17, &v15);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        13,
        10,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        v5);
    }
  }
  else
  {
    v8 = v17[0] - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v17[0] == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v8 = v17[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    if ( !v8 )
    {
      v4 = 1;
      ndisLastCsScenarioInstanceId = v17[2];
    }
    if ( ndisConnectedStandby != v4 )
    {
      ndisConnectedStandby = v4;
      v18 = 0LL;
      if ( v4 )
      {
        ndisLastCsEntryTime = MEMORY[0xFFFFF78000000008];
        if ( (byte_14011B103 & 4) != 0 )
          McTemplateK0_EtwWriteTransfer(v7, v6, &v18);
      }
      else if ( (byte_14011B103 & 4) != 0 )
      {
        McTemplateK0x_EtwWriteTransfer(
          MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime,
          &ExitingConnectedStandby,
          &v18,
          (MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime) / 0x989680);
      }
      v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      v10 = ndisMiniportList;
      for ( i = v9; v10; v10 = v10->NextGlobalMiniport )
      {
        if ( v10->AoAc && (unsigned __int8)ndisReferenceMiniport(v10, 7u) )
        {
          KeReleaseSpinLock(&ndisMiniportListLock, i);
          ndisNicAutoPowerSaverControlIdleTimer(v10);
          if ( v10->AoAc )
            ndisCsStateChange(v10, v13, v14);
          i = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
          ndisDereferenceMiniport(v10, 7u);
        }
      }
      KeReleaseSpinLock(&ndisMiniportListLock, i);
    }
  }
  return 0LL;
}
