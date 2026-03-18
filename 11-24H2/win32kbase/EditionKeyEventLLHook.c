/*
 * XREFs of EditionKeyEventLLHook @ 0x1401108D0
 * Callers:
 *     ApiSetEditionKeyEventLLHook @ 0x140192534 (ApiSetEditionKeyEventLLHook.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EditionKeyEventLLHook(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        char a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  unsigned __int16 v14; // si
  __int64 (__fastcall *v16)(__int64, _QWORD, _QWORD, _QWORD, char, __int16, int, int, int, __int64, int, __int64); // r11

  v14 = a2;
  v16 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char, __int16, int, int, int, __int64, int, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5768LL);
  if ( v16 )
    return v16(a1, v14, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  else
    return 0LL;
}
