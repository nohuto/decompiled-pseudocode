/*
 * XREFs of ?ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C46BC
 * Callers:
 *     ?ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C3550 (-ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400895B0 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x14008D750 (-ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetTaskOffloadValidate@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C65B0 (-ndisSetTaskOffloadValidate@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_.c)
 */

unsigned __int8 __fastcall ndisPreTaskOffloadSet(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r14
  __int64 v3; // rsi
  struct _NDIS_OPEN_BLOCK *v4; // rbp
  _DWORD *v5; // rbx
  unsigned __int8 v6; // bp
  _NDIS_OPEN_OFFLOAD *Offload; // rax
  _DWORD *v8; // r8
  int v9; // ecx
  _NDIS_OPEN_OFFLOAD *v10; // rdx
  int v11; // ecx
  __int64 p_XlateEncap; // rax
  char v14[4]; // [rsp+38h] [rbp-20h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB8u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)v1,
      v3);
  if ( (*(_DWORD *)(v3 + 88) & 0x20) == 0 )
  {
    v5 = (_DWORD *)((char *)a1 + 40);
    v6 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_20;
  }
  if ( *(_DWORD *)(v3 + 48) < 0x1Cu
    || (unsigned int)ndisSetTaskOffloadValidate(
                       *((struct _NDIS_FILTER_BLOCK **)a1 + 2),
                       v1,
                       (struct _NDIS_OID_REQUEST *)v3) )
  {
    v5 = (_DWORD *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = -1073676267;
    *(_DWORD *)(v3 + 56) = 28;
LABEL_19:
    v6 = 1;
    goto LABEL_20;
  }
  Offload = v4->Offload;
  v8 = *(_DWORD **)(v3 + 40);
  *(_OWORD *)&Offload->XlateEncap.Header.Type = 0LL;
  *(_QWORD *)&Offload->XlateEncap.IPv6.Enabled = 0LL;
  Offload->XlateEncap.IPv6.HeaderSize = 0;
  v9 = -1073676267;
  v4->Offload->XlateEncap._NDIS_COMMON_OPEN_BLOCK::Header.Revision = 1;
  v4->Offload->XlateEncap._NDIS_COMMON_OPEN_BLOCK::Header.Type = -88;
  v4->Offload->XlateEncap._NDIS_COMMON_OPEN_BLOCK::Header.Size = 28;
  v10 = v4->Offload;
  if ( *(_DWORD *)(v3 + 48) < v8[3] )
  {
LABEL_18:
    v5 = (_DWORD *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = v9;
    goto LABEL_19;
  }
  v11 = 2;
  if ( v8[4] != 2 || (v8[5] & 1) == 0 || v8[6] != 14 )
  {
    v9 = -1073741637;
    goto LABEL_18;
  }
  v10->XlateEncap.Header = (_NDIS_OBJECT_HEADER)1835432;
  if ( v8[3] )
  {
    v10->XlateEncap.IPv4.EncapsulationType = 2;
    v10->XlateEncap.IPv6.EncapsulationType = 2;
    v11 = 1;
    v10->XlateEncap.IPv4.HeaderSize = 14;
    v10->XlateEncap.IPv6.HeaderSize = 14;
  }
  v10->XlateEncap.IPv4.Enabled = v11;
  v5 = (_DWORD *)((char *)a1 + 40);
  v10->XlateEncap.IPv6.Enabled = v11;
  v4->Offload->Task.Oid = *(_DWORD *)(v3 + 32);
  v4->Offload->Task.Buffer = *(void **)(v3 + 40);
  v4->Offload->Task.BufferLength = *(_DWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 32) = 16843018;
  p_XlateEncap = (__int64)&v4->Offload->XlateEncap;
  *(_DWORD *)(v3 + 48) = 28;
  *(_QWORD *)(v3 + 40) = p_XlateEncap;
  v6 = ndisOidPreOpenSetEncapsulation(v4, (struct _NDIS_OID_REQUEST *)v3, (int *)a1 + 10);
  if ( v6 != 1 && *(_QWORD *)a1 )
    v6 = ndisOidPreMiniportSetEncapsulation(
           *(struct _NDIS_MINIPORT_BLOCK **)a1,
           (struct _NDIS_OID_REQUEST *)v3,
           (int *)a1 + 10);
LABEL_20:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = v6;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB9u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)v1,
      *v5,
      *(_DWORD *)v14);
  }
  return v6;
}
