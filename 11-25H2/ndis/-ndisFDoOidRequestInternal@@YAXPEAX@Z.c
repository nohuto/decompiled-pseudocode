/*
 * XREFs of ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400218B0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1400A3AA0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140022000 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140022040 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140022280 (--$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400235C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x140024760 (WPP_RECORDER_SF_Dqqd.c)
 *     WPP_RECORDER_SF_qDq @ 0x140024890 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140025370 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006AF90 (-ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x14015F980 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140166780 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisFDoOidRequestInternal(char *Parameter)
{
  KSPIN_LOCK *v1; // r12
  __int64 *v3; // r15
  KIRQL v4; // al
  KIRQL v5; // bl
  char *v6; // rdi
  __int64 v7; // rax
  int v8; // edi
  struct _NDIS_OID_REQUEST *v9; // r13
  unsigned int v10; // eax
  bool v11; // zf
  unsigned int v12; // r8d
  char *v13; // rcx
  NDIS_OID Oid; // r10d
  unsigned int v15; // r9d
  int v16; // edx
  __int64 (__fastcall *v17)(__int128 *); // rax
  char v18; // bl
  KIRQL v19; // al
  KIRQL v20; // di
  bool v21; // al
  bool v22; // r14
  unsigned int v23; // eax
  KIRQL v24; // al
  __int64 v25; // rbx
  NDIS_OID v26; // r15d
  int v27; // edx
  int v28; // r8d
  unsigned int v29; // r14d
  struct _NDIS_OID_REQUEST *v30; // rdi
  PVOID v31; // rdx
  struct _NDIS_OID_REQUEST *v32; // rdx
  KSPIN_LOCK *v33; // r13
  KSPIN_LOCK *v34; // r12
  int v35; // edx
  int v36; // r8d
  KSPIN_LOCK v37; // r15
  KIRQL v38; // al
  KSPIN_LOCK *v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rbx
  int v42; // [rsp+28h] [rbp-69h]
  __int128 v43; // [rsp+58h] [rbp-39h] BYREF
  __int128 v44; // [rsp+68h] [rbp-29h]
  __int128 v45; // [rsp+78h] [rbp-19h]
  _QWORD v46[6]; // [rsp+88h] [rbp-9h] BYREF
  struct _NDIS_OID_REQUEST *v47; // [rsp+F8h] [rbp+67h]
  PVOID P; // [rsp+100h] [rbp+6Fh] BYREF

  v1 = (KSPIN_LOCK *)(Parameter + 144);
  while ( 1 )
  {
LABEL_2:
    v3 = 0LL;
    v4 = KeAcquireSpinLockRaiseToDpc(v1);
    *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
    v5 = v4;
    if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)Parameter, 2048) )
      goto LABEL_7;
    v6 = Parameter + 160;
    if ( *(char **)v6 == v6 )
      break;
    FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)Parameter, 0x800u);
    v3 = *(__int64 **)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v7 = *v3, *(__int64 **)(*v3 + 8) != v3) )
      __fastfail(3u);
    *(_QWORD *)v6 = v7;
    *(_QWORD *)(v7 + 8) = v6;
LABEL_7:
    *((_QWORD *)Parameter + 19) = 0LL;
    KeReleaseSpinLock(v1, v5);
    if ( !v3 )
      return;
    v8 = *((_DWORD *)v3 - 10);
    v9 = (struct _NDIS_OID_REQUEST *)(v3 - 9);
    *((_DWORD *)v3 + 4) &= ~4u;
    v10 = 73;
    v11 = *Parameter == 17;
    v47 = (struct _NDIS_OID_REQUEST *)(v3 - 9);
    v12 = 0;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    if ( v11 )
      v13 = Parameter;
    else
      v13 = (char *)*((_QWORD *)Parameter + 4);
    if ( !v9->PortNumber || (*((_DWORD *)v13 + 468) & 0x200) == 0 )
    {
      Oid = v9->DATA.QUERY_INFORMATION.Oid;
      v15 = 146;
      while ( v10 <= v15 && v10 >= v12 )
      {
        if ( *((_DWORD *)&unk_1400FB000 + 6 * v10) > Oid )
        {
          if ( !v10 )
            break;
          v15 = v10 - 1;
          v10 = v12 + ((v10 - v12) >> 1);
        }
        else
        {
          if ( *((_DWORD *)&unk_1400FB000 + 6 * v10) == Oid )
          {
            *((_DWORD *)v3 + 5) = v10;
            v16 = *((_DWORD *)v3 + 4);
            HIDWORD(v45) = 0;
            *((_DWORD *)v3 + 4) = v16 | 4;
            *(_QWORD *)&v44 = Parameter;
            *(_QWORD *)&v43 = 0LL;
            *(_QWORD *)&v45 = v3 - 9;
            if ( (v16 & 0x220) != 0 )
              *((_QWORD *)&v44 + 1) = v3[4];
            else
              *((_QWORD *)&v44 + 1) = 0LL;
            if ( (v16 & 0x40) != 0 )
              *((_QWORD *)&v43 + 1) = v3[4];
            else
              *((_QWORD *)&v43 + 1) = 0LL;
            DWORD2(v45) = 0;
            if ( (v16 & 0x840080) != 0 )
              break;
            v17 = (__int64 (__fastcall *)(__int128 *))*(&funcs_140021A7B + 3 * v10);
            if ( !v17 )
              break;
            v18 = v17(&v43);
            if ( v18 != 1 )
              goto LABEL_26;
            HIDWORD(v45) |= 4u;
            ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v43);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Dqqd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v35,
                v36,
                21,
                v42,
                v8,
                (_BYTE)v3 - 72,
                (char)Parameter,
                3);
            goto LABEL_2;
          }
          v12 = v10 + 1;
          v10 += 1 + ((v15 - v10) >> 1);
        }
      }
    }
    v18 = 0;
LABEL_26:
    v19 = KeAcquireSpinLockRaiseToDpc(v1);
    *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
    v20 = v19;
    v21 = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)Parameter, 0x10000);
    *((_QWORD *)Parameter + 19) = 0LL;
    v22 = v21;
    if ( v21 )
      v18 = 1;
    KeReleaseSpinLock(v1, v20);
    if ( v18 == 1 )
    {
      *(_QWORD *)&v45 = v3 - 9;
      v43 = 0uLL;
      v23 = -1073676286;
      *((_QWORD *)&v44 + 1) = 0LL;
      if ( !v22 )
        v23 = -1073741823;
      *((_QWORD *)&v45 + 1) = v23;
      *(_QWORD *)&v44 = Parameter;
      ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v43);
    }
    else
    {
      *((_DWORD *)v3 + 4) |= 0x20000u;
      v24 = KeAcquireSpinLockRaiseToDpc(v1);
      *((_QWORD *)Parameter + 22) = v9;
      *((_QWORD *)Parameter + 19) = 0LL;
      KeReleaseSpinLock(v1, v24);
      ndisDrainWatchdog(*((struct NDISWATCHDOG__ **)Parameter + 23));
      ndisArmWatchdog(
        *((struct NDISWATCHDOG__ **)Parameter + 23),
        Parameter,
        0x24u,
        *(void **)(*((_QWORD *)Parameter + 2) + 248LL),
        ndisWatchdogOidTimeout,
        v9->DATA.QUERY_INFORMATION.Oid);
      v25 = *((_QWORD *)Parameter + 2);
      v26 = v9->DATA.QUERY_INFORMATION.Oid;
      P = 0LL;
      v29 = ndisOidCloneForCompatibility(
              (struct _NDIS_OBJECT_HEADER *)Parameter,
              v9,
              1u,
              (struct _NDIS_OID_REQUEST **)&P);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 4;
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v27,
          v28,
          116,
          (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
          (char)Parameter,
          v26,
          (char)v9);
      }
      v30 = (struct _NDIS_OID_REQUEST *)P;
      if ( !v29 )
      {
        v31 = v9;
        if ( P )
          v31 = P;
        ndisAzTelemetryOidDelivered<_NDIS_FILTER_BLOCK>(Parameter, v31);
        v32 = v9;
        if ( v30 )
          v32 = v30;
        v29 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_OID_REQUEST *))(v25 + 248))(
                *((_QWORD *)Parameter + 3),
                v32);
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v27,
          v28,
          117,
          (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
          (char)Parameter,
          v26,
          (char)v9,
          v29);
      if ( v29 != 259 )
      {
        if ( v30 )
        {
          v33 = 0LL;
          v34 = 0LL;
          if ( *Parameter == 5 )
            v33 = (KSPIN_LOCK *)Parameter;
          else
            v34 = (KSPIN_LOCK *)Parameter;
          v37 = *(_QWORD *)&v30->NdisReserved[24];
          if ( v37 )
          {
            *(_QWORD *)&v30->NdisReserved[24] = 0LL;
            if ( v30->RequestType == NdisRequestMethod )
            {
              *(_DWORD *)(v37 + 60) = v30->DATA.METHOD_INFORMATION.BytesWritten;
              *(_DWORD *)(v37 + 64) = v30->DATA.METHOD_INFORMATION.BytesRead;
              *(_DWORD *)(v37 + 68) = v30->DATA.METHOD_INFORMATION.BytesNeeded;
              *(_QWORD *)(v37 + 40) = v30->DATA.QUERY_INFORMATION.InformationBuffer;
              *(_DWORD *)(v37 + 48) = v30->DATA.QUERY_INFORMATION.InformationBufferLength;
              *(_DWORD *)(v37 + 52) = v30->DATA.QUERY_INFORMATION.BytesWritten;
            }
            else
            {
              *(_DWORD *)(v37 + 52) = v30->DATA.QUERY_INFORMATION.BytesWritten;
              *(_DWORD *)(v37 + 56) = v30->DATA.QUERY_INFORMATION.BytesNeeded;
              *(_QWORD *)(v37 + 40) = v30->DATA.QUERY_INFORMATION.InformationBuffer;
              *(_DWORD *)(v37 + 48) = v30->DATA.QUERY_INFORMATION.InformationBufferLength;
            }
            if ( (*(_DWORD *)(v37 + 88) & 0x400) == 0 )
            {
              if ( v33 )
              {
                v38 = KeAcquireSpinLockRaiseToDpc(v33 + 18);
                v39 = v33 + 18;
                v33[22] = v37;
                v33[19] = 0LL;
              }
              else
              {
                v38 = KeAcquireSpinLockRaiseToDpc(v34 + 12);
                v39 = v34 + 12;
                v34[276] = v37;
                v34[65] = 0LL;
              }
              KeReleaseSpinLock(v39, v38);
            }
            v40 = *(_QWORD *)&v30->NdisReserved[24];
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0xBu,
                0xDu,
                (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
                (char)v30);
            if ( v40 )
            {
              *(_BYTE *)(v40 + 232) = v30->SupportedRevision;
              *(_DWORD *)(v40 + 152) = *(_DWORD *)&v30->NdisReserved[80];
            }
            ExFreePoolWithTag(v30, 0);
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v27) = 2;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v27,
              11,
              16,
              (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids);
          }
          v9 = v47;
          v1 = (KSPIN_LOCK *)(Parameter + 144);
        }
        v41 = *((_QWORD *)Parameter + 23);
        if ( v41 != -1 )
        {
          if ( KeCancelTimer((PKTIMER)(v41 + 64)) )
          {
            KeSetEvent((PRKEVENT)(v41 + 168), 0, 0);
            *(_DWORD *)(v41 + 160) = 0;
          }
          else
          {
            _InterlockedAnd((volatile signed __int32 *)(v41 + 160), 0);
          }
        }
        v46[4] = v9;
        v46[0] = 0LL;
        v46[1] = 0LL;
        v46[3] = 0LL;
        v46[2] = Parameter;
        v46[5] = v29;
        ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v46);
      }
    }
  }
  *((_QWORD *)Parameter + 19) = 0LL;
  KeReleaseSpinLock(v1, v5);
}
