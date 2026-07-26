/*
 * XREFs of ndisWnfPdcCallback @ 0x14007D060
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140065EE0 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007A740 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1400891F0 (McTemplateK0x_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140098BF0 (McTemplateK0_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
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
  int v13; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v16; // [rsp+58h] [rbp-20h] BYREF

  v14 = a4;
  memset(v15, 0, sizeof(v15));
  v13 = 24;
  v4 = 0;
  v5 = ExQueryWnfStateData(a1, &v14, v15, &v13);
  if ( v5 < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0xAu,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        v5);
  }
  else
  {
    v8 = v15[0] - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v15[0] == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v8 = v15[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    if ( !v8 )
    {
      v4 = 1;
      ndisLastCsScenarioInstanceId = v15[2];
    }
    if ( ndisConnectedStandby != v4 )
    {
      ndisConnectedStandby = v4;
      v16 = 0LL;
      if ( v4 )
      {
        ndisLastCsEntryTime = MEMORY[0xFFFFF78000000008];
        if ( (byte_140125103 & 4) != 0 )
          McTemplateK0_EtwWriteTransfer(v7, v6, &v16);
      }
      else if ( (byte_140125103 & 4) != 0 )
      {
        McTemplateK0x_EtwWriteTransfer(
          MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime,
          &ExitingConnectedStandby,
          &v16,
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
            ndisCsStateChange(v10);
          i = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
          ndisDereferenceMiniport(v10, 7u);
        }
      }
      KeReleaseSpinLock(&ndisMiniportListLock, i);
    }
  }
  return 0LL;
}
