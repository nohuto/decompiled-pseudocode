/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1400322C4
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface @ 0x140023590 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C860 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x140018F24 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     McTemplateK0phhhquuuuu_EtwWriteTransfer @ 0x140034328 (McTemplateK0phhhquuuuu_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_Ddddd @ 0x140034530 (WPP_RECORDER_SF_Ddddd.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x14003CA10 (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rax
  KIRQL v7; // al
  __int64 v8; // r13
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r8d
  unsigned __int8 *v12; // rax
  int v13; // edx
  unsigned __int8 *v14; // r14
  int v15; // r9d
  int v16; // ebx
  _DWORD *v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // r8
  __int16 v21; // cx
  size_t v22; // r15
  unsigned int v23; // r15d
  unsigned __int64 v24; // r13
  unsigned __int8 *v25; // rbx
  _DWORD *v26; // r14
  __int64 v27; // rcx
  _BYTE *v28; // rax
  __int64 v29; // rax
  int v30; // eax
  unsigned __int16 v31; // ax
  __int16 v32; // r9
  char v33; // cl
  __int64 v34; // rax
  __int16 v35; // cx
  unsigned int v36; // r8d
  unsigned int v37; // r8d
  unsigned int v38; // r9d
  char *v39; // rdx
  unsigned int v40; // r11d
  unsigned int v41; // r10d
  unsigned int *v42; // rdx
  unsigned int v43; // r9d
  unsigned int i; // r8d
  __int64 v45; // r11
  char v46; // r15
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rbx
  unsigned int v50; // r9d
  unsigned int v51; // r15d
  unsigned int v52; // r13d
  __int64 v53; // r14
  unsigned int v54; // edx
  __int64 v55; // r11
  __int64 v56; // r10
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  unsigned int v60; // r14d
  unsigned int v61; // eax
  void *v62; // rcx
  void *v63; // rcx
  void *v64; // rcx
  __int64 Pool2; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  void *v68; // rcx
  void *v69; // rcx
  void *v70; // rcx
  __int64 v71; // r9
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  unsigned int v74; // r8d
  int v75; // ecx
  __int64 j; // rax
  unsigned int k; // r9d
  __int64 v78; // rax
  __int64 v79; // r8
  _QWORD *v80; // r8
  _QWORD *v81; // rax
  int v82; // [rsp+28h] [rbp-E0h]
  __int64 *v83; // [rsp+30h] [rbp-D8h]
  __int64 v84; // [rsp+78h] [rbp-90h] BYREF
  void *v85; // [rsp+80h] [rbp-88h]
  char v86; // [rsp+88h] [rbp-80h]
  __int64 v87; // [rsp+90h] [rbp-78h]
  __int64 v88; // [rsp+98h] [rbp-70h]
  __int64 v89; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD *v90; // [rsp+A8h] [rbp-60h]
  __int128 v91; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v92; // [rsp+C0h] [rbp-48h]
  __int128 v93; // [rsp+D0h] [rbp-38h]
  __int64 v94; // [rsp+E0h] [rbp-28h]
  _OWORD v95[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v96; // [rsp+108h] [rbp+0h]

  LODWORD(v94) = 0;
  v89 = 0LL;
  LOBYTE(v84) = 0;
  v85 = 0LL;
  v88 = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFF7FFF);
  v2 = *(_QWORD *)(a1 + 464);
  v96 = 0LL;
  memset(v95, 0, sizeof(v95));
  LOWORD(v95[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v95);
  v3 = *((_QWORD *)&v95[0] + 1);
  v4 = (_DWORD *)(*((_QWORD *)&v95[0] + 1) + 32LL);
  if ( *(_WORD *)(*((_QWORD *)&v95[0] + 1) + 2LL) == 1 )
  {
    v5 = *((_QWORD *)&v95[0] + 1) + 32LL;
    *(_DWORD *)(a1 + 148) = 0;
    v6 = 0LL;
  }
  else
  {
    v5 = *((_QWORD *)&v95[0] + 1) + 48LL;
    *(_DWORD *)(a1 + 148) = *v4;
    v6 = 0LL;
    if ( *v4 )
      v6 = *(_QWORD *)(v3 + 40);
  }
  *(_QWORD *)(a1 + 152) = v6;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFFFEF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v7);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(unsigned __int8 *)(v5 + 3);
  v11 = *(unsigned __int8 *)(v5 + 2);
  v87 = *(_QWORD *)(a1 + 48);
  v8 = v87;
  v12 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                             (int)v8 + 32,
                             (int)v8 + 32,
                             v11,
                             v10,
                             -1,
                             -1,
                             -1,
                             (__int64)&v84,
                             *(_QWORD *)(v9 + 1432));
  v14 = v12;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 34;
      goto LABEL_8;
    }
    goto LABEL_9;
  }
  v18 = *(_DWORD **)(a1 + 2456);
  if ( v18 )
  {
    v19 = 0;
    if ( *v18 )
    {
      while ( *((_BYTE *)v18 + 2 * v19 + 5) != v12[3] || *((_BYTE *)v18 + 2 * v19 + 4) != v12[2] )
      {
        if ( ++v19 >= *v18 )
          goto LABEL_22;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x8000u);
    }
  }
