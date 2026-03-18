/*
 * XREFs of HUBUCX_UCXIoctlComplete @ 0x140028CB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14000C908 (Feature_UTSP__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F5EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x140018F04 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_q @ 0x14001DDC4 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Ld @ 0x140029D44 (WPP_RECORDER_SF_Ld.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140033D80 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 */

int __fastcall HUBUCX_UCXIoctlComplete(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 i; // rax
  int v5; // esi
  void *v6; // r8
  int v8; // r15d
  _DWORD *v9; // rbx
  unsigned __int64 **v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rbx
  _QWORD *v16; // r8
  __int64 v17; // rdx
  unsigned int k; // ecx
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // r8
  _QWORD *m; // rax
  unsigned int n; // edx
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  unsigned int ii; // r8d
  __int64 v27; // rax
  unsigned int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned __int16 v31; // r9
  unsigned __int8 v32; // dl
  int v33; // ebx
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int jj; // edx
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rbp
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rbx
  int v46; // edx
  int v47; // eax
  int v48; // edx
  __int64 v49; // rcx
  unsigned __int64 v50; // rbx
  int v51; // edx
  unsigned __int8 v52; // cf
  unsigned __int64 v53; // r8
  unsigned int j; // edx
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v58; // [rsp+20h] [rbp-48h]
  __int64 v59; // [rsp+28h] [rbp-40h]
  __int64 v60; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  i = (unsigned __int64)&retaddr;
  v5 = *(_DWORD *)(a3 + 8);
  v6 = &WPP_21d6231090f93e4afbb8b064742420ef_Traceguids;
  v8 = 0;
  if ( v5 < 0 )
  {
    v9 = (_DWORD *)(a4 + 440);
    v10 = (unsigned __int64 **)(a4 + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Ld((*v10)[179], a2, 5, 11, (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids, *v9, v5);
      v6 = &WPP_21d6231090f93e4afbb8b064742420ef_Traceguids;
    }
    i = (unsigned int)(*v9 - 4788231);
    if ( (unsigned int)i > 0x38 || (v11 = 0x100000001000001LL, !_bittest64(&v11, i)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Ld((*v10)[179], *v9, 5, 12, (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids, *v9, v5);
        v9 = (_DWORD *)(a4 + 440);
      }
      i = **v10;
      v12 = *(unsigned int *)(i + 2600);
      if ( (v12 & 0x80) != 0 )
        LODWORD(i) = HUBMISC_VerifierDbgBreak("HubHwVerifierControllerOperationFailure", *v10 + 34);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x10) != 0 )
      {
        LODWORD(v59) = v5;
        LODWORD(v58) = *v9;
        LODWORD(i) = McTemplateK0pqq_EtwWriteTransfer(
                       v12,
                       &USBHUB3_ETW_EVENT_UCX_IOCTL_FAILURE,
                       (const GUID *)(a4 + 1516),
                       *(_QWORD *)(a4 + 24),
                       v58,
                       v59);
      }
    }
  }
  if ( *(_DWORD *)(a4 + 440) != 4788247 )
  {
    switch ( *(_DWORD *)(a4 + 440) )
    {
      case 0x49101B:
        i = *(_QWORD *)(a4 + 48);
        if ( i )
        {
          v53 = i + 16;
          for ( i = *(_QWORD *)(i + 16); ; i = *(_QWORD *)i )
          {
            v55 = i - 8;
            if ( v53 == i )
              break;
            for ( j = 0; j < *(_DWORD *)(v55 + 24); ++j )
            {
              if ( *(_DWORD *)(v55 + 72LL * j + 48) == 5 )
                *(_DWORD *)(v55 + 72LL * j + 48) = 6;
            }
          }
        }
        goto LABEL_111;
      case 0x49101F:
        i = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_14006C1E8);
        v50 = i;
        if ( v5 < 0 )
        {
          *(_DWORD *)(a4 + 2432) = 1073807361;
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x80) != 0 )
          {
            LODWORD(v58) = v5;
            LODWORD(i) = McTemplateK0pq_EtwWriteTransfer(
                           v49,
                           &USBHUB3_ETW_EVENT_SET_ADDRESS_FAILURE,
                           (const GUID *)(a4 + 1516),
                           *(_QWORD *)(a4 + 24),
                           v58);
          }
          if ( (*(_DWORD *)(a4 + 1456) & 0x20000) != 0 && (*(_DWORD *)(a4 + 1636) & 0x10000) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v48) = 2;
              LODWORD(i) = WPP_RECORDER_SF_(
                             *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                             v48,
                             5,
                             19,
                             (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids);
            }
            _InterlockedOr((volatile signed __int32 *)(a4 + 1636), 0x10000u);
            _InterlockedIncrement((volatile signed __int32 *)(v50 + 88));
          }
          goto LABEL_120;
        }
        i = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
              WdfDriverGlobals,
              *(_QWORD *)(a4 + 432),
              0LL);
        v52 = _bittest((const signed __int32 *)(a4 + 1636), 0x10u);
        *(_DWORD *)(a4 + 1648) = *(_DWORD *)(i + 28);
        if ( v52 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v51) = 2;
            LODWORD(i) = WPP_RECORDER_SF_(
                           *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                           v51,
                           5,
                           18,
                           (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids);
          }
          _InterlockedAnd((volatile signed __int32 *)(a4 + 1636), 0xFFFEFFFF);
          _InterlockedDecrement((volatile signed __int32 *)(v50 + 88));
        }
        goto LABEL_116;
      case 0x491023:
        i = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
              WdfDriverGlobals,
              *(_QWORD *)(a4 + 432),
              0LL);
        v45 = i;
        if ( v5 < 0 )
        {
          LODWORD(i) = *(_DWORD *)(i + 56);
          if ( (i & 1) != 0 )
          {
            v33 = 4024;
            goto LABEL_124;
          }
          goto LABEL_120;
        }
        *(_WORD *)(a4 + 2208) = *(_WORD *)(a4 + 2210);
        if ( (*(_DWORD *)(i + 24) & 0x80) != 0 )
        {
          if ( (unsigned int)Feature_UTSP__private_IsEnabledDeviceUsageNoInline() )
          {
            LODWORD(i) = *(unsigned __int8 *)(v45 + 67);
            if ( *(_BYTE *)(v45 + 67) )
            {
              *(_DWORD *)(a4 + 2724) = i;
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v46) = 2;
              LODWORD(i) = WPP_RECORDER_SF_(
                             *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                             v46,
                             5,
                             20,
                             (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids);
            }
          }
          else
          {
            v47 = *(_DWORD *)(a4 + 1636);
            if ( *(_BYTE *)(v45 + 66) == 1 )
              LODWORD(i) = v47 | 0x200000;
            else
              LODWORD(i) = v47 & 0xFFDFFFFF;
            *(_DWORD *)(a4 + 1636) = i;
          }
        }
        goto LABEL_116;
      case 0x49102B:
        if ( (*(_DWORD *)(a4 + 1644) & 0x4000000) != 0 )
        {
          v40 = *(_QWORD *)(a4 + 16);
          if ( v40 )
          {
            if ( *(_DWORD *)(v40 + 4) == 1 )
            {
              v41 = v40 + 456;
              if ( *(_QWORD *)(v40 + 488) && (LODWORD(i) = *(_DWORD *)(v40 + 496), (i & 2) != 0) )
              {
                *(_BYTE *)(v40 + 536) = 1;
                v42 = *(_QWORD *)(v40 + 544);
                v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        v42,
                        off_14006C120);
                *(_QWORD *)v43 = v41;
                *(_QWORD *)(v43 + 16) = a4;
                *(_DWORD *)(v43 + 8) = 1;
                LODWORD(i) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(
                               WdfDriverGlobals,
                               v42);
                v8 = 1;
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        v40,
                        v6);
                LODWORD(i) = WPP_RECORDER_SF_q(
                               *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                               4u,
                               2u,
                               0xDu,
                               (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids,
                               v44);
              }
            }
          }
        }
        goto LABEL_111;
    }
    if ( *(_DWORD *)(a4 + 440) != 4788279 )
      goto LABEL_111;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
            WdfDriverGlobals,
            *(_QWORD *)(a4 + 432),
            0LL);
    v14 = *(_QWORD *)(a4 + 48);
    v15 = v13;
    if ( v14 )
    {
      v16 = (_QWORD *)(v14 + 16);
      v17 = *v16 - 8LL;
      if ( v16 != (_QWORD *)*v16 )
      {
        do
        {
          for ( k = 0; k < *(_DWORD *)(v17 + 24); ++k )
          {
            if ( *(_DWORD *)(v17 + 72LL * k + 48) == 5 )
              *(_DWORD *)(v17 + 72LL * k + 48) = 6;
          }
          v19 = *(_QWORD **)(v17 + 8);
          v17 = (__int64)(v19 - 1);
        }
        while ( v16 != v19 );
      }
    }
    v20 = *(_QWORD *)(a4 + 56);
    if ( v20 )
    {
      v21 = (_QWORD *)(v20 + 16);
      for ( m = *(_QWORD **)(v20 + 16); ; m = (_QWORD *)*m )
      {
        v24 = m - 1;
        if ( v21 == m )
          break;
        for ( n = 0; n < *((_DWORD *)v24 + 6); ++n )
        {
          if ( LODWORD(v24[9 * n + 6]) == 5 )
            LODWORD(v24[9 * n + 6]) = 6;
        }
      }
    }
    v25 = *(_QWORD *)(a4 + 72);
    if ( v25 )
    {
      for ( ii = 0; ii < *(_DWORD *)(v25 + 24); *(_DWORD *)(v25 + 72 * v27 + 48) = 6 )
        v27 = ii++;
    }
    v28 = *(_DWORD *)(v15 + 76);
    if ( !v28 )
    {
LABEL_45:
      if ( (*(_DWORD *)(v15 + 72) & 7) != 0 )
      {
        v5 = -1073741823;
        *(_DWORD *)(a4 + 1564) = -2147481856;
        if ( *(_WORD *)(a4 + 2208) )
        {
          memmove(
            (void *)(*(_QWORD *)(a4 + 136) + 8LL * *(unsigned int *)(a4 + 144)),
            *(const void **)(a4 + 120),
            8LL * *(unsigned int *)(a4 + 128));
          *(_DWORD *)(a4 + 144) += *(_DWORD *)(a4 + 128);
          v33 = 4024;
          *(_DWORD *)(a4 + 128) = 0;
          *(_DWORD *)(a4 + 1560) = HUBPDO_GetUSBDErrorFromNTStatus(-1073741823);
LABEL_124:
          LODWORD(i) = HUBSM_AddEvent(a4 + 504, v33);
          return i;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
          WdfDriverGlobals,
          *(_QWORD *)(a4 + 2416),
          -10000000LL);
      }
      if ( (*(_DWORD *)(a4 + 1636) & 0x8000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(a4 + 1636), 0xFFFF7FFF);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 4;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            v28,
            5,
            17,
            (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids);
        }
        v35 = *(_QWORD *)(a4 + 2416);
        *(_DWORD *)(a4 + 1564) = -2147481856;
        v5 = -1073741823;
        LODWORD(i) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
                       WdfDriverGlobals,
                       v35,
                       -10000000LL);
      }
      else if ( *(_DWORD *)(a4 + 112) && v5 >= 0 )
      {
        LODWORD(i) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
                       WdfDriverGlobals,
                       *(_QWORD *)(a4 + 2416),
                       0LL);
      }
      else
      {
        LODWORD(i) = -1073741670;
        if ( v5 == -1073741823 )
          v5 = -1073741670;
      }
      v36 = *(_QWORD *)(a4 + 48);
      if ( v36 )
      {
        v37 = v36 + 16;
        for ( i = *(_QWORD *)(v36 + 16); ; i = *(_QWORD *)i )
        {
          v39 = i - 8;
          if ( v37 == i )
            break;
          for ( jj = 0; jj < *(_DWORD *)(v39 + 24); ++jj )
          {
            if ( *(_DWORD *)(v39 + 72LL * jj + 48) == 3 )
              *(_DWORD *)(v39 + 72LL * jj + 48) = ((v5 >> 31) & 2) + 4;
          }
        }
      }
      *(_DWORD *)(a4 + 128) = 0;
      *(_DWORD *)(a4 + 112) = 0;
      *(_DWORD *)(a4 + 144) = 0;
