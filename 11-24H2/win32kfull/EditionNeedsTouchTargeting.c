/*
 * XREFs of EditionNeedsTouchTargeting @ 0x1401B4820
 * Callers:
 *     <none>
 * Callees:
 *     TouchTargetingCreateContact @ 0x1401B4948 (TouchTargetingCreateContact.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall EditionNeedsTouchTargeting(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v6; // rsi
  __int128 v7; // xmm0
  int v8; // eax
  __int128 v9; // [rsp+20h] [rbp-39h] BYREF
  __int128 v10; // [rsp+30h] [rbp-29h] BYREF
  __int128 v11; // [rsp+40h] [rbp-19h] BYREF
  __int128 v12; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v13[3]; // [rsp+60h] [rbp+7h] BYREF

  if ( *(_DWORD *)(a1 + 68) || !(unsigned int)TouchTargetingEnabledForInput(*(_QWORD *)(a2 + 32), a2) )
    return 0LL;
  v6 = 0LL;
  *(_DWORD *)(a3 + 188) = 0;
  *(_DWORD *)(a3 + 184) = 0;
  v11 = 0LL;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  if ( (unsigned int)_GetDeviceRects(a2, &v11, &v12) )
  {
    v9 = v12;
    v10 = v11;
    _SetHimetricToPixelRatio(&v10, &v9, a3);
    v6 = &v11;
  }
  v7 = *(_OWORD *)(a2 + 104);
  *(_QWORD *)((char *)v13 + 4) = *(_QWORD *)(a2 + 32);
  v8 = *(_DWORD *)(a2 + 100);
  *(_OWORD *)((char *)v13 + 12) = v7;
  *(_OWORD *)((char *)&v13[1] + 12) = v7;
  if ( (v8 & 2) != 0 )
    HIDWORD(v13[2]) = *(_DWORD *)(a2 + 136);
  else
    HIDWORD(v13[2]) = 0;
  TouchTargetingCreateContact(v13, v6, 1LL, a3);
  return 1LL;
}
