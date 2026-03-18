/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x14003150C
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration @ 0x140023570 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C860 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x140018F24 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Dq @ 0x140034660 (WPP_RECORDER_SF_Dq.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x14003CA10 (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memmove @ 0x140046600 (memmove.c)
 *     memset @ 0x140046900 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  unsigned __int16 *v4; // r13
  KIRQL v5; // al
  __int64 v6; // r14
  size_t v7; // r15
  int v8; // ebx
  unsigned __int16 v9; // r9
  unsigned int v10; // r8d
  _QWORD *v11; // r14
  _QWORD **v12; // rdi
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // r12
  unsigned __int16 *v16; // rbx
  _QWORD *v17; // r10
  unsigned __int64 v18; // rcx
  int v19; // r12d
  __int64 v20; // rax
  unsigned __int16 *v21; // r15
  int v22; // r9d
  int v23; // r8d
  unsigned __int8 *v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int8 *v26; // r14
  _DWORD *v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // r8
  int v30; // r12d
  char *v31; // rbx
  size_t v32; // r12
  unsigned __int64 *v33; // rax
  unsigned __int64 **v34; // rcx
  unsigned int *v35; // rcx
  unsigned __int8 *v36; // rbx
  _DWORD *v37; // r14
  unsigned int v38; // eax
  unsigned __int64 v39; // r12
  __int64 v40; // rcx
  __int64 v41; // r9
  _BYTE *v42; // rax
  int v43; // r9d
  __int64 v44; // rax
  int v45; // r8d
  int v46; // eax
  unsigned __int16 v47; // ax
  unsigned __int16 v48; // r8
  char v49; // cl
  __int64 v50; // rax
  __int64 v51; // r8
  unsigned __int16 v52; // cx
  unsigned int v53; // r9d
  __int64 v54; // r10
  _QWORD **v55; // r10
  _QWORD *i; // rax
  unsigned int v57; // r11d
  unsigned int v58; // r9d
  _QWORD *v59; // r8
  _QWORD *v60; // rdx
  __int64 v61; // r14
  int v62; // edx
  unsigned __int16 v63; // cx
  int v64; // r8d
  _QWORD *k; // rax
  unsigned int v66; // r15d
  char *v67; // r9
  __int64 v68; // r11
  unsigned __int16 *v69; // rbx
  char v70; // r11
  _QWORD *v71; // r10
  __int64 v72; // r14
  unsigned int v73; // eax
  void *v74; // rcx
  void *v75; // rcx
  void *v76; // rcx
  __int64 Pool2; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  void *v80; // rcx
  void *v81; // rcx
  void *v82; // rcx
  __int64 v83; // rcx
  _QWORD *v84; // rcx
  __int64 v85; // r8
  unsigned int j; // r9d
  int v87; // ecx
  __int64 v88; // rcx
  int v90; // [rsp+28h] [rbp-E0h]
  __int64 *v91; // [rsp+30h] [rbp-D8h]
  __int64 v92; // [rsp+48h] [rbp-C0h]
  __int16 v93[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v94; // [rsp+5Ch] [rbp-ACh]
  unsigned __int16 v95; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 v96; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v97; // [rsp+68h] [rbp-A0h] BYREF
  void *v98; // [rsp+70h] [rbp-98h]
  __int64 v99; // [rsp+78h] [rbp-90h]
  __int64 v100; // [rsp+80h] [rbp-88h] BYREF
  __int64 v101; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *v102; // [rsp+98h] [rbp-70h]
  _QWORD *v103; // [rsp+A0h] [rbp-68h]
  _QWORD *v104; // [rsp+A8h] [rbp-60h]
  __int64 v105; // [rsp+B0h] [rbp-58h]
  __int128 v106; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v107; // [rsp+C8h] [rbp-40h]
  __int64 v108; // [rsp+D0h] [rbp-38h]
  __int128 v109; // [rsp+D8h] [rbp-30h]
  __int64 v110; // [rsp+E8h] [rbp-20h]
  unsigned __int16 *v111; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v112; // [rsp+F8h] [rbp-10h]
  _OWORD v113[2]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v114; // [rsp+120h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 464);
  v2 = 0LL;
  DWORD1(v106) = 0;
  v114 = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  memset(v113, 0, sizeof(v113));
  LOWORD(v113[0]) = 40;
  v100 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    v113);
  v4 = (unsigned __int16 *)*((_QWORD *)&v113[0] + 1);
  v105 = *((_QWORD *)&v113[0] + 1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFFFEF);
  v6 = a1 + 48;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFF7FFF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v5);
  v110 = 0LL;
  v107 = 0LL;
  v91 = &v100;
  v106 = 0LL;
  v108 = 0x100000001LL;
  v109 = 0LL;
  LODWORD(v106) = 56;
  v7 = *(unsigned __int16 *)(*((_QWORD *)v4 + 3) + 2LL);
  v90 = v7 + 39;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v106,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v9 = 31;
    v10 = 5;
LABEL_4:
    LODWORD(v91) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      v10,
      v9,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v91);
    goto LABEL_5;
  }
  v15 = *(_QWORD **)v6;
  v104 = v15;
  *v15 = v100;
  memmove((void *)(*(_QWORD *)v6 + 32LL), *((const void **)v4 + 3), v7);
  LODWORD(v99) = 0;
  v15[3] = v15 + 2;
  v16 = v4 + 20;
  v15[2] = v15 + 2;
  LODWORD(v17) = (_DWORD)v15 + 32;
  v18 = (unsigned __int64)v4 + *v4;
  v103 = v15 + 4;
  v112 = v18;
  v19 = 0;
  if ( (unsigned __int64)(v4 + 21) < v18 )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(a1 + 8);
      v101 = 0LL;
      v98 = 0LL;
      v21 = v16;
      v22 = *((unsigned __int8 *)v16 + 3);
      v23 = *((unsigned __int8 *)v16 + 2);
      v92 = *(_QWORD *)(v20 + 1432);
      LOBYTE(v93[0]) = 0;
      v24 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                                 (_DWORD)v17,
                                 (_DWORD)v17,
                                 v23,
                                 v22,
                                 -1,
                                 -1,
                                 -1,
                                 (__int64)v93,
                                 v92);
      v26 = v24;
      if ( !v24 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_109;
        v43 = 32;
        goto LABEL_108;
      }
      v27 = *(_DWORD **)(a1 + 2456);
      if ( v27 )
      {
        v28 = 0;
        if ( *v27 )
        {
          while ( *((_BYTE *)v27 + 2 * v28 + 5) != v24[3] || *((_BYTE *)v27 + 2 * v28 + 4) != v24[2] )
          {
            if ( ++v28 >= *v27 )
              goto LABEL_22;
          }
          _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x8000u);
        }
      }
