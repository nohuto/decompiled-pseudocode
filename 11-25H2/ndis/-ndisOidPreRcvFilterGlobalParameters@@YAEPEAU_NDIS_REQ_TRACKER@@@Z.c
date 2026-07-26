/*
 * XREFs of ?ndisOidPreRcvFilterGlobalParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B2760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreRcvFilterGlobalParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v3; // r12
  char v5; // di
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  int v9; // eax
  char v11[4]; // [rsp+40h] [rbp-A8h]
  __int128 v12; // [rsp+50h] [rbp-98h]
  __int128 v13; // [rsp+80h] [rbp-68h]
  __int64 v14; // [rsp+90h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = *(_QWORD *)(v1 + 40);
  v7 = ndisCaptureIovOidContext(&v14, a1);
  v12 = *(_OWORD *)v7;
  v13 = *(_OWORD *)(v7 + 48);
  v8 = *(_QWORD *)(v7 + 8);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      v8,
      v3,
      v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    v2 = -1073676268;
    goto LABEL_12;
  }
  if ( !(_BYTE)v12 )
    goto LABEL_13;
  if ( !(_QWORD)v13 )
  {
LABEL_4:
    v2 = -1073741637;
LABEL_12:
    *((_DWORD *)a1 + 10) = v2;
    v5 = 1;
    goto LABEL_13;
  }
  v9 = *(_DWORD *)(v1 + 4);
  if ( v9 == 2 || !v9 )
  {
    *(_QWORD *)v6 = 1048960LL;
    *(_DWORD *)(v6 + 12) = *(_DWORD *)(v8 + 3532);
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(v8 + 3528);
    *(_DWORD *)(v1 + 52) = 16;
    goto LABEL_12;
  }
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = v2;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      v8,
      v3,
      v5,
      *(_DWORD *)v11);
  }
  return v5;
}
