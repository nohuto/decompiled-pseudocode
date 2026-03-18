/*
 * XREFs of NtLoadKeyEx @ 0x14092C6E0
 * Callers:
 *     NtLoadKey @ 0x14092AFA0 (NtLoadKey.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 */

__int64 __fastcall NtLoadKeyEx(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        ACCESS_MASK DesiredAccess,
        __int64 a7,
        __int64 a8)
{
  return CmLoadDifferencingKey(
           a1,
           a2,
           a3,
           0,
           a4,
           a5,
           DesiredAccess,
           a7,
           a8,
           0LL,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
