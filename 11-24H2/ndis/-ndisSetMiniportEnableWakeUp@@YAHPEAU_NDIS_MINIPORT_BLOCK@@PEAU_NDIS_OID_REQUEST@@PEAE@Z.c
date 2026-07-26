/*
 * XREFs of ?ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B5708
 * Callers:
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140005B60 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B5474 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 */

__int64 __fastcall ndisSetMiniportEnableWakeUp(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3)
{
  struct _NDIS_OID_REQUEST *v4; // rbx
  unsigned int v6; // edi
  _DWORD *InformationBuffer; // rcx
  char v9; // [rsp+30h] [rbp-28h]
  char v10[4]; // [rsp+38h] [rbp-20h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      18,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      v9);
  }
  v6 = 0;
  *a3 = 1;
  if ( v4->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    InformationBuffer = v4->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( (a1->PnPCapabilities & 0x100) != 0 )
      *InformationBuffer &= ~2u;
    *InformationBuffer &= ~4u;
    *a3 = 0;
  }
  else
  {
    v4->DATA.QUERY_INFORMATION.BytesWritten = 0;
    v6 = -1073676268;
    v4->DATA.QUERY_INFORMATION.BytesNeeded = 4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v6;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x13u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)v4,
      *(_DWORD *)v10);
  }
  return v6;
}
