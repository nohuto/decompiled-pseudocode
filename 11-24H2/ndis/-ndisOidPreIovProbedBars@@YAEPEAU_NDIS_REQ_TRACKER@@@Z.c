/*
 * XREFs of ?ndisOidPreIovProbedBars@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E20D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreIovProbedBars(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  int v3; // edx
  __int64 v4; // rbp
  char v5; // bl
  int v6; // eax
  char v8[4]; // [rsp+38h] [rbp-60h]
  __int64 v9; // [rsp+40h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v4 = *(_QWORD *)(ndisCaptureIovOidContext((__int64)&v9, a1) + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      26,
      82,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v4,
      v1);
  }
  v5 = 0;
  if ( *(_DWORD *)(v1 + 4) )
  {
    v6 = -1073741637;
    v5 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_13;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 8u )
  {
    *(_DWORD *)(v1 + 56) = 8;
    v6 = -1073676268;
LABEL_7:
    *((_DWORD *)a1 + 10) = v6;
    v5 = 1;
    goto LABEL_13;
  }
  if ( (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 40) + 4LL) + 24 < *(unsigned int *)(v1 + 48) )
  {
    v6 = -1073741811;
    goto LABEL_7;
  }
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) != &ndisIntReqGeneric )
  {
    v6 = -1073741637;
    goto LABEL_7;
  }
  v6 = 0;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v6;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x53u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v4,
      v5,
      *(_DWORD *)v8);
  }
  return v5;
}
