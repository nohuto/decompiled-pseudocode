/*
 * XREFs of ??$_Destroy_range@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetRect@CStoryboard@@QEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800D8D14
 * Callers:
 *     ??$_Uninitialized_move@PEAUUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAPEAUUnifiedTargetRect@CStoryboard@@QEAU12@0PEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800D8FD0 (--$_Uninitialized_move@PEAUUnifiedTargetRect@CStoryboard@@V-$allocator@UUnifiedTargetRect@CStory.c)
 *     ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800D9498 (--1CAppArrangementImmediate@@UEAA@XZ.c)
 *     ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800D96A0 (--_GCAppArrangementDelayed@@UEAAPEAXI@Z.c)
 *     ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x1800D97D0 (--_GCAppSwitch@@UEAAPEAXI@Z.c)
 *     ?_Change_array@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAXQEAUUnifiedTargetRect@CStoryboard@@_K1@Z @ 0x1800DC5DC (-_Change_array@-$vector@UUnifiedTargetRect@CStoryboard@@V-$allocator@UUnifiedTargetRect@CStorybo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Destroy_range<std::allocator<CStoryboard::UnifiedTargetRect>>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 5;
    do
    {
      v4 = (void *)*(v3 - 2);
      if ( v4 )
      {
        std::_Deallocate<16,0>(v4, (*v3 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
        *(v3 - 2) = 0LL;
        *(v3 - 1) = 0LL;
        *v3 = 0LL;
      }
      v3 += 6;
      result = v3 - 5;
    }
    while ( v3 - 5 != a2 );
  }
  return result;
}
