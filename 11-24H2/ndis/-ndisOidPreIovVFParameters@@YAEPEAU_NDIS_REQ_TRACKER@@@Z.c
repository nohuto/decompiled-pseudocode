/*
 * XREFs of ?ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E27D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400DE9EC (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

char __fastcall ndisOidPreIovVFParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // r14
  int v6; // ebx
  char v7; // di
  __int64 v8; // r10
  _LIST_ENTRY *VFByVFId; // rax
  void *v10; // r10
  __int128 v12; // [rsp+40h] [rbp-98h]
  __int128 v13; // [rsp+50h] [rbp-88h]
  __int128 v14; // [rsp+60h] [rbp-78h]
  __int64 v15; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = ndisCaptureIovOidContext((__int64)&v15, a1);
  v12 = *(_OWORD *)v3;
  v13 = *(_OWORD *)(v3 + 16);
  v14 = *(_OWORD *)(v3 + 32);
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      46,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_17;
  v6 = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x660u )
  {
    if ( *(_DWORD *)(v1 + 52) < 0x660u )
    {
      v6 = -1073676266;
      goto LABEL_8;
    }
    if ( !(_BYTE)v12 )
    {
      v7 = 0;
      goto LABEL_20;
    }
    if ( *((_QWORD *)&v14 + 1) && *((_QWORD *)&v13 + 1) && (*(_BYTE *)(*((_QWORD *)&v14 + 1) + 8LL) & 3) == 3 )
    {
      v8 = *(_QWORD *)(v1 + 40);
      *(_DWORD *)(v1 + 64) = 1632;
      VFByVFId = ndisIovFindVFByVFId(v5, *(_WORD *)(v8 + 1626));
      if ( VFByVFId )
      {
        memmove(v10, &VFByVFId[6], 0x660uLL);
        *(_DWORD *)(v1 + 60) = 1632;
      }
      else
      {
        v6 = -1073741811;
      }
      goto LABEL_18;
    }
LABEL_17:
    v6 = -1073741637;
LABEL_18:
    *((_DWORD *)a1 + 10) = v6;
    goto LABEL_19;
  }
  v6 = -1073676268;
LABEL_8:
  *(_DWORD *)(v1 + 68) = 1632;
  *((_DWORD *)a1 + 10) = v6;
LABEL_19:
  v7 = 1;
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Fu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v7,
      v6);
  return v7;
}
