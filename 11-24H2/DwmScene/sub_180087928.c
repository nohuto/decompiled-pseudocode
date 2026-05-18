/*
 * XREFs of sub_180087928 @ 0x180087928
 * Callers:
 *     sub_180087030 @ 0x180087030 (sub_180087030.c)
 *     sub_1800871D0 @ 0x1800871D0 (sub_1800871D0.c)
 *     sub_180087954 @ 0x180087954 (sub_180087954.c)
 *     sub_1800D2644 @ 0x1800D2644 (sub_1800D2644.c)
 *     sub_1800DB10F @ 0x1800DB10F (sub_1800DB10F.c)
 *     sub_1800DB133 @ 0x1800DB133 (sub_1800DB133.c)
 *     sub_1800DB171 @ 0x1800DB171 (sub_1800DB171.c)
 *     sub_1800DB1A7 @ 0x1800DB1A7 (sub_1800DB1A7.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180087928(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}
