/*
 * XREFs of NtUserCreateWindowStationEx @ 0x1401BA6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserCreateWindowStationEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  unsigned int v11; // esi
  __int64 v13; // r10
  __int64 result; // rax

  v11 = a2;
  v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48);
  result = 0LL;
  if ( *(_QWORD *)(v13 + 872) )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, __int64, __int64, int, int))(v13 + 872))(
             a1,
             v11,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9);
  return result;
}
