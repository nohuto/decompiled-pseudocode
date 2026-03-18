/*
 * XREFs of ApiSetEditionAllocThreadPointerData @ 0x140191370
 * Callers:
 *     ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1401F6A90 (-AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDES.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionAllocThreadPointerData(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 (*v6)(void); // rax

  v2 = 0LL;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6432LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v6 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 6440LL);
      if ( v6 )
        return v6();
    }
  }
  return v2;
}
