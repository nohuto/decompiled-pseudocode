/*
 * XREFs of ?ndisOidPreIovGetVFVendorDeviceId@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1800
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400DE9EC (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovGetVFVendorDeviceId(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // rbp
  int *v6; // r11
  char v7; // bl
  int v8; // eax
  int v9; // edx
  char v11[4]; // [rsp+38h] [rbp-A0h]
  __int128 v12; // [rsp+40h] [rbp-98h]
  __int64 v13; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = ndisCaptureIovOidContext((__int64)&v13, a1);
  v12 = *(_OWORD *)v3;
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      80,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
  v6 = (int *)((char *)a1 + 40);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v7 = 0;
  *v6 = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xAu )
  {
    v8 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 10;
    *v6 = v8;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v1 + 52) < 0xAu )
  {
    v8 = -1073676266;
    goto LABEL_9;
  }
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *v6 = -1073741637;
LABEL_14:
    v7 = 1;
    goto LABEL_15;
  }
  if ( (_BYTE)v12 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = v9;
    if ( !ndisIovFindVFByVFId(v5, *(_WORD *)(*(_QWORD *)(v1 + 40) + 4LL)) )
    {
      *v6 = -1073741811;
      goto LABEL_14;
    }
  }
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *v6;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x51u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v7,
      *(_DWORD *)v11);
  }
  return v7;
}
