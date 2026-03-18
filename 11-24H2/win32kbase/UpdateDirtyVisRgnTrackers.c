/*
 * XREFs of UpdateDirtyVisRgnTrackers @ 0x1400AC0A0
 * Callers:
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1400F50DC (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     LeaveCrit @ 0x140162A80 (LeaveCrit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall UpdateDirtyVisRgnTrackers(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3968LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
