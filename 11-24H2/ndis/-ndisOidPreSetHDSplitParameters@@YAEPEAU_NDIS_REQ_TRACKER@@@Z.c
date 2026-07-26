/*
 * XREFs of ?ndisOidPreSetHDSplitParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BC1B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400BF930 (-ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreSetHDSplitParameters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // di
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  char v9[4]; // [rsp+38h] [rbp-20h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      164,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      v3);
  v4 = 1;
  if ( *(_DWORD *)(v3 + 4) != 1 )
  {
LABEL_4:
    v5 = (_DWORD *)((char *)a1 + 40);
    *v5 = -1073741637;
    goto LABEL_20;
  }
  if ( *(_QWORD *)a1 )
  {
    if ( v1->MajorNdisVersion > 6u || v1->MajorNdisVersion == 6 && v1->MinorNdisVersion )
    {
      v5 = (_DWORD *)((char *)a1 + 40);
      *v5 = 0;
      if ( *(_DWORD *)(v3 + 48) >= 8u )
      {
        v6 = *(_QWORD *)(v3 + 40);
        *v5 = 0;
        if ( *(_BYTE *)v6 == 0x80 && *(_BYTE *)(v6 + 1) && *(_WORD *)(v6 + 2) >= 8u )
        {
          HDSplitCurrentConfig = v1->HDSplitCurrentConfig;
          if ( HDSplitCurrentConfig && (HDSplitCurrentConfig->HDSplitFlags & 1) != 0 )
          {
            ndisUpdateHDSplitKeyword(v1, (*(_DWORD *)(v6 + 4) & 1) == 0);
            v4 = 0;
          }
          else
          {
            *v5 = -1073741811;
          }
        }
        else
        {
          *v5 = -1073676267;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 56) = 8;
        *v5 = -1073676268;
      }
      goto LABEL_20;
    }
    goto LABEL_4;
  }
  v4 = 0;
  v5 = (_DWORD *)((char *)a1 + 40);
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA5u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      *v5,
      *(_DWORD *)v9);
  }
  return v4;
}
