/*
 * XREFs of ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C860
 * Callers:
 *     ?ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C7C0 (-ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BD204 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005CA10 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIsValidPMConfig@@YAEPEAU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005CA50 (-ndisIsValidPMConfig@@YAEPEAU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x140088540 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400BD498 (-ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlatePMParametersToWakeUpEnableOid@@YAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BE490 (-ndisXlatePMParametersToWakeUpEnableOid@@YAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisPreSetPMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  unsigned __int8 v2; // di
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  struct _NDIS_MINIPORT_BLOCK *v7; // r14
  struct _NDIS_PM_PARAMETERS *v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // cf
  int v14; // eax
  char v15[4]; // [rsp+38h] [rbp-30h]
  unsigned __int8 v16; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 1;
  v16 = 1;
  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v6 = *(_QWORD *)(v5 + 24);
  v7 = MiniportFromReqTracker;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x32u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)MiniportFromReqTracker,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_13;
  }
  v8 = *(struct _NDIS_PM_PARAMETERS **)(v1 + 40);
  *((_DWORD *)a1 + 10) = 0;
  if ( v8->Header.Type != 0x80 || !v8->Header.Revision || v8->Header.Size < 0x10u )
  {
    *((_DWORD *)a1 + 10) = -1073676267;
    goto LABEL_13;
  }
  if ( !ndisIsValidPMConfig(v8, v7) )
  {
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_13;
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    v11 = v6 + 308;
    goto LABEL_25;
  }
  v9 = *((_QWORD *)a1 + 1);
  if ( v9 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
  {
    v11 = v9 + 728;
LABEL_25:
    v12 = *(_QWORD *)(v1 + 40);
    v13 = *(_DWORD *)(v1 + 48) < 0x14u;
    *(_OWORD *)v11 = *(_OWORD *)v12;
    if ( !v13 )
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v12 + 16);
    ndisGetCombinedPMConfig(v7, &v7->PMCurrentParameters);
    v16 = 0;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_12;
  if ( v7->MajorNdisVersion <= 6u && (v7->MajorNdisVersion != 6 || v7->MinorNdisVersion < 0x14u) )
  {
    ndisXlatePMParametersToWakeUpEnableOid((struct _NDIS_OID_REQUEST *)v1);
    v14 = ndisSetMiniportEnableWakeUp(v7, (struct _NDIS_OID_REQUEST *)v1, &v16);
    v2 = v16;
    *((_DWORD *)a1 + 10) = v14;
    if ( v2 == 1 )
      goto LABEL_13;
  }
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) == &ndisIntReqGeneric
    || (v7->DriverHandle->MiniportDriverCharacteristics.Flags & 8) != 0 )
  {
LABEL_12:
    v2 = 0;
  }
  else
  {
    v2 = 1;
  }
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v15 = v2;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x33u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)v7,
      *((_DWORD *)a1 + 10),
      *(_DWORD *)v15);
  }
  return v2;
}
