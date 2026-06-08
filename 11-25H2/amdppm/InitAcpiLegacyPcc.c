/*
 * XREFs of InitAcpiLegacyPcc @ 0x14003BFC4
 * Callers:
 *     ProcLibDeviceStart @ 0x14002DBF4 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003618 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     AcquirePccInterface @ 0x140026A6C (AcquirePccInterface.c)
 *     AcpiEval_PCCP @ 0x140028680 (AcpiEval_PCCP.c)
 *     ValidatePccEntry @ 0x140030AB4 (ValidatePccEntry.c)
 */

__int64 __fastcall InitAcpiLegacyPcc(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  int v5; // eax
  int v6; // edx

  v2 = AcquirePccInterface(a1);
  v4 = v2;
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 208),
      0LL);
    v5 = AcpiEval_PCCP(a1, (_QWORD *)(a1 + 584));
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v6,
            2,
            12,
            (__int64)&WPP_1a39ca8f7f5332c003c13dd9f9db03c5_Traceguids);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          3,
          13,
          (__int64)&WPP_1a39ca8f7f5332c003c13dd9f9db03c5_Traceguids,
          v5);
      }
      goto LABEL_19;
    }
    v4 = ValidatePccEntry(*(_DWORD **)(a1 + 584), *(const wchar_t **)(a1 + 64));
    if ( v4 >= 0 )
    {
      if ( (unsigned int)(dword_140014B8C - 1) > 0x26 )
      {
LABEL_19:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208));
        return (unsigned int)v4;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0xEu,
          (__int64)&WPP_1a39ca8f7f5332c003c13dd9f9db03c5_Traceguids,
          dword_140014B8C,
          40);
      v4 = -1073741823;
    }
    *(_QWORD *)(a1 + 280) &= ~0x80000000uLL;
    goto LABEL_19;
  }
  if ( v2 == -1073741637 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        2,
        10,
        (__int64)&WPP_1a39ca8f7f5332c003c13dd9f9db03c5_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      3,
      11,
      (__int64)&WPP_1a39ca8f7f5332c003c13dd9f9db03c5_Traceguids,
      v2);
  }
  return (unsigned int)v4;
}
