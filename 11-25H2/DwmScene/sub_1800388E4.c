/*
 * XREFs of sub_1800388E4 @ 0x1800388E4
 * Callers:
 *     sub_180037E6C @ 0x180037E6C (sub_180037E6C.c)
 *     sub_18003824C @ 0x18003824C (sub_18003824C.c)
 *     sub_180038360 @ 0x180038360 (sub_180038360.c)
 *     sub_1800387B4 @ 0x1800387B4 (sub_1800387B4.c)
 *     sub_18003884C @ 0x18003884C (sub_18003884C.c)
 * Callees:
 *     sub_1800380FC @ 0x1800380FC (sub_1800380FC.c)
 */

__int64 __fastcall sub_1800388E4(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rdx
  __int64 v5; // rdx
  _QWORD *v6; // r10
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v8 = a3;
  v9 = a3;
  v4 = a1;
  if ( a1 != a2 )
  {
    do
    {
      sub_1800380FC((__int64)&v8, v4);
      v4 = (_QWORD *)(v5 + 16);
    }
    while ( v4 != v6 );
    return v9;
  }
  return a3;
}
