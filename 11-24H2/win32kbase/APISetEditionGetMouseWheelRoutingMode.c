/*
 * XREFs of APISetEditionGetMouseWheelRoutingMode @ 0x140191140
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14021C120 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall APISetEditionGetMouseWheelRoutingMode(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int (*v6)(void); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7016LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v6 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 7024LL);
      if ( v6 )
        return v6();
    }
  }
  return v2;
}
