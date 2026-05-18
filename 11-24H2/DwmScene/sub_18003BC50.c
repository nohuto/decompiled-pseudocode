/*
 * XREFs of sub_18003BC50 @ 0x18003BC50
 * Callers:
 *     sub_18003905C @ 0x18003905C (sub_18003905C.c)
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 * Callees:
 *     sub_180039D9C @ 0x180039D9C (sub_180039D9C.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18003BC50(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi

  result = sub_18003BE7C();
  if ( *(_BYTE *)(a1 + 104) )
  {
    v3 = a1;
    do
    {
      sub_18003BE3C(v3);
      v4 = *(_QWORD **)(v3 + 384);
      for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 128LL))(*i);
      *(_BYTE *)(v3 + 104) = 0;
      result = sub_180039D9C(a1, v3);
      v3 = result;
    }
    while ( result );
  }
  return result;
}
