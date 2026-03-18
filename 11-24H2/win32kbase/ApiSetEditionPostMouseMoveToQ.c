/*
 * XREFs of ApiSetEditionPostMouseMoveToQ @ 0x140192F40
 * Callers:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle@@@Z @ 0x14021E150 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle.c)
 * Callees:
 *     EditionPostMouseMoveToQ @ 0x1400E66C4 (EditionPostMouseMoveToQ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPostMouseMoveToQ(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v11; // ebx
  int (*v12)(void); // rax

  v11 = 0;
  v12 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4864LL);
  if ( v12 && v12() >= 0 )
    return (unsigned int)EditionPostMouseMoveToQ(a1, a2, a3, a4, a5, a6, a7);
  return v11;
}
