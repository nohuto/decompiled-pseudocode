/*
 * XREFs of WheaAddressTranslateAndAddToDefectList @ 0x1407C75FC
 * Callers:
 *     WheaAttemptRowOffline @ 0x14065B230 (WheaAttemptRowOffline.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407C7DBC (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall WheaAddressTranslateAndAddToDefectList(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  _OWORD v5[2]; // [rsp+20h] [rbp-50h] BYREF
  int v6; // [rsp+40h] [rbp-30h]
  __int128 v7; // [rsp+48h] [rbp-28h] BYREF
  __int64 v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+60h] [rbp-10h]

  v8 = 0LL;
  v9 = 0;
  v6 = 0;
  v7 = 0LL;
  memset(v5, 0, sizeof(v5));
  if ( a2 )
  {
    v3 = *a2;
    v4 = a2[1];
    v6 = *((_DWORD *)a2 + 8);
    v5[0] = v3;
    v5[1] = v4;
  }
  else
  {
    result = PshedTranslatePhysicalAddress(a1, &v7);
    if ( (int)result < 0 )
      return result;
    v6 = 0;
    *(_OWORD *)((char *)v5 + 4) = v7;
    HIDWORD(v5[1]) = v9;
    *(_QWORD *)((char *)&v5[1] + 4) = v8;
  }
  return PshedAddToDefectList(v5);
}
