/*
 * XREFs of ApiSetEditionLLMouseWheelHook @ 0x1401926B0
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     EditionLLMouseWheelHook @ 0x14011AC88 (EditionLLMouseWheelHook.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionLLMouseWheelHook(__int64 a1, __int64 a2, __int128 *a3, unsigned int a4)
{
  unsigned int v6; // ebp
  unsigned int v8; // ebx
  int (*v9)(void); // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v6 = a2;
  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4768LL);
  if ( v9 && v9() >= 0 )
  {
    v11 = *a3;
    return (unsigned int)EditionLLMouseWheelHook(a1, v6, &v11, a4);
  }
  return v8;
}
