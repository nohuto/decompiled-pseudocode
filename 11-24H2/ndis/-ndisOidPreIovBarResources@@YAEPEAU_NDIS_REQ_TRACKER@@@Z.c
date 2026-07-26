/*
 * XREFs of ?ndisOidPreIovBarResources@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E0230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400DE9EC (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovBarResources(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // rbp
  int *v6; // r11
  char v7; // bl
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  __int64 v13; // r8
  __int128 v15; // [rsp+40h] [rbp-98h]
  __int64 v16; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = ndisCaptureIovOidContext((__int64)&v16, a1);
  v15 = *(_OWORD *)v3;
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      84,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
  v6 = (int *)((char *)a1 + 40);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v7 = 0;
  *v6 = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    v8 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 12;
    *v6 = v8;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v1 + 52) < 0xCu )
  {
    v8 = -1073676266;
    goto LABEL_9;
  }
  v9 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL) + 20;
  v10 = v9;
  if ( v9 < 0xC )
    v10 = 12;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    v11 = -1073676268;
LABEL_16:
    *(_DWORD *)(v1 + 68) = v10;
    *v6 = v11;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v1 + 52) < v9 )
  {
    v11 = -1073676266;
    goto LABEL_16;
  }
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *v6 = -1073741637;
LABEL_21:
    v7 = 1;
    goto LABEL_22;
  }
  if ( (_BYTE)v15 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = v12;
    if ( !ndisIovFindVFByVFId(v5, *(_WORD *)(v13 + 4)) )
    {
      *v6 = -1073741811;
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x55u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v7,
      *v6);
  return v7;
}
