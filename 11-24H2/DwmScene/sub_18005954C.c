/*
 * XREFs of sub_18005954C @ 0x18005954C
 * Callers:
 *     sub_18005755C @ 0x18005755C (sub_18005755C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800183EC @ 0x1800183EC (sub_1800183EC.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_180040888 @ 0x180040888 (sub_180040888.c)
 *     sub_180057774 @ 0x180057774 (sub_180057774.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18005954C(__int64 a1)
{
  _DWORD *v2; // rdi
  __int128 v3; // xmm3
  __int128 v4; // xmm2
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int64 v8; // [rsp+20h] [rbp-39h] BYREF
  __int64 v9; // [rsp+28h] [rbp-31h]
  __int128 v10[4]; // [rsp+30h] [rbp-29h] BYREF
  _OWORD v11[4]; // [rsp+70h] [rbp+17h] BYREF

  v2 = (_DWORD *)(a1 + 544);
  if ( (*(_BYTE *)(a1 + 544) & 1) == 0 || sub_180057774(a1, 1) )
    return 0;
  sub_180040888(a1, &v8);
  if ( v8 )
  {
    sub_18003A3E0(v8, v10);
    sub_1800183EC(v10, (__int64)v11);
    *(_OWORD *)(a1 + 804) = v10[0];
    *(_OWORD *)(a1 + 820) = v10[1];
    *(_OWORD *)(a1 + 836) = v10[2];
    *(_OWORD *)(a1 + 852) = v10[3];
    v6 = v11[3];
    v5 = v11[2];
    v4 = v11[1];
    v3 = v11[0];
  }
  else
  {
    *(_OWORD *)(a1 + 804) = xmmword_1800F8620;
    *(_OWORD *)(a1 + 820) = xmmword_1800F8630;
    *(_OWORD *)(a1 + 836) = xmmword_1800F8640;
    *(_OWORD *)(a1 + 852) = xmmword_1800F8650;
    v3 = xmmword_1800F8620;
    v4 = xmmword_1800F8630;
    v5 = xmmword_1800F8640;
    v6 = xmmword_1800F8650;
  }
  *(_OWORD *)(a1 + 612) = v3;
  *(_OWORD *)(a1 + 628) = v4;
  *(_OWORD *)(a1 + 644) = v5;
  *(_OWORD *)(a1 + 660) = v6;
  *v2 &= ~1u;
  if ( v9 )
    sub_18001060C(v9);
  return 1;
}
