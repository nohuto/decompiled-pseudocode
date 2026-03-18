/*
 * XREFs of PopPlPublishSystemPowerChange @ 0x1405DCC6C
 * Callers:
 *     PopPlNotifyDeviceDState @ 0x140312818 (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x140315BD0 (PopPlNotifyDeviceFState.c)
 *     PopPlUnregisterDevice @ 0x1404D9A00 (PopPlUnregisterDevice.c)
 *     PopPlPublishInitialPowerDraw @ 0x1405DCAF0 (PopPlPublishInitialPowerDraw.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A083C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPlPublishSystemPowerChange(unsigned __int16 *a1, int a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-59h]
  int v9; // [rsp+28h] [rbp-51h]
  __int16 v10; // [rsp+40h] [rbp-39h] BYREF
  int v11; // [rsp+44h] [rbp-35h] BYREF
  int v12; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-29h] BYREF
  __int16 *v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  _DWORD *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  __int64 v18; // [rsp+90h] [rbp+17h]
  _DWORD v19[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v20; // [rsp+A0h] [rbp+27h]
  __int64 v21; // [rsp+A8h] [rbp+2Fh]
  int *v22; // [rsp+B0h] [rbp+37h]
  __int64 v23; // [rsp+B8h] [rbp+3Fh]

  if ( a2 )
  {
    if ( (unsigned int)dword_140E076F0 > 5 )
    {
      v19[1] = 0;
      v10 = 1;
      v14 = &v10;
      v15 = 2LL;
      v16 = v19;
      v18 = *((_QWORD *)a1 + 1);
      v19[0] = *a1;
      v20 = &v11;
      v6 = *((_DWORD *)a1 + 7);
      v17 = 2LL;
      v12 = a2 + v6;
      v22 = &v12;
      v11 = a2;
      v21 = 4LL;
      v23 = 4LL;
      tlgWriteEx_EtwWriteEx((__int64)&dword_140E076F0, (unsigned __int8 *)&word_14004EAC6, a3, 1u, v8, v9, 7u, &v13);
    }
    *((_DWORD *)a1 + 7) += a2;
    return guard_dispatch_icall_no_overrides(*((_QWORD *)a1 + 4), *((unsigned int *)a1 + 7), a3, a4);
  }
  return result;
}
