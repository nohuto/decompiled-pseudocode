/*
 * XREFs of sub_18001724C @ 0x18001724C
 * Callers:
 *     sub_180014FCC @ 0x180014FCC (sub_180014FCC.c)
 *     sub_18001DDB8 @ 0x18001DDB8 (sub_18001DDB8.c)
 *     sub_18001DEA0 @ 0x18001DEA0 (sub_18001DEA0.c)
 *     sub_18003001C @ 0x18003001C (sub_18003001C.c)
 *     sub_18003C904 @ 0x18003C904 (sub_18003C904.c)
 *     sub_180087070 @ 0x180087070 (sub_180087070.c)
 *     unknown_libname_14 @ 0x1800D5E58 (unknown_libname_14.c)
 *     sub_1800D6A51 @ 0x1800D6A51 (sub_1800D6A51.c)
 *     sub_1800D6D54 @ 0x1800D6D54 (sub_1800D6D54.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18001724C(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
