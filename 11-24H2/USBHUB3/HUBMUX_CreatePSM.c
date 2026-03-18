/*
 * XREFs of HUBMUX_CreatePSM @ 0x140010EAC
 * Callers:
 *     HUBMUX_CreateChildPSMs @ 0x140010954 (HUBMUX_CreateChildPSMs.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140002474 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x14001220C (WPP_RECORDER_SF_qqd.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 */

unsigned __int64 __fastcall HUBMUX_CreatePSM(__int64 a1, unsigned __int16 *a2)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // r9d
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int16 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 Timer; // rax
  int v17; // edx
  int v18; // edx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-99h]
  unsigned __int64 v24; // [rsp+40h] [rbp-79h] BYREF
  __int128 v25; // [rsp+48h] [rbp-71h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+58h] [rbp-61h]
  __int64 v27; // [rsp+60h] [rbp-59h]
  __int128 v28; // [rsp+68h] [rbp-51h]
  void *v29; // [rsp+78h] [rbp-41h]
  __int128 v30; // [rsp+80h] [rbp-39h] BYREF
  __int128 v31; // [rsp+90h] [rbp-29h]
  __int64 v32; // [rsp+A0h] [rbp-19h]
  __int128 v33; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-1h]
  char pszDest[16]; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+D8h] [rbp+1Fh]

  v24 = 0LL;
  LODWORD(v32) = 0;
  v36 = 0LL;
  v29 = off_14006C340;
  v28 = *(unsigned __int64 *)(a1 + 16);
  *((_QWORD *)&v25 + 1) = HUBMISC_EvtPsmCleanup;
  v26 = HUBMISC_EvtPsmDestroy;
  v30 = 0LL;
  *(_QWORD *)&v25 = 56LL;
  v31 = 0LL;
  v27 = 0x100000002LL;
  v33 = 0LL;
  v34 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, unsigned __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         &v25,
         &v24);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2536),
        2u,
        4u,
        0xAu,
        (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids,
        v4);
    v24 = 0LL;
    goto LABEL_24;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v5,
    "PSM Tag",
    141LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v24,
         off_14006C340);
  memset((void *)(v6 + 8), 0, 0x5D0uLL);
  *(_QWORD *)v6 = a1;
  *(_OWORD *)(v6 + 200) = *(_OWORD *)a2;
  *(_OWORD *)(v6 + 216) = *((_OWORD *)a2 + 1);
  *(_QWORD *)(v6 + 232) = *((_QWORD *)a2 + 4);
  v7 = *(_DWORD *)(a1 + 96);
  v23 = *a2;
  *(_QWORD *)&v33 = 56LL;
  pszDest[0] = 0;
  HIDWORD(v34) = 16;
  v36 = 0x200000002LL;
  *(_QWORD *)&v34 = v6;
  BYTE8(v34) = 1;
  *((_QWORD *)&v33 + 1) = 0x20000000400LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "hub%d port%d", v7, v23);
  v8 = (__int64 *)(v6 + 1432);
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v33, v6 + 1432) < 0 )
    *v8 = *(_QWORD *)(a1 + 2536);
  v9 = *(_QWORD *)(a1 + 16);
  v29 = 0LL;
  v26 = 0LL;
  v27 = 0x100000001LL;
  v28 = v24;
  v25 = 0LL;
  LODWORD(v25) = 56;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v9);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          &v25,
          v10,
          v6 + 16);
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_24;
    v12 = *v8;
    v13 = 11;
    goto LABEL_10;
  }
  *(_QWORD *)(v6 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                           WdfDriverGlobals,
                           *(_QWORD *)(v6 + 16));
  KeInitializeSpinLock((PKSPIN_LOCK)(v6 + 1112));
  v14 = *(_QWORD *)v6;
  *(_DWORD *)(v6 + 1152) = 0;
  *(_DWORD *)(v6 + 1224) = 0;
  *(_QWORD *)(v6 + 1232) = v6;
  *(_QWORD *)(v6 + 1240) = HUBSM_AddPsm20Event;
  v15 = *(_QWORD *)(v14 + 248);
  *(_QWORD *)(v6 + 1272) = v14;
  *(_QWORD *)(v6 + 1304) = v15;
  Timer = ExAllocateTimer(HUBMISC_PsmEventTimer, v6, 4LL);
  *(_QWORD *)(v6 + 1312) = Timer;
  if ( Timer )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x80000) != 0 )
    {
      v29 = 0LL;
      v31 = 0LL;
      LODWORD(v31) = 0;
      DWORD2(v31) = 0;
      BYTE4(v31) = 1;
      v26 = 0LL;
      v27 = 0x100000001LL;
      v28 = v24;
      v32 = 0LL;
      *((_QWORD *)&v30 + 1) = HUBMISC_PsmResetCompletePollingTimer;
      v25 = 0LL;
      LODWORD(v25) = 56;
      *(_QWORD *)&v30 = 40LL;
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01015 + 2544))(
              WdfDriverGlobals,
              &v30,
              &v25,
              v6 + 240);
      if ( v11 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_24:
          if ( v24 )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
            return 0LL;
          }
          return v24;
        }
        v12 = *(_QWORD *)(v6 + 1432);
        v13 = 13;
LABEL_10:
        WPP_RECORDER_SF_d(v12, 2u, 4u, v13, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids, v11);
        goto LABEL_24;
      }
    }
    v20 = *(_QWORD *)v6;
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)v6 + 16LL));
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v20 + 504))(*(_QWORD *)(v20 + 248), v21, 1LL);
    *(_QWORD *)(v6 + 1264) = v22;
    if ( !v22 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v6 + 1432), v18, 4, 14, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids);
      }
      goto LABEL_24;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v24;
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v17, 3, 12, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_qqd(
      *(_QWORD *)(a1 + 2536),
      v18,
      3,
      15,
      (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids,
      a1,
      v6,
      *a2);
  }
  return v24;
}
