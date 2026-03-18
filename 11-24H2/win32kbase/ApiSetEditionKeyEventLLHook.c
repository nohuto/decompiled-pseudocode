/*
 * XREFs of ApiSetEditionKeyEventLLHook @ 0x140192534
 * Callers:
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 * Callees:
 *     EditionKeyEventLLHook @ 0x1401108D0 (EditionKeyEventLLHook.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionKeyEventLLHook(
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
  unsigned __int16 v14; // bp
  unsigned int v16; // ebx
  int (*v17)(void); // rax

  v14 = a2;
  v16 = 0;
  v17 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5760LL);
  if ( v17 && v17() >= 0 )
    return (unsigned int)EditionKeyEventLLHook(a1, v14, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  return v16;
}