LABEL_22:
      v29 = (unsigned int)ExDefaultNonPagedPoolType;
      *((_DWORD *)v16 + 4) = v24[4];
      v30 = v24[4] + v19;
      v102 = (unsigned int *)(v16 + 8);
      v31 = (char *)v16 + *v16;
      LODWORD(v99) = v30;
      v111 = (unsigned __int16 *)v31;
      v110 = 0LL;
      v107 = 0LL;
      v108 = 0x100000001LL;
      v106 = 0LL;
      v109 = 0LL;
      LODWORD(v106) = 56;
      v91 = &v101;
      v32 = 80LL * *v102 + 40;
      v90 = 80 * *v102 + 40;
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             &v106,
             v29,
             1681082453LL);
      if ( v8 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_5;
        v9 = 33;
        v10 = 2;
        goto LABEL_4;
      }
      *((_QWORD *)v21 + 1) = v98;
      memset(v98, 0, v32);
      *(_QWORD *)v98 = v101;
      *((_QWORD *)v98 + 4) = v26;
      *((_DWORD *)v98 + 6) = v26[4];
      if ( LOBYTE(v93[0]) == 1 )
      {
        _InterlockedOr((volatile signed __int32 *)v98 + 7, 1u);
        _InterlockedOr((volatile signed __int32 *)v98 + 7, 2u);
      }
      v25 = (unsigned __int64)(v104 + 2);
      v33 = (unsigned __int64 *)((char *)v98 + 8);
      v34 = (unsigned __int64 **)v104[3];
      if ( *v34 != v104 + 2 )
LABEL_170:
        __fastfail(3u);
      v17 = v103;
      *((_QWORD *)v98 + 2) = v34;
      *v33 = v25;
      *v34 = v33;
      v35 = v102;
      *(_QWORD *)(v25 + 8) = v33;
      *((_BYTE *)v21 + 4) = v26[5];
      *((_BYTE *)v21 + 5) = v26[6];
      *((_BYTE *)v21 + 6) = v26[7];
      v36 = &v26[*v26];
      v37 = v98;
      v38 = 0;
      v39 = (unsigned __int64)v17 + *(unsigned __int16 *)(*(_QWORD *)(v105 + 24) + 2LL);
      v94 = 0;
      if ( *v35 )
        break;
