/*
 * XREFs of EditionSetProcessWindowStationAtProcessInit @ 0x14023B194
 * Callers:
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EditionSetProcessWindowStationAtProcessInit(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *v4)(__int64, _QWORD); // rax

  v2 = a2;
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 848LL);
  if ( v4 )
    return v4(a1, v2);
  else
    return 3221225659LL;
}
