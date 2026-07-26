/*
 * XREFs of ?ndisOidPostLinkSpeed@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006EB10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

void __fastcall ndisOidPostLinkSpeed(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-59h] BYREF
  _DWORD v8[4]; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v9; // [rsp+C0h] [rbp+27h]
  __int64 v10; // [rsp+C8h] [rbp+2Fh]
  int v11; // [rsp+D0h] [rbp+37h]
  int v12; // [rsp+D4h] [rbp+3Bh]

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x26u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v3,
      *((_QWORD *)a1 + 4));
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 && !*((_DWORD *)a1 + 10) && *(_BYTE *)(v3 + 32) < 6u )
  {
    v4 = **(unsigned int **)(v1 + 40);
    v5 = 100 * v4;
    if ( 100 * v4 != *(_QWORD *)(v3 + 2760) )
    {
      v10 = 100 * v4;
      v9 = 100 * v4;
      *(_QWORD *)(v3 + 2272) = v5;
      *(_QWORD *)(v3 + 2280) = v5;
      v8[1] = *(_DWORD *)(v3 + 344);
      v8[2] = *(_DWORD *)(v3 + 348);
      v11 = *(_DWORD *)(v3 + 808);
      v12 = *(_DWORD *)(v3 + 468);
      *((_DWORD *)&StatusIndication.Header + 1) = 0;
      StatusIndication.SourceHandle = &ndisIntReqGeneric;
      memset(&StatusIndication.Guid, 0, 52);
      StatusIndication.StatusBuffer = v8;
      memset(&StatusIndication.PortNumber, 0, 32);
      v8[3] = 0;
      v8[0] = 2621824;
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBufferSize = -2;
      NdisMIndicateStatusEx((NDIS_HANDLE)v3, &StatusIndication);
    }
    if ( (*(_DWORD *)(v3 + 120) & 0x20000000) != 0 )
      v6 = *(_QWORD *)(v3 + 792);
    else
      v6 = *(_QWORD *)(v3 + 3024);
    **(_DWORD **)(v1 + 40) = v6 / 0x64;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x27u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v3,
      v1);
}