LABEL_22:
  v20 = (unsigned int)ExDefaultNonPagedPoolType;
  v21 = v12[4] + 1;
  *(_DWORD *)(v5 + 4) = 0;
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_WORD *)v5 = 24 * v21;
  *(_DWORD *)(v5 + 16) = v12[4];
  *(_QWORD *)&v92 = 0LL;
  *((_QWORD *)&v92 + 1) = 0x100000001LL;
  v91 = 0LL;
  v94 = 0LL;
  v93 = 0LL;
  LODWORD(v91) = 56;
  v83 = &v89;
  v22 = 80LL * *(unsigned int *)(v5 + 16) + 40;
  v82 = 80 * *(_DWORD *)(v5 + 16) + 40;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v91,
          v20,
          1681082453LL);
  if ( v16 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v83) = v16;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x23u,
        (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
        v83);
    }
    goto LABEL_10;
  }
  memset(v85, 0, v22);
  *(_QWORD *)v85 = v89;
  *((_QWORD *)v85 + 4) = v14;
  *((_DWORD *)v85 + 6) = v14[4];
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_BYTE)v84 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)v85 + 7, 1u);
    _InterlockedOr((volatile signed __int32 *)v85 + 7, 2u);
    *(_QWORD *)(a1 + 64) = v85;
  }
  v23 = 0;
  *(_BYTE *)(v5 + 4) = v14[5];
  *(_BYTE *)(v5 + 5) = v14[6];
  *(_BYTE *)(v5 + 6) = v14[7];
  v24 = *(unsigned __int16 *)(v8 + 34) + v8 + 32;
  v25 = &v14[*v14];
  v26 = v85;
  if ( *(_DWORD *)(v5 + 16) )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v25 >= v24 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_9;
        v15 = 22;
