/*
 * XREFs of ?ndisOidPreOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140005160
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z @ 0x14006FFC0 (-ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z.c)
 */

__int64 __fastcall ndisOidPreOffloadHwCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  unsigned __int8 v4; // di
  _DWORD *v5; // rbx

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      193,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
  {
    v5 = (_DWORD *)((char *)a1 + 40);
    *v5 = -1073741637;
  }
  else
  {
    if ( !*(_QWORD *)a1 )
    {
      v4 = 0;
      v5 = (_DWORD *)((char *)a1 + 40);
      goto LABEL_8;
    }
    v5 = (_DWORD *)((char *)a1 + 40);
    if ( *(_QWORD *)(v1 + 4096) )
    {
      *v5 = 0;
      if ( *(_DWORD *)(v3 + 48) >= 0x70u )
      {
        ndisCopyNdisOffload(
          *(struct _NDIS_OFFLOAD **)(v3 + 40),
          (struct _NDIS_OFFLOAD *)(*(_QWORD *)(v1 + 4096) + 668LL),
          *(_DWORD *)(v3 + 48),
          (unsigned int *)(v3 + 52),
          1);
        *v5 = 0;
      }
      else
      {
        *(_DWORD *)(v3 + 56) = 112;
        *v5 = -1073676268;
      }
    }
    else
    {
      *v5 = -1073741637;
    }
  }
  v4 = 1;
LABEL_8:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      194,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      *v5,
      v4);
  return v4;
}
