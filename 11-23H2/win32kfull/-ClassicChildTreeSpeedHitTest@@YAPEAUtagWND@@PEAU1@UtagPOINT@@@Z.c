/*
 * XREFs of ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0016DCC
 * Callers:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0016DCC (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     EditionNonDwmSpeedHitTest @ 0x1C008CFF0 (EditionNonDwmSpeedHitTest.c)
 *     EditionPostDwmSpeedHitTest @ 0x1C00AED70 (EditionPostDwmSpeedHitTest.c)
 *     EditionNonDwmTouchHitTest @ 0x1C01E5CB0 (EditionNonDwmTouchHitTest.c)
 *     TouchTargetChildTree @ 0x1C01E6228 (TouchTargetChildTree.c)
 * Callees:
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00126F8 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0016DCC (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C00AF258 (PtInRect.c)
 */

struct tagWND *__fastcall ClassicChildTreeSpeedHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  struct tagWND *i; // rdi
  struct tagWND *v6; // rax

  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); ; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( !i )
      return a1;
    if ( (unsigned int)ClassicIsWindowHit(i, a2) )
      break;
  }
  if ( *((_QWORD *)i + 14) )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*((_QWORD *)i + 5) + 104LL, a2) )
    {
      v6 = ClassicChildTreeSpeedHitTest(i, a2);
      if ( v6 )
      {
        if ( v6 != i )
          return v6;
      }
    }
  }
  return i;
}
