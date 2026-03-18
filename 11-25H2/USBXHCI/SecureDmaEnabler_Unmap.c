/*
 * XREFs of SecureDmaEnabler_Unmap @ 0x140056248
 * Callers:
 *     SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback @ 0x14007F8B0 (SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

__int64 __fastcall SecureDmaEnabler_Unmap(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+54h] [rbp-24h]
  __int64 v15; // [rsp+58h] [rbp-20h]

  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  v14 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v11 = 0LL;
  v12 = v3;
  v6 = *(_QWORD *)(a2 + 16);
  v13 = 6;
  v15 = v6;
  result = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v4 + 112), (GUID *)&v10, 48, 0LL, 0);
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 )
  {
    result = VslDeleteSecureSection(v8);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                 v9,
                 18,
                 19,
                 (__int64)&WPP_363cf0d34eeb3ffef8744b3819ff9f62_Traceguids,
                 result);
    }
  }
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  return result;
}
