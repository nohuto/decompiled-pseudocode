/*
 * XREFs of ?ndisOidPreIovBarResources@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E7440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400E5BFC (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovBarResources(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  int *v5; // r11
  char v6; // bl
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  __int64 v12; // r8
  __int128 v14; // [rsp+40h] [rbp-98h]
  __int64 v15; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = ndisCaptureIovOidContext((__int64)&v15, a1);
  v14 = *(_OWORD *)v3;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x54u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
  v5 = (int *)((char *)a1 + 40);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v6 = 0;
  *v5 = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    v7 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 12;
    *v5 = v7;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v1 + 52) < 0xCu )
  {
    v7 = -1073676266;
    goto LABEL_9;
  }
  v8 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL) + 20;
  v9 = v8;
  if ( v8 < 0xC )
    v9 = 12;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    v10 = -1073676268;
LABEL_16:
    *(_DWORD *)(v1 + 68) = v9;
    *v5 = v10;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v1 + 52) < v8 )
  {
    v10 = -1073676266;
    goto LABEL_16;
  }
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *v5 = -1073741637;
LABEL_21:
    v6 = 1;
    goto LABEL_22;
  }
  if ( (_BYTE)v14 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = v11;
    if ( !ndisIovFindVFByVFId(v4, *(_WORD *)(v12 + 4)) )
    {
      *v5 = -1073741811;
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x55u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v6,
      *v5);
  return v6;
}
