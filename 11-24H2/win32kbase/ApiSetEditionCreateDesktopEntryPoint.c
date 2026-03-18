/*
 * XREFs of ApiSetEditionCreateDesktopEntryPoint @ 0x1401521F8
 * Callers:
 *     NtUserCreateDesktopEx @ 0x1401521D0 (NtUserCreateDesktopEx.c)
 * Callees:
 *     EditionCreateDesktopEntryPoint @ 0x14014B0E8 (EditionCreateDesktopEntryPoint.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionCreateDesktopEntryPoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6))(__int64, __int64, __int64, _QWORD, int, int)
{
  __int64 v10; // rbx
  int (*v11)(void); // rax

  v10 = 0LL;
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 648LL);
  if ( v11 && v11() >= 0 )
    return EditionCreateDesktopEntryPoint(a1, a2, a3, a4, a5, a6);
  return (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, int))v10;
}
