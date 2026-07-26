/*
 * XREFs of ?ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140004D00
 * Callers:
 *     ?ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140005AC0 (-ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x140005D10 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 */

unsigned __int8 __fastcall ndisPreQueryPMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct _NDIS_MINIPORT_BLOCK *v7; // rbp
  _NDIS_PM_PARAMETERS *p_PMCurrentParameters; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  bool v11; // cf
  int v12; // eax
  char v13; // dl
  __int16 v14; // r8

  v1 = *((_QWORD *)a1 + 4);
  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v6 = *(_QWORD *)(v5 + 24);
  v7 = MiniportFromReqTracker;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      48,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)MiniportFromReqTracker,
      v1);
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v1 + 4) == 2 )
  {
    p_PMCurrentParameters = &v7->PMCurrentParameters;
LABEL_13:
    v10 = *(_QWORD *)(v1 + 40);
    v11 = *(_DWORD *)(v1 + 48) < 0x14u;
    *(_OWORD *)v10 = *(_OWORD *)&p_PMCurrentParameters->Header.Type;
    if ( v11 )
    {
      v12 = 16;
      v13 = 1;
      v14 = 16;
    }
    else
    {
      v13 = 2;
      *(_DWORD *)(v10 + 16) = p_PMCurrentParameters->MediaSpecificWakeUpEvents;
      v12 = 20;
      v14 = 20;
    }
    *(_BYTE *)v10 = 0x80;
    *(_WORD *)(v10 + 2) = v14;
    *(_BYTE *)(v10 + 1) = v13;
    *(_DWORD *)(v1 + 52) = v12;
    *(_DWORD *)(v1 + 56) = 0;
    goto LABEL_17;
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    p_PMCurrentParameters = (_NDIS_PM_PARAMETERS *)(v6 + 308);
    goto LABEL_13;
  }
  v9 = *((_QWORD *)a1 + 1);
  if ( v9 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
  {
    p_PMCurrentParameters = (_NDIS_PM_PARAMETERS *)(v9 + 728);
    goto LABEL_13;
  }
  *((_DWORD *)a1 + 10) = -1073741637;
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      49,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)v7,
      *((_DWORD *)a1 + 10),
      1);
  }
  return 1;
}
