/*
 * XREFs of sub_18003BAF0 @ 0x18003BAF0
 * Callers:
 *     sub_180038EFC @ 0x180038EFC (sub_180038EFC.c)
 *     sub_18003AF34 @ 0x18003AF34 (sub_18003AF34.c)
 * Callees:
 *     sub_180039C3C @ 0x180039C3C (sub_180039C3C.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18003BAF0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi

  result = sub_18003BD1C();
  if ( *(_BYTE *)(a1 + 104) )
  {
    v3 = a1;
    do
    {
      sub_18003BCDC(v3);
      v4 = *(_QWORD **)(v3 + 384);
      for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 128LL))(*i);
      *(_BYTE *)(v3 + 104) = 0;
      result = sub_180039C3C(a1, v3);
      v3 = result;
    }
    while ( result );
  }
  return result;
}
