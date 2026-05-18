/*
 * XREFs of sub_18003BBA4 @ 0x18003BBA4
 * Callers:
 *     sub_180038D08 @ 0x180038D08 (sub_180038D08.c)
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_180039D9C @ 0x180039D9C (sub_180039D9C.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003BBA4(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_18003BE7C();
  result = sub_18001268C(a1, &v6);
  if ( v6 )
  {
    v3 = a1;
    if ( a1 )
    {
      do
      {
        sub_18003BE3C(v3);
        v4 = *(_QWORD **)(v3 + 384);
        for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 120LL))(*i);
        *(_BYTE *)(v3 + 104) = 1;
        result = sub_180039D9C(a1, v3);
        v3 = result;
      }
      while ( result );
    }
  }
  if ( v7 )
    return sub_18001060C(v7);
  return result;
}
