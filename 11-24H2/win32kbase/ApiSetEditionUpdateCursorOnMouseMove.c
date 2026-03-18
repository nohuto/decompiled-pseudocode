/*
 * XREFs of ApiSetEditionUpdateCursorOnMouseMove @ 0x140193620
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140062790 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionUpdateCursorOnMouseMove(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax

  v4 = 0LL;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6968LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 6976LL);
      if ( v8 )
        return v8(a1, a2);
    }
  }
  return v4;
}
