/*
 * XREFs of sub_18003E7E0 @ 0x18003E7E0
 * Callers:
 *     sub_18003DC50 @ 0x18003DC50 (sub_18003DC50.c)
 *     sub_1800613B0 @ 0x1800613B0 (sub_1800613B0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_18003E71C @ 0x18003E71C (sub_18003E71C.c)
 *     sub_18003ECF8 @ 0x18003ECF8 (sub_18003ECF8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003E7E0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rcx

  sub_180028890(a1 + 16);
  if ( a4 )
    sub_18003E71C(a1, a2, a4);
  else
    sub_18003ECF8(*a3, a2);
  v8 = a3[1];
  if ( v8 )
    sub_18001060C(v8);
  return a2;
}
