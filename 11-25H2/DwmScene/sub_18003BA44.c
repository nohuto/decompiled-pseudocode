/*
 * XREFs of sub_18003BA44 @ 0x18003BA44
 * Callers:
 *     sub_180038BA8 @ 0x180038BA8 (sub_180038BA8.c)
 *     sub_18003AF34 @ 0x18003AF34 (sub_18003AF34.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180039C3C @ 0x180039C3C (sub_180039C3C.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003BA44(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_18003BD1C();
  result = sub_18001258C(a1, &v6);
  if ( v6 )
  {
    v3 = a1;
    if ( a1 )
    {
      do
      {
        sub_18003BCDC(v3);
        v4 = *(_QWORD **)(v3 + 384);
        for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 120LL))(*i);
        *(_BYTE *)(v3 + 104) = 1;
        result = sub_180039C3C(a1, v3);
        v3 = result;
      }
      while ( result );
    }
  }
  if ( v7 )
    return sub_18001050C(v7);
  return result;
}
