/*
 * XREFs of ??$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEBU_GUID@@@Z @ 0x18039CF58
 * Callers:
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18039F970 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Provider@TouchpadControllerExperienceManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18039F7A4 (-Provider@TouchpadControllerExperienceManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall TouchpadControllerExperienceManagerTelemetry::ControllerMoved<long &,long &,_GUID const &>(
        int *a1,
        int *a2,
        __int128 *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm0
  int v10; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h] BYREF
  __int128 v12; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+58h] [rbp-9h] BYREF
  int *v14; // [rsp+78h] [rbp+17h]
  __int64 v15; // [rsp+80h] [rbp+1Fh]
  int *v16; // [rsp+88h] [rbp+27h]
  __int64 v17; // [rsp+90h] [rbp+2Fh]
  __int128 *v18; // [rsp+98h] [rbp+37h]
  __int64 v19; // [rsp+A0h] [rbp+3Fh]

  v6 = TouchpadControllerExperienceManagerLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v8 = *a3;
      v10 = *a2;
      v11 = *a1;
      v18 = &v12;
      v16 = &v10;
      v14 = &v11;
      v12 = v8;
      v19 = 16LL;
      v17 = 4LL;
      v15 = 4LL;
      LOBYTE(v6) = tlgWriteTransfer_EventWriteTransfer(v7, byte_1807EFA58, 0LL, 0LL, 5u, &v13);
    }
  }
  return (char)v6;
}