LABEL_90:
      v16 = v111;
      if ( (unsigned __int64)(v111 + 1) >= v112 )
        goto LABEL_110;
      v19 = v99;
    }
    while ( 1 )
    {
      if ( (unsigned __int64)v36 >= v39 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_109;
        v43 = 22;
        goto LABEL_108;
      }
      v25 = v38;
      v40 = 10LL * v38;
      v41 = 3LL * v38;
      v37[2 * v40 + 16] = *(_DWORD *)&v21[12 * v38 + 22];
      v42 = v36 + 1;
      v37[2 * v40 + 12] = 1;
      if ( (unsigned __int64)(v36 + 1) >= v39 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_109;
        v43 = 23;
LABEL_108:
        LOBYTE(v25) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          v25,
          5,
          v43,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
        goto LABEL_109;
      }
      while ( *v42 != 5 )
      {
        v44 = *v36;
        if ( !(_BYTE)v44 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_109;
          v43 = 24;
          goto LABEL_108;
        }
        v36 += v44;
        if ( (unsigned __int64)v36 >= v39 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_109;
          v43 = 25;
          goto LABEL_108;
        }
        v42 = v36 + 1;
        if ( (unsigned __int64)(v36 + 1) >= v39 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_109;
          v43 = 26;
          goto LABEL_108;
        }
      }
      if ( (unsigned __int64)(v36 + 7) > v39 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_109;
        v43 = 28;
        goto LABEL_108;
      }
      if ( (*(_DWORD *)&v21[12 * v25 + 22] & 1) != 0 )
        *((_WORD *)v36 + 2) = v21[12 * v25 + 12];
      v45 = *(_DWORD *)&v21[12 * v25 + 22] & 0xF0;
      if ( v45 == 16 )
      {
        v37[20 * v25 + 28] = 1;
      }
      else if ( v45 == 32 )
      {
        v37[20 * v25 + 28] = 2;
      }
      else
      {
        v46 = 3;
        if ( v45 != 48 )
          v46 = 0;
        v37[20 * v25 + 28] = v46;
      }
      *(_QWORD *)&v37[20 * v25 + 18] = v36;
      v37[20 * v25 + 20] = v39 - (_DWORD)v36;
      if ( *(_WORD *)(a1 + 1998) >= 0x250u )
      {
        v48 = *((_WORD *)v36 + 2);
      }
      else
      {
        v47 = *((_WORD *)v36 + 2);
        LODWORD(v25) = v47;
        LOWORD(v25) = ((v47 >> 11) & 3) + 1;
        v48 = (v47 & 0x7FF) * v25;
      }
      v21[4 * v41 + 12] = v48;
      v49 = 6;
      if ( v36[6] < 6u )
        v49 = v36[6];
      HIBYTE(v21[4 * v41 + 13]) = v49;
      LOBYTE(v21[4 * v41 + 13]) = v36[2];
      if ( (v36[3] & 3) != 0 )
      {
        switch ( v36[3] & 3 )
        {
          case 1:
            *(_DWORD *)&v21[4 * v41 + 14] = 1;
            break;
          case 2:
            *(_DWORD *)&v21[4 * v41 + 14] = 2;
            break;
          case 3:
            *(_DWORD *)&v21[4 * v41 + 14] = 3;
            break;
        }
      }
      else
      {
        *(_DWORD *)&v21[4 * v41 + 14] = 0;
      }
      if ( !v48 )
        _InterlockedOr(&v37[20 * v94 + 13], 1u);
      v50 = *v36;
      if ( !(_BYTE)v50 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_109;
        v43 = 29;
        goto LABEL_108;
      }
      v36 += v50;
      if ( (unsigned __int64)v36 >= v39 || (unsigned __int64)(v36 + 1) >= v39 )
        goto LABEL_88;
      if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
        || (unsigned __int16)(*(_WORD *)(a1 + 1998) - 544) > 0xDFu
        || v36[1] != 18 )
      {
        break;
      }
      if ( *v36 && (unsigned __int64)(v36 + 8) <= v39 )
      {
        v51 = v94;
        LODWORD(v25) = 1;
        *(_QWORD *)&v37[20 * v94 + 26] = v36;
        *(_DWORD *)&v21[12 * v51 + 20] = *((_DWORD *)v36 + 1);
        v52 = *((_WORD *)v36 + 2);
        v21[12 * v51 + 12] = v52;
        if ( v52 )
          _InterlockedAnd(&v37[20 * v51 + 13], 0xFFFFFFFE);
        goto LABEL_71;
      }
