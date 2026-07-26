/*
 * XREFs of NdisFOidRequest @ 0x1400086A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140008000 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     WPP_RECORDER_SF_qDd @ 0x140008220 (WPP_RECORDER_SF_qDd_ea_140008220.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140008A10 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisFOidRequest(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest)
{
  int v2; // r8d
  PNDIS_OID_REQUEST v3; // rbx
  NDIS_STATUS v5; // esi
  NDIS_OID Oid; // r14d
  __int64 v7; // rcx
  NDIS_STATUS v8; // eax
  unsigned int v10; // eax
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rcx
  char v14; // [rsp+30h] [rbp-D8h]
  char v15; // [rsp+30h] [rbp-D8h]
  char v16[8]; // [rsp+38h] [rbp-D0h]
  char v17[4]; // [rsp+38h] [rbp-D0h]
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+60h] [rbp-A8h]
  __int128 v21; // [rsp+70h] [rbp-98h]
  int *v22; // [rsp+80h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  __int128 v24; // [rsp+90h] [rbp-78h]
  __int128 v25; // [rsp+A0h] [rbp-68h]
  __int128 v26; // [rsp+B0h] [rbp-58h]
  __int128 v27; // [rsp+C0h] [rbp-48h]

  v3 = OidRequest;
  v5 = -1073741823;
  if ( OidRequest->Header.Type == 0x96 && OidRequest->Header.Size >= 0xECu )
  {
    if ( OidRequest->Header.Revision )
    {
      Oid = OidRequest->DATA.QUERY_INFORMATION.Oid;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v17 = OidRequest->DATA.QUERY_INFORMATION.Oid;
        LOBYTE(OidRequest) = 4;
        WPP_RECORDER_SF_qqD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          61,
          (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
          (char)NdisFilterHandle,
          (char)v3,
          v17[0]);
      }
      if ( (*(_DWORD *)(*((_QWORD *)NdisFilterHandle + 4) + 3688LL) & 0x400) == 0 )
        v3->SupportedRevision = 1;
      if ( *(_QWORD *)(*((_QWORD *)NdisFilterHandle + 2) + 256LL) && Oid - 65798 > 1 && Oid != 65812 )
      {
        if ( v3->RequestType == NdisRequestSetInformation && v3->DATA.QUERY_INFORMATION.Oid == 66058 )
        {
          if ( v3->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
          {
            v12 = *((_QWORD *)NdisFilterHandle + 4);
            v18 = *(_DWORD *)v3->DATA.QUERY_INFORMATION.InformationBuffer;
            v22 = &v18;
            v20 = 0LL;
            v19[0] = 7340440LL;
            v21 = 0LL;
            v19[1] = v12;
            v24 = 0LL;
            DWORD1(v20) = 1073807384;
            v25 = 0LL;
            v23 = 4LL;
            v26 = 0LL;
            v13 = (__int64)*(int *)(*(_QWORD *)(v12 + 3760) + 896LL) << 7;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *))((char *)g_MiniportHookDrivers + v13 + 64))(
              *(_QWORD *)((char *)g_MiniportHookDrivers + v13 + 24),
              *(_QWORD *)(v12 + 5288),
              v12,
              v19);
            v5 = 0;
          }
          else
          {
            v5 = -1073676267;
          }
        }
        else
        {
          *(_DWORD *)&v3->NdisReserved[16] |= 0x40u;
          *(_QWORD *)&v3->NdisReserved[32] = NdisFilterHandle;
          v7 = *(_QWORD *)&v3->NdisReserved[96];
          v27 = 0LL;
          if ( !v7 )
            v7 = *(_QWORD *)&v3->NdisReserved[104] - *((_QWORD *)&v27 + 1);
          if ( !v7 )
            EtwActivityIdControl(3u, (LPGUID)&v3->NdisReserved[96]);
          if ( v3->RequestType == NdisRequestSetInformation
            && (*(_DWORD *)&v3->NdisReserved[16] & 0x4000) == 0
            && (v10 = v3->DATA.QUERY_INFORMATION.Oid + 50265846, v10 <= 5)
            && (v11 = 43, _bittest(&v11, v10)) )
          {
            v8 = ndisOidPMAddRemove(
                   *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
                   (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
                   v3);
          }
          else
          {
            v8 = ndisQueueOidRequest(
                   v3,
                   *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
                   (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
                   0LL);
          }
          v5 = v8;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v16 = v5;
        WPP_RECORDER_SF_qDd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v2,
          0x3Eu,
          (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
          (char)v3,
          Oid,
          *(_QWORD *)v16);
      }
      return v5;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = (char)OidRequest;
        LOBYTE(OidRequest) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          60,
          (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
          (char)NdisFilterHandle,
          v15);
      }
      return -1071448020;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = (char)OidRequest;
      LOBYTE(OidRequest) = 2;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        11,
        59,
        (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
        (char)NdisFilterHandle,
        v14);
    }
    return -1073741811;
  }
}
