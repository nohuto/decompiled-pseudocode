/*
 * XREFs of ??$_Uninitialized_move@PEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180667F44
 * Callers:
 *     ??$_Emplace_reallocate@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@?$vector@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU23@$$QEAU23@@Z @ 0x180667DAC (--$_Emplace_reallocate@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@I.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180654F40 (--$_Destroy_range@V-$allocator@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop.c)
 */

char *__fastcall std::_Uninitialized_move<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen> *,std::allocator<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9
  __int64 v6; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 2;
    v5 = (char *)(a3 - (char *)a1);
    do
    {
      v6 = *(v4 - 2);
      *(v4 - 2) = 0LL;
      *(_QWORD *)a3 = v6;
      a3 += 24;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = *(v4 - 1);
      *(_QWORD *)&v5[(_QWORD)v4] = *v4;
      v4 += 3;
    }
    while ( v4 - 2 != a2 );
  }
  std::_Destroy_range<std::allocator<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>>(
    (__int64)a3,
    (__int64)a3);
  return a3;
}
