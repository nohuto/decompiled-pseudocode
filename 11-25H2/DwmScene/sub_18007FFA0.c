/*
 * XREFs of sub_18007FFA0 @ 0x18007FFA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007FAA4 @ 0x18007FAA4 (sub_18007FAA4.c)
 *     sub_180080000 @ 0x180080000 (sub_180080000.c)
 */

_QWORD *__fastcall sub_18007FFA0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v8[4]; // [rsp+28h] [rbp-20h] BYREF

  sub_18007FAA4(a3, v8);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v6 = *(unsigned int *)(v5 + 32);
  else
    v6 = 0xFFFFFFFFLL;
  sub_180080000(v8[0], v6);
  *a2 = v8[0];
  a2[1] = v8[1];
  return a2;
}
