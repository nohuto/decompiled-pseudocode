/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1400320F0
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface @ 0x140023550 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x140018F04 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     McTemplateK0phhhquuuuu_EtwWriteTransfer @ 0x140034058 (McTemplateK0phhhquuuuu_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_Ddddd @ 0x140034260 (WPP_RECORDER_SF_Ddddd.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x14003C35C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface(__int64 a1)
{
  __int64 v1; // r13
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  KIRQL v8; // al
  __int64 v9; // r12
  __int64 v10; // rax
  int v11; // r9d
  int v12; // r8d
  unsigned __int8 *v13; // rax
  int v14; // edx
  unsigned __int8 *v15; // r14
  int v16; // ebx
  _DWORD *v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // r8
  __int16 v21; // cx
  size_t v22; // r15
  __int64 v23; // rdx
  unsigned __int8 *v24; // r8
  _DWORD *v25; // r10
  unsigned int v26; // ebx
  unsigned __int64 i; // r11
  _BYTE *v28; // rax
  int v29; // r9d
  __int64 v30; // rax
  int v31; // ecx
  int v32; // eax
  char v33; // cl
  __int64 v34; // rax
  unsigned int v35; // r9d
  unsigned int v36; // r8d
  unsigned int v37; // r9d
  char *v38; // rdx
  unsigned int v39; // r11d
  unsigned int v40; // r10d
  unsigned int *v41; // rdx
  unsigned int v42; // r9d
  unsigned int j; // r8d
  __int64 v44; // r11
  char v45; // r12
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rbx
  unsigned int v49; // r9d
  unsigned int v50; // r12d
  unsigned int v51; // r13d
  __int64 v52; // r14
  unsigned int v53; // edx
  __int64 v54; // r11
  __int64 v55; // r10
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // r14d
  unsigned int v60; // eax
  void *v61; // rcx
  void *v62; // rcx
  void *v63; // rcx
  __int64 Pool2; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  void *v67; // rcx
  void *v68; // rcx
  void *v69; // rcx
  __int64 v70; // rdx
  _QWORD *v71; // rcx
  unsigned int k; // r8d
  int v73; // ecx
  __int64 m; // rax
  unsigned int n; // r9d
  __int64 v76; // rax
  __int64 v77; // r8
  _QWORD *v78; // r8
  _QWORD *v79; // rax
  int v80; // [rsp+28h] [rbp-E0h]
  __int64 *v81; // [rsp+30h] [rbp-D8h]
  __int64 v82; // [rsp+78h] [rbp-90h] BYREF
  void *v83; // [rsp+80h] [rbp-88h]
  char v84; // [rsp+88h] [rbp-80h]
  __int64 v85; // [rsp+90h] [rbp-78h]
  __int64 v86; // [rsp+98h] [rbp-70h]
  __int64 v87; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD *v88; // [rsp+A8h] [rbp-60h]
  __int128 v89; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v90; // [rsp+C0h] [rbp-48h]
  __int128 v91; // [rsp+D0h] [rbp-38h]
  __int64 v92; // [rsp+E0h] [rbp-28h]
  _OWORD v93[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v94; // [rsp+108h] [rbp+0h]

  LODWORD(v92) = 0;
  v87 = 0LL;
  v1 = 0LL;
  LOBYTE(v82) = 0;
  v83 = 0LL;
  v86 = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  v3 = *(_QWORD *)(a1 + 456);
  v94 = 0LL;
  memset(v93, 0, sizeof(v93));
  LOWORD(v93[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v3,
    v93);
  v4 = *((_QWORD *)&v93[0] + 1);
  v5 = (_DWORD *)(*((_QWORD *)&v93[0] + 1) + 32LL);
  if ( *(_WORD *)(*((_QWORD *)&v93[0] + 1) + 2LL) == 1 )
  {
    v6 = *((_QWORD *)&v93[0] + 1) + 32LL;
    *(_DWORD *)(a1 + 148) = 0;
    v7 = 0LL;
  }
  else
  {
    v6 = *((_QWORD *)&v93[0] + 1) + 48LL;
    *(_DWORD *)(a1 + 148) = *v5;
    v7 = 0LL;
    if ( *v5 )
      v7 = *(_QWORD *)(v4 + 40);
  }
  *(_QWORD *)(a1 + 152) = v7;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v8);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(unsigned __int8 *)(v6 + 3);
  v12 = *(unsigned __int8 *)(v6 + 2);
  v85 = *(_QWORD *)(a1 + 48);
  v9 = v85;
  v13 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                             (int)v9 + 32,
                             (int)v9 + 32,
                             v12,
                             v11,
                             -1,
                             -1,
                             -1,
                             (__int64)&v82,
                             *(_QWORD *)(v10 + 1432));
  v15 = v13;
  if ( !v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        v14,
        5,
        34,
        (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids);
    }
    *(_DWORD *)(a1 + 1564) = -1073725440;
    v16 = -1073741823;
    goto LABEL_9;
  }
  v18 = *(_DWORD **)(a1 + 2448);
  if ( v18 )
  {
    v19 = 0;
    if ( *v18 )
    {
      while ( *((_BYTE *)v18 + 2 * v19 + 5) != v13[3] || *((_BYTE *)v18 + 2 * v19 + 4) != v13[2] )
      {
        if ( ++v19 >= *v18 )
          goto LABEL_21;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
    }
  }
LABEL_21:
  v20 = (unsigned int)ExDefaultNonPagedPoolType;
  v21 = v13[4] + 1;
  *(_DWORD *)(v6 + 4) = 0;
  *(_QWORD *)(v6 + 8) = 0LL;
  *(_WORD *)v6 = 24 * v21;
  *(_DWORD *)(v6 + 16) = v13[4];
  *(_QWORD *)&v90 = 0LL;
  v92 = 0LL;
  v89 = 0LL;
  *((_QWORD *)&v90 + 1) = 0x100000001LL;
  v91 = 0LL;
  LODWORD(v89) = 56;
  v22 = 72LL * *(unsigned int *)(v6 + 16) + 40;
  v81 = &v87;
  v80 = 72 * *(_DWORD *)(v6 + 16) + 40;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v89,
          v20,
          1681082453LL);
  if ( v16 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v81) = v16;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x23u,
        (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
        v81);
    }
    goto LABEL_9;
  }
  memset(v83, 0, v22);
  *(_QWORD *)v83 = v87;
  *((_QWORD *)v83 + 4) = v15;
  *((_DWORD *)v83 + 6) = v15[4];
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_BYTE)v82 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)v83 + 7, 1u);
    _InterlockedOr((volatile signed __int32 *)v83 + 7, 2u);
    *(_QWORD *)(a1 + 64) = v83;
  }
  *(_BYTE *)(v6 + 4) = v15[5];
  *(_BYTE *)(v6 + 5) = v15[6];
  *(_BYTE *)(v6 + 6) = v15[7];
  v24 = &v15[*v15];
  v25 = v83;
  v26 = 0;
  for ( i = v9 + *(unsigned __int16 *)(v9 + 34) + 32LL; v26 < *(_DWORD *)(v6 + 16); ++v26 )
  {
    if ( (unsigned __int64)v24 >= i )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_108;
      v29 = 22;
      goto LABEL_107;
    }
    v23 = 9LL * v26;
    v25[2 * v23 + 16] = *(_DWORD *)(v6 + 24LL * v26 + 44);
    v28 = v24 + 1;
    v25[2 * v23 + 12] = 1;
    if ( (unsigned __int64)(v24 + 1) >= i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = 23;
        goto LABEL_107;
      }
      goto LABEL_108;
    }
    while ( *v28 != 5 )
    {
      v30 = *v24;
      if ( !(_BYTE)v30 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_108;
        v29 = 24;
        goto LABEL_107;
      }
      v24 += v30;
      if ( (unsigned __int64)v24 >= i )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_108;
        v29 = 25;
LABEL_107:
        LOBYTE(v23) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          v23,
          5,
          v29,
          (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids);
        goto LABEL_108;
      }
      v28 = v24 + 1;
      if ( (unsigned __int64)(v24 + 1) >= i )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = 26;
          goto LABEL_107;
        }
