/*
 * XREFs of Isoch_RetrieveNextStage @ 0x14001CE90
 * Callers:
 *     Isoch_MappingLoop @ 0x14001CC20 (Isoch_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDqd @ 0x14000FE1C (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDqq @ 0x140013D00 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140017F80 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Transfer_PrepareForCompletion @ 0x14001F040 (Isoch_Transfer_PrepareForCompletion.c)
 *     Isoch_Transfer_Complete @ 0x14002079C (Isoch_Transfer_Complete.c)
 *     WPP_RECORDER_SF_DDqDDDD @ 0x140022CF0 (WPP_RECORDER_SF_DDqDDDD.c)
 *     Isoch_GetPacketLength @ 0x140023490 (Isoch_GetPacketLength.c)
 *     Isoch_TransferData_Initialize @ 0x1400237C0 (Isoch_TransferData_Initialize.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x140023B40 (Isoch_TransferUrb_MarkLatePackets.c)
 *     Isoch_Stage_Acquire @ 0x14002519C (Isoch_Stage_Acquire.c)
 *     WPP_RECORDER_SF_DDi @ 0x1400370AC (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDd @ 0x140049AD8 (WPP_RECORDER_SF_DDd.c)
 *     Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage @ 0x14004B73C (Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // r13
  KSPIN_LOCK *v2; // rsi
  int v4; // ebp
  KIRQL v5; // al
  bool v6; // zf
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r10
  __int64 v12; // rdx
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rtt
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // r15d
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // r8d
  unsigned int v23; // r13d
  unsigned int v24; // ebp
  unsigned int i; // r14d
  int v26; // r11d
  __int64 *v27; // rdi
  int v28; // r8d
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  int v32; // r15d
  __int64 v33; // rbp
  _DWORD *v34; // rsi
  __int64 v35; // r10
  __int64 v36; // rdx
  unsigned int v37; // r9d
  unsigned int v38; // r8d
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rtt
  int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // edi
  unsigned int v44; // eax
  __int64 v45; // rdx
  unsigned int v46; // eax
  unsigned int v47; // edx
  unsigned int v48; // r8d
  unsigned int v49; // edx
  __int64 v50; // rax
  __int64 v51; // r10
  __int64 v52; // rdx
  unsigned int v53; // r9d
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rtt
  int v57; // eax
  unsigned int v58; // ecx
  unsigned int v59; // edi
  unsigned int v60; // eax
  __int64 v61; // rdx
  int v62; // edx
  __int64 v63; // rsi
  __int64 v64; // r9
  __int64 v65; // r8
  __int64 v66; // rdi
  int v67; // edx
  __int64 v68; // r8
  int v69; // r8d
  int v70; // edx
  int v71; // r8d
  __int64 v72; // rcx
  int v73; // r9d
  int v74; // r8d
  int v75; // edx
  __int64 v76; // r8
  KIRQL v77; // di
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rcx
  _QWORD *v83; // rdx
  int v84; // edx
  __int64 v85; // rcx
  int v87; // [rsp+20h] [rbp-98h]
  __int64 v88; // [rsp+28h] [rbp-90h]
  __int64 v89; // [rsp+30h] [rbp-88h]
  __int64 v90; // [rsp+40h] [rbp-78h]
  __int64 v91; // [rsp+60h] [rbp-58h]
  unsigned int v92; // [rsp+C0h] [rbp+8h]
  __int64 v93; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v94; // [rsp+D8h] [rbp+20h] BYREF

  v1 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 96);
  *(_QWORD *)(a1 + 376) = 0LL;
  v4 = -1073741823;
  v93 = 0LL;
  v94 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = *(_DWORD *)(a1 + 384) == 5;
  *(_BYTE *)(a1 + 104) = v5;
  if ( v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xEu,
        0x35u,
        (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        5);
    goto LABEL_5;
  }
  if ( *(_QWORD *)(a1 + 392) == a1 + 392 )
    goto LABEL_12;
  v6 = *(_DWORD *)(a1 + 344) == 3;
  v7 = *(_QWORD *)(a1 + 400);
  v93 = v7;
  if ( v6 )
  {
    if ( *(_DWORD *)(v7 + 112) != *(_DWORD *)(v7 + 116) )
    {
      *(_DWORD *)(v7 + 108) = *(_DWORD *)(v7 + 96) - *(_DWORD *)(v7 + 104);
LABEL_5:
      KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
      return v4 >= 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        2u,
        0xEu,
        0x36u,
        (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
    Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v7, -1, -1073737728, 0, 0);
    goto LABEL_12;
  }
  if ( (unsigned int)(*(_DWORD *)(v7 + 104) + *(_DWORD *)(v7 + 108)) >= *(_DWORD *)(v7 + 96) )
  {
LABEL_12:
    KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01033 + 1264))(
               WdfDriverGlobals,
               *(_QWORD *)(a1 + 72),
               &v94);
        if ( v4 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v84 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v84) = 5;
            WPP_RECORDER_SF_DDd(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v84,
              14,
              58,
              (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              v4);
          }
          if ( !*(_DWORD *)(a1 + 384) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v85 = *(_QWORD *)(a1 + 56);
            LODWORD(v89) = *(_DWORD *)(v85 + 144);
            LODWORD(v88) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(v85 + 80),
              3u,
              0xEu,
              0x3Bu,
              (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
              v88,
              v89);
          }
          return v4 >= 0;
        }
        v8 = Isoch_TransferData_Initialize(a1, v94, &v93);
        if ( v8 >= 0 )
          break;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = *(_QWORD *)(a1 + 56);
          LODWORD(v90) = v8;
          LODWORD(v89) = *(_DWORD *)(v9 + 144);
          LODWORD(v88) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(v9 + 80),
            2u,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            0x3Cu,
            (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
            v88,
            v89,
            v94,
            v90);
        }
        Isoch_Transfer_Complete(a1, v93, -1, -1073737728, 0);
      }
      v32 = 0;
      v33 = *(_QWORD *)(v93 + 48);
      if ( *(_WORD *)(v33 + 2) == 56 )
      {
LABEL_58:
        v34 = (_DWORD *)(v33 + 36);
      }
      else
      {
        switch ( *(_WORD *)(v33 + 2) )
        {
          case '9':
          case ':':
            v34 = (_DWORD *)(v33 + 52);
            break;
          default:
            goto LABEL_58;
        }
      }
      if ( (*(_DWORD *)(v33 + 32) & 4) != 0 )
      {
        v35 = *(_QWORD *)(a1 + 40);
        v36 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v35 + 844) / 10000LL;
        v37 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v35 + 88) + 40LL) + 1) >> 3;
        v38 = v37 & 0x7FF;
        _m_prefetchw((const void *)(v35 + 832));
        v39 = *(_QWORD *)(v35 + 832);
        do
        {
          v40 = v39;
          v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 832), v39, v39);
        }
        while ( v40 != v39 );
        v41 = v36 + ((_DWORD)v39 << 11) - (v39 >> 21);
        v42 = v41 & 0x7FF;
        v43 = v41 ^ ((unsigned __int16)v37 ^ (unsigned __int16)v41) & 0x7FF;
        if ( v42 >= v38 )
        {
          if ( v42 - v38 > 0x400 )
            v43 += 2048;
        }
        else
        {
          v44 = v43 - 2048;
          if ( v38 - v42 <= 0x400 )
            v44 = v43;
          v43 = v44;
        }
        v45 = _InterlockedExchange64(
                (volatile __int64 *)(v35 + 832),
                ((unsigned __int64)v43 >> 11) | ((v36 - (v43 & 0x7FF)) << 21));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v45) = 5;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v35 + 72),
            v45,
            4,
            188,
            (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
            v43);
        }
        if ( !*(_BYTE *)(a1 + 342) )
        {
          v47 = *(_DWORD *)(a1 + 368);
          v48 = 1024;
          *(_DWORD *)(v33 + 128) = v47;
          if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) - 2) > 1 )
            v48 = 255;
          if ( v43 <= v47 || v43 - v47 <= v48 )
            goto LABEL_80;
        }
        v46 = v43 + 5;
        *(_BYTE *)(a1 + 341) = 1;
        *(_DWORD *)(v33 + 128) = v43 + 5;
      }
      else
      {
        v46 = *(_DWORD *)(v33 + 128);
      }
      *(_DWORD *)(a1 + 368) = v46;
LABEL_80:
      v49 = 0;
      *(_DWORD *)(a1 + 368) += (unsigned int)(*(_DWORD *)(a1 + 364) + *(_DWORD *)(v33 + 132) - 1)
                             / *(_DWORD *)(a1 + 364);
      *v34 = 0;
      v6 = *(_DWORD *)(v33 + 132) == 0;
      *(_DWORD *)(v33 + 136) = 0;
      if ( !v6 )
      {
        do
        {
          v50 = v49++;
          *(_DWORD *)(v33 + 12 * v50 + 148) = -1;
        }
        while ( v49 < *(_DWORD *)(v33 + 132) );
      }
      v51 = *(_QWORD *)(a1 + 40);
      v52 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v51 + 844) / 10000LL;
      v53 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v51 + 88) + 40LL) + 2) >> 3;
      v54 = v53 & 0x7FF;
      _m_prefetchw((const void *)(v51 + 832));
      v55 = *(_QWORD *)(v51 + 832);
      do
      {
        v56 = v55;
        v55 = _InterlockedCompareExchange64((volatile signed __int64 *)(v51 + 832), v55, v55);
      }
      while ( v56 != v55 );
      v57 = v52 + ((_DWORD)v55 << 11) - (v55 >> 21);
      v58 = v57 & 0x7FF;
      v59 = v57 ^ ((unsigned __int16)v53 ^ (unsigned __int16)v57) & 0x7FF;
      if ( v58 >= (unsigned int)v54 )
      {
        if ( v58 - (unsigned int)v54 > 0x400 )
          v59 += 2048;
      }
      else
      {
        v60 = v59 - 2048;
        v54 = (unsigned int)v54 - v58;
        if ( (unsigned int)v54 <= 0x400 )
          v60 = v59;
        v59 = v60;
      }
      v61 = _InterlockedExchange64(
              (volatile __int64 *)(v51 + 832),
              ((unsigned __int64)v59 >> 11) | ((v52 - (v59 & 0x7FF)) << 21));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v61) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v51 + 72),
          v61,
          4,
          188,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
          v59);
      }
      v62 = *(_DWORD *)(v33 + 128) - v59;
      if ( v62 <= 0 )
        v62 = v59 - *(_DWORD *)(v33 + 128);
      if ( v62 <= 1024 )
        *(_BYTE *)(a1 + 342) = 0;
      else
        v32 = -1073741823;
      v63 = v93;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqDDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          v54,
          v53,
          v87,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v93 + 24),
          *(_DWORD *)(v33 + 132),
          v59,
          *(_DWORD *)(v33 + 128),
          *(_DWORD *)(a1 + 368));
      if ( v32 >= 0 )
      {
        v66 = *(_QWORD *)(v63 + 48);
        if ( *(_WORD *)(v66 + 2) != 56 )
        {
          switch ( *(_WORD *)(v66 + 2) )
          {
            case '9':
            case ':':
              if ( *(_BYTE *)(a1 + 288) )
              {
                if ( *(_BYTE *)(*(_QWORD *)(a1 + 48) + 672LL) )
                  goto LABEL_117;
                Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage();
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v70 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
                  LOBYTE(v70) = 2;
                  WPP_RECORDER_SF_DDi(
                    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                    v70,
                    v69,
                    31,
                    (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
                    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                    v66);
                }
                v68 = 3221225506LL;
              }
              else
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v67 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
                  LOBYTE(v67) = 2;
                  WPP_RECORDER_SF_DDi(
                    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                    v67,
                    v54,
                    30,
                    (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
                    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                    *(_QWORD *)(v63 + 48));
                }
                v68 = 3221225485LL;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_DDqd(
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                  2u,
                  v68,
                  0x3Eu,
                  (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids);
              v64 = 2147484416LL;
              break;
            default:
              goto LABEL_117;
          }
          goto LABEL_130;
        }
LABEL_117:
        Isoch_TransferUrb_MarkLatePackets(a1, v63);
        if ( *(_DWORD *)(*(_QWORD *)(v63 + 48) + 12LL * (unsigned int)(*(_DWORD *)(v63 + 96) - 1) + 148) == -1073414144 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v72 = *(_QWORD *)(a1 + 56);
            LODWORD(v89) = *(_DWORD *)(v72 + 144);
            LODWORD(v88) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(v72 + 80),
              4u,
              0xEu,
              0x3Fu,
              (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
              v88,
              v89);
          }
          v73 = 0;
          v74 = 0;
        }
        else
        {
          if ( *(_DWORD *)(v63 + 80) )
          {
            *(_DWORD *)(v63 + 64) = 1;
            v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)()))(WdfFunctions_01033
                                                                                                  + 3144))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v63 + 24),
                   Isoch_WdfEvtRequestCancel);
            if ( v4 >= 0 )
            {
              v78 = Isoch_Stage_Acquire(v63);
              v6 = *(_DWORD *)(a1 + 384) == 0;
              v79 = v78;
              *(_QWORD *)(a1 + 376) = v78;
              if ( v6 )
              {
                v80 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
                if ( *(_DWORD *)(v80 + 24) > 1u )
                {
                  v81 = *(unsigned int *)(*(_QWORD *)(v63 + 48) + 64LL);
                  if ( (unsigned int)v81 < *(_DWORD *)(v80 + 48) )
                    v1 = *(_WORD *)(*(_QWORD *)(v80 + 56) + 2 * v81);
                }
                *(_WORD *)(a1 + 112) = v1;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v82 = *(_QWORD *)(a1 + 56);
                LODWORD(v89) = *(_DWORD *)(v82 + 144);
                LODWORD(v88) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
                WPP_RECORDER_SF_DDqq(
                  *(_QWORD *)(v82 + 80),
                  4u,
                  v79,
                  0x42u,
                  (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
                  v88,
                  v89,
                  *(_QWORD *)(v63 + 24),
                  v79);
              }
              *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
              v83 = *(_QWORD **)(a1 + 400);
              if ( *v83 != a1 + 392 )
                __fastfail(3u);
              *(_QWORD *)v63 = a1 + 392;
              *(_QWORD *)(v63 + 8) = v83;
              *v83 = v63;
              *(_QWORD *)(a1 + 400) = v63;
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
              return v4 >= 0;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDqd(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                4u,
                v76,
                0x41u,
                (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids);
            *(_DWORD *)(v63 + 64) = 3;
            v64 = 3221291008LL;
LABEL_130:
            v65 = 0xFFFFFFFFLL;
            goto LABEL_131;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v75 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v75) = 4;
            WPP_RECORDER_SF_DDi(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v75,
              v71,
              64,
              (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              v94);
          }
          v73 = -1;
          v74 = -1;
        }
        Isoch_Transfer_Complete(a1, v63, v74, v73, 1);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            2u,
            v54,
            0x3Du,
            (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids);
        v64 = 3221228032LL;
        v65 = 3221553152LL;
LABEL_131:
        Isoch_Transfer_PrepareForCompletion(a1, v63, v65, v64);
        v77 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
          WdfDriverGlobals,
          *(_QWORD *)(v63 + 24),
          *(unsigned int *)(v63 + 68));
        KeLowerIrql(v77);
      }
    }
  }
  v10 = (unsigned int)(*(_DWORD *)(v7 + 108) + *(_DWORD *)(v7 + 104));
  v11 = *(_QWORD *)(a1 + 40);
  v91 = *(_QWORD *)(v7 + 48);
  v92 = *(_DWORD *)(v91 + 128) + (unsigned int)(v10 + *(_DWORD *)(a1 + 364) - 1) / *(_DWORD *)(a1 + 364);
  v12 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v11 + 844) / 10000LL;
  v13 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v11 + 88) + 40LL) + 2) >> 3;
  v14 = v13 & 0x7FF;
  _m_prefetchw((const void *)(v11 + 832));
  v15 = *(_QWORD *)(v11 + 832);
  do
  {
    v16 = v15;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 832), v15, v15);
  }
  while ( v16 != v15 );
  v17 = v12 + ((_DWORD)v15 << 11) - (v15 >> 21);
  v18 = v17 & 0x7FF;
  v19 = v17 ^ ((unsigned __int16)v13 ^ (unsigned __int16)v17) & 0x7FF;
  if ( v18 >= v14 )
  {
    if ( v18 - v14 > 0x400 )
      v19 += 2048;
  }
  else
  {
    v20 = v19 - 2048;
    if ( v14 - v18 <= 0x400 )
      v20 = v19;
    v19 = v20;
  }
  v21 = _InterlockedExchange64(
          (volatile __int64 *)(v11 + 832),
          ((unsigned __int64)v19 >> 11) | ((v12 - (v19 & 0x7FF)) << 21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v21) = 5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v11 + 72),
      v21,
      4,
      188,
      (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
      v19);
  }
  v22 = *(_DWORD *)(a1 + 364);
  v23 = (v22 + *(_DWORD *)(v7 + 96) - (_DWORD)v10 - 1) / v22;
  if ( v23 )
  {
    v24 = v92;
    for ( i = 0; i < v23; ++i )
    {
      if ( i + v24 > v19 && v92 - v19 + i < 0x7FFFFFFF )
        break;
      if ( v22 )
      {
        do
        {
          *(_DWORD *)(v91 + 12 * v10 + 148) = -1073414144;
          *(_DWORD *)(v7 + 92) += Isoch_GetPacketLength(v7, (unsigned int)v10);
          v10 = (unsigned int)(v10 + 1);
          ++*(_DWORD *)(v7 + 108);
          v22 = *(_DWORD *)(a1 + 364);
        }
        while ( v26 + 1 < v22 );
        v24 = v92;
      }
    }
    v4 = -1073741823;
  }
  v27 = (__int64 *)v93;
  v28 = *(_DWORD *)(v93 + 96);
  if ( *(_DWORD *)(*(_QWORD *)(v93 + 48) + 12LL * (unsigned int)(v28 - 1) + 148) == -1073414144 )
  {
    if ( *(_DWORD *)(v93 + 112) != *(_DWORD *)(v93 + 116) )
    {
      *(_DWORD *)(v93 + 108) = v28 - *(_DWORD *)(v93 + 104);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return v4 >= 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v88) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xEu,
        0x37u,
        (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
        v88,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
    }
    Isoch_Transfer_CompleteCancelable(a1, v27, 0, 0, 1, 1);
    v1 = 0;
    v2 = (KSPIN_LOCK *)(a1 + 96);
    goto LABEL_12;
  }
  v29 = Isoch_Stage_Acquire(v93);
  *(_QWORD *)(a1 + 376) = v29;
  if ( v29 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v88) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDqq(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        4u,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        0x38u,
        (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
        v88,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        v27[3],
        v29);
    }
    v4 = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v31 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v31) = 5;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v31,
        v30,
        57,
        (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        v27[3]);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  }
  return v4 >= 0;
}
