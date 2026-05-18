/*
 * XREFs of sub_1800D758B @ 0x1800D758B
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013818 @ 0x180013818 (sub_180013818.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D758B(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  size_t v4; // r8

  v3 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 128) + 8LL))(*(_QWORD *)(a2 + 128));
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  sub_180013818(a2 + 136, v3, v4);
  return 0LL;
}
