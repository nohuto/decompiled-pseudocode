/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1400313D8
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration @ 0x140023530 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x140018F04 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Dq @ 0x140034390 (WPP_RECORDER_SF_Dq.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x14003C35C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration(__int64 a1)
{
  __int64 v1; // rdx
  const void *v2; // rsi
  __int64 v4; // r15
  KIRQL v5; // al
  _QWORD **v6; // r14
  size_t v7; // r15
  int v8; // ebx
  unsigned __int16 v9; // r9
  unsigned int v10; // r8d
  _QWORD *v11; // r14
  _QWORD **v12; // rdi
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // r12
  _QWORD *v16; // rcx
  const void **v17; // r14
  unsigned __int16 *v18; // rbx
  int v19; // r10d
  unsigned __int64 v20; // rcx
  unsigned int v21; // r13d
  __int64 v22; // rax
  unsigned __int16 *v23; // r12
  int v24; // r9d
  int v25; // r8d
  unsigned __int8 *v26; // rax
  int v27; // edx
  unsigned __int8 *v28; // r14
  _DWORD *v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // r8
  unsigned int v32; // r13d
  char *v33; // rbx
  size_t v34; // r13
  _QWORD *v35; // r13
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  unsigned int *v38; // r13
  unsigned __int8 *v39; // r8
  _DWORD *v40; // r11
  unsigned int v41; // r14d
  unsigned __int64 i; // r10
  __int64 v43; // rcx
  _BYTE *v44; // rax
  int v45; // r9d
  __int64 v46; // rax
  int v47; // r9d
  int v48; // eax
  unsigned __int16 v49; // r9
  char v50; // cl
  __int64 v51; // rax
  unsigned int v52; // r9d
  __int64 v53; // r10
  _QWORD **v54; // r10
  _QWORD *j; // rax
  unsigned int v56; // r11d
  unsigned int v57; // r9d
  _QWORD *v58; // r8
  _QWORD *v59; // rdx
  __int64 v60; // r14
  int v61; // edx
  unsigned __int16 v62; // cx
  int v63; // r8d
  _QWORD *m; // rax
  unsigned int v65; // r12d
  char *v66; // r9
  __int64 v67; // r11
  unsigned __int16 *v68; // rbx
  char v69; // r11
  _QWORD *v70; // r10
  __int64 v71; // r14
  unsigned int v72; // eax
  void *v73; // rcx
  void *v74; // rcx
  void *v75; // rcx
  __int64 Pool2; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  void *v79; // rcx
  void *v80; // rcx
  void *v81; // rcx
  __int64 v82; // rcx
  _QWORD *v83; // rcx
  __int64 v84; // r8
  unsigned int k; // r9d
  int v86; // ecx
  __int64 v87; // rcx
  int v89; // [rsp+28h] [rbp-E0h]
  __int64 *v90; // [rsp+30h] [rbp-D8h]
  __int64 v91; // [rsp+48h] [rbp-C0h]
  __int16 v92[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v93; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int16 v94; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 v95; // [rsp+64h] [rbp-A4h] BYREF
  void *v96; // [rsp+68h] [rbp-A0h]
  unsigned int v97; // [rsp+70h] [rbp-98h]
  __int64 v98; // [rsp+78h] [rbp-90h]
  const void **v99; // [rsp+80h] [rbp-88h]
  __int64 v100; // [rsp+88h] [rbp-80h] BYREF
  __int64 v101; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v102; // [rsp+98h] [rbp-70h]
  _QWORD *v103; // [rsp+A0h] [rbp-68h]
  __int128 v104; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-50h]
  __int64 v106; // [rsp+C0h] [rbp-48h]
  __int128 v107; // [rsp+C8h] [rbp-40h]
  __int64 v108; // [rsp+D8h] [rbp-30h]
  unsigned int *v109; // [rsp+E0h] [rbp-28h]
  unsigned __int16 *v110; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v111; // [rsp+F0h] [rbp-18h]
  _OWORD v112[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v113; // [rsp+118h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 456);
  v2 = 0LL;
  DWORD1(v104) = 0;
  v113 = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  memset(v112, 0, sizeof(v112));
  LOWORD(v112[0]) = 40;
  v100 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    v112);
  v4 = *((_QWORD *)&v112[0] + 1);
  v99 = (const void **)*((_QWORD *)&v112[0] + 1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  v6 = (_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v5);
  v108 = 0LL;
  v105 = 0LL;
  v90 = &v100;
  v104 = 0LL;
  v106 = 0x100000001LL;
  v107 = 0LL;
  LODWORD(v104) = 56;
  v7 = *(unsigned __int16 *)(*(_QWORD *)(v4 + 24) + 2LL);
  v89 = v7 + 39;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v104,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v9 = 31;
    v10 = 5;
    goto LABEL_4;
  }
  v15 = *v6;
  v103 = v15;
  *v15 = v100;
  v16 = *v6;
  v17 = v99;
  memmove(v16 + 4, v99[3], v7);
  v97 = 0;
  v15[3] = v15 + 2;
  v18 = (unsigned __int16 *)(v17 + 5);
  v15[2] = v15 + 2;
  v19 = (_DWORD)v15 + 32;
  v20 = (unsigned __int64)v17 + *(unsigned __int16 *)v17;
  v102 = v15 + 4;
  v111 = v20;
  v21 = 0;
  if ( (unsigned __int64)v17 + 42 < v20 )
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)(a1 + 8);
      v101 = 0LL;
      v96 = 0LL;
      v23 = v18;
      v24 = *((unsigned __int8 *)v18 + 3);
      v25 = *((unsigned __int8 *)v18 + 2);
      v91 = *(_QWORD *)(v22 + 1432);
      LOBYTE(v92[0]) = 0;
      v26 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(v19, v19, v25, v24, -1, -1, -1, (__int64)v92, v91);
      v28 = v26;
      if ( !v26 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_100;
        v45 = 32;
        goto LABEL_99;
      }
      v29 = *(_DWORD **)(a1 + 2448);
      if ( v29 )
      {
        v30 = 0;
        if ( *v29 )
        {
          while ( *((_BYTE *)v29 + 2 * v30 + 5) != v26[3] || *((_BYTE *)v29 + 2 * v30 + 4) != v26[2] )
          {
            if ( ++v30 >= *v29 )
              goto LABEL_22;
          }
          _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
        }
      }
LABEL_22:
      v31 = (unsigned int)ExDefaultNonPagedPoolType;
      *((_DWORD *)v18 + 4) = v26[4];
      v32 = v26[4] + v21;
      v109 = (unsigned int *)(v18 + 8);
      v33 = (char *)v18 + *v18;
      v97 = v32;
      v110 = (unsigned __int16 *)v33;
      v108 = 0LL;
      v105 = 0LL;
      v106 = 0x100000001LL;
      v104 = 0LL;
      v107 = 0LL;
      LODWORD(v104) = 56;
      v34 = 72LL * *v109 + 40;
      v90 = &v101;
      v89 = 72 * *v109 + 40;
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             &v104,
             v31,
             1681082453LL);
      if ( v8 < 0 )
        break;
      *((_QWORD *)v23 + 1) = v96;
      memset(v96, 0, v34);
      *(_QWORD *)v96 = v101;
      *((_QWORD *)v96 + 4) = v28;
      *((_DWORD *)v96 + 6) = v28[4];
      if ( LOBYTE(v92[0]) == 1 )
      {
        _InterlockedOr((volatile signed __int32 *)v96 + 7, 1u);
        _InterlockedOr((volatile signed __int32 *)v96 + 7, 2u);
      }
      v35 = v103 + 2;
      v36 = (char *)v96 + 8;
      v37 = (_QWORD *)v103[3];
      if ( (_QWORD *)*v37 != v103 + 2 )
