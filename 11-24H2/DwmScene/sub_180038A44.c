/*
 * XREFs of sub_180038A44 @ 0x180038A44
 * Callers:
 *     sub_180037FCC @ 0x180037FCC (sub_180037FCC.c)
 *     sub_1800383AC @ 0x1800383AC (sub_1800383AC.c)
 *     sub_1800384C0 @ 0x1800384C0 (sub_1800384C0.c)
 *     sub_180038914 @ 0x180038914 (sub_180038914.c)
 *     sub_1800389AC @ 0x1800389AC (sub_1800389AC.c)
 * Callees:
 *     sub_18003825C @ 0x18003825C (sub_18003825C.c)
 */

__int64 __fastcall sub_180038A44(_QWORD *a1, _QWORD *a2, __int64 a3)
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
      sub_18003825C((__int64)&v8, v4);
      v4 = (_QWORD *)(v5 + 16);
    }
    while ( v4 != v6 );
    return v9;
  }
  return a3;
}
