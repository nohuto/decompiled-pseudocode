/*
 * XREFs of sub_1800D76EB @ 0x1800D76EB
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013918 @ 0x180013918 (sub_180013918.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D76EB(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  size_t v4; // r8

  v3 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 128) + 8LL))(*(_QWORD *)(a2 + 128));
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  sub_180013918(a2 + 136, v3, v4);
  return 0LL;
}
