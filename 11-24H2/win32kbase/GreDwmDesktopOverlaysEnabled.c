/*
 * XREFs of GreDwmDesktopOverlaysEnabled @ 0x140135FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall GreDwmDesktopOverlaysEnabled(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 2696LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