LABEL_8:
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          v13,
          5,
          v15,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
        goto LABEL_9;
      }
      v27 = 10LL * v23;
      v26[2 * v27 + 16] = *(_DWORD *)(v5 + 24LL * v23 + 44);
      v28 = v25 + 1;
      v26[2 * v27 + 12] = 1;
      if ( (unsigned __int64)(v25 + 1) >= v24 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = 23;
          goto LABEL_8;
        }
        goto LABEL_9;
      }
      while ( *v28 != 5 )
      {
        v29 = *v25;
        if ( !(_BYTE)v29 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_9;
          v15 = 24;
          goto LABEL_8;
        }
        v25 += v29;
        if ( (unsigned __int64)v25 >= v24 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_9;
          v15 = 25;
          goto LABEL_8;
        }
        v28 = v25 + 1;
        if ( (unsigned __int64)(v25 + 1) >= v24 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = 26;
            goto LABEL_8;
          }
LABEL_9:
          v16 = -1073741823;
          *(_DWORD *)(a1 + 1572) = -1073725440;
LABEL_10:
          *(_DWORD *)(a1 + 148) = 0;
          *(_QWORD *)(a1 + 152) = 0LL;
          *(_QWORD *)(v5 + 8) = -1LL;
          if ( v85 )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(
              WdfDriverGlobals,
              *(_QWORD *)v85);
            *(_QWORD *)(a1 + 64) = 0LL;
          }
          *(_DWORD *)(a1 + 1568) = v16;
          if ( !*(_DWORD *)(a1 + 1572) )
            *(_DWORD *)(a1 + 1572) = HUBPDO_GetUSBDErrorFromNTStatus(v16);
          return ((v16 >> 31) & 0xFFFFFFF4) + 4077;
        }
      }
      if ( (unsigned __int64)(v25 + 7) > v24 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_9;
        v15 = 28;
        goto LABEL_8;
      }
      if ( (*(_DWORD *)(v5 + 24LL * v23 + 44) & 1) != 0 )
        *((_WORD *)v25 + 2) = *(_WORD *)(v5 + 24LL * v23 + 24);
      v13 = *(_DWORD *)(v5 + 24LL * v23 + 44) & 0xF0;
      if ( v13 == 16 )
      {
        v26[20 * v23 + 28] = 1;
      }
      else if ( v13 == 32 )
      {
        v26[20 * v23 + 28] = 2;
      }
      else
      {
        v30 = 3;
        if ( v13 != 48 )
          v30 = 0;
        v26[20 * v23 + 28] = v30;
      }
      *(_QWORD *)&v26[20 * v23 + 18] = v25;
      v26[20 * v23 + 20] = v24 - (_DWORD)v25;
      if ( *(_WORD *)(a1 + 1998) >= 0x250u )
      {
        v32 = *((_WORD *)v25 + 2);
      }
      else
      {
        v31 = *((_WORD *)v25 + 2);
        v13 = v31;
        LOWORD(v13) = ((v31 >> 11) & 3) + 1;
        v32 = (v31 & 0x7FF) * v13;
      }
      *(_WORD *)(v5 + 24LL * v23 + 24) = v32;
      v33 = 6;
      if ( v25[6] < 6u )
        v33 = v25[6];
      *(_BYTE *)(v5 + 24LL * v23 + 27) = v33;
      *(_BYTE *)(v5 + 24LL * v23 + 26) = v25[2];
      if ( (v25[3] & 3) != 0 )
      {
        switch ( v25[3] & 3 )
        {
          case 1:
            *(_DWORD *)(v5 + 24LL * v23 + 28) = 1;
            break;
          case 2:
            *(_DWORD *)(v5 + 24LL * v23 + 28) = 2;
            break;
          case 3:
            *(_DWORD *)(v5 + 24LL * v23 + 28) = 3;
            break;
        }
      }
      else
      {
        *(_DWORD *)(v5 + 24LL * v23 + 28) = 0;
      }
      if ( !v32 )
        _InterlockedOr(&v26[20 * v23 + 13], 1u);
      v34 = *v25;
      if ( !(_BYTE)v34 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_9;
        v15 = 29;
        goto LABEL_8;
      }
      v25 += v34;
      if ( (unsigned __int64)v25 < v24 && (unsigned __int64)(v25 + 1) < v24 )
      {
        if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
          || (unsigned __int16)(*(_WORD *)(a1 + 1998) - 544) > 0xDFu
          || v25[1] != 18 )
        {
          goto LABEL_71;
        }
        if ( *v25 && (unsigned __int64)(v25 + 8) <= v24 )
          break;
      }
LABEL_88:
      if ( ++v23 >= *(_DWORD *)(v5 + 16) )
        goto LABEL_89;
    }
    *(_QWORD *)&v26[20 * v23 + 26] = v25;
    *(_DWORD *)(v5 + 24LL * v23 + 40) = *((_DWORD *)v25 + 1);
    v35 = *((_WORD *)v25 + 2);
    *(_WORD *)(v5 + 24 * (v23 + 1LL)) = v35;
    if ( v35 )
      _InterlockedAnd(&v26[20 * v23 + 13], 0xFFFFFFFE);
