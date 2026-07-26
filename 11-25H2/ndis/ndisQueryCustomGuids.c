/*
 * XREFs of ndisQueryCustomGuids @ 0x14002E8E0
 * Callers:
 *     ndisQuerySupportedGuidToOidList @ 0x14002E140 (ndisQuerySupportedGuidToOidList.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 */

__int64 __fastcall ndisQueryCustomGuids(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        _QWORD *a3,
        _WORD *a4)
{
  struct _NDIS_OID_REQUEST *v6; // rbx
  unsigned __int128 v8; // rax
  UINT MethodId_low; // r14d
  unsigned __int64 v10; // r15
  __int64 Pool2; // rax
  int v12; // edx
  _DWORD *v13; // r13
  NTSTATUS SetMiniport; // ebx
  int v15; // edx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  unsigned __int8 MajorNdisVersion; // al
  _DWORD *v19; // rax
  __int64 v20; // rcx
  int *v21; // r12
  int v22; // ecx
  void *v23; // r14
  __int64 v25; // [rsp+88h] [rbp+10h]
  PVOID DataBlockObject; // [rsp+90h] [rbp+18h] BYREF
  _DWORD *v27; // [rsp+98h] [rbp+20h]

  DataBlockObject = 0LL;
  v6 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      13,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  *a3 = 0LL;
  *(_OWORD *)&v6->Header.Type = 0LL;
  *(_OWORD *)&v6->RequestId = 0LL;
  *a4 = 0;
  *(_OWORD *)&v6->DATA.QUERY_INFORMATION.Oid = 0LL;
  *(_OWORD *)&v6->DATA.METHOD_INFORMATION.InputBufferLength = 0LL;
  *(_OWORD *)&v6->DATA.METHOD_INFORMATION.BytesRead = 0LL;
  *(_OWORD *)&v6->NdisReserved[8] = 0LL;
  *(_QWORD *)&v6->NdisReserved[24] = 0LL;
  *(_OWORD *)&v6->NdisReserved[40] = 0LL;
  *(_OWORD *)&v6->NdisReserved[56] = 0LL;
  *(_OWORD *)&v6->NdisReserved[72] = 0LL;
  *(_OWORD *)&v6->NdisReserved[88] = 0LL;
  *(_OWORD *)&v6->NdisReserved[104] = 0LL;
  *(_OWORD *)&v6->NdisReserved[120] = 0LL;
  *(_OWORD *)&v6->MiniportReserved[8] = 0LL;
  *(_OWORD *)&v6->SourceReserved[8] = 0LL;
  *(_QWORD *)&v6[1].Header.Type = 0LL;
  *(_DWORD *)&v6->NdisReserved[16] |= 8u;
  *(_QWORD *)&v6->NdisReserved[32] = &ndisIntReqWmi;
  EtwActivityIdControl(3u, (LPGUID)&v6->NdisReserved[96]);
  *(_QWORD *)&v6->Header.Type = 15466902LL;
  v6->DATA.QUERY_INFORMATION.Oid = 65815;
  v6->PortNumber = 0;
  v6->DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v6->DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  LODWORD(v8) = ndisQuerySetMiniport(a1, 0LL, v6, 0, 0LL);
  MethodId_low = LOWORD(v6->DATA.METHOD_INFORMATION.MethodId);
  if ( (((_DWORD)v8 + 1073676268) & 0xFFFFFFFD) == 0 )
  {
    if ( (_WORD)MethodId_low )
    {
      v8 = LOWORD(v6->DATA.METHOD_INFORMATION.MethodId) * (unsigned __int128)0x2492492492492493uLL;
      v10 = (*((_QWORD *)&v8 + 1)
           + (((unsigned __int64)LOWORD(v6->DATA.METHOD_INFORMATION.MethodId) - *((_QWORD *)&v8 + 1)) >> 1)) >> 4;
      if ( (_WORD)v10 )
      {
        Pool2 = ExAllocatePool2(64LL, LOWORD(v6->DATA.METHOD_INFORMATION.MethodId), 829899854);
        v27 = (_DWORD *)Pool2;
        v13 = (_DWORD *)Pool2;
        if ( !Pool2 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v12,
              18,
              15,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a1);
          }
          SetMiniport = -1073741670;
          goto LABEL_37;
        }
        v6->DATA.QUERY_INFORMATION.InformationBufferLength = MethodId_low;
        v6->DATA.QUERY_INFORMATION.InformationBuffer = (PVOID)Pool2;
        SetMiniport = ndisQuerySetMiniport(a1, 0LL, v6, 0, 0LL);
        if ( SetMiniport )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v15,
              18,
              16,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a1);
          }
LABEL_33:
          ExFreePoolWithTag(v13, 0);
          goto LABEL_37;
        }
        if ( (a1->Flags & 0x20000) != 0 )
        {
          v16 = v13 + 6;
          v17 = (unsigned __int16)v10;
          do
          {
            *v16 |= 0x10000000u;
            v16 += 7;
            --v17;
          }
          while ( v17 );
          MajorNdisVersion = a1->MajorNdisVersion;
        }
        else
        {
          MajorNdisVersion = a1->MajorNdisVersion;
        }
        if ( MajorNdisVersion < 6u )
        {
          v21 = v13 + 6;
          v25 = (unsigned __int16)v10;
          do
          {
            v22 = *v21;
            if ( (*(_BYTE *)v21 & 0x60) == 0x60 )
            {
              v23 = &AllUsersReadWriteSecurityDescriptor;
            }
            else if ( (v22 & 0x20) != 0 )
            {
              v23 = &AllUsersReadSecurityDescriptor;
            }
            else
            {
              v23 = &AllUsersWriteSecurityDescriptor;
              if ( (v22 & 0x40) == 0 )
                v23 = &AdminsSecurityDescriptor;
            }
            *v21 = v22 | 0x8000000;
            SetMiniport = IoWMIOpenBlock((LPCGUID)(v21 - 6), 0x40000u, &DataBlockObject);
            if ( SetMiniport >= 0 )
            {
              SetMiniport = ObSetSecurityObjectByPointer(DataBlockObject, 7LL, v23);
              ObfDereferenceObject(DataBlockObject);
            }
            v21 += 7;
            --v25;
          }
          while ( v25 );
          v13 = v27;
          if ( SetMiniport )
            goto LABEL_33;
        }
        else
        {
          v19 = v13 + 6;
          v20 = (unsigned __int16)v10;
          do
          {
            *v19 |= 0x8000000u;
            v19 += 7;
            --v20;
          }
          while ( v20 );
        }
        *a3 = v13;
        *a4 = v10;
        goto LABEL_37;
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    BYTE8(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      SDWORD2(v8),
      18,
      14,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  SetMiniport = -1073741637;
LABEL_37:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x11u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      SetMiniport);
  return (unsigned int)SetMiniport;
}
