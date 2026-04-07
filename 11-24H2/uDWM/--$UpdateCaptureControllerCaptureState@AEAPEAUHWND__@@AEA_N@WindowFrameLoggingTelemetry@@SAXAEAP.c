/*
 * XREFs of ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1800AB7FC
 * Callers:
 *     ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B4AF0 (-_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800CF8B8 (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180033FBC (-Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18005A1CC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18007A880 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

char __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>(
        __int64 *a1,
        char *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r10
  __int64 v6; // rax
  char v7; // cl
  char v9; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v11[32]; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  char *v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  v4 = WindowFrameLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x200000000000LL);
    if ( (_BYTE)v4 )
    {
      v6 = *a1;
      v7 = *a2;
      v17 = 0;
      v14 = 0;
      v10 = v6;
      v15 = &v9;
      v12 = &v10;
      v9 = v7;
      v16 = 1;
      v13 = 8;
      LOBYTE(v4) = tlgWriteTransfer_EtwEventWriteTransfer(v5, byte_180110814, 0LL, 0LL, 4, (__int64)v11);
    }
  }
  return (char)v4;
}
