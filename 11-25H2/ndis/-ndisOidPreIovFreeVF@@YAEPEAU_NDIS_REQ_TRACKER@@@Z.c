/*
 * XREFs of ?ndisOidPreIovFreeVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E8870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400E5BFC (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovFreeVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  char v5; // bl
  int v6; // r11d
  _BYTE *OidSourceHandle; // rax
  _LIST_ENTRY *VFByVFId; // rax
  _LIST_ENTRY *v9; // r10
  __int128 v11; // [rsp+40h] [rbp-98h]
  __int128 v12; // [rsp+50h] [rbp-88h]
  __int128 v13; // [rsp+60h] [rbp-78h]
  __int64 v14; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = ndisCaptureIovOidContext((__int64)&v14, a1);
  v11 = *(_OWORD *)v3;
  v12 = *(_OWORD *)(v3 + 16);
  v13 = *(_OWORD *)(v3 + 32);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Au,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
  v5 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_19;
  LOBYTE(v6) = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xAu )
  {
    *(_DWORD *)(v1 + 56) = 10;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_20;
  }
  if ( !(_BYTE)v11 )
    goto LABEL_7;
  if ( (BYTE1(v11)
     || *((_QWORD *)&v13 + 1) && *((_QWORD *)&v12 + 1) && (*(_BYTE *)(*((_QWORD *)&v13 + 1) + 8LL) & 3) == 3)
    && (OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1)) != 0LL
    && *OidSourceHandle == 18 )
  {
    VFByVFId = ndisIovFindVFByVFId(v4, *(_WORD *)(*(_QWORD *)(v1 + 40) + 8LL));
    if ( VFByVFId && VFByVFId[3].Blink == v9 && HIDWORD(VFByVFId[4].Blink) == v6 )
    {
      *(_QWORD *)(v1 + 144) = VFByVFId;
LABEL_7:
      v5 = v6;
      goto LABEL_20;
    }
    *((_DWORD *)a1 + 10) = -1073741811;
  }
  else
  {
LABEL_19:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
LABEL_20:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Bu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v5,
      *((_DWORD *)a1 + 10));
  return v5;
}
