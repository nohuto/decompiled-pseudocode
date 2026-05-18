/*
 * XREFs of sub_1800877C8 @ 0x1800877C8
 * Callers:
 *     sub_180086ED0 @ 0x180086ED0 (sub_180086ED0.c)
 *     sub_180087070 @ 0x180087070 (sub_180087070.c)
 *     sub_1800877F4 @ 0x1800877F4 (sub_1800877F4.c)
 *     sub_1800D24E4 @ 0x1800D24E4 (sub_1800D24E4.c)
 *     sub_1800DAFAF @ 0x1800DAFAF (sub_1800DAFAF.c)
 *     sub_1800DAFD3 @ 0x1800DAFD3 (sub_1800DAFD3.c)
 *     sub_1800DB011 @ 0x1800DB011 (sub_1800DB011.c)
 *     sub_1800DB047 @ 0x1800DB047 (sub_1800DB047.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800877C8(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}
