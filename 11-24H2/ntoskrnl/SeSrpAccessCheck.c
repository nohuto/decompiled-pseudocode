/*
 * XREFs of SeSrpAccessCheck @ 0x1404651F0
 * Callers:
 *     <none>
 * Callees:
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 */

__int64 __fastcall SeSrpAccessCheck(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  return SepCommonAccessCheckEx(a1, a5, a6, 1);
}
