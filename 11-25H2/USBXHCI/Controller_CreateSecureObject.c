/*
 * XREFs of Controller_CreateSecureObject @ 0x140075BB8
 * Callers:
 *     Controller_Create @ 0x140074D44 (Controller_Create.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Controller_CreateSecureObject(__int64 a1)
{
  unsigned __int8 v2; // al
  __int128 v3; // xmm0
  __int64 v4; // rcx
  int v5; // ecx
  __int128 v7; // [rsp+30h] [rbp-19h] BYREF
  int v8; // [rsp+40h] [rbp-9h]
  GUID v9[4]; // [rsp+50h] [rbp+7h] BYREF

  v8 = 0;
  v7 = 0LL;
  memset(v9, 0, sizeof(v9));
  v2 = *(_BYTE *)(a1 + 1002);
  v3 = *(_OWORD *)(a1 + 736);
  v4 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)v9[1].Data4 = 0LL;
  v9[3].Data4[0] = v2;
  v9[3].Data4[1] = *(_BYTE *)(a1 + 1003);
  v9[3].Data4[2] = *(_BYTE *)(a1 + 1004);
  v9[3].Data4[3] = *(_BYTE *)(a1 + 1005);
  v9[3].Data4[4] = *(_BYTE *)(a1 + 1006);
  v9[2].Data1 = 1;
  *(_OWORD *)v9[2].Data4 = v3;
  v5 = SecureChannel_SendRequestSynchronously(v4, v9, 64, (__int64)&v7, 24);
  if ( v5 >= 0 )
  {
    v5 = v7;
    if ( (int)v7 >= 0 )
    {
      *(_QWORD *)(a1 + 1024) = *((_QWORD *)&v7 + 1);
      *(_DWORD *)(a1 + 1016) = v8;
    }
  }
  return (unsigned int)v5;
}
