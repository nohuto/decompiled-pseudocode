/*
 * XREFs of ?ndisOidPreTcpConnectionOffloadParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C3920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     ?ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400C3134 (-ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PE.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadParameters(
        struct _NDIS_REQ_TRACKER *a1,
        struct _NDIS_FILTER_BLOCK *a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbp
  unsigned __int8 v3; // si
  __int64 v4; // r14
  unsigned __int8 TcpConnectionParameters; // r15
  unsigned __int8 v7; // bl
  int *v8; // rdi
  char v10[4]; // [rsp+38h] [rbp-20h]

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = 1;
  v4 = *((_QWORD *)a1 + 4);
  TcpConnectionParameters = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC7u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)v2,
      v4);
  v7 = 0;
  if ( !v2 || v2->Offload )
  {
    v8 = (int *)((char *)a1 + 40);
    if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) == 0 )
      TcpConnectionParameters = ndisOidPreQueryTcpConnectionParameters(v2, a2, (struct _NDIS_OID_REQUEST *)v4, v8);
    if ( *(_DWORD *)(v4 + 4) != 1 )
      v7 = TcpConnectionParameters;
    v3 = v7;
  }
  else
  {
    v8 = (int *)((char *)a1 + 40);
    *v8 = -1073741637;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v3;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC8u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)v2,
      *v8,
      *(_DWORD *)v10);
  }
  return v3;
}
