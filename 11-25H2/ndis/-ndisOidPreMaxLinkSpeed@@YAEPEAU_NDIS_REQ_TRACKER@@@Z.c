/*
 * XREFs of ?ndisOidPreMaxLinkSpeed@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C24A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 */

char __fastcall ndisOidPreMaxLinkSpeed(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v3; // rsi
  _DWORD *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  char v10[4]; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x95u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      0,
      v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    v5 = (_DWORD *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( v6 )
    {
      v3 = *(_QWORD *)(v6 + 32);
    }
    else if ( *(_QWORD *)a1 )
    {
      v3 = *(_QWORD *)a1;
    }
    v5 = (_DWORD *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x10u )
    {
      *(_DWORD *)(v1 + 56) = 16;
      *v5 = -1073676268;
      goto LABEL_13;
    }
    v7 = *(_QWORD *)(v3 + 3032);
    v8 = *(_QWORD **)(v1 + 40);
    *v8 = *(_QWORD *)(v3 + 3024);
    v8[1] = v7;
    *v5 = 0;
    *(_QWORD *)(v1 + 52) = 16LL;
  }
  v2 = 1;
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = *v5;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x96u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v3,
      v2,
      *(_DWORD *)v10);
  }
  return v2;
}
