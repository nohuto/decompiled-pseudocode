/*
 * XREFs of ApiSetPointerPromotionGetCurrentPointerId @ 0x140193DDC
 * Callers:
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1401FB800 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetPointerPromotionGetCurrentPointerId(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // bx
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 (*v6)(void); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6272LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v6 = *(unsigned __int16 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 6280LL);
      if ( v6 )
        return v6();
    }
  }
  return v2;
}
