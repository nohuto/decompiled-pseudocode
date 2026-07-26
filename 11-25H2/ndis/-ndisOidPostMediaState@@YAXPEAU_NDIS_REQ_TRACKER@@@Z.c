/*
 * XREFs of ?ndisOidPostMediaState@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006E800
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

void __fastcall ndisOidPostMediaState(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int *v4; // rdx
  int v5; // r8d
  int v6; // r9d
  int v7; // eax
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v9[4]; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v10; // [rsp+C0h] [rbp+17h]
  __int64 v11; // [rsp+C8h] [rbp+1Fh]
  int v12; // [rsp+D0h] [rbp+27h]
  int v13; // [rsp+D4h] [rbp+2Bh]

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_QWORD *)a1;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x28u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v2,
      v1);
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 && !*((_DWORD *)a1 + 10) && *(_BYTE *)(v2 + 32) < 6u )
  {
    v4 = *(int **)(v1 + 40);
    v5 = 0;
    v6 = *v4;
    if ( (*v4 == 0) != ((*(_DWORD *)(v2 + 120) >> 29) & 1) )
    {
      v11 = *(_QWORD *)(v2 + 2768);
      v10 = *(_QWORD *)(v2 + 2760);
      v9[2] = *(_DWORD *)(v2 + 348);
      v12 = *(_DWORD *)(v2 + 808);
      v7 = *(_DWORD *)(v2 + 468);
      v9[3] = 0;
      LOBYTE(v5) = v6 != 0;
      v13 = v7;
      v9[1] = v5 + 1;
      StatusIndication.StatusBuffer = v9;
      v9[0] = 2621824;
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.SourceHandle = (void *)v2;
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBufferSize = -2;
      NdisMIndicateStatusEx((NDIS_HANDLE)v2, &StatusIndication);
      v4 = *(int **)(v1 + 40);
    }
    *v4 = (*(_DWORD *)(v2 + 120) & 0x20000000) == 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x29u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v2,
      v1);
}
