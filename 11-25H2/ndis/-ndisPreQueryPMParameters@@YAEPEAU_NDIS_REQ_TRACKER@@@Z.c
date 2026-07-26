/*
 * XREFs of ?ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005DB90
 * Callers:
 *     ?ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C7C0 (-ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005CA10 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisPreQueryPMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  struct _NDIS_MINIPORT_BLOCK *v6; // rbp
  _NDIS_PM_PARAMETERS *p_PMCurrentParameters; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  bool v10; // cf
  int v11; // eax
  char v12; // dl
  __int16 v13; // r8
  int v15; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = MiniportFromReqTracker;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x30u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)MiniportFromReqTracker,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v1 + 4) == 2 )
  {
    p_PMCurrentParameters = &v6->PMCurrentParameters;
LABEL_13:
    v9 = *(_QWORD *)(v1 + 40);
    v10 = *(_DWORD *)(v1 + 48) < 0x14u;
    *(_OWORD *)v9 = *(_OWORD *)&p_PMCurrentParameters->Header.Type;
    if ( v10 )
    {
      v11 = 16;
      v12 = 1;
      v13 = 16;
    }
    else
    {
      v12 = 2;
      *(_DWORD *)(v9 + 16) = p_PMCurrentParameters->MediaSpecificWakeUpEvents;
      v11 = 20;
      v13 = 20;
    }
    *(_BYTE *)v9 = 0x80;
    *(_WORD *)(v9 + 2) = v13;
    *(_BYTE *)(v9 + 1) = v12;
    *(_DWORD *)(v1 + 52) = v11;
    *(_DWORD *)(v1 + 56) = 0;
    goto LABEL_17;
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    p_PMCurrentParameters = (_NDIS_PM_PARAMETERS *)(v5 + 308);
    goto LABEL_13;
  }
  v8 = *((_QWORD *)a1 + 1);
  if ( v8 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
  {
    p_PMCurrentParameters = (_NDIS_PM_PARAMETERS *)(v8 + 728);
    goto LABEL_13;
  }
  *((_DWORD *)a1 + 10) = -1073741637;
LABEL_17:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = 1;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x31u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)v6,
      *((_DWORD *)a1 + 10),
      v15);
  }
  return 1;
}
