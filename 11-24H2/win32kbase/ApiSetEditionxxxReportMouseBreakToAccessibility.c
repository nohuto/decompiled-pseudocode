/*
 * XREFs of ApiSetEditionxxxReportMouseBreakToAccessibility @ 0x14019389C
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018C3F8 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     EditionxxxReportMouseBreakToAccessibility @ 0x140121720 (EditionxxxReportMouseBreakToAccessibility.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionxxxReportMouseBreakToAccessibility(__int64 a1, __int128 *a2, unsigned int a3)
{
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  int (*v7)(void); // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  v6 = 1;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6784LL);
  if ( v7 && v7() >= 0 )
  {
    v9 = *a2;
    return (unsigned int)EditionxxxReportMouseBreakToAccessibility(v5, &v9, a3);
  }
  return v6;
}
