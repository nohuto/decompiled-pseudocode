/*
 * XREFs of UsbDevice_UcxEvtAddress @ 0x140031660
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     UsbDevice_SetAddress @ 0x14000EAF0 (UsbDevice_SetAddress.c)
 *     WPP_RECORDER_SF_dq @ 0x14002CC1C (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_UcxEvtAddress(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  _QWORD *v4; // rax
  __int64 v5; // rbx
  unsigned __int8 *v6; // rbp
  __int64 *v7; // rsi
  unsigned int v8; // edi
  __int64 result; // rax
  __int64 v10; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+30h] [rbp-58h]
  _OWORD v12[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h]

  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v12[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v3 = -1;
  }
  else
  {
    v3 = 40;
  }
  LOWORD(v12[0]) = v3;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v12);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(*((_QWORD *)&v12[0] + 1) + 16LL),
                   off_14006B128);
  v5 = (__int64)v4;
  v6 = (unsigned __int8 *)v4 + 135;
  v7 = v4 + 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*v7 + 72),
      4u,
      0xCu,
      0x1Au,
      (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
      *v6,
      *v4);
  if ( *(_BYTE *)(v5 + 134) )
  {
    if ( Controller_IsControllerAccessible(*v7) )
    {
      *(_QWORD *)(v5 + 424) = a2;
      *(_BYTE *)(v5 + 432) = 0;
      result = UsbDevice_SetAddress(v5, 0);
      v8 = result;
      if ( (int)result >= 0 )
        return result;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v11) = result;
        LODWORD(v10) = *v6;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*v7 + 72),
          3u,
          0xCu,
          0x1Cu,
          (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
          v10,
          v11);
      }
    }
    else
    {
      v8 = -1073741810;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = *v6;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*v7 + 72),
        3u,
        0xCu,
        0x1Bu,
        (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
        v10,
        *(_QWORD *)v5);
    }
    v8 = -1073741823;
  }
  *(_QWORD *)(v5 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v8);
}
