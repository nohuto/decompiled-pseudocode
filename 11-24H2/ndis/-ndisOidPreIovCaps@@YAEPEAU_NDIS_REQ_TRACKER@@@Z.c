/*
 * XREFs of ?ndisOidPreIovCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E03C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreIovCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  char v4; // di
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  char v11[4]; // [rsp+38h] [rbp-A0h]
  __int128 v12; // [rsp+40h] [rbp-98h]
  __int128 v13; // [rsp+60h] [rbp-78h]
  __int64 v14; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v4 = 0;
  v5 = ndisCaptureIovOidContext((__int64)&v14, a1);
  v12 = *(_OWORD *)v5;
  v13 = *(_OWORD *)(v5 + 32);
  v7 = *(_QWORD *)(v5 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      26,
      25,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v7,
      v1);
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0xCu )
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_6;
    if ( !(_BYTE)v12 )
      goto LABEL_13;
    v8 = *(_DWORD *)(v1 + 32) == 66121 ? v13 : *((_QWORD *)&v13 + 1);
    if ( !v8 )
    {
LABEL_6:
      v2 = -1073741637;
    }
    else
    {
      v9 = *(_QWORD *)(v1 + 40);
      *(_QWORD *)v9 = *(_QWORD *)v8;
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(v8 + 8);
      *(_DWORD *)(v1 + 52) = 12;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 12;
    v2 = -1073676268;
  }
  *((_DWORD *)a1 + 10) = v2;
  v4 = 1;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = v2;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Au,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v7,
      v4,
      *(_DWORD *)v11);
  }
  return v4;
}
