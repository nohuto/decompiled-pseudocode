/*
 * XREFs of ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C007E2D4
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C007DDA8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C02AEC50 (-MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02B6B78 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     UnmapPrintKView @ 0x1C007E544 (UnmapPrintKView.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::DestroyFont(PDEVOBJ *this, struct _FONTOBJ *a2)
{
  int v4; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *((_QWORD *)Gre::Base::Globals(this) + 6);
  GreAcquireSemaphore(v5);
  v4 = *(_DWORD *)(*(_QWORD *)&a2[2].iUniq + 68LL);
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  if ( v4 == 1 )
    UnmapPrintKView(*(_QWORD *)(*(_QWORD *)&a2[2].iUniq + 80LL));
  (*(void (__fastcall **)(struct _FONTOBJ *))(*(_QWORD *)this + 3008LL))(a2);
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
}
