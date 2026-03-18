/*
 * XREFs of SendNVMeEventNotification @ 0x14002FFC8
 * Callers:
 *     ProcessNvmeHealthInfoLog @ 0x140005380 (ProcessNvmeHealthInfoLog.c)
 *     ControllerReset @ 0x14000F830 (ControllerReset.c)
 *     NVMeAsyncEventRequestCompletion @ 0x140012380 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x140013EA0 (NVMeGetLogPageCompletion.c)
 *     NVMeControllerReset @ 0x14001D564 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140027150 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 */

char __fastcall SendNVMeEventNotification(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int128 *v7; // r8
  char result; // al
  int v9; // ebx
  bool v11; // cl
  __int128 v12; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+48h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-18h]

  v4 = *a2;
  v6 = a2[1];
  v7 = 0LL;
  result = 0;
  v9 = a4;
  v14 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( a3 )
  {
    if ( !(_DWORD)a4 )
      return result;
  }
  else if ( (_DWORD)a4 )
  {
    goto LABEL_20;
  }
  v11 = v4 && ((v4 - 1) & v4) == 0;
  result = v6 && ((v6 - 1) & v6) == 0;
  if ( v11 )
  {
    if ( result )
      goto LABEL_20;
  }
  else if ( !result )
  {
    goto LABEL_20;
  }
  if ( !(_DWORD)a4 )
  {
    LODWORD(v12) = 2621441;
    LODWORD(v14) = a4;
    *((_QWORD *)&v12 + 1) = v4;
    *(_QWORD *)&v13 = v6;
    result = StorPortNotification(32770LL, a1, &v12);
    v7 = &v12;
LABEL_20:
    if ( !v9 )
      return result;
    goto LABEL_21;
  }
  result = StorPortExtendedFunction(0LL, a1, (unsigned __int16)(a4 + 36), 1701672526LL);
  v7 = 0LL;
LABEL_21:
  if ( v7 )
    return StorPortExtendedFunction(1LL, a1, v7, a4);
  return result;
}
