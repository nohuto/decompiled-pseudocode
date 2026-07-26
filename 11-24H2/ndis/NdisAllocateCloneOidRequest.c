/*
 * XREFs of NdisAllocateCloneOidRequest @ 0x140017000
 * Callers:
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140016CB0 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDDqq @ 0x140015F20 (WPP_RECORDER_SF_qDDqq.c)
 */

NDIS_STATUS __stdcall NdisAllocateCloneOidRequest(
        NDIS_HANDLE SourceHandle,
        PNDIS_OID_REQUEST OidRequest,
        UINT PoolTag,
        PNDIS_OID_REQUEST *ClonedOidRequest)
{
  NDIS_STATUS v5; // esi
  char v6; // bp
  PNDIS_OID_REQUEST v8; // rdi
  __int64 v9; // rbx
  int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rcx
  _BYTE *Pool2; // rax
  int v14; // edx
  char Revision; // al
  __int16 v16; // cx
  bool v17; // cf
  NDIS_REQUEST_TYPE RequestType; // ecx
  UINT InformationBufferLength; // r8d
  PVOID InformationBuffer; // rcx
  UINT BytesWritten; // edx
  __int64 v22; // r8
  int v23; // eax
  __int128 v24; // xmm0
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  USHORT Size; // dx
  __int64 v30; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]

  v5 = 0;
  v6 = 0;
  v8 = OidRequest;
  v9 = 0LL;
  v10 = *(_DWORD *)&OidRequest->NdisReserved[16] & 0x20;
  if ( !v10 )
  {
    v11 = *(unsigned __int8 *)SourceHandle;
    if ( (unsigned __int8)v11 > 0x15u || (LODWORD(OidRequest) = 2359328, !_bittest((const int *)&OidRequest, v11)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequest) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          10,
          (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
          (char)SourceHandle);
      }
      v5 = -1073741811;
      goto LABEL_23;
    }
  }
  if ( *(_BYTE *)SourceHandle == 18 || v10 )
  {
    v30 = *((_QWORD *)SourceHandle + 3);
    if ( *(_BYTE *)(v30 + 56) <= 6u && (*(_BYTE *)(v30 + 56) != 6 || *(_BYTE *)(v30 + 57) < 0x32u) )
      goto LABEL_10;
  }
  else if ( *(_BYTE *)SourceHandle == 5 )
  {
    v12 = *((_QWORD *)SourceHandle + 2);
    if ( *(_BYTE *)(v12 + 100) <= 6u && (*(_BYTE *)(v12 + 100) != 6 || *(_BYTE *)(v12 + 101) < 0x32u) )
      goto LABEL_10;
  }
  v6 = 1;
LABEL_10:
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 248LL, PoolTag);
  v9 = (__int64)Pool2;
  if ( Pool2 )
  {
    *Pool2 = -106;
    if ( !v6 )
    {
      Revision = 1;
      v16 = 236;
      goto LABEL_13;
    }
    Revision = v8->Header.Revision;
    if ( Revision == 1 )
    {
      Size = v8->Header.Size;
      if ( Size >= 0xECu )
      {
LABEL_27:
        v16 = Size;
LABEL_13:
        *(_WORD *)(v9 + 2) = v16;
        *(_BYTE *)(v9 + 1) = Revision;
        v17 = v8->Header.Revision < 2u;
        RequestType = v8->RequestType;
        *(_DWORD *)(v9 + 8) = v8->PortNumber;
        *(_QWORD *)(v9 + 16) = v8->RequestId;
        *(_DWORD *)(v9 + 12) = v8->Timeout;
        *(_QWORD *)(v9 + 24) = v8->RequestHandle;
        *(_BYTE *)(v9 + 232) = v8->SupportedRevision;
        *(_DWORD *)(v9 + 4) = RequestType;
        if ( !v17 || (*(_DWORD *)&v8->NdisReserved[16] & 0x4000) != 0 )
        {
          *(NDIS_OBJECT_HEADER *)(v9 + 240) = v8[1].Header;
          *(_DWORD *)(v9 + 244) = v8[1].RequestType;
        }
        InformationBufferLength = v8->DATA.QUERY_INFORMATION.InformationBufferLength;
        if ( RequestType == NdisRequestMethod )
        {
          *(_DWORD *)(v9 + 64) = v8->DATA.METHOD_INFORMATION.BytesRead;
          *(_DWORD *)(v9 + 68) = v8->DATA.METHOD_INFORMATION.BytesNeeded;
          *(_DWORD *)(v9 + 60) = v8->DATA.METHOD_INFORMATION.BytesWritten;
          *(_DWORD *)(v9 + 48) = InformationBufferLength;
        }
        *(_DWORD *)(v9 + 32) = v8->DATA.QUERY_INFORMATION.Oid;
        InformationBuffer = v8->DATA.QUERY_INFORMATION.InformationBuffer;
        BytesWritten = v8->DATA.QUERY_INFORMATION.BytesWritten;
        *(_DWORD *)(v9 + 56) = v8->DATA.QUERY_INFORMATION.BytesNeeded;
        *(_QWORD *)(v9 + 40) = InformationBuffer;
        *(_DWORD *)(v9 + 48) = InformationBufferLength;
        *(_DWORD *)(v9 + 52) = BytesWritten;
        v22 = *(unsigned int *)&v8->NdisReserved[16];
        v23 = *(_DWORD *)(v9 + 88);
        v24 = *(_OWORD *)&v8->NdisReserved[96];
        LODWORD(InformationBuffer) = ((unsigned __int16)v23 ^ (unsigned __int16)*(_DWORD *)&v8->NdisReserved[16]) & 0x8000;
        *(_QWORD *)(v9 + 96) = v8;
        v25 = v23 ^ (unsigned int)InformationBuffer ^ ((unsigned __int8)v22 ^ (unsigned __int8)(v23 ^ (unsigned __int8)InformationBuffer)) & 0x80;
        v26 = v25 ^ ((unsigned __int8)v22 ^ (unsigned __int8)v25) & 4 ^ (v22 ^ v25 ^ ((unsigned __int8)v22 ^ (unsigned __int8)v25) & 4) & 0x80000;
        *(_DWORD *)(v9 + 152) = *(_DWORD *)&v8->NdisReserved[80];
        *(_BYTE *)(v9 + 144) = v8->NdisReserved[72];
        v27 = v26 ^ ((unsigned int)v22 ^ v26) & 0x800000 ^ ((unsigned int)v22 ^ v26 ^ ((unsigned int)v22 ^ v26) & 0x800000) & 0x1000000;
        LODWORD(v27) = v27 | 0x4000;
        *(_DWORD *)(v9 + 88) = v27 ^ (v22 ^ v27) & 0x30000000;
        *(_OWORD *)(v9 + 168) = v24;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDDqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v27, v22, v9, BugCheckParameter4);
        goto LABEL_23;
      }
    }
    else if ( Revision == 2 )
    {
      Size = v8->Header.Size;
      if ( Size >= 0xF8u )
        goto LABEL_27;
    }
    KeBugCheckEx(0x7Cu, 0x21uLL, (ULONG_PTR)SourceHandle, (ULONG_PTR)v8, 0LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      11,
      11,
      (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
      (char)v8);
  }
  v5 = -1073741670;
LABEL_23:
  *ClonedOidRequest = (PNDIS_OID_REQUEST)v9;
  return v5;
}
