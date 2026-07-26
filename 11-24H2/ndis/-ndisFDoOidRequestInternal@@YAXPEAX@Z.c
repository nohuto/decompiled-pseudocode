/*
 * XREFs of ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400173A0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009A8D0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x140015C00 (WPP_RECORDER_SF_Dqqd.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140015CC0 (WPP_RECORDER_SF_qDqd_ea_140015CC0.c)
 *     WPP_RECORDER_SF_qDq @ 0x140015E00 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140016530 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140016CB0 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140016EF0 (--$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140017B10 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140050710 (-ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1401530F0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140159C60 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisFDoOidRequestInternal(struct _NDIS_FILTER_BLOCK *Parameter)
{
  KSPIN_LOCK *p_Lock; // r15
  KSPIN_LOCK *v3; // r12
  __int64 *v4; // r14
  unsigned int v5; // edx
  struct _NDIS_FILTER_BLOCK *v6; // rcx
  KIRQL v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rcx
  _NDIS_OID_REQUEST *v10; // r13
  unsigned int v11; // r8d
  unsigned int v12; // eax
  char *Miniport; // rcx
  NDIS_OID Oid; // r10d
  unsigned int v15; // r9d
  int v16; // edx
  __int64 (__fastcall *v17)(__int128 *); // rax
  int v18; // edx
  char v19; // bl
  int v20; // r8d
  int v21; // r9d
  unsigned __int8 v22; // al
  KIRQL v23; // r8
  unsigned __int8 v24; // si
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  unsigned int v28; // eax
  KIRQL v29; // al
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rbx
  NDIS_OID v31; // r15d
  int v32; // edx
  int v33; // r8d
  int v34; // r9d
  unsigned int v35; // r14d
  _NDIS_OID_REQUEST *v36; // rsi
  PVOID v37; // rdx
  _NDIS_OID_REQUEST *v38; // rdx
  bool v39; // zf
  NDISWATCHDOG__ *m_ptr; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  KSPIN_LOCK *p_Type; // r13
  KSPIN_LOCK v44; // r15
  KIRQL v45; // al
  __int64 v46; // rbx
  KIRQL v47; // al
  int v48; // [rsp+28h] [rbp-69h]
  __int128 v49; // [rsp+58h] [rbp-39h] BYREF
  __int128 v50; // [rsp+68h] [rbp-29h]
  __int128 v51; // [rsp+78h] [rbp-19h]
  _QWORD v52[12]; // [rsp+88h] [rbp-9h] BYREF
  _NDIS_OID_REQUEST *v53; // [rsp+F8h] [rbp+67h]
  PVOID P; // [rsp+100h] [rbp+6Fh] BYREF

  p_Lock = &Parameter->Lock;
  v3 = 0LL;
LABEL_2:
  while ( 1 )
  {
    v4 = 0LL;
    KeAcquireSpinLockRaiseToDpc(p_Lock);
    Parameter->LockThread = KeGetCurrentThread();
    if ( !FILTER_TEST_FLAG(Parameter, 0x800u) )
      break;
LABEL_7:
    Parameter->LockThread = 0LL;
    KeReleaseSpinLock(p_Lock, v7);
    if ( !v4 )
      return;
    v10 = (_NDIS_OID_REQUEST *)(v4 - 9);
    *((_DWORD *)v4 + 4) &= ~4u;
    v39 = Parameter->Header.Type == 17;
    v11 = 0;
    v53 = (_NDIS_OID_REQUEST *)(v4 - 9);
    v12 = 73;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    if ( v39 )
      Miniport = (char *)Parameter;
    else
      Miniport = (char *)Parameter->Miniport;
    if ( !v10->PortNumber || (*((_DWORD *)Miniport + 468) & 0x200) == 0 )
    {
      Oid = v10->DATA.QUERY_INFORMATION.Oid;
      v15 = 146;
      while ( v12 <= v15 && v12 >= v11 )
      {
        if ( *((_DWORD *)&unk_1400F2000 + 6 * v12) > Oid )
        {
          if ( !v12 )
            break;
          v15 = v12 - 1;
          v12 = v11 + ((v12 - v11) >> 1);
        }
        else
        {
          if ( *((_DWORD *)&unk_1400F2000 + 6 * v12) == Oid )
          {
            *((_DWORD *)v4 + 5) = v12;
            v16 = *((_DWORD *)v4 + 4);
            HIDWORD(v51) = 0;
            *((_DWORD *)v4 + 4) = v16 | 4;
            *(_QWORD *)&v50 = Parameter;
            *(_QWORD *)&v49 = 0LL;
            *(_QWORD *)&v51 = v4 - 9;
            if ( (v16 & 0x220) != 0 )
              *((_QWORD *)&v50 + 1) = v4[4];
            else
              *((_QWORD *)&v50 + 1) = 0LL;
            if ( (v16 & 0x40) != 0 )
              *((_QWORD *)&v49 + 1) = v4[4];
            else
              *((_QWORD *)&v49 + 1) = 0LL;
            DWORD2(v51) = 0;
            if ( (v16 & 0x840080) != 0 )
              break;
            v17 = (__int64 (__fastcall *)(__int128 *))*(&funcs_140016468 + 3 * v12);
            if ( !v17 )
              break;
            v19 = v17(&v49);
            if ( v19 != 1 )
              goto LABEL_26;
            HIDWORD(v51) |= 4u;
            ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v49, v18, v20, v21);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Dqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v41, v42, 0x15u, v48);
            goto LABEL_2;
          }
          v11 = v12 + 1;
          v12 += 1 + ((v15 - v12) >> 1);
        }
      }
    }
    v19 = 0;
LABEL_26:
    KeAcquireSpinLockRaiseToDpc(p_Lock);
    Parameter->LockThread = KeGetCurrentThread();
    v22 = FILTER_TEST_FLAG(Parameter, 0x10000u);
    Parameter->LockThread = 0LL;
    v24 = v22;
    if ( v22 )
      v19 = 1;
    KeReleaseSpinLock(p_Lock, v23);
    if ( v19 == 1 )
    {
      v49 = 0uLL;
      v28 = -1073676286;
      *((_QWORD *)&v50 + 1) = 0LL;
      if ( !v24 )
        v28 = -1073741823;
      *((_QWORD *)&v51 + 1) = v28;
      *(_QWORD *)&v51 = v4 - 9;
      *(_QWORD *)&v50 = Parameter;
      ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v49, v25, v26, v27);
    }
    else
    {
      *((_DWORD *)v4 + 4) |= 0x20000u;
      v29 = KeAcquireSpinLockRaiseToDpc(p_Lock);
      Parameter->PendingOidRequest = v10;
      Parameter->LockThread = 0LL;
      KeReleaseSpinLock(p_Lock, v29);
      ndisDrainWatchdog(Parameter->PendingOidWatchdog.m_ptr);
      ndisArmWatchdog(
        Parameter->PendingOidWatchdog.m_ptr,
        Parameter,
        0x24u,
        Parameter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler,
        ndisWatchdogOidTimeout,
        v10->DATA.QUERY_INFORMATION.Oid);
      FilterDriver = Parameter->FilterDriver;
      v31 = v10->DATA.QUERY_INFORMATION.Oid;
      P = 0LL;
      v35 = ndisOidCloneForCompatibility(
              &Parameter->Header,
              (struct _NDIS_OID_REQUEST *)(v4 - 9),
              1,
              (struct _NDIS_OID_REQUEST **)&P);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v33,
          0x75u,
          (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
          (char)Parameter,
          v31);
      v36 = (_NDIS_OID_REQUEST *)P;
      if ( !v35 )
      {
        v37 = v10;
        if ( P )
          v37 = P;
        ndisAzTelemetryOidDelivered<_NDIS_FILTER_BLOCK>((__int64)Parameter, (__int64)v37);
        v38 = v10;
        if ( v36 )
          v38 = v36;
        v35 = FilterDriver->DefaultFilterCharacteristics.OidRequestHandler(Parameter->FilterModuleContext, v38);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v32,
          v33,
          0x76u,
          (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
          (char)Parameter,
          v31,
          (char)v10);
      v39 = v35 == 259;
      if ( v35 != 259 )
      {
        if ( v36 )
        {
          p_Type = 0LL;
          if ( Parameter->Header.Type == 5 )
            p_Type = (KSPIN_LOCK *)&Parameter->Header.Type;
          else
            v3 = (KSPIN_LOCK *)&Parameter->Header.Type;
          v44 = *(_QWORD *)&v36->NdisReserved[24];
          if ( v44 )
          {
            *(_QWORD *)&v36->NdisReserved[24] = 0LL;
            if ( v36->RequestType == NdisRequestMethod )
            {
              *(_DWORD *)(v44 + 60) = v36->DATA.METHOD_INFORMATION.BytesWritten;
              *(_DWORD *)(v44 + 64) = v36->DATA.METHOD_INFORMATION.BytesRead;
              *(_DWORD *)(v44 + 68) = v36->DATA.METHOD_INFORMATION.BytesNeeded;
              *(_QWORD *)(v44 + 40) = v36->DATA.QUERY_INFORMATION.InformationBuffer;
              *(_DWORD *)(v44 + 48) = v36->DATA.QUERY_INFORMATION.InformationBufferLength;
              *(_DWORD *)(v44 + 52) = v36->DATA.QUERY_INFORMATION.BytesWritten;
            }
            else
            {
              *(_DWORD *)(v44 + 52) = v36->DATA.QUERY_INFORMATION.BytesWritten;
              *(_DWORD *)(v44 + 56) = v36->DATA.QUERY_INFORMATION.BytesNeeded;
              *(_QWORD *)(v44 + 40) = v36->DATA.QUERY_INFORMATION.InformationBuffer;
              *(_DWORD *)(v44 + 48) = v36->DATA.QUERY_INFORMATION.InformationBufferLength;
            }
            if ( (*(_DWORD *)(v44 + 88) & 0x400) == 0 )
            {
              if ( p_Type )
              {
                v45 = KeAcquireSpinLockRaiseToDpc(p_Type + 18);
                v3 = 0LL;
                p_Type[22] = v44;
                p_Type[19] = 0LL;
                KeReleaseSpinLock(p_Type + 18, v45);
                goto LABEL_67;
              }
              v47 = KeAcquireSpinLockRaiseToDpc(v3 + 12);
              v3[276] = v44;
              v3[65] = 0LL;
              KeReleaseSpinLock(v3 + 12, v47);
            }
            v3 = 0LL;
LABEL_67:
            v46 = *(_QWORD *)&v36->NdisReserved[24];
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v32) = 4;
              WPP_RECORDER_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v32,
                11,
                13,
                (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
                (char)v36,
                (char)v36->RequestHandle);
            }
            if ( v46 )
            {
              *(_BYTE *)(v46 + 232) = v36->SupportedRevision;
              *(_DWORD *)(v46 + 152) = *(_DWORD *)&v36->NdisReserved[80];
            }
            ExFreePoolWithTag(v36, 0);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v32) = 2;
              WPP_RECORDER_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v32,
                11,
                16,
                (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids);
            }
            v3 = 0LL;
          }
          v10 = v53;
        }
        v39 = v35 == 259;
      }
      p_Lock = &Parameter->Lock;
      if ( !v39 )
      {
        m_ptr = Parameter->PendingOidWatchdog.m_ptr;
        if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
        {
          if ( KeCancelTimer((PKTIMER)m_ptr + 1) )
          {
            KeSetEvent((PRKEVENT)m_ptr + 7, 0, 0);
            *((_DWORD *)m_ptr + 40) = 0;
          }
          else
          {
            _InterlockedAnd((volatile signed __int32 *)m_ptr + 40, 0);
          }
        }
        v52[0] = 0LL;
        v52[1] = 0LL;
        v52[3] = 0LL;
        v52[4] = v10;
        v52[2] = Parameter;
        v52[5] = v35;
        ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v52, v32, v33, v34);
        p_Lock = &Parameter->Lock;
      }
    }
  }
  if ( Parameter->OidRequestList.Flink != &Parameter->OidRequestList )
  {
    FILTER_SET_FLAG(v6, v5);
    v4 = (__int64 *)*v8;
    if ( *(__int64 **)(*v8 + 8) != v8 || (v9 = *v4, *(__int64 **)(*v4 + 8) != v4) )
      __fastfail(3u);
    *v8 = v9;
    *(_QWORD *)(v9 + 8) = v8;
    goto LABEL_7;
  }
  Parameter->LockThread = 0LL;
  KeReleaseSpinLock(p_Lock, v7);
}
