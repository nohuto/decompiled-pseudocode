/*
 * XREFs of ?ndisOidPreIovResetVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E2530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400DE9EC (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovResetVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // rbp
  char v6; // bl
  int v7; // edx
  char v9[4]; // [rsp+38h] [rbp-A0h]
  __int128 v10; // [rsp+40h] [rbp-98h]
  __int64 v11; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = ndisCaptureIovOidContext((__int64)&v11, a1);
  v10 = *(_OWORD *)v3;
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      76,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
  v6 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
LABEL_4:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_12;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 6u )
  {
    if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) == &ndisIntReqGeneric )
    {
      if ( !(_BYTE)v10
        || (*(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) = v7, ndisIovFindVFByVFId(
                                                            v5,
                                                            *(_WORD *)(*(_QWORD *)(v1 + 40) + 4LL))) )
      {
        v6 = 0;
      }
      else
      {
        *((_DWORD *)a1 + 10) = -1073741811;
      }
      goto LABEL_12;
    }
    goto LABEL_4;
  }
  *(_DWORD *)(v1 + 56) = 6;
  *((_DWORD *)a1 + 10) = -1073676268;
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x4Du,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v6,
      *(_DWORD *)v9);
  }
  return v6;
}
