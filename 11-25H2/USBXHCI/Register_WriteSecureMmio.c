/*
 * XREFs of Register_WriteSecureMmio @ 0x14000E158
 * Callers:
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x140009D50 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14000A910 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     Register_BiosHandoff @ 0x14000C998 (Register_BiosHandoff.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x140027D64 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x140039780 (Interrupter_WdfEvtInterruptIsr.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Register_WriteSecureMmio(__int64 a1, __int64 a2, unsigned int a3, const void *a4)
{
  __int64 v4; // rax
  __int64 v9; // r15
  size_t v10; // rbx
  __int64 result; // rax
  int v12; // edx
  int v13[4]; // [rsp+30h] [rbp-98h] BYREF
  GUID v14[4]; // [rsp+40h] [rbp-88h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v13[0] = 0;
  v9 = *(_QWORD *)(v4 + 112);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1u:
        v10 = 2LL;
        break;
      case 2u:
        v10 = 4LL;
        break;
      case 3u:
        v10 = 8LL;
        break;
      default:
        v10 = 0LL;
        break;
    }
  }
  else
  {
    v10 = 1LL;
  }
  memset(v14, 0, sizeof(v14));
  *(_QWORD *)v14[1].Data4 = *(_QWORD *)(a1 + 128);
  v14[2].Data1 = 11;
  *(_QWORD *)v14[2].Data4 = a2;
  v14[3].Data1 = a3;
  memmove(v14[3].Data4, a4, v10);
  result = SecureChannel_SendRequestSynchronously(v9, v14, 64, (__int64)v13, 4);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v13[0];
    if ( v13[0] < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
               v12,
               6,
               76,
               (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
               v13[0]);
    }
  }
  return result;
}
