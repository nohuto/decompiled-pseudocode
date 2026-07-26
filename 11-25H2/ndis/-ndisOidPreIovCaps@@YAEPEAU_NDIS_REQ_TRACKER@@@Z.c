/*
 * XREFs of ?ndisOidPreIovCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E75D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreIovCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  char v10[4]; // [rsp+38h] [rbp-A0h]
  __int128 v11; // [rsp+40h] [rbp-98h]
  __int128 v12; // [rsp+60h] [rbp-78h]
  __int64 v13; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v4 = 0;
  v5 = ndisCaptureIovOidContext((__int64)&v13, a1);
  v11 = *(_OWORD *)v5;
  v12 = *(_OWORD *)(v5 + 32);
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x19u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v6,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0xCu )
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_6;
    if ( !(_BYTE)v11 )
      goto LABEL_13;
    v7 = *(_DWORD *)(v1 + 32) == 66121 ? v12 : *((_QWORD *)&v12 + 1);
    if ( !v7 )
    {
LABEL_6:
      v2 = -1073741637;
    }
    else
    {
      v8 = *(_QWORD *)(v1 + 40);
      *(_QWORD *)v8 = *(_QWORD *)v7;
      *(_DWORD *)(v8 + 8) = *(_DWORD *)(v7 + 8);
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v2;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Au,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v6,
      v4,
      *(_DWORD *)v10);
  }
  return v4;
}
