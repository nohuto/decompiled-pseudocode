/*
 * XREFs of ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C006C548
 * Callers:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C006DC70 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C00761A4 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 * Callees:
 *     SendMessageTo @ 0x1C006A100 (SendMessageTo.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 */

__int64 __fastcall CBaseInput::ForwardPnpNotificationToISM(int a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // r9
  bool v10; // cf
  __int64 v11; // rax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // di
  const void *v15; // rdx
  int v16; // eax
  __int64 v17; // xmm1_8
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rcx
  _DWORD v23[144]; // [rsp+30h] [rbp-D0h] BYREF

  result = (unsigned int)(a4 - 2);
  if ( (unsigned int)result <= 1 )
  {
    memset(&v23[4], 0, 0x22CuLL);
    v10 = __CFSHR__(*(_DWORD *)(a2 + 184), 14);
    v23[0] = a1;
    v23[1] = a3;
    v23[3] = -v10;
    v11 = *(_QWORD *)(a2 + 384);
    v23[2] = a4;
    if ( v11 )
    {
      v19 = *(_QWORD *)(v11 + 88);
      if ( v19 )
        v23[4] = *(_DWORD *)(v19 + 56);
    }
    v12 = *(_WORD *)(a2 + 208);
    if ( v12 )
    {
      v13 = v12 >> 1;
      v14 = 260;
      if ( v13 > 0x104u )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2043LL);
      else
        v14 = v13;
      v15 = *(const void **)(a2 + 216);
      v23[12] = v14;
      memmove(&v23[13], v15, 2LL * v14);
    }
    if ( a1 == 1 )
    {
      v18 = *(_DWORD *)(a2 + 464);
      *(_QWORD *)&v23[5] = *(_QWORD *)(a2 + 456);
      v23[7] = v18;
    }
    else if ( a1 == 2 )
    {
      v16 = *(_DWORD *)(a2 + 480);
      v17 = *(_QWORD *)(a2 + 472);
      *(_OWORD *)&v23[5] = *(_OWORD *)(a2 + 456);
      v23[11] = v16;
      *(_QWORD *)&v23[9] = v17;
    }
    else
    {
      v20 = *(_QWORD *)(a2 + 464);
      LOWORD(v23[5]) = *(_WORD *)(v20 + 16);
      v21 = *(_WORD *)(v20 + 18);
      v22 = *(_QWORD *)(a2 + 456);
      HIWORD(v23[5]) = v21;
      v23[6] = *(_DWORD *)(v22 + 110);
      LOWORD(v23[7]) = *(_WORD *)(v22 + 114);
    }
    return SendMessageTo(12LL, (__int64)v23, 572LL, v9);
  }
  return result;
}
