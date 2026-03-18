/*
 * XREFs of ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x14020F75C
 * Callers:
 *     xxxActivateKeyboardLayout @ 0x140096850 (xxxActivateKeyboardLayout.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1400F3EC8 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z @ 0x140110414 (-GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z.c)
 */

void __fastcall ReorderKeyboardLayouts(struct tagWINDOWSTATION *a1, struct tagKL *a2)
{
  struct tagKL *KbdLayoutListHead; // rax

  if ( !a1 || (*((_DWORD *)a1 + 16) & 4) == 0 )
  {
    KbdLayoutListHead = GetKbdLayoutListHead(a1);
    if ( KbdLayoutListHead )
    {
      if ( a2 != KbdLayoutListHead )
      {
        *(_QWORD *)(*((_QWORD *)a2 + 3) + 16LL) = *((_QWORD *)a2 + 2);
        *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) = *((_QWORD *)a2 + 3);
        *((_QWORD *)a2 + 2) = KbdLayoutListHead;
        *((_QWORD *)a2 + 3) = *((_QWORD *)KbdLayoutListHead + 3);
        *(_QWORD *)(*((_QWORD *)KbdLayoutListHead + 3) + 16LL) = a2;
        *((_QWORD *)KbdLayoutListHead + 3) = a2;
        LockKbdLayoutListHead(a1, a2);
      }
    }
  }
}
