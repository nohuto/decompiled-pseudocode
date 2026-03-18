/*
 * XREFs of ApiSetEditionLLMouseButtonHook @ 0x140192618
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     EditionLLMouseButtonHook @ 0x14011C030 (EditionLLMouseButtonHook.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionLLMouseButtonHook(__int64 a1, __int64 a2, unsigned int a3, __int128 *a4, int a5)
{
  unsigned int v9; // ebx
  int (*v10)(void); // rax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0;
  v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4784LL);
  if ( v10 && v10() >= 0 )
  {
    v12 = *a4;
    return (unsigned int)EditionLLMouseButtonHook(a1, a2, a3, &v12, a5);
  }
  return v9;
}
