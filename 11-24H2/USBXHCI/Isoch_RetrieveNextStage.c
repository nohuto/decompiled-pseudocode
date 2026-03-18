/*
 * XREFs of Isoch_RetrieveNextStage @ 0x14000E290
 * Callers:
 *     Isoch_MappingLoop @ 0x14000E020 (Isoch_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqq @ 0x1400076A0 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140010D60 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Transfer_PrepareForCompletion @ 0x140012440 (Isoch_Transfer_PrepareForCompletion.c)
 *     Isoch_Transfer_Complete @ 0x140014314 (Isoch_Transfer_Complete.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_DDqDDDD @ 0x140021DB0 (WPP_RECORDER_SF_DDqDDDD.c)
 *     Isoch_GetPacketLength @ 0x140022660 (Isoch_GetPacketLength.c)
 *     Isoch_TransferData_Initialize @ 0x140022F40 (Isoch_TransferData_Initialize.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x140023420 (Isoch_TransferUrb_MarkLatePackets.c)
 *     Isoch_Stage_Acquire @ 0x14002506C (Isoch_Stage_Acquire.c)
 *     WPP_RECORDER_SF_DDqd @ 0x14002F21C (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDi @ 0x1400355FC (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDd @ 0x140049388 (WPP_RECORDER_SF_DDd.c)
 *     Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage @ 0x14004AE2C (Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // r13
  KSPIN_LOCK *v2; // rsi
  int v4; // ebp
  KIRQL v5; // al
  int v6; // edx
  bool v7; // zf
  int v8; // edx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rsi
  __int64 v14; // r10
  __int64 v15; // rdx
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rtt
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // r15d
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // r8d
  unsigned int v26; // r13d
  unsigned int v27; // ebp
  unsigned int i; // r14d
  int v29; // r11d
  __int64 v30; // rdi
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  int v36; // r15d
  __int64 v37; // rbp
  _DWORD *v38; // rsi
  __int64 v39; // r10
  __int64 v40; // rdx
  unsigned int v41; // r9d
  unsigned int v42; // r8d
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rtt
  int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // edi
  unsigned int v48; // eax
  __int64 v49; // rdx
  unsigned int v50; // eax
  unsigned int v51; // edx
  unsigned int v52; // r8d
  unsigned int v53; // edx
  __int64 v54; // rax
  __int64 v55; // r10
  __int64 v56; // rdx
  unsigned int v57; // r9d
  unsigned int v58; // r8d
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rtt
  int v61; // eax
  unsigned int v62; // ecx
  unsigned int v63; // edi
  unsigned int v64; // eax
  __int64 v65; // rdx
  int v66; // edx
  __int64 v67; // rsi
  int v68; // edx
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // rdi
  int v72; // edx
  int v73; // r8d
  int v74; // r8d
  int v75; // edx
  int v76; // edx
  int v77; // r8d
  int v78; // edx
  int v79; // r9d
  int v80; // r8d
  int v81; // edx
  int v82; // r8d
  int v83; // edx
  KIRQL v84; // di
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rcx
  _QWORD *v90; // rdx
  int v91; // edx
  int v92; // edx
  int v94; // [rsp+20h] [rbp-98h]
  __int64 v95; // [rsp+28h] [rbp-90h]
  __int64 v96; // [rsp+30h] [rbp-88h]
  __int64 v97; // [rsp+60h] [rbp-58h]
  unsigned int v98; // [rsp+C0h] [rbp+8h]
  __int64 v99; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v100; // [rsp+D8h] [rbp+20h] BYREF

  v1 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 96);
  *(_QWORD *)(a1 + 376) = 0LL;
  v4 = -1073741823;
  v99 = 0LL;
  v100 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_DWORD *)(a1 + 384) == 5;
  *(_BYTE *)(a1 + 104) = v5;
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v8 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v8) = 5;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v8,
        14,
        53,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        5);
    }
    goto LABEL_5;
  }
  if ( *(_QWORD *)(a1 + 392) == a1 + 392 )
    goto LABEL_12;
  v7 = *(_DWORD *)(a1 + 344) == 3;
  v9 = *(_QWORD *)(a1 + 400);
  v99 = v9;
  if ( v7 )
  {
    if ( *(_DWORD *)(v9 + 112) != *(_DWORD *)(v9 + 116) )
    {
      *(_DWORD *)(v9 + 108) = *(_DWORD *)(v9 + 96) - *(_DWORD *)(v9 + 104);
LABEL_5:
      KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
      return v4 >= 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v6,
        14,
        54,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
    }
    Isoch_Transfer_CompleteCancelable(a1, v9, -1, -1073737728, 0, 0);
    goto LABEL_12;
  }
  if ( (unsigned int)(*(_DWORD *)(v9 + 104) + *(_DWORD *)(v9 + 108)) >= *(_DWORD *)(v9 + 96) )
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
               &v100);
        if ( v4 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v91 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
            LOBYTE(v91) = 5;
            WPP_RECORDER_SF_DDd(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v91,
              14,
              58,
              (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
              v4);
          }
          if ( !*(_DWORD *)(a1 + 384) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v92 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
            LOBYTE(v92) = 3;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v92,
              14,
              59,
              (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
          }
          return v4 >= 0;
        }
        v10 = Isoch_TransferData_Initialize(a1, v100, &v99);
        if ( v10 >= 0 )
          break;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = *(_QWORD *)(a1 + 48);
          v12 = *(unsigned __int8 *)(v11 + 143);
          LOBYTE(v11) = 2;
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v11,
            v12,
            60,
            (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
            v12,
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
            v100,
            v10);
        }
        Isoch_Transfer_Complete(a1, v99, -1, -1073737728, 0);
      }
      v36 = 0;
      v37 = *(_QWORD *)(v99 + 48);
      if ( *(_WORD *)(v37 + 2) == 56 )
      {
LABEL_58:
        v38 = (_DWORD *)(v37 + 36);
      }
      else
      {
        switch ( *(_WORD *)(v37 + 2) )
        {
          case '9':
          case ':':
            v38 = (_DWORD *)(v37 + 52);
            break;
          default:
            goto LABEL_58;
        }
      }
      if ( (*(_DWORD *)(v37 + 32) & 4) != 0 )
      {
        v39 = *(_QWORD *)(a1 + 40);
        v40 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v39 + 844) / 10000LL;
        v41 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v39 + 88) + 40LL) + 1) >> 3;
        v42 = v41 & 0x7FF;
        _m_prefetchw((const void *)(v39 + 832));
        v43 = *(_QWORD *)(v39 + 832);
        do
        {
          v44 = v43;
          v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 832), v43, v43);
        }
        while ( v44 != v43 );
        v45 = v40 + ((_DWORD)v43 << 11) - (v43 >> 21);
        v46 = v45 & 0x7FF;
        v47 = v45 ^ ((unsigned __int16)v41 ^ (unsigned __int16)v45) & 0x7FF;
        if ( v46 >= v42 )
        {
          if ( v46 - v42 > 0x400 )
            v47 += 2048;
        }
        else
        {
          v48 = v47 - 2048;
          if ( v42 - v46 <= 0x400 )
            v48 = v47;
          v47 = v48;
        }
        v49 = _InterlockedExchange64(
                (volatile __int64 *)(v39 + 832),
                ((unsigned __int64)v47 >> 11) | ((v40 - (v47 & 0x7FF)) << 21));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v49) = 5;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v39 + 72),
            v49,
            4,
            185,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            v47);
        }
        if ( !*(_BYTE *)(a1 + 342) )
        {
          v51 = *(_DWORD *)(a1 + 368);
          v52 = 1024;
          *(_DWORD *)(v37 + 128) = v51;
          if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) - 2) > 1 )
            v52 = 255;
          if ( v47 <= v51 || v47 - v51 <= v52 )
            goto LABEL_80;
        }
        v50 = v47 + 5;
        *(_BYTE *)(a1 + 341) = 1;
        *(_DWORD *)(v37 + 128) = v47 + 5;
      }
      else
      {
        v50 = *(_DWORD *)(v37 + 128);
      }
      *(_DWORD *)(a1 + 368) = v50;
LABEL_80:
      v53 = 0;
      *(_DWORD *)(a1 + 368) += (unsigned int)(*(_DWORD *)(a1 + 364) + *(_DWORD *)(v37 + 132) - 1)
                             / *(_DWORD *)(a1 + 364);
      *v38 = 0;
      v7 = *(_DWORD *)(v37 + 132) == 0;
      *(_DWORD *)(v37 + 136) = 0;
      if ( !v7 )
      {
        do
        {
          v54 = v53++;
          *(_DWORD *)(v37 + 12 * v54 + 148) = -1;
        }
        while ( v53 < *(_DWORD *)(v37 + 132) );
      }
      v55 = *(_QWORD *)(a1 + 40);
      v56 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v55 + 844) / 10000LL;
      v57 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v55 + 88) + 40LL) + 2) >> 3;
      v58 = v57 & 0x7FF;
      _m_prefetchw((const void *)(v55 + 832));
      v59 = *(_QWORD *)(v55 + 832);
      do
      {
        v60 = v59;
        v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 832), v59, v59);
      }
      while ( v60 != v59 );
      v61 = v56 + ((_DWORD)v59 << 11) - (v59 >> 21);
      v62 = v61 & 0x7FF;
      v63 = v61 ^ ((unsigned __int16)v57 ^ (unsigned __int16)v61) & 0x7FF;
      if ( v62 >= v58 )
      {
        if ( v62 - v58 > 0x400 )
          v63 += 2048;
      }
      else
      {
        v64 = v63 - 2048;
        v58 -= v62;
        if ( v58 <= 0x400 )
          v64 = v63;
        v63 = v64;
      }
      v65 = _InterlockedExchange64(
              (volatile __int64 *)(v55 + 832),
              ((unsigned __int64)v63 >> 11) | ((v56 - (v63 & 0x7FF)) << 21));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v65) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v55 + 72),
          v65,
          4,
          185,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v63);
      }
      v66 = *(_DWORD *)(v37 + 128) - v63;
      if ( v66 <= 0 )
        v66 = v63 - *(_DWORD *)(v37 + 128);
      if ( v66 <= 1024 )
        *(_BYTE *)(a1 + 342) = 0;
      else
        v36 = -1073741823;
      v67 = v99;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqDDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          v58,
          v57,
          v94,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          *(_QWORD *)(v99 + 24),
          *(_DWORD *)(v37 + 132),
          v63,
          *(_DWORD *)(v37 + 128),
          *(_DWORD *)(a1 + 368));
      if ( v36 >= 0 )
      {
        v71 = *(_QWORD *)(v67 + 48);
        if ( *(_WORD *)(v71 + 2) != 56 )
        {
          switch ( *(_WORD *)(v71 + 2) )
          {
            case '9':
            case ':':
              if ( *(_BYTE *)(a1 + 288) )
              {
                if ( *(_BYTE *)(*(_QWORD *)(a1 + 48) + 680LL) )
                  goto LABEL_117;
                Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage();
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v75 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
                  LOBYTE(v75) = 2;
                  WPP_RECORDER_SF_DDi(
                    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                    v75,
                    v74,
                    31,
                    (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
                    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
                    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                    v71);
                }
                v73 = -1073741790;
              }
              else
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v72 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
                  LOBYTE(v72) = 2;
                  WPP_RECORDER_SF_DDi(
                    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                    v72,
                    v58,
                    30,
                    (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
                    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
                    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                    *(_QWORD *)(v67 + 48));
                }
                v73 = -1073741811;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v76 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
                LOBYTE(v76) = 2;
                WPP_RECORDER_SF_DDqd(
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                  v76,
                  v73,
                  62,
                  (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                  *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
                  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                  v100,
                  v73);
              }
              v69 = 2147484416LL;
              break;
            default:
              goto LABEL_117;
          }
          goto LABEL_130;
        }
LABEL_117:
        Isoch_TransferUrb_MarkLatePackets(a1, v67);
        if ( *(_DWORD *)(*(_QWORD *)(v67 + 48) + 12LL * (unsigned int)(*(_DWORD *)(v67 + 96) - 1) + 148) == -1073414144 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v78 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
            LOBYTE(v78) = 4;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v78,
              14,
              63,
              (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
          }
          v79 = 0;
          v80 = 0;
        }
        else
        {
          if ( *(_DWORD *)(v67 + 80) )
          {
            *(_DWORD *)(v67 + 64) = 1;
            v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)()))(WdfFunctions_01033
                                                                                                  + 3144))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v67 + 24),
                   Isoch_WdfEvtRequestCancel);
            if ( v4 >= 0 )
            {
              v85 = Isoch_Stage_Acquire(v67);
              v7 = *(_DWORD *)(a1 + 384) == 0;
              v86 = v85;
              *(_QWORD *)(a1 + 376) = v85;
              if ( v7 )
              {
                v87 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
                if ( *(_DWORD *)(v87 + 24) > 1u )
                {
                  v88 = *(unsigned int *)(*(_QWORD *)(v67 + 48) + 64LL);
                  if ( (unsigned int)v88 < *(_DWORD *)(v87 + 48) )
                    v1 = *(_WORD *)(*(_QWORD *)(v87 + 56) + 2 * v88);
                }
                *(_WORD *)(a1 + 112) = v1;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v89 = *(_QWORD *)(a1 + 56);
                LODWORD(v96) = *(_DWORD *)(v89 + 152);
                LODWORD(v95) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
                WPP_RECORDER_SF_DDqq(
                  *(_QWORD *)(v89 + 80),
                  4u,
                  v86,
                  0x42u,
                  (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                  v95,
                  v96,
                  *(_QWORD *)(v67 + 24),
                  v86);
              }
              *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
              v90 = *(_QWORD **)(a1 + 400);
              if ( *v90 != a1 + 392 )
                __fastfail(3u);
              *(_QWORD *)v67 = a1 + 392;
              *(_QWORD *)(v67 + 8) = v90;
              *v90 = v67;
              *(_QWORD *)(a1 + 400) = v67;
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
              return v4 >= 0;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v83 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
              LOBYTE(v83) = 4;
              WPP_RECORDER_SF_DDqd(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                v83,
                v82,
                65,
                (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                *(_QWORD *)(v67 + 24),
                v4);
            }
            *(_DWORD *)(v67 + 64) = 3;
            v69 = 3221291008LL;
LABEL_130:
            v70 = 0xFFFFFFFFLL;
            goto LABEL_131;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v81 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
            LOBYTE(v81) = 4;
            WPP_RECORDER_SF_DDi(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v81,
              v77,
              64,
              (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
              v100);
          }
          v79 = -1;
          v80 = -1;
        }
        Isoch_Transfer_Complete(a1, v67, v80, v79, 1);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v68 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
          LOBYTE(v68) = 2;
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v68,
            v58,
            61,
            (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
            v100,
            v36);
        }
        v69 = 3221228032LL;
        v70 = 3221553152LL;
LABEL_131:
        Isoch_Transfer_PrepareForCompletion(a1, v67, v70, v69);
        v84 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
          WdfDriverGlobals,
          *(_QWORD *)(v67 + 24),
          *(unsigned int *)(v67 + 68));
        KeLowerIrql(v84);
      }
    }
  }
  v13 = (unsigned int)(*(_DWORD *)(v9 + 108) + *(_DWORD *)(v9 + 104));
  v14 = *(_QWORD *)(a1 + 40);
  v97 = *(_QWORD *)(v9 + 48);
  v98 = *(_DWORD *)(v97 + 128) + (unsigned int)(v13 + *(_DWORD *)(a1 + 364) - 1) / *(_DWORD *)(a1 + 364);
  v15 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v14 + 844) / 10000LL;
  v16 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v14 + 88) + 40LL) + 2) >> 3;
  v17 = v16 & 0x7FF;
  _m_prefetchw((const void *)(v14 + 832));
  v18 = *(_QWORD *)(v14 + 832);
  do
  {
    v19 = v18;
    v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 832), v18, v18);
  }
  while ( v19 != v18 );
  v20 = v15 + ((_DWORD)v18 << 11) - (v18 >> 21);
  v21 = v20 & 0x7FF;
  v22 = v20 ^ ((unsigned __int16)v16 ^ (unsigned __int16)v20) & 0x7FF;
  if ( v21 >= v17 )
  {
    if ( v21 - v17 > 0x400 )
      v22 += 2048;
  }
  else
  {
    v23 = v22 - 2048;
    if ( v17 - v21 <= 0x400 )
      v23 = v22;
    v22 = v23;
  }
  v24 = _InterlockedExchange64(
          (volatile __int64 *)(v14 + 832),
          ((unsigned __int64)v22 >> 11) | ((v15 - (v22 & 0x7FF)) << 21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v24) = 5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v14 + 72),
      v24,
      4,
      185,
      (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      v22);
  }
  v25 = *(_DWORD *)(a1 + 364);
  v26 = (v25 + *(_DWORD *)(v9 + 96) - (_DWORD)v13 - 1) / v25;
  if ( v26 )
  {
    v27 = v98;
    for ( i = 0; i < v26; ++i )
    {
      if ( i + v27 > v22 && v98 - v22 + i < 0x7FFFFFFF )
        break;
      if ( v25 )
      {
        do
        {
          *(_DWORD *)(v97 + 12 * v13 + 148) = -1073414144;
          *(_DWORD *)(v9 + 92) += Isoch_GetPacketLength(v9, (unsigned int)v13);
          v13 = (unsigned int)(v13 + 1);
          ++*(_DWORD *)(v9 + 108);
          v25 = *(_DWORD *)(a1 + 364);
        }
        while ( v29 + 1 < v25 );
        v27 = v98;
      }
    }
    v4 = -1073741823;
  }
  v30 = v99;
  v31 = *(_DWORD *)(v99 + 96);
  v32 = 3 * (v31 - 1);
  if ( *(_DWORD *)(*(_QWORD *)(v99 + 48) + 12LL * (unsigned int)(v31 - 1) + 148) == -1073414144 )
  {
    if ( *(_DWORD *)(v99 + 112) != *(_DWORD *)(v99 + 116) )
    {
      *(_DWORD *)(v99 + 108) = v31 - *(_DWORD *)(v99 + 104);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return v4 >= 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v32) = 5;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v32,
        14,
        55,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
    }
    Isoch_Transfer_CompleteCancelable(a1, v30, 0, 0, 1, 1);
    v1 = 0;
    v2 = (KSPIN_LOCK *)(a1 + 96);
    goto LABEL_12;
  }
  v33 = Isoch_Stage_Acquire(v99);
  *(_QWORD *)(a1 + 376) = v33;
  if ( v33 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v95) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      WPP_RECORDER_SF_DDqq(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        4u,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
        0x38u,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        v95,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        *(_QWORD *)(v30 + 24),
        v33);
    }
    v4 = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v35 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v35) = 5;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v35,
        v34,
        57,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        *(_QWORD *)(v30 + 24));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  }
  return v4 >= 0;
}
