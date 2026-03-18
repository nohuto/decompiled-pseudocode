/*
 * XREFs of ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x140271D58
 * Callers:
 *     DestroyThreadHidObjects @ 0x1401AEBF0 (DestroyThreadHidObjects.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x140272684 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasRawKeyboardPerThreadRegistration(const struct tagPROCESSINFO *a1)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)a1 + 41); i; i = *(_QWORD *)(i + 704) )
  {
    if ( (*(_DWORD *)(i + 1360) & 0x200000) != 0 )
      return 1LL;
  }
  return 0LL;
}
