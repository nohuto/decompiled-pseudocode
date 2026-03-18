/*
 * XREFs of ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1401B6C08
 * Callers:
 *     EditionNonDwmSpeedHitTest @ 0x1401597C0 (EditionNonDwmSpeedHitTest.c)
 *     TouchTargetChildTree @ 0x1401B69B8 (TouchTargetChildTree.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1401B6C08 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     EditionNonDwmTouchHitTest @ 0x1402A36C0 (EditionNonDwmTouchHitTest.c)
 *     EditionPostDwmSpeedHitTest @ 0x1402A3910 (EditionPostDwmSpeedHitTest.c)
 * Callees:
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1400222C0 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1401B6C08 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall ClassicChildTreeSpeedHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  struct tagWND *i; // rdi
  struct tagWND *v6; // rax

  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); ; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( !i )
      return a1;
    if ( ClassicIsWindowHit(i, a2) )
      break;
  }
  if ( *((_QWORD *)i + 14) )
  {
    if ( PtInRect((_DWORD *)(*((_QWORD *)i + 5) + 104LL), *(_QWORD *)&a2) )
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
