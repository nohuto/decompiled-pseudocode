/*
 * XREFs of ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x140196E1C
 * Callers:
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x14008C8D4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1400F6C44 (CalcForegroundInsertAfter.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GetLastNonBottomMostWindow(struct tagWND *a1, int a2)
{
  struct tagWND *v2; // r10
  struct tagWND *i; // r9

  v2 = 0LL;
  for ( i = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
        i && (*(_BYTE *)(*((_QWORD *)i + 5) + 20LL) & 0x20) == 0;
        i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( !a2 || a1 != i )
      v2 = i;
  }
  return v2;
}
