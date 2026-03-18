/*
 * XREFs of VslPrepareDriverForPatch @ 0x14058D9AC
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F13E8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslPrepareDriverForPatch(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]

  memset_0(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140F8DDD8);
  v5 = a1;
  result = VslpEnterIumSecureMode(2u, 78LL, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140F8DDDC;
  if ( (int)result < 0 )
    v3 = (volatile signed __int32 *)&unk_140F8DDE0;
  _InterlockedIncrement(v3);
  return result;
}