LABEL_161:
        __fastfail(3u);
      *v36 = v35;
      v36[1] = v37;
      *v37 = v36;
      v35[1] = v36;
      v38 = v109;
      *((_BYTE *)v23 + 4) = v28[5];
      *((_BYTE *)v23 + 5) = v28[6];
      *((_BYTE *)v23 + 6) = v28[7];
      v39 = &v28[*v28];
      v40 = v96;
      v41 = 0;
      for ( i = (unsigned __int64)v102 + *((unsigned __int16 *)v99[3] + 1); v41 < *v38; ++v41 )
      {
        if ( (unsigned __int64)v39 >= i )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_100;
          v45 = 22;
          goto LABEL_99;
        }
        v27 = v41;
        v43 = 9LL * v41;
        v40[2 * v43 + 16] = *(_DWORD *)&v23[12 * v41 + 22];
        v44 = v39 + 1;
        v40[2 * v43 + 12] = 1;
        if ( (unsigned __int64)(v39 + 1) >= i )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_100;
          v45 = 23;
LABEL_99:
          LOBYTE(v27) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            v27,
            5,
            v45,
            (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids);
          goto LABEL_100;
        }
        while ( *v44 != 5 )
        {
          v46 = *v39;
          if ( !(_BYTE)v46 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_100;
            v45 = 24;
            goto LABEL_99;
          }
          v39 += v46;
          if ( (unsigned __int64)v39 >= i )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_100;
            v45 = 25;
            goto LABEL_99;
          }
          v44 = v39 + 1;
          if ( (unsigned __int64)(v39 + 1) >= i )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_100;
            v45 = 26;
            goto LABEL_99;
          }
        }
        if ( (unsigned __int64)(v39 + 7) > i )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_100;
          v45 = 28;
          goto LABEL_99;
        }
        if ( (*(_DWORD *)&v23[12 * v41 + 22] & 1) != 0 )
          *((_WORD *)v39 + 2) = v23[12 * v41 + 12];
        v47 = *(_DWORD *)&v23[12 * v41 + 22] & 0xF0;
        if ( v47 == 16 )
        {
          v40[18 * v41 + 26] = 1;
        }
        else if ( v47 == 32 )
        {
          v40[18 * v41 + 26] = 2;
        }
        else
        {
          v48 = 3;
          if ( v47 != 48 )
            v48 = 0;
          v40[18 * v41 + 26] = v48;
        }
        *(_QWORD *)&v40[18 * v41 + 18] = v39;
        v40[18 * v41 + 20] = i - (_DWORD)v39;
        if ( *(_WORD *)(a1 + 1990) >= 0x250u )
          v49 = *((_WORD *)v39 + 2);
        else
          v49 = (*((_WORD *)v39 + 2) & 0x7FF) * (((*((_WORD *)v39 + 2) >> 11) & 3) + 1);
        v23[12 * v41 + 12] = v49;
        v50 = 6;
        v27 = 3;
        if ( v39[6] < 6u )
          v50 = v39[6];
        HIBYTE(v23[12 * v41 + 13]) = v50;
        LOBYTE(v23[12 * v41 + 13]) = v39[2];
        if ( (v39[3] & 3) != 0 )
        {
          switch ( v39[3] & 3 )
          {
            case 1:
              *(_DWORD *)&v23[12 * v41 + 14] = 1;
              break;
            case 2:
              *(_DWORD *)&v23[12 * v41 + 14] = 2;
              break;
            case 3:
              *(_DWORD *)&v23[12 * v41 + 14] = 3;
              break;
          }
        }
        else
        {
          *(_DWORD *)&v23[12 * v41 + 14] = 0;
        }
        if ( !v49 )
          _InterlockedOr(&v40[18 * v41 + 13], 1u);
        v51 = *v39;
        if ( !(_BYTE)v51 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_100;
          v45 = 29;
          goto LABEL_99;
        }
        v39 += v51;
        if ( (unsigned __int64)v39 < i && (unsigned __int64)(v39 + 1) < i && v39[1] == 48 )
        {
          if ( *v39 )
          {
            if ( (unsigned __int64)(v39 + 6) <= i )
            {
              *(_QWORD *)&v40[18 * v41 + 22] = v39;
              if ( (*(_BYTE *)(*(_QWORD *)&v40[18 * v41 + 18] + 3LL) & 3) == 1 )
              {
                if ( (v40[18 * v41 + 13] & 1) == 0 )
                  v23[12 * v41 + 12] = *((_WORD *)v39 + 2);
                if ( (v39[3] & 0x80u) != 0 )
                {
                  v39 += *v39;
                  if ( (unsigned __int64)v39 < i && (unsigned __int64)(v39 + 1) < i && v39[1] == 49 )
                  {
                    if ( *v39 )
                    {
                      if ( (unsigned __int64)(v39 + 8) <= i )
                      {
                        *(_QWORD *)&v40[18 * v41 + 24] = v39;
                        if ( (v40[18 * v41 + 13] & 1) == 0 )
                        {
                          v52 = *((_DWORD *)v39 + 1);
                          v27 = 3 * v41;
                          if ( v52 > 0xFFFF )
                          {
                            v27 = *(_DWORD *)&v23[12 * v41 + 22];
                            if ( (v27 & 0x100) != 0 )
                            {
                              v27 |= 0x10000u;
                              *(_DWORD *)&v23[12 * v41 + 20] = v52;
                              *(_DWORD *)&v23[12 * v41 + 22] = v27;
                            }
                          }
                          else
                          {
                            v23[12 * v41 + 12] = v52;
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
      v18 = v110;
      if ( (unsigned __int64)(v110 + 1) >= v111 )
        goto LABEL_101;
      v21 = v97;
      v19 = (int)v102;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v9 = 33;
    v10 = 2;
LABEL_4:
    LODWORD(v90) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      v10,
      v9,
      (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
      v90);
    goto LABEL_5;
  }
LABEL_101:
  v53 = *(_QWORD *)(a1 + 48);
  if ( v53 )
  {
    v54 = (_QWORD **)(v53 + 16);
    for ( j = *v54; ; j = (_QWORD *)*j )
    {
      v59 = j - 1;
      if ( v54 == j )
        break;
      v56 = *((_DWORD *)v59 + 6);
      v57 = 0;
      if ( v56 )
      {
        v58 = v59 + 9;
        do
        {
          if ( (*(_BYTE *)(*v58 + 2LL) & 0xF) == 0 )
          {
            v8 = -1073741823;
            *(_DWORD *)(a1 + 1564) = -1072693239;
            goto LABEL_5;
          }
          ++v57;
          v58 += 9;
        }
        while ( v57 < v56 );
      }
    }
  }
  v60 = *(_QWORD *)(a1 + 48);
  v61 = 0;
  v93 = 0;
  v62 = 0;
  v94 = 0;
  v63 = 0;
  v95 = 0;
  if ( !v60 )
  {
LABEL_126:
    v8 = 0;
    v71 = v97;
    *((_DWORD *)v103 + 2) = v97;
    v72 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v72 )
    {
      if ( (unsigned int)v71 <= v72 )
        goto LABEL_148;
      v73 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v73 )
      {
        ExFreePoolWithTag(v73, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v74 = *(void **)(a1 + 136);
      if ( v74 )
      {
        ExFreePoolWithTag(v74, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v75 = *(void **)(a1 + 120);
      if ( v75 )
      {
        ExFreePoolWithTag(v75, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( *(_DWORD *)(a1 + 96) || !(_DWORD)v71 )
      goto LABEL_147;
    Pool2 = ExAllocatePool2(64LL, 8 * v71, 1681082453LL);
    *(_QWORD *)(a1 + 104) = Pool2;
    if ( !Pool2
      || (v77 = ExAllocatePool2(64LL, 8 * v71, 1681082453LL), (*(_QWORD *)(a1 + 136) = v77) == 0LL)
      || (v78 = ExAllocatePool2(64LL, 8 * v71, 1681082453LL), (*(_QWORD *)(a1 + 120) = v78) == 0LL) )
    {
      v79 = *(void **)(a1 + 104);
      v8 = -1073741670;
      *(_DWORD *)(a1 + 96) = 0;
      if ( v79 )
      {
        ExFreePoolWithTag(v79, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v80 = *(void **)(a1 + 136);
      if ( v80 )
      {
        ExFreePoolWithTag(v80, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v81 = *(void **)(a1 + 120);
      if ( v81 )
      {
        ExFreePoolWithTag(v81, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v90) = -1073741670;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x1Eu,
          (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
          v90);
      }
LABEL_147:
      if ( v8 < 0 )
        goto LABEL_5;
      goto LABEL_148;
    }
    *(_DWORD *)(a1 + 96) = v71;
    v8 = 0;
LABEL_148:
    v82 = *(_QWORD *)(a1 + 56);
    if ( v82 )
    {
      v83 = (_QWORD *)(v82 + 16);
      *(_DWORD *)(a1 + 144) = 0;
      *(_DWORD *)(a1 + 128) = 0;
      v84 = *v83 - 8LL;
      if ( v83 != (_QWORD *)*v83 )
      {
        do
        {
          for ( k = 0; k < *(_DWORD *)(v84 + 24); ++k )
          {
            v86 = *(_DWORD *)(v84 + 72LL * k + 48);
            if ( v86 == 4 )
            {
              *(_DWORD *)(v84 + 72LL * k + 48) = 5;
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v84 + 72LL * k + 40);
            }
            else if ( v86 == 6 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v84 + 72LL * k + 40);
            }
          }
          v87 = *(_QWORD *)(v84 + 8);
          v84 = v87 - 8;
        }
        while ( *(_QWORD *)(a1 + 56) + 16LL != v87 );
      }
    }
    v2 = *(const void **)(a1 + 48);
    goto LABEL_163;
  }
  for ( m = *(_QWORD **)(v60 + 16); ; m = (_QWORD *)*m )
  {
    v70 = m - 1;
    if ( (_QWORD *)(v60 + 16) == m )
      goto LABEL_126;
    v65 = 0;
    LODWORD(v98) = *((_DWORD *)v70 + 6);
    if ( (_DWORD)v98 )
      break;
LABEL_124:
    ;
  }
  v66 = (char *)v70 + 52;
  while ( 1 )
  {
    v67 = *(_QWORD *)(v66 + 20);
    if ( (*(_DWORD *)v66 & 1) == 0 )
      break;
LABEL_123:
    ++v65;
    v66 += 72;
    if ( v65 >= (unsigned int)v98 )
      goto LABEL_124;
  }
  if ( (*(_BYTE *)(v67 + 3) & 3) != 0 )
  {
    if ( *(char *)(v67 + 2) >= 0 )
    {
      v68 = &v94;
      v61 = v62;
    }
    else
    {
      v68 = &v93;
    }
  }
  else
  {
    v68 = &v95;
    v61 = (unsigned __int16)v63;
  }
  v69 = *(_BYTE *)(v67 + 2);
  LOWORD(v63) = (unsigned __int16)v63 >> (v69 & 0xF);
  if ( (v63 & 1) == 0 && (((unsigned __int16)v61 >> (v69 & 0xF)) & 1) == 0 )
  {
    *v68 = v61 | (1 << (v69 & 0xF));
    v61 = v93;
    v62 = v94;
    v63 = v95;
    goto LABEL_123;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL), v61, v63, (_DWORD)v66, v89, v69, v60);
LABEL_100:
  v8 = -1073741823;
  *(_DWORD *)(a1 + 1564) = -1073737984;
LABEL_5:
  *(_DWORD *)(a1 + 1560) = v8;
  if ( !*(_DWORD *)(a1 + 1564) )
    *(_DWORD *)(a1 + 1564) = HUBPDO_GetUSBDErrorFromNTStatus(v8);
  v11 = *(_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
  if ( v11 )
  {
    v12 = (_QWORD **)(v11 + 2);
    while ( 1 )
    {
      v13 = *v12;
      if ( *v12 == v12 )
        break;
      if ( (_QWORD **)v13[1] != v12 )
        goto LABEL_161;
      v14 = (_QWORD *)*v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 )
        goto LABEL_161;
      *v12 = v14;
      v14[1] = v12;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(v13 - 1));
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v11);
  }
LABEL_163:
  v99[4] = v2;
  return ((v8 >> 31) & 0xFFFFFFF4) + 4077;
}
