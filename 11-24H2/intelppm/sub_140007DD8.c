/*
 * XREFs of sub_140007DD8 @ 0x140007DD8
 * Callers:
 *     sub_140007D54 @ 0x140007D54 (sub_140007D54.c)
 *     sub_140007EC8 @ 0x140007EC8 (sub_140007EC8.c)
 * Callees:
 *     sub_140007BD4 @ 0x140007BD4 (sub_140007BD4.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140007DD8(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // bx
  unsigned int v5; // ebp
  _DWORD *v6; // rax
  unsigned int v7; // edi
  int v9; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+34h] [rbp-64h]
  _BYTE v11[24]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v12; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h]

  v3 = a2;
  v5 = a3;
  v6 = sub_140007BD4((__int64)v11, *(volatile signed __int32 **)(a1 + 8), a3, SHIDWORD(a2));
  v7 = 0;
  v12 = *(_OWORD *)v6;
  v13 = *((_QWORD *)v6 + 2);
  if ( qword_140018EA8 )
    qword_140018EA8(*(unsigned int *)(a1 + 24), v5, 1LL, *(_QWORD *)(a1 + 8), &v12);
  if ( (v3 & 0x400) != 0 && v5 != 254 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    v10 = (unsigned __int16)v5;
    if ( (v3 & 0x800) != 0 )
      HIWORD(v10) |= 1u;
    RtlNotifyFeatureUsage(&v9);
  }
  LOBYTE(v7) = (_DWORD)v13 == 0;
  return v7;
}
