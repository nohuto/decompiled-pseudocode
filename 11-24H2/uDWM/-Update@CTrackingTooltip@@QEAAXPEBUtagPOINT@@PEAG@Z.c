/*
 * XREFs of ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x1800DC654
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180094250 (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800B6B10 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     ?UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ @ 0x1800DC714 (-UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ.c)
 */

void __fastcall CTrackingTooltip::Update(CTrackingTooltip *this, const struct tagPOINT *a2, unsigned __int16 *a3)
{
  struct tagRECT *v3; // rdi
  HWND *v5; // rsi

  v3 = (struct tagRECT *)((char *)this + 16);
  v5 = (HWND *)((char *)this + 8);
  if ( a3 )
  {
    *((_QWORD *)this + 11) = a3;
    SendMessageW(*v5, 0x439u, 0LL, (LPARAM)this + 40);
    GetWindowRect(*v5, v3);
  }
  if ( a2 )
  {
    if ( !v3->left && !*((_DWORD *)this + 6) )
      GetWindowRect(*v5, v3);
    *((struct tagPOINT *)this + 4) = *a2;
  }
  if ( a3 || a2 )
    CTrackingTooltip::UpdateTooltipLocation(this);
}
