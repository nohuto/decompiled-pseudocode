/*
 * XREFs of _CAppThumbnailWindow::StartSwitchGestureOperationAsync$_InitCoro$2_::_1_::dtor$0 @ 0x180210650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CAppThumbnailWindow::StartSwitchGestureOperationAsync__InitCoro_2_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 88) + 10LL) )
  {
    *(_QWORD *)(a2 + 48) = 33LL;
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 88);
    operator delete(*(void **)(a2 + 56));
  }
}
