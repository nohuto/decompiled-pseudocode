/*
 * XREFs of sub_180033660 @ 0x180033660
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_180029CE0 @ 0x180029CE0 (sub_180029CE0.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 *     sub_180033E74 @ 0x180033E74 (sub_180033E74.c)
 *     sub_18003692C @ 0x18003692C (sub_18003692C.c)
 *     sub_180036A68 @ 0x180036A68 (sub_180036A68.c)
 *     sub_18004D088 @ 0x18004D088 (sub_18004D088.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180033660(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002894C(a1 + 8, a2);
  while ( (unsigned int)sub_1800326D0(a1) )
  {
    v3 = sub_1800326D0(a1);
    sub_180032634(a1, v9, v3 - 1);
    sub_1800318EC((_QWORD *)a1, v9);
    if ( v9[1] )
      sub_18001060C(v9[1]);
  }
  sub_18004D088(*(_QWORD *)(a1 + 512));
  *(_OWORD *)v9 = 0LL;
  sub_180011110((_QWORD *)(a1 + 512), v9);
  if ( v9[1] )
    sub_18001060C(v9[1]);
  sub_18002867C(a1 + 312, (__int64)v9);
  sub_180033E74(a1);
  if ( *(_QWORD *)(a1 + 288) != *(_QWORD *)(a1 + 296) )
    sub_18001CAFC(&stru_1801B9288, 5);
  sub_180011044((__int64)v9);
  result = sub_18003692C(a1 + 728);
  *(_QWORD *)(a1 + 480) = 0LL;
  v5 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 488) = 0LL;
  if ( v5 )
    result = sub_18001060C(v5);
  *(_QWORD *)(a1 + 496) = 0LL;
  v6 = *(_QWORD *)(a1 + 504);
  *(_QWORD *)(a1 + 504) = 0LL;
  if ( v6 )
    result = sub_18001060C(v6);
  v7 = *(_QWORD *)(a1 + 704);
  v8 = *(_QWORD *)(a1 + 712);
  if ( v7 != v8 )
  {
    sub_180012140(v7, v8);
    result = *(_QWORD *)(a1 + 704);
    *(_QWORD *)(a1 + 712) = result;
  }
  if ( *(_DWORD *)(a1 + 1192) )
  {
    sub_180029840((__int64)v9, a1 + 1280);
    *(_BYTE *)(a1 + 1312) = 1;
    Cnd_signal((_Cnd_t)(a1 + 1208));
    sub_180029CE0((__int64)v9);
    return sub_180036A68(a1 + 1184);
  }
  return result;
}
