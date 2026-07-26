/*
 * XREFs of ?ndisOidPreEnumeratePorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BAB30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisEnumeratePorts@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT_ARRAY@@KPEAI2@Z @ 0x1400A7CB4 (-ndisEnumeratePorts@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT_ARRAY@@KPEAI2@Z.c)
 */

char __fastcall ndisOidPreEnumeratePorts(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  char v4; // si
  int v5; // eax
  char v7[4]; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      158,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      (char)v3);
  if ( *a1 )
  {
    if ( (*(_DWORD *)(&v3->Header + 1) & 0xFFFFFFFD) != 0 )
      v5 = -1073676265;
    else
      v5 = ndisEnumeratePorts(
             v1,
             (struct _NDIS_PORT_ARRAY *)v3->Reserved4.Buffer,
             v3->PcwDatapathEventMask,
             (unsigned int *)&v3->Reserved28 + 1,
             (unsigned int *)&v3->OpenQueue);
    *((_DWORD *)a1 + 10) = v5;
    v4 = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x9Fu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      (char)v3,
      *(_DWORD *)v7);
  }
  return v4;
}
