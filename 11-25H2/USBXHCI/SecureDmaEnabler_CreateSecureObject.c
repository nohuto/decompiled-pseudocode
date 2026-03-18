/*
 * XREFs of SecureDmaEnabler_CreateSecureObject @ 0x14007F7A8
 * Callers:
 *     SecureDmaEnabler_Create @ 0x14007F604 (SecureDmaEnabler_Create.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

__int64 __fastcall SecureDmaEnabler_CreateSecureObject(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  int v4; // edx
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+38h] [rbp-48h]
  GUID v9[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+70h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 8);
  LODWORD(v8) = 0;
  v7 = 0LL;
  v3 = *(_QWORD *)(v1 + 112);
  v10 = 0LL;
  v11 = 0LL;
  LODWORD(v10) = 4;
  memset(v9, 0, sizeof(v9));
  *((_QWORD *)&v10 + 1) = *(_QWORD *)(v1 + 1024);
  LOBYTE(v11) = *(_DWORD *)(v1 + 1012) == 2;
  v5 = SecureChannel_SendRequestSynchronously(v3, v9, 56, (__int64)&v7, 16);
  if ( v5 >= 0 )
  {
    if ( (int)v7 >= 0 )
    {
      *(_QWORD *)(a1 + 16) = v8;
    }
    else
    {
      v5 = v7;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v4,
          18,
          23,
          (__int64)&WPP_363cf0d34eeb3ffef8744b3819ff9f62_Traceguids,
          v7);
      }
    }
  }
  return (unsigned int)v5;
}