LABEL_108:
        v16 = -1073741823;
        *(_DWORD *)(a1 + 1564) = -1073725440;
LABEL_9:
        *(_DWORD *)(a1 + 148) = 0;
        *(_QWORD *)(a1 + 152) = 0LL;
        *(_QWORD *)(v6 + 8) = -1LL;
        if ( v83 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(
            WdfDriverGlobals,
            *(_QWORD *)v83);
          *(_QWORD *)(a1 + 64) = 0LL;
        }
        *(_DWORD *)(a1 + 1560) = v16;
        if ( !*(_DWORD *)(a1 + 1564) )
          *(_DWORD *)(a1 + 1564) = HUBPDO_GetUSBDErrorFromNTStatus(v16);
        return ((v16 >> 31) & 0xFFFFFFF4) + 4077;
      }
    }
    if ( (unsigned __int64)(v24 + 7) > i )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_108;
      v29 = 28;
      goto LABEL_107;
    }
    if ( (*(_DWORD *)(v6 + 24LL * v26 + 44) & 1) != 0 )
      *((_WORD *)v24 + 2) = *(_WORD *)(v6 + 24LL * v26 + 24);
    v31 = *(_DWORD *)(v6 + 24LL * v26 + 44) & 0xF0;
    if ( v31 == 16 )
    {
      v25[18 * v26 + 26] = 1;
    }
    else if ( v31 == 32 )
    {
      v25[18 * v26 + 26] = 2;
    }
    else
    {
      v32 = 3;
      if ( v31 != 48 )
        v32 = 0;
      v25[18 * v26 + 26] = v32;
    }
    *(_QWORD *)&v25[18 * v26 + 18] = v24;
    v25[18 * v26 + 20] = i - (_DWORD)v24;
    if ( *(_WORD *)(a1 + 1990) >= 0x250u )
      LODWORD(v23) = *((unsigned __int16 *)v24 + 2);
    else
      LODWORD(v23) = (*((_WORD *)v24 + 2) & 0x7FF) * (unsigned __int16)(((*((_WORD *)v24 + 2) >> 11) & 3) + 1);
    *(_WORD *)(v6 + 24LL * v26 + 24) = v23;
    v33 = 6;
    if ( v24[6] < 6u )
      v33 = v24[6];
    *(_BYTE *)(v6 + 24LL * v26 + 27) = v33;
    *(_BYTE *)(v6 + 24LL * v26 + 26) = v24[2];
    if ( (v24[3] & 3) != 0 )
    {
      switch ( v24[3] & 3 )
      {
        case 1:
          *(_DWORD *)(v6 + 24LL * v26 + 28) = 1;
          break;
        case 2:
          *(_DWORD *)(v6 + 24LL * v26 + 28) = 2;
          break;
        case 3:
          *(_DWORD *)(v6 + 24LL * v26 + 28) = 3;
          break;
      }
    }
    else
    {
      *(_DWORD *)(v6 + 24LL * v26 + 28) = 0;
    }
    if ( !(_WORD)v23 )
      _InterlockedOr(&v25[18 * v26 + 13], 1u);
    v34 = *v24;
    if ( !(_BYTE)v34 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_108;
      v29 = 29;
      goto LABEL_107;
    }
    v24 += v34;
    if ( (unsigned __int64)v24 < i && (unsigned __int64)(v24 + 1) < i && v24[1] == 48 )
    {
      if ( *v24 )
      {
        if ( (unsigned __int64)(v24 + 6) <= i )
        {
          *(_QWORD *)&v25[18 * v26 + 22] = v24;
          if ( (*(_BYTE *)(*(_QWORD *)&v25[18 * v26 + 18] + 3LL) & 3) == 1 )
          {
            if ( (v25[18 * v26 + 13] & 1) == 0 )
              *(_WORD *)(v6 + 24 * (v26 + 1LL)) = *((_WORD *)v24 + 2);
            if ( (v24[3] & 0x80u) != 0 )
            {
              v24 += *v24;
              if ( (unsigned __int64)v24 < i && (unsigned __int64)(v24 + 1) < i && v24[1] == 49 )
              {
                if ( *v24 )
                {
                  if ( (unsigned __int64)(v24 + 8) <= i )
                  {
                    *(_QWORD *)&v25[18 * v26 + 24] = v24;
                    if ( (v25[18 * v26 + 13] & 1) == 0 )
                    {
                      v35 = *((_DWORD *)v24 + 1);
                      LODWORD(v23) = 3 * v26;
                      if ( v35 > 0xFFFF )
                      {
                        LODWORD(v23) = *(_DWORD *)(v6 + 24LL * v26 + 44);
                        if ( (v23 & 0x100) != 0 )
                        {
                          LODWORD(v23) = v23 | 0x10000;
                          *(_DWORD *)(v6 + 24LL * v26 + 40) = v35;
                          *(_DWORD *)(v6 + 24LL * v26 + 44) = v23;
                        }
                      }
                      else
                      {
                        *(_WORD *)(v6 + 24LL * v26 + 24) = v35;
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
  }
  v36 = 0;
  v37 = *((_DWORD *)v83 + 6);
  if ( v37 )
  {
    v38 = (char *)v83 + 72;
    while ( (*(_BYTE *)(*(_QWORD *)v38 + 2LL) & 0xF) != 0 )
    {
      ++v36;
      v38 += 72;
      if ( v36 >= v37 )
        goto LABEL_85;
    }
    goto LABEL_111;
  }
LABEL_85:
  v39 = *(_DWORD *)(a1 + 148);
  v40 = 0;
  v41 = *(unsigned int **)(a1 + 152);
  if ( v39 )
  {
    v42 = *((_DWORD *)v83 + 6);
    while ( 1 )
    {
      for ( j = 0; j < v42; ++j )
      {
        if ( *(unsigned __int8 *)(*((_QWORD *)v83 + 9 * j + 9) + 2LL) == *((_WORD *)v41 + 2) )
          break;
      }
      if ( j == v42 )
        break;
      ++v40;
      v41 = (unsigned int *)((char *)v41 + *v41);
      if ( v40 >= v39 )
        goto LABEL_92;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v81) = *((unsigned __int16 *)v41 + 2);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x24u,
        (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
        v81);
    }
LABEL_111:
    v16 = -1073741823;
    *(_DWORD *)(a1 + 1564) = -1072693239;
    goto LABEL_9;
  }
LABEL_92:
  v44 = v85;
  v45 = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  LOBYTE(v82) = 0;
  v46 = v44 + 16;
  v47 = *(_QWORD *)(v44 + 16);
  v48 = v47 - 8;
  if ( v44 + 16 == v47 )
    goto LABEL_129;
  do
  {
    if ( *(_BYTE *)(*(_QWORD *)(v48 + 32) + 2LL) == *(_BYTE *)(v6 + 2) )
    {
      v86 = v48;
      v45 = 1;
      LOBYTE(v82) = 1;
      v1 = v48;
    }
    else
    {
      v49 = 0;
      v50 = *(_DWORD *)(v48 + 24);
      v88 = v83;
      if ( v50 )
      {
        v51 = *((_DWORD *)v83 + 6);
        v52 = v48;
        while ( 1 )
        {
          v53 = 0;
          if ( v51 )
            break;
LABEL_125:
          ++v49;
          v52 += 72LL;
          if ( v49 >= v50 )
            goto LABEL_126;
        }
        v54 = *(_QWORD *)(v52 + 72);
        v84 = *(_BYTE *)(v54 + 2);
        while ( 1 )
        {
          v55 = *((_QWORD *)v83 + 9 * v53 + 9);
          if ( v84 == *(_BYTE *)(v55 + 2) && *(_WORD *)(v54 + 4) && *(_WORD *)(v55 + 4) )
            break;
          if ( ++v53 >= v51 )
            goto LABEL_125;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v56 = *((_QWORD *)v83 + 4);
          WPP_RECORDER_SF_Ddddd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            *(unsigned __int8 *)(*(_QWORD *)(v52 + 72) + 2LL),
            *(unsigned __int8 *)(v56 + 3),
            *(unsigned __int8 *)(v56 + 2),
            v80,
            *(_BYTE *)(*(_QWORD *)(v52 + 72) + 2LL),
            *(_BYTE *)(*(_QWORD *)(v48 + 32) + 2LL),
            *(_BYTE *)(*(_QWORD *)(v48 + 32) + 3LL),
            *(_BYTE *)(v56 + 2),
            *(_BYTE *)(v56 + 3));
        }
        if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x10) != 0 )
        {
          v57 = *(_QWORD *)(v48 + 32);
          McTemplateK0phhhquuuuu_EtwWriteTransfer(
            v88[4],
            v57,
            a1 + 1516,
            *(_QWORD *)(a1 + 24),
            *(_WORD *)(a1 + 1996),
            *(_WORD *)(a1 + 1998),
            *(_WORD *)(a1 + 2000),
            *(_DWORD *)(a1 + 172),
            *(_BYTE *)(*(_QWORD *)(v52 + 72) + 2LL),
            *(_BYTE *)(v57 + 2),
            *(_BYTE *)(v57 + 3),
            *(_BYTE *)(v88[4] + 2LL),
            *(_BYTE *)(v88[4] + 3LL));
        }
        v16 = -1073741811;
        goto LABEL_9;
      }
LABEL_126:
      v1 = v86;
      v45 = v82;
    }
    v58 = *(_QWORD *)(v48 + 8);
    v48 = v58 - 8;
  }
  while ( v46 != v58 );
  v44 = v85;
LABEL_129:
  v16 = 0;
  v59 = *(_DWORD *)(v44 + 8) + *((_DWORD *)v83 + 6);
  v60 = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  if ( !v60 )
  {
LABEL_137:
    if ( !*(_DWORD *)(a1 + 96) && v59 )
    {
      Pool2 = ExAllocatePool2(64LL, 8LL * v59, 1681082453LL);
      *(_QWORD *)(a1 + 104) = Pool2;
      if ( Pool2 )
      {
        v65 = ExAllocatePool2(64LL, 8LL * v59, 1681082453LL);
        *(_QWORD *)(a1 + 136) = v65;
        if ( v65 )
        {
          v66 = ExAllocatePool2(64LL, 8LL * v59, 1681082453LL);
          *(_QWORD *)(a1 + 120) = v66;
          if ( v66 )
          {
            *(_DWORD *)(a1 + 96) = v59;
            v16 = 0;
            goto LABEL_151;
          }
        }
      }
      v67 = *(void **)(a1 + 104);
      v16 = -1073741670;
      *(_DWORD *)(a1 + 96) = 0;
      if ( v67 )
      {
        ExFreePoolWithTag(v67, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v68 = *(void **)(a1 + 136);
      if ( v68 )
      {
        ExFreePoolWithTag(v68, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v69 = *(void **)(a1 + 120);
      if ( v69 )
      {
        ExFreePoolWithTag(v69, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v81) = -1073741670;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x1Eu,
          (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
          v81);
      }
    }
    if ( v16 < 0 )
      goto LABEL_9;
LABEL_151:
    v44 = v85;
    goto LABEL_152;
  }
  if ( v59 > v60 )
  {
    v61 = *(void **)(a1 + 104);
    *(_DWORD *)(a1 + 96) = 0;
    if ( v61 )
    {
      ExFreePoolWithTag(v61, 0x64334855u);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v62 = *(void **)(a1 + 136);
    if ( v62 )
    {
      ExFreePoolWithTag(v62, 0x64334855u);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v63 = *(void **)(a1 + 120);
    if ( v63 )
    {
      ExFreePoolWithTag(v63, 0x64334855u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    goto LABEL_137;
  }
LABEL_152:
  if ( v45 )
    v59 -= *(_DWORD *)(v1 + 24);
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  if ( v45 )
  {
    v70 = *(_QWORD *)(v1 + 8);
    if ( *(_QWORD *)(v70 + 8) == v1 + 8 )
    {
      v71 = *(_QWORD **)(v1 + 16);
      if ( *v71 == v1 + 8 )
      {
        *v71 = v70;
        *(_QWORD *)(v70 + 8) = v71;
        *(_QWORD *)(a1 + 72) = v1;
        for ( k = 0; k < *(_DWORD *)(v1 + 24); ++k )
        {
          v73 = *(_DWORD *)(v1 + 72LL * k + 48);
          if ( v73 == 4 )
          {
            *(_DWORD *)(v1 + 72LL * k + 48) = 5;
            *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v1 + 72LL * k + 40);
          }
          else if ( v73 == 6 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v1 + 72LL * k + 40);
          }
        }
        goto LABEL_164;
      }
    }
LABEL_170:
    __fastfail(3u);
  }
LABEL_164:
  for ( m = *(_QWORD *)(v44 + 16); ; m = *(_QWORD *)(v77 + 8) )
  {
    v77 = m - 8;
    if ( v44 + 16 == m )
      break;
    for ( n = 0; n < *(_DWORD *)(v77 + 24); ++*(_DWORD *)(a1 + 144) )
    {
      v76 = n++;
      *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)) = *(_QWORD *)(v77 + 72 * v76 + 40);
    }
  }
  v78 = *(_QWORD **)(v44 + 24);
  v79 = (char *)v83 + 8;
  if ( *v78 != v44 + 16 )
    goto LABEL_170;
  *v79 = v44 + 16;
  v79[1] = v78;
  *v78 = v79;
  *(_QWORD *)(v44 + 24) = v79;
  *(_QWORD *)(a1 + 80) = v83;
  *(_DWORD *)(v44 + 8) = v59;
  *(_QWORD *)(v6 + 8) = v83;
  return ((v16 >> 31) & 0xFFFFFFF4) + 4077;
}
