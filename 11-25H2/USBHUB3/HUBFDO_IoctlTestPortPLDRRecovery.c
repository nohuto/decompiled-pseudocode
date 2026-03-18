/*
 * XREFs of HUBFDO_IoctlTestPortPLDRRecovery @ 0x14007F6E4
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C7A0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x1400843FC (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBMISC_VerifyCallerIsAdmin @ 0x14008759C (HUBMISC_VerifyCallerIsAdmin.c)
 *     HUBREG_IsPortPLDRCapable @ 0x140088560 (HUBREG_IsPortPLDRCapable.c)
 */

__int64 __fastcall HUBFDO_IoctlTestPortPLDRRecovery(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // edx
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r14
  _DWORD *v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 SystemInformation; // [rsp+48h] [rbp-8h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp+38h] BYREF

  v21 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v5,
         off_14006C198);
  if ( (int)HUBMISC_VerifyCallerIsAdmin(*(_QWORD *)(v6 + 2528)) >= 0 )
  {
    ReturnLength = 0;
    SystemInformation = 8LL;
    if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength) >= 0
      && (SystemInformation & 0x200000000LL) != 0 )
    {
      if ( a3 >= 4 )
      {
        v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _DWORD **, _QWORD))(WdfFunctions_01015
                                                                                                  + 2152))(
                WdfDriverGlobals,
                a2,
                4LL,
                &v21,
                0LL);
        v8 = v10;
        if ( v10 >= 0 )
        {
          v11 = *(_QWORD *)(v6 + 2368);
          v12 = v11 - 248;
          if ( v6 + 2368 == v11 )
            goto LABEL_17;
          while ( *(unsigned __int16 *)(v12 + 200) != *v21 )
          {
            v13 = *(_QWORD *)(v12 + 248);
            v12 = v13 - 248;
            if ( v6 + 2368 == v13 )
              goto LABEL_17;
          }
          if ( !v12 )
          {
LABEL_17:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v6 + 2528),
                2u,
                3u,
                0x54u,
                (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
                *v21);
            v8 = -1073741811;
          }
          else
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
              WdfDriverGlobals,
              *(_QWORD *)(v6 + 16));
            v14 = 0LL;
            v15 = *v21;
            while ( 1 )
            {
              v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v6 + 16),
                      v14,
                      1LL);
              v17 = v16;
              if ( !v16
                || v16 != *(_QWORD *)(v6 + 2664)
                && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                           WdfDriverGlobals,
                                           v16,
                                           off_14006C0F8)
                                       + 48) == v15 )
              {
                break;
              }
              v14 = v17;
            }
            if ( v17 )
            {
              v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v17,
                      off_14006C0F8);
              v19 = v18;
              if ( (*(_DWORD *)(v6 + 40) & 0x40000) != 0 && (*(_DWORD *)(*(_QWORD *)(v18 + 24) + 1632LL) & 0x20) != 0 )
              {
                if ( (unsigned __int8)HUBREG_IsPortPLDRCapable(v6, *(unsigned __int16 *)v21) )
                {
                  *(_BYTE *)(v12 + 1472) = 1;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_dD(
                      *(_QWORD *)(v6 + 2528),
                      4u,
                      3u,
                      0x58u,
                      (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
                      *(_DWORD *)(v6 + 96),
                      *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v19 + 24) + 8LL) + 200LL));
                  v8 = HUBPDO_InvokePortPLDRRecovery(v17, v19);
                }
                else
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(v6 + 2528),
                      2u,
                      3u,
                      0x57u,
                      (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
                      *v21);
                  v8 = -1073741637;
                }
              }
              else
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(v6 + 2528),
                    2u,
                    3u,
                    0x56u,
                    (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
                    *v21);
                v8 = -1073741808;
              }
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(v6 + 2528),
                  2u,
                  3u,
                  0x55u,
                  (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
                  *v21);
              v8 = -1073741811;
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
              WdfDriverGlobals,
              *(_QWORD *)(v6 + 16));
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v6 + 2528),
            2u,
            3u,
            0x53u,
            (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
            v10);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(v6 + 2528), v9, 3, 82, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
        }
        v8 = -1073741820;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v6 + 2528), v9, 3, 81, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
      }
      v8 = -1073741823;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v6 + 2528), v7, 3, 80, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
    }
    v8 = -1073741790;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v8);
}
