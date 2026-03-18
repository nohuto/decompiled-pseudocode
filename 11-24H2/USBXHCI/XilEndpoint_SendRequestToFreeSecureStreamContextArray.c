/*
 * XREFs of XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x140046ED8
 * Callers:
 *     XilEndpoint_FreeStreamContextArray @ 0x140046CE4 (XilEndpoint_FreeStreamContextArray.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall XilEndpoint_SendRequestToFreeSecureStreamContextArray(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _UNKNOWN **result; // rax
  __int64 v5; // rcx
  int v6; // [rsp+28h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-48h]
  __int64 v8; // [rsp+40h] [rbp-38h] BYREF
  __int128 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  v3 = *(_QWORD *)(**(_QWORD **)(a1 + 32) + 112LL);
  v8 = 0LL;
  v12 = 0;
  v10 = a2;
  v9 = 0LL;
  v11 = 38;
  result = (_UNKNOWN **)SecureChannel_SendRequestSynchronously(v3, (GUID *)&v8, 40, 0LL, 0);
  if ( (int)result < 0 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *(_QWORD *)(a1 + 32);
      v7 = *(_DWORD *)(v5 + 152);
      v6 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 143LL);
      return (_UNKNOWN **)WPP_RECORDER_SF_dD(
                            *(_QWORD *)(v5 + 80),
                            2u,
                            0xDu,
                            0xEu,
                            (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids,
                            v6,
                            v7);
    }
  }
  return result;
}