LABEL_71:
    if ( v25[1] == 48 )
    {
      if ( *v25 )
      {
        if ( (unsigned __int64)(v25 + 6) <= v24 )
        {
          *(_QWORD *)&v26[20 * v23 + 22] = v25;
          if ( (*(_BYTE *)(*(_QWORD *)&v26[20 * v23 + 18] + 3LL) & 3) == 1 )
          {
            if ( (v26[20 * v23 + 13] & 1) == 0 )
              *(_WORD *)(v5 + 24 * (v23 + 1LL)) = *((_WORD *)v25 + 2);
            if ( (v25[3] & 0x80u) != 0 )
            {
              v25 += *v25;
              if ( (unsigned __int64)v25 < v24 && (unsigned __int64)(v25 + 1) < v24 && v25[1] == 49 )
              {
                if ( *v25 )
                {
                  if ( (unsigned __int64)(v25 + 8) <= v24 )
                  {
                    *(_QWORD *)&v26[20 * v23 + 24] = v25;
                    if ( (v26[20 * v23 + 13] & 1) == 0 )
                    {
                      v36 = *((_DWORD *)v25 + 1);
                      v13 = 3 * v23;
                      if ( v36 > 0xFFFF )
                      {
                        v13 = *(_DWORD *)(v5 + 24LL * v23 + 44);
                        if ( (v13 & 0x100) != 0 )
                        {
                          v13 |= 0x10000u;
                          *(_DWORD *)(v5 + 24LL * v23 + 40) = v36;
                          *(_DWORD *)(v5 + 24LL * v23 + 44) = v13;
                        }
                      }
                      else
                      {
                        *(_WORD *)(v5 + 24LL * v23 + 24) = v36;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_88;
  }
LABEL_89:
  v37 = 0;
  v38 = *((_DWORD *)v85 + 6);
  if ( v38 )
  {
    v39 = (char *)v85 + 72;
    while ( (*(_BYTE *)(*(_QWORD *)v39 + 2LL) & 0xF) != 0 )
    {
      ++v37;
      v39 += 80;
      if ( v37 >= v38 )
        goto LABEL_93;
    }
    goto LABEL_117;
  }
LABEL_93:
  v40 = *(_DWORD *)(a1 + 148);
  v41 = 0;
  v42 = *(unsigned int **)(a1 + 152);
  if ( v40 )
  {
    v43 = *((_DWORD *)v85 + 6);
    while ( 1 )
    {
      for ( i = 0; i < v43; ++i )
      {
        if ( *(unsigned __int8 *)(*((_QWORD *)v85 + 10 * i + 9) + 2LL) == *((_WORD *)v42 + 2) )
          break;
      }
      if ( i == v43 )
        break;
      ++v41;
      v42 = (unsigned int *)((char *)v42 + *v42);
      if ( v41 >= v40 )
        goto LABEL_100;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v83) = *((unsigned __int16 *)v42 + 2);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x24u,
        (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
        v83);
    }
LABEL_117:
    v16 = -1073741823;
    *(_DWORD *)(a1 + 1572) = -1072693239;
    goto LABEL_10;
  }
LABEL_100:
  v45 = v87;
  v46 = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  LOBYTE(v84) = 0;
  v47 = v45 + 16;
  v48 = *(_QWORD *)(v45 + 16);
  v49 = v48 - 8;
  if ( v45 + 16 == v48 )
    goto LABEL_135;
  do
  {
    if ( *(_BYTE *)(*(_QWORD *)(v49 + 32) + 2LL) == *(_BYTE *)(v5 + 2) )
    {
      v46 = 1;
      v88 = v49;
      LOBYTE(v84) = 1;
    }
    else
    {
      v50 = 0;
      v51 = *(_DWORD *)(v49 + 24);
      v90 = v85;
      if ( v51 )
      {
        v52 = *((_DWORD *)v85 + 6);
        v53 = v49;
        while ( 1 )
        {
          v54 = 0;
          if ( v52 )
            break;
LABEL_131:
          ++v50;
          v53 += 80LL;
          if ( v50 >= v51 )
            goto LABEL_132;
        }
        v55 = *(_QWORD *)(v53 + 72);
        v86 = *(_BYTE *)(v55 + 2);
        while ( 1 )
        {
          v56 = *((_QWORD *)v85 + 10 * v54 + 9);
          if ( v86 == *(_BYTE *)(v56 + 2) && *(_WORD *)(v55 + 4) && *(_WORD *)(v56 + 4) )
            break;
          if ( ++v54 >= v52 )
            goto LABEL_131;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v57 = *((_QWORD *)v85 + 4);
          WPP_RECORDER_SF_Ddddd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            *(unsigned __int8 *)(*(_QWORD *)(v53 + 72) + 2LL),
            *(unsigned __int8 *)(v57 + 3),
            *(unsigned __int8 *)(v57 + 2),
            v82,
            *(_BYTE *)(*(_QWORD *)(v53 + 72) + 2LL),
            *(_BYTE *)(*(_QWORD *)(v49 + 32) + 2LL),
            *(_BYTE *)(*(_QWORD *)(v49 + 32) + 3LL),
            *(_BYTE *)(v57 + 2),
            *(_BYTE *)(v57 + 3));
        }
        if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x10) != 0 )
        {
          v58 = *(_QWORD *)(v49 + 32);
          McTemplateK0phhhquuuuu_EtwWriteTransfer(
            v90[4],
            v58,
            a1 + 1524,
            *(_QWORD *)(a1 + 24),
            *(_WORD *)(a1 + 2004),
            *(_WORD *)(a1 + 2006),
            *(_WORD *)(a1 + 2008),
            *(_DWORD *)(a1 + 172),
            *(_BYTE *)(*(_QWORD *)(v53 + 72) + 2LL),
            *(_BYTE *)(v58 + 2),
            *(_BYTE *)(v58 + 3),
            *(_BYTE *)(v90[4] + 2LL),
            *(_BYTE *)(v90[4] + 3LL));
        }
        v16 = -1073741811;
        goto LABEL_10;
      }
LABEL_132:
      v46 = v84;
    }
    v59 = *(_QWORD *)(v49 + 8);
    v49 = v59 - 8;
  }
  while ( v47 != v59 );
  v45 = v87;
LABEL_135:
  v16 = 0;
  v60 = *(_DWORD *)(v45 + 8) + *((_DWORD *)v85 + 6);
  v61 = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  if ( !v61 )
  {
LABEL_143:
    if ( !*(_DWORD *)(a1 + 96) && v60 )
    {
      Pool2 = ExAllocatePool2(64LL, 8LL * v60, 1681082453LL);
      *(_QWORD *)(a1 + 104) = Pool2;
      if ( Pool2 )
      {
        v66 = ExAllocatePool2(64LL, 8LL * v60, 1681082453LL);
        *(_QWORD *)(a1 + 136) = v66;
        if ( v66 )
        {
          v67 = ExAllocatePool2(64LL, 8LL * v60, 1681082453LL);
          *(_QWORD *)(a1 + 120) = v67;
          if ( v67 )
          {
            *(_DWORD *)(a1 + 96) = v60;
            v16 = 0;
            goto LABEL_157;
          }
        }
      }
      v68 = *(void **)(a1 + 104);
      v16 = -1073741670;
      *(_DWORD *)(a1 + 96) = 0;
      if ( v68 )
      {
        ExFreePoolWithTag(v68, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v69 = *(void **)(a1 + 136);
      if ( v69 )
      {
        ExFreePoolWithTag(v69, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v70 = *(void **)(a1 + 120);
      if ( v70 )
      {
        ExFreePoolWithTag(v70, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v83) = -1073741670;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x1Eu,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
          v83);
      }
    }
    if ( v16 < 0 )
      goto LABEL_10;
LABEL_157:
    v45 = v87;
    goto LABEL_158;
  }
  if ( v60 > v61 )
  {
    v62 = *(void **)(a1 + 104);
    *(_DWORD *)(a1 + 96) = 0;
    if ( v62 )
    {
      ExFreePoolWithTag(v62, 0x64334855u);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v63 = *(void **)(a1 + 136);
    if ( v63 )
    {
      ExFreePoolWithTag(v63, 0x64334855u);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v64 = *(void **)(a1 + 120);
    if ( v64 )
    {
      ExFreePoolWithTag(v64, 0x64334855u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    goto LABEL_143;
  }
LABEL_158:
  v71 = v88;
  if ( v46 )
    v60 -= *(_DWORD *)(v88 + 24);
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  if ( v46 )
  {
    v72 = *(_QWORD *)(v71 + 8);
    if ( *(_QWORD *)(v72 + 8) == v71 + 8 )
    {
      v73 = *(_QWORD **)(v71 + 16);
      if ( *v73 == v71 + 8 )
      {
        *v73 = v72;
        v74 = 0;
        *(_QWORD *)(v72 + 8) = v73;
        for ( *(_QWORD *)(a1 + 72) = v71; v74 < *(_DWORD *)(v71 + 24); ++v74 )
        {
          v75 = *(_DWORD *)(v71 + 80LL * v74 + 48);
          if ( v75 == 4 )
          {
            *(_DWORD *)(v71 + 80LL * v74 + 48) = 5;
            *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v71 + 80LL * v74 + 40);
          }
          else if ( v75 == 6 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v71 + 80LL * v74 + 40);
          }
        }
        goto LABEL_170;
      }
    }
LABEL_176:
    __fastfail(3u);
  }
LABEL_170:
  for ( j = *(_QWORD *)(v45 + 16); ; j = *(_QWORD *)(v79 + 8) )
  {
    v79 = j - 8;
    if ( v45 + 16 == j )
      break;
    for ( k = 0; k < *(_DWORD *)(v79 + 24); ++*(_DWORD *)(a1 + 144) )
    {
      v78 = k++;
      *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)) = *(_QWORD *)(v79 + 80 * v78 + 40);
    }
  }
  v80 = *(_QWORD **)(v45 + 24);
  v81 = (char *)v85 + 8;
  if ( *v80 != v45 + 16 )
    goto LABEL_176;
  *v81 = v45 + 16;
  v81[1] = v80;
  *v80 = v81;
  *(_QWORD *)(v45 + 24) = v81;
  *(_QWORD *)(a1 + 80) = v85;
  *(_DWORD *)(v45 + 8) = v60;
  *(_QWORD *)(v5 + 8) = v85;
  return ((v16 >> 31) & 0xFFFFFFF4) + 4077;
}
