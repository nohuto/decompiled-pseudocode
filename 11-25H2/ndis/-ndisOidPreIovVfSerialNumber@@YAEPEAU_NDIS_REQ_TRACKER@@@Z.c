/*
 * XREFs of ?ndisOidPreIovVfSerialNumber@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E9F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreIovVfSerialNumber(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rsi
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  __int128 v9; // [rsp+40h] [rbp-98h]
  __int128 v10; // [rsp+60h] [rbp-78h]
  __int64 v11; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = 0;
  v4 = ndisCaptureIovOidContext((__int64)&v11, a1);
  v9 = *(_OWORD *)v4;
  v10 = *(_OWORD *)(v4 + 32);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x58u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v5,
      v1);
  v6 = (_DWORD *)((char *)a1 + 40);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_11;
  *v6 = 0;
  if ( *(_DWORD *)(v1 + 48) >= 8u )
  {
    if ( !(_BYTE)v9 )
      goto LABEL_13;
    if ( *((_QWORD *)&v10 + 1) && (*(_BYTE *)(*((_QWORD *)&v10 + 1) + 8LL) & 5) == 5 && *(_QWORD *)(v5 + 4872) )
    {
      v7 = *(_DWORD **)(v1 + 40);
      *v7 = 524672;
      v7[1] = *(_DWORD *)(v5 + 4880);
      *(_DWORD *)(v1 + 52) = 8;
      goto LABEL_12;
    }
LABEL_11:
    *v6 = -1073741637;
    goto LABEL_12;
  }
  *(_DWORD *)(v1 + 56) = 8;
  *v6 = -1073676268;
LABEL_12:
  v3 = 1;
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x59u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v5,
      v3,
      *v6);
  return v3;
}
