/*
 * XREFs of ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x180063970
 * Callers:
 *     ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180089EC0 (-OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801B1500 (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     <none>
 */

struct _KEYBOARD_INPUT_DATA *__fastcall KeyboardInputInfo::GetKeyboardInputData(
        KeyboardInputInfo *this,
        struct _KEYBOARD_INPUT_DATA *__return_ptr retstr)
{
  USHORT v2; // r8
  USHORT v3; // r9
  USHORT v4; // r8
  char v5; // al
  USHORT v6; // ax

  retstr->Reserved = 0;
  v2 = *((_WORD *)this + 28);
  v3 = *((_WORD *)this + 47);
  retstr->ExtraInformation = *((_DWORD *)this + 88);
  retstr->UnitId = v2;
  retstr->Flags = v3;
  if ( v2 == 0xFFFD )
    retstr->Reserved = *((_WORD *)this + 178);
  v4 = *((_WORD *)this + 30);
  v5 = v3;
  if ( v4 && !*((_WORD *)this + 29) )
  {
    v5 = v3 | 0x40;
    retstr->Flags = v3 | 0x40;
  }
  if ( (v5 & 0x40) != 0 )
  {
    retstr->MakeCode = v4;
  }
  else
  {
    v6 = *((_WORD *)this + 29);
    retstr->MakeCode = v6;
    if ( (v3 & 2) != 0 )
    {
      v6 |= 0xE000u;
      retstr->MakeCode = v6;
    }
    if ( (v3 & 4) != 0 )
      retstr->MakeCode = v6 | 0xE100;
  }
  return retstr;
}