LABEL_111:
      if ( v5 < 0 )
        goto LABEL_120;
LABEL_116:
      v33 = 4028;
      goto LABEL_123;
    }
    if ( (*(_DWORD *)(v15 + 72) & 4) == 0 )
    {
      if ( v5 >= 0 )
      {
        v34 = v28 + *(unsigned __int16 *)(a4 + 2208);
        *(_DWORD *)(a4 + 2584) = v34;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v60) = v34;
          LODWORD(v59) = *(_DWORD *)(v15 + 76);
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            4u,
            5u,
            0x10u,
            (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids,
            v59,
            v60);
        }
        goto LABEL_45;
      }
      goto LABEL_44;
    }
    v29 = *(unsigned __int16 *)(a4 + 2208);
    if ( v29 <= v28 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v60) = *(unsigned __int16 *)(a4 + 2208);
        v31 = 15;
        LODWORD(v59) = *(_DWORD *)(v15 + 76);
        v32 = 2;
        goto LABEL_43;
      }
    }
    else
    {
      v30 = v29 - v28;
      *(_DWORD *)(a4 + 2584) = v30;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v60) = v30;
        v31 = 14;
        v32 = 4;
        LODWORD(v59) = *(_DWORD *)(v15 + 76);
LABEL_43:
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
          v32,
          5u,
          v31,
          (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids,
          v59,
          v60);
      }
    }