LABEL_88:
      v38 = v94 + 1;
      v94 = v38;
      if ( v38 >= *v102 )
      {
        LODWORD(v17) = (_DWORD)v103;
        goto LABEL_90;
      }
    }
    LODWORD(v51) = v94;
    LODWORD(v25) = 1;
LABEL_71:
    if ( v36[1] == 48 )
    {
      if ( *v36 )
      {
        if ( (unsigned __int64)(v36 + 6) <= v39 )
        {
          *(_QWORD *)&v37[20 * (unsigned int)v51 + 22] = v36;
          if ( (*(_BYTE *)(*(_QWORD *)&v37[20 * (unsigned int)v51 + 18] + 3LL) & 3) == 1 )
          {
            if ( (v37[20 * (unsigned int)v51 + 13] & 1) == 0 )
              v21[12 * (unsigned int)v51 + 12] = *((_WORD *)v36 + 2);
            if ( (v36[3] & 0x80u) != 0 )
            {
              v36 += *v36;
              if ( (unsigned __int64)v36 < v39 && (unsigned __int64)(v36 + 1) < v39 && v36[1] == 49 )
              {
                if ( *v36 )
                {
                  if ( (unsigned __int64)(v36 + 8) <= v39 )
                  {
                    *(_QWORD *)&v37[20 * (unsigned int)v51 + 24] = v36;
                    if ( (v37[20 * (unsigned int)v51 + 13] & 1) == 0 )
                    {
                      v53 = *((_DWORD *)v36 + 1);
                      LODWORD(v25) = 3 * v51;
                      if ( v53 > 0xFFFF )
                      {
                        LODWORD(v25) = *(_DWORD *)&v21[12 * (unsigned int)v51 + 22];
                        if ( (v25 & 0x100) != 0 )
                        {
                          LODWORD(v25) = v25 | 0x10000;
                          *(_DWORD *)&v21[12 * (unsigned int)v51 + 20] = v53;
                          *(_DWORD *)&v21[12 * (unsigned int)v51 + 22] = v25;
                        }
                      }
                      else
                      {
                        v21[12 * (unsigned int)v51 + 12] = v53;
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
LABEL_110:
  v54 = *(_QWORD *)(a1 + 48);
  if ( v54 )
  {
    v55 = (_QWORD **)(v54 + 16);
    for ( i = *v55; ; i = (_QWORD *)*i )
    {
      v60 = i - 1;
      if ( v55 == i )
        break;
      v57 = *((_DWORD *)v60 + 6);
      v58 = 0;
      if ( v57 )
      {
        v59 = v60 + 9;
        do
        {
          if ( (*(_BYTE *)(*v59 + 2LL) & 0xF) == 0 )
          {
            v8 = -1073741823;
            *(_DWORD *)(a1 + 1572) = -1072693239;
            goto LABEL_5;
          }
          ++v58;
          v59 += 10;
        }
        while ( v58 < v57 );
      }
    }
  }
  v61 = *(_QWORD *)(a1 + 48);
  v62 = 0;
  v95 = 0;
  v63 = 0;
  v96 = 0;
  v64 = 0;
  LOWORD(v97) = 0;
  if ( !v61 )
  {
LABEL_135:
    v8 = 0;
    v72 = (unsigned int)v99;
    *((_DWORD *)v104 + 2) = v99;
    v73 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v73 )
    {
      if ( (unsigned int)v72 <= v73 )
        goto LABEL_157;
      v74 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v74 )
      {
        ExFreePoolWithTag(v74, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v75 = *(void **)(a1 + 136);
      if ( v75 )
      {
        ExFreePoolWithTag(v75, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v76 = *(void **)(a1 + 120);
      if ( v76 )
      {
        ExFreePoolWithTag(v76, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( *(_DWORD *)(a1 + 96) || !(_DWORD)v72 )
      goto LABEL_156;
    Pool2 = ExAllocatePool2(64LL, 8 * v72, 1681082453LL);
    *(_QWORD *)(a1 + 104) = Pool2;
    if ( !Pool2
      || (v78 = ExAllocatePool2(64LL, 8 * v72, 1681082453LL), (*(_QWORD *)(a1 + 136) = v78) == 0LL)
      || (v79 = ExAllocatePool2(64LL, 8 * v72, 1681082453LL), (*(_QWORD *)(a1 + 120) = v79) == 0LL) )
    {
      v80 = *(void **)(a1 + 104);
      v8 = -1073741670;
      *(_DWORD *)(a1 + 96) = 0;
      if ( v80 )
      {
        ExFreePoolWithTag(v80, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v81 = *(void **)(a1 + 136);
      if ( v81 )
      {
        ExFreePoolWithTag(v81, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v82 = *(void **)(a1 + 120);
      if ( v82 )
      {
        ExFreePoolWithTag(v82, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v91) = -1073741670;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x1Eu,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
          v91);
      }
LABEL_156:
      if ( v8 < 0 )
        goto LABEL_5;
      goto LABEL_157;
    }
    *(_DWORD *)(a1 + 96) = v72;
    v8 = 0;
LABEL_157:
    v83 = *(_QWORD *)(a1 + 56);
    if ( v83 )
    {
      v84 = (_QWORD *)(v83 + 16);
      *(_DWORD *)(a1 + 144) = 0;
      *(_DWORD *)(a1 + 128) = 0;
      v85 = *v84 - 8LL;
      if ( v84 != (_QWORD *)*v84 )
      {
        do
        {
          for ( j = 0; j < *(_DWORD *)(v85 + 24); ++j )
          {
            v87 = *(_DWORD *)(v85 + 80LL * j + 48);
            if ( v87 == 4 )
            {
              *(_DWORD *)(v85 + 80LL * j + 48) = 5;
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v85 + 80LL * j + 40);
            }
            else if ( v87 == 6 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v85 + 80LL * j + 40);
            }
          }
          v88 = *(_QWORD *)(v85 + 8);
          v85 = v88 - 8;
        }
        while ( *(_QWORD *)(a1 + 56) + 16LL != v88 );
      }
    }
    v2 = *(_QWORD *)(a1 + 48);
    goto LABEL_172;
  }
  for ( k = *(_QWORD **)(v61 + 16); ; k = (_QWORD *)*k )
  {
    v71 = k - 1;
    if ( (_QWORD *)(v61 + 16) == k )
      goto LABEL_135;
    v66 = 0;
    v94 = *((_DWORD *)v71 + 6);
    if ( v94 )
      break;
LABEL_133:
    ;
  }
  v67 = (char *)v71 + 52;
  while ( 1 )
  {
    v68 = *(_QWORD *)(v67 + 20);
    if ( (*(_DWORD *)v67 & 1) == 0 )
      break;
LABEL_132:
    ++v66;
    v67 += 80;
    if ( v66 >= v94 )
      goto LABEL_133;
  }
  if ( (*(_BYTE *)(v68 + 3) & 3) != 0 )
  {
    if ( *(char *)(v68 + 2) >= 0 )
    {
      v69 = &v96;
      v62 = v63;
    }
    else
    {
      v69 = &v95;
    }
  }
  else
  {
    v69 = (unsigned __int16 *)&v97;
    v62 = (unsigned __int16)v64;
  }
  v70 = *(_BYTE *)(v68 + 2);
  LOWORD(v64) = (unsigned __int16)v64 >> (v70 & 0xF);
  if ( (v64 & 1) == 0 && (((unsigned __int16)v62 >> (v70 & 0xF)) & 1) == 0 )
  {
    *v69 = v62 | (1 << (v70 & 0xF));
    v62 = v95;
    v63 = v96;
    v64 = (unsigned __int16)v97;
    goto LABEL_132;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL), v62, v64, (_DWORD)v67, v90, v70, v61);
LABEL_109:
  v8 = -1073741823;
  *(_DWORD *)(a1 + 1572) = -1073737984;
LABEL_5:
  *(_DWORD *)(a1 + 1568) = v8;
  if ( !*(_DWORD *)(a1 + 1572) )
    *(_DWORD *)(a1 + 1572) = HUBPDO_GetUSBDErrorFromNTStatus(v8);
  v11 = *(_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x10u);
  if ( v11 )
  {
    v12 = (_QWORD **)(v11 + 2);
    while ( 1 )
    {
      v13 = *v12;
      if ( *v12 == v12 )
        break;
      if ( (_QWORD **)v13[1] != v12 )
        goto LABEL_170;
      v14 = (_QWORD *)*v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 )
        goto LABEL_170;
      *v12 = v14;
      v14[1] = v12;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(v13 - 1));
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v11);
  }
LABEL_172:
  *(_QWORD *)(v105 + 32) = v2;
  return ((v8 >> 31) & 0xFFFFFFF4) + 4077;
}
