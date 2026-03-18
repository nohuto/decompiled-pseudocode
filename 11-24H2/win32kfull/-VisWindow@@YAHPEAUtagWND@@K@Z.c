/*
 * XREFs of ?VisWindow@@YAHPEAUtagWND@@K@Z @ 0x1400320F8
 * Callers:
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 */

__int64 __fastcall VisWindow(struct tagWND *a1)
{
  int v1; // eax
  int v2; // r9d
  unsigned int v3; // ecx

  v1 = IsTopLevelWindow(a1);
  v3 = 0;
  if ( v1 )
    return (v2 & 0x30000000) == 0x10000000;
  return v3;
}
