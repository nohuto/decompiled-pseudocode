/*
 * XREFs of ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x14002D500
 * Callers:
 *     ndisWMIDispatch @ 0x14002BA20 (ndisWMIDispatch.c)
 *     NdisWdfExecuteMethod @ 0x14009E600 (NdisWdfExecuteMethod.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140015760 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     WPP_RECORDER_SF_qDq @ 0x140024890 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x14002D480 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x14002EDC0 (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x14008EDC0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1400B8168 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ndisWmiXlateNdisOffloadToWmiOffload @ 0x1400B8394 (ndisWmiXlateNdisOffloadToWmiOffload.c)
 *     ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams @ 0x1400B86C8 (ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D7C00 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14017DCF0 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiExecuteMethod(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct tagWNODE_METHOD_ITEM *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int *v5; // rbx
  struct _NDIS_GUID *v7; // r13
  struct _NDIS_CO_VC_PTR_BLOCK *v9; // rdi
  int v11; // edx
  struct _NDIS_MINIPORT_BLOCK *v12; // r14
  int v13; // edx
  signed int InstanceName; // ebx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  unsigned int Flags; // eax
  __int64 SizeDataBlock; // rdx
  __int64 v18; // rcx
  bool v19; // zf
  char *v20; // r9
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  int v24; // r8d
  __int64 v25; // rcx
  unsigned int Oid; // edx
  NDIS_HANDLE v27; // rax
  unsigned int v28; // edx
  ULONG v29; // ecx
  unsigned int v30; // edx
  char *v31; // rax
  NDIS_HANDLE RequestHandle; // rax
  __int64 v33; // rcx
  ULONG v34; // eax
  __int64 DataBlockOffset; // rcx
  ULONG MethodId; // eax
  unsigned int v37; // eax
  int v38; // ecx
  unsigned int v39; // eax
  int v40; // edx
  struct _NDIS_MINIPORT_BLOCK *v41; // rcx
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // eax
  __int64 v45; // rcx
  ULONG v46; // r11d
  signed int v47; // eax
  unsigned int v48; // edx
  ULONG v49; // ecx
  UINT BytesWritten; // eax
  unsigned int v51; // eax
  __int64 v52; // rcx
  ULONG v53; // eax
  unsigned int v54; // ecx
  char *v55; // r8
  __m128i v56; // xmm2
  int v57; // edx
  unsigned int v58; // ecx
  UINT BytesNeeded; // r8d
  ULONG v60; // r8d
  __int64 v62; // [rsp+30h] [rbp-D0h]
  UINT v63; // [rsp+50h] [rbp-B0h]
  unsigned int v64; // [rsp+50h] [rbp-B0h]
  int v65; // [rsp+64h] [rbp-9Ch]
  NDIS_PORT_NUMBER v66; // [rsp+68h] [rbp-98h]
  struct _NDIS_CO_VC_PTR_BLOCK *v67; // [rsp+70h] [rbp-90h] BYREF
  void *v68; // [rsp+78h] [rbp-88h]
  struct _NDIS_MINIPORT_BLOCK *v69; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_GUID *v70; // [rsp+88h] [rbp-78h] BYREF
  char *v71; // [rsp+90h] [rbp-70h]
  struct _NDIS_OID_REQUEST v72; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v73; // [rsp+1A0h] [rbp+A0h]
  int v74; // [rsp+1B0h] [rbp+B0h]

  v5 = a5;
  v7 = a2;
  v70 = a2;
  v9 = 0LL;
  v67 = 0LL;
  memset(&v72, 0, 0xF8uLL);
  v12 = 0LL;
  v65 = 0;
  v69 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      18,
      60,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
    goto LABEL_9;
  InstanceName = ndisWmiFindInstanceName(
                   &v67,
                   a1,
                   (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName + 2),
                   *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName));
  if ( InstanceName < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        18,
        61,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    v67 = 0LL;
    goto LABEL_125;
  }
  v9 = v67;
  v5 = a5;
  if ( !v67 )
  {
LABEL_9:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths, &v69, 0, MPREF_WMI_EXEC);
      v12 = v69;
    }
  }
  if ( !v7 )
  {
    if ( (int)ndisWmiGetGuid(&v70, a1, &a3->WnodeHeader.Guid, 0) < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          18,
          62,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
      }
      InstanceName = -1073741811;
      goto LABEL_125;
    }
    v7 = v70;
  }
  Flags = v7->Flags;
  if ( (Flags & 0x80u) == 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        18,
        63,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    InstanceName = -1073741637;
    goto LABEL_125;
  }
  if ( (Flags & 0x200) == 0 )
  {
    *(_DWORD *)&v72.NdisReserved[16] |= 8u;
    *(_QWORD *)&v72.NdisReserved[32] = &ndisIntReqWmi;
    EtwActivityIdControl(3u, (LPGUID)&v72.NdisReserved[96]);
    DataBlockOffset = a3->DataBlockOffset;
    MethodId = a3->MethodId;
    v72.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_QWORD *)&v72.RequestType = 12LL;
    Oid = v7->Oid;
    v72.DATA.QUERY_INFORMATION.BytesNeeded = MethodId;
    v72.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + DataBlockOffset;
    v72.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock;
    v72.DATA.QUERY_INFORMATION.BytesWritten = a4 - DataBlockOffset;
LABEL_63:
    v72.DATA.QUERY_INFORMATION.Oid = Oid;
    goto LABEL_64;
  }
  SizeDataBlock = a3->SizeDataBlock;
  if ( (unsigned int)SizeDataBlock < 0x20
    || (v18 = a3->DataBlockOffset,
        v19 = *((_BYTE *)&a3->WnodeHeader.BufferSize + v18) == 2,
        v20 = (char *)a3 + v18,
        v71 = (char *)a3 + v18,
        !v19)
    || v20[1] != 1
    || *((_WORD *)v20 + 1) < 0x20u )
  {
    InstanceName = -1073741811;
    goto LABEL_125;
  }
  v66 = *((_DWORD *)v20 + 1);
  v68 = (void *)*((_QWORD *)v20 + 2);
  v63 = *((_DWORD *)v20 + 6);
  if ( (Flags & 0x2000000) == 0 )
  {
    if ( v7->Oid == 66086 && a4 - (unsigned int)v18 < 0x43C )
    {
      if ( a4 >= 0x38 )
      {
        a3->WnodeHeader.Flags |= 0x20u;
        v28 = 56;
        a3->OffsetInstanceName = v18 + 1084;
        a3->WnodeHeader.BufferSize = 56;
        InstanceName = 0;
      }
      else
      {
        InstanceName = -1073741789;
        v28 = 4;
      }
      *a5 = v28;
      goto LABEL_103;
    }
    memmove((char *)a3 + v18, v20 + 32, SizeDataBlock - 32);
    if ( (v7->Flags & 0x4000000) != 0 )
    {
      if ( a3->MethodId != 1 )
      {
        InstanceName = -1073741811;
        goto LABEL_125;
      }
      v29 = a3->DataBlockOffset;
      if ( a4 - v29 < 0x10 )
      {
        if ( a4 >= 0x38 )
        {
          a3->WnodeHeader.Flags |= 0x20u;
          v30 = 56;
          a3->OffsetInstanceName = v29 + 16;
          a3->WnodeHeader.BufferSize = 56;
          InstanceName = 0;
        }
        else
        {
          InstanceName = -1073741789;
          v30 = 4;
        }
        *a5 = v30;
        goto LABEL_103;
      }
      *(_DWORD *)&v72.NdisReserved[16] |= 8u;
      *(_QWORD *)&v72.NdisReserved[32] = &ndisIntReqWmi;
      v65 = 16;
      EtwActivityIdControl(3u, (LPGUID)&v72.NdisReserved[96]);
      v72.Header = (NDIS_OBJECT_HEADER)15466902;
      Oid = v7->Oid;
      v72.PortNumber = v66;
      v31 = (char *)a3 + a3->DataBlockOffset;
      v72.RequestType = NdisRequestSetInformation;
      v72.DATA.QUERY_INFORMATION.InformationBuffer = v31;
      v72.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock - 32;
    }
    else
    {
      *(_DWORD *)&v72.NdisReserved[16] |= 8u;
      *(_QWORD *)&v72.NdisReserved[32] = &ndisIntReqWmi;
      EtwActivityIdControl(3u, (LPGUID)&v72.NdisReserved[96]);
      v33 = a3->DataBlockOffset;
      v72.PortNumber = v66;
      v34 = a3->MethodId;
      v72.Header = (NDIS_OBJECT_HEADER)15466902;
      v72.RequestType = NdisRequestMethod;
      Oid = v7->Oid;
      v72.DATA.QUERY_INFORMATION.BytesNeeded = v34;
      v72.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + v33;
      v72.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock - 32;
      v72.DATA.QUERY_INFORMATION.BytesWritten = a4 - v33;
    }
    v72.RequestId = v68;
    RequestHandle = &ndisIntReqWmi;
    if ( !v68 )
      RequestHandle = v72.RequestHandle;
    v72.RequestHandle = RequestHandle;
    v72.Timeout = v63;
    goto LABEL_63;
  }
  v21 = v7->Oid;
  if ( ((v21 + 67042805) & 0xFFFFFFFD) != 0 )
  {
    if ( v21 + 67042802 <= 1 && a4 - (unsigned int)v18 < 0x20 )
    {
      if ( a4 >= 0x38 )
      {
        a3->WnodeHeader.Flags |= 0x20u;
        v22 = 56;
        a3->OffsetInstanceName = v18 + 32;
        a3->WnodeHeader.BufferSize = 56;
        InstanceName = 0;
      }
      else
      {
        InstanceName = -1073741789;
        v22 = 4;
      }
      *a5 = v22;
      goto LABEL_103;
    }
  }
  else if ( a4 - (unsigned int)v18 < 0x12C )
  {
    if ( a4 >= 0x38 )
    {
      a3->WnodeHeader.Flags |= 0x20u;
      v23 = 56;
      a3->OffsetInstanceName = v18 + 300;
      a3->WnodeHeader.BufferSize = 56;
      InstanceName = 0;
    }
    else
    {
      InstanceName = -1073741789;
      v23 = 4;
    }
    *a5 = v23;
    goto LABEL_103;
  }
  *(_DWORD *)&v72.NdisReserved[16] |= 8u;
  *(_QWORD *)&v72.NdisReserved[32] = &ndisIntReqWmi;
  EtwActivityIdControl(3u, (LPGUID)&v72.NdisReserved[96]);
  v25 = a3->DataBlockOffset;
  v72.Header = (NDIS_OBJECT_HEADER)15466902;
  Oid = v7->Oid;
  v72.DATA.QUERY_INFORMATION.Oid = Oid;
  v72.RequestType = NdisRequestQueryStatistics;
  v72.PortNumber = *((_DWORD *)v71 + 1);
  v72.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + v25;
  v72.DATA.QUERY_INFORMATION.InformationBufferLength = a4 - v25;
  v72.RequestId = v68;
  v27 = &ndisIntReqWmi;
  if ( !v68 )
    v27 = v72.RequestHandle;
  v72.RequestHandle = v27;
  v72.Timeout = v63;
LABEL_64:
  v37 = v7->Oid + 50265846;
  if ( v37 <= 5 && (v38 = 43, _bittest(&v38, v37)) )
  {
    v39 = ndisOidPMAddRemove(a1, 0LL, &v72);
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        v24,
        0x40u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)&v72,
        Oid,
        a1);
    if ( v9 || (v41 = v12) == 0LL )
      v41 = a1;
    v39 = ndisQuerySetMiniport(v41, v9, &v72, 0, 0LL);
  }
  v64 = v39;
  v42 = v39;
  if ( ((v39 + 1073676268) & 0xFFFFFFFD) != 0 )
  {
    if ( v39 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v40) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v40,
          18,
          65,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
        v42 = v64;
      }
      if ( (byte_140125101 & 0x10) != 0 )
      {
        McTemplateK0jqxddq_EtwWriteTransfer(
          v42,
          (unsigned int)&ExecuteMethodFailed,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          v42,
          1,
          a3->MethodId);
        v42 = v64;
      }
      if ( (v7->Flags & 0x200) != 0 )
      {
        if ( (v42 & 0xC0010000) == 0xC0010000 )
          v42 = (unsigned __int16)v42 | 0xC0230000;
      }
      else if ( v42 != 259 && v42 != -2147483643 )
      {
        v43 = -1073741823;
        if ( v42 != -1073741823 && v42 != -1073741670 && v42 != -1073741637 )
        {
          if ( v42 == -1073676267 )
            v43 = -1073741811;
          InstanceName = v43;
          goto LABEL_125;
        }
      }
      InstanceName = v42;
LABEL_103:
      if ( InstanceName == 259 )
        goto LABEL_127;
      goto LABEL_125;
    }
    if ( v72.RequestType == NdisRequestMethod )
    {
      v44 = v7->Oid;
      v45 = a3->DataBlockOffset;
      if ( v44 == 66086 )
      {
        ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams((char *)a3 + v45);
        v46 = a3->DataBlockOffset + 1084;
        a3->SizeDataBlock = 1084;
      }
      else if ( v44 == 66085 )
      {
        v47 = ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues((char *)a3 + v45, v72.DATA.METHOD_INFORMATION.BytesWritten);
        InstanceName = v47;
        if ( v47 == -1073676268 )
        {
          if ( a4 >= 0x38 )
          {
            v48 = 56;
            v49 = a3->DataBlockOffset;
            a3->WnodeHeader.Flags |= 0x20u;
            a3->OffsetInstanceName = v49 + 32;
            InstanceName = 0;
            a3->WnodeHeader.BufferSize = 56;
          }
          else
          {
            InstanceName = -1073741789;
            v48 = 4;
          }
          *a5 = v48;
          goto LABEL_103;
        }
        if ( v47 )
        {
          if ( (v47 & 0xC0010000) == 0xC0010000 )
            InstanceName = (unsigned __int16)v47 | 0xC0230000;
          goto LABEL_103;
        }
        v46 = a3->DataBlockOffset;
        a3->SizeDataBlock = 0;
      }
      else
      {
        BytesWritten = v72.DATA.METHOD_INFORMATION.BytesWritten;
        a3->SizeDataBlock = v72.DATA.METHOD_INFORMATION.BytesWritten;
        v46 = v45 + BytesWritten;
      }
    }
    else if ( v72.RequestType == NdisRequestSetInformation )
    {
      v51 = v7->Oid;
      if ( v51 == -50265846 || v51 == -50265843 )
      {
        v53 = 196;
        v46 = a3->DataBlockOffset + 196;
      }
      else
      {
        v52 = a3->DataBlockOffset;
        *(_OWORD *)((char *)&a3->WnodeHeader.BufferSize + v52) = 0LL;
        *(ULONG *)((char *)&a3->WnodeHeader.BufferSize + v52) = 1048837;
        *((_BYTE *)&a3->WnodeHeader.HistoricalContext + v52) = v72.SupportedRevision;
        v46 = a3->DataBlockOffset + v65;
        v53 = v65;
      }
      a3->SizeDataBlock = v53;
    }
    else
    {
      v54 = v7->Oid;
      if ( ((v54 + 67042805) & 0xFFFFFFFD) != 0 )
      {
        if ( v54 + 67042802 <= 1 )
        {
          v55 = (char *)a3 + a3->DataBlockOffset;
          v56 = *(__m128i *)v55;
          v57 = *((_DWORD *)v55 + 4);
          *((_DWORD *)v55 + 7) = v57;
          *(_DWORD *)v55 = _mm_cvtsi128_si32(v56);
          *((_WORD *)v55 + 1) = 32;
          v58 = _mm_cvtsi128_si32(_mm_srli_si128(v56, 8));
          v73 = v56;
          v74 = v57;
          *((_DWORD *)v55 + 1) = _mm_cvtsi128_si32(_mm_srli_si128(v56, 4));
          *((_DWORD *)v55 + 2) = v58 & 3;
          *((_DWORD *)v55 + 3) = (v58 >> 2) & 3;
          *((_DWORD *)v55 + 4) = (v58 >> 4) & 3;
          *((_DWORD *)v55 + 5) = (unsigned __int8)v58 >> 6;
          *((_DWORD *)v55 + 6) = _mm_cvtsi128_si32(_mm_srli_si128(v56, 12));
          v46 = a3->DataBlockOffset + 32;
          a3->SizeDataBlock = 32;
        }
        else
        {
          v46 = v72.DATA.QUERY_INFORMATION.BytesWritten + a3->DataBlockOffset;
          a3->SizeDataBlock = v72.DATA.QUERY_INFORMATION.BytesWritten;
        }
      }
      else
      {
        ndisWmiXlateNdisOffloadToWmiOffload((char *)a3 + a3->DataBlockOffset);
        v46 = a3->DataBlockOffset + 300;
        a3->SizeDataBlock = 300;
      }
    }
    a3->WnodeHeader.BufferSize = v46;
    *a5 = v46;
  }
  else
  {
    BytesNeeded = v72.DATA.METHOD_INFORMATION.BytesNeeded;
    if ( v72.RequestType != NdisRequestMethod )
      BytesNeeded = v72.DATA.QUERY_INFORMATION.BytesNeeded;
    v60 = a3->DataBlockOffset + BytesNeeded;
    if ( a4 < 0x38 )
    {
      InstanceName = -1073741789;
      *a5 = 4;
      goto LABEL_125;
    }
    a3->WnodeHeader.Flags |= 0x20u;
    a3->OffsetInstanceName = v60 + 32;
    a3->WnodeHeader.BufferSize = 56;
    *v5 = 56;
  }
  InstanceName = 0;
LABEL_125:
  if ( v9 )
    ndisDereferenceVcPtr(v9);
LABEL_127:
  if ( v12 )
    ndisDereferenceMiniport(v12, 0x62u);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v62) = InstanceName;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x42u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      v62);
  }
  return (unsigned int)InstanceName;
}