LABEL_44:
    *(_DWORD *)(a4 + 2584) = 0;
    goto LABEL_45;
  }
  i = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
        WdfDriverGlobals,
        *(_QWORD *)(a4 + 432),
        0LL);
  if ( (*(_DWORD *)(i + 32) & 3) == 0 )
  {
    if ( v5 < 0 )
    {
      if ( v5 == -1073741823 )
        v5 = -1073741670;
      goto LABEL_120;
    }
    LODWORD(i) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
                   WdfDriverGlobals,
                   *(_QWORD *)(a4 + 2416),
                   0LL);
    goto LABEL_116;
  }
  v56 = *(_QWORD *)(a4 + 2416);
  *(_DWORD *)(a4 + 1564) = -2147481856;
  v5 = -1073741823;
  LODWORD(i) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
                 WdfDriverGlobals,
                 v56,
                 -10000000LL);
LABEL_120:
  *(_DWORD *)(a4 + 1560) = v5;
  if ( !*(_DWORD *)(a4 + 1564) )
  {
    LODWORD(i) = HUBPDO_GetUSBDErrorFromNTStatus(v5);
    *(_DWORD *)(a4 + 1564) = i;
  }
  v33 = 4020;
LABEL_123:
  if ( !v8 )
    goto LABEL_124;
  return i;
}
