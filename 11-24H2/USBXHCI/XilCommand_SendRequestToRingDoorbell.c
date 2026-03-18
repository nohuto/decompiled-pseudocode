/*
 * XREFs of XilCommand_SendRequestToRingDoorbell @ 0x14003EE7C
 * Callers:
 *     XilCommand_WriteDoorbell @ 0x14002C2D0 (XilCommand_WriteDoorbell.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

__int64 __fastcall XilCommand_SendRequestToRingDoorbell(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r10
  __int64 result; // rax
  _UNKNOWN **v5; // rdx
  int v6; // r9d
  int v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(v1 + 112);
  v8 = 0LL;
  v12 = 0;
  v7 = 0;
  v9 = 0LL;
  v10 = v2;
  v11 = 20;
  result = SecureChannel_SendRequestSynchronously(v3, (GUID *)&v8, 40, (__int64)&v7, 4);
  if ( (int)result < 0 )
  {
    v5 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v6 = 29;
    goto LABEL_7;
  }
  result = (unsigned int)v7;
  if ( v7 < 0 )
  {
    v5 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 30;
LABEL_7:
      LOBYTE(v5) = 2;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(v1 + 72),
               (_DWORD)v5,
               7,
               v6,
               (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
               result);
    }
  }
  return result;
}
