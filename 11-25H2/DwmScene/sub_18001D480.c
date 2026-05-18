/*
 * XREFs of sub_18001D480 @ 0x18001D480
 * Callers:
 *     sub_18001D320 @ 0x18001D320 (sub_18001D320.c)
 *     sub_18004C040 @ 0x18004C040 (sub_18004C040.c)
 *     sub_18004D4B0 @ 0x18004D4B0 (sub_18004D4B0.c)
 *     sub_18004DB60 @ 0x18004DB60 (sub_18004DB60.c)
 *     sub_18008184C @ 0x18008184C (sub_18008184C.c)
 *     sub_180086554 @ 0x180086554 (sub_180086554.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_18001D480(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_180010134(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
