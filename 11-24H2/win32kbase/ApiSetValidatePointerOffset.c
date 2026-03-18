/*
 * XREFs of ApiSetValidatePointerOffset @ 0x140194044
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FA358 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x140200EE0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ValidatePointerOffset @ 0x140120CA4 (ValidatePointerOffset.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetValidatePointerOffset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  int (*v9)(void); // rax

  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6368LL);
  if ( v9 && v9() >= 0 )
    return (unsigned int)ValidatePointerOffset(a1, a2, a3, a4);
  return v8;
}
