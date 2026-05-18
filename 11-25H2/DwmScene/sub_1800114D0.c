/*
 * XREFs of sub_1800114D0 @ 0x1800114D0
 * Callers:
 *     sub_180010FC0 @ 0x180010FC0 (sub_180010FC0.c)
 *     sub_180011190 @ 0x180011190 (sub_180011190.c)
 *     sub_1800117C0 @ 0x1800117C0 (sub_1800117C0.c)
 *     sub_180017F50 @ 0x180017F50 (sub_180017F50.c)
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 *     sub_1800BCF50 @ 0x1800BCF50 (sub_1800BCF50.c)
 *     sub_1800BE7C0 @ 0x1800BE7C0 (sub_1800BE7C0.c)
 *     sub_1800BECFC @ 0x1800BECFC (sub_1800BECFC.c)
 *     sub_1800BF168 @ 0x1800BF168 (sub_1800BF168.c)
 *     sub_1800BF710 @ 0x1800BF710 (sub_1800BF710.c)
 *     sub_1800BFC9C @ 0x1800BFC9C (sub_1800BFC9C.c)
 *     sub_1800C1DB0 @ 0x1800C1DB0 (sub_1800C1DB0.c)
 *     sub_1800C2144 @ 0x1800C2144 (sub_1800C2144.c)
 *     sub_1800C4F60 @ 0x1800C4F60 (sub_1800C4F60.c)
 *     sub_1800C833C @ 0x1800C833C (sub_1800C833C.c)
 *     sub_1800C8968 @ 0x1800C8968 (sub_1800C8968.c)
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800114D0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
