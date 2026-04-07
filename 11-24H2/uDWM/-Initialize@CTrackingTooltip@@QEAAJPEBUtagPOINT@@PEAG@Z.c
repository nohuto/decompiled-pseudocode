/*
 * XREFs of ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x1800DC5D4
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180094250 (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800B6B10 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     ?CreateTrackingTooltip@CTrackingTooltip@@IEAAPEAUHWND__@@PEAG@Z @ 0x1800DC4E4 (-CreateTrackingTooltip@CTrackingTooltip@@IEAAPEAUHWND__@@PEAG@Z.c)
 *     ?UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ @ 0x1800DC714 (-UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ.c)
 */

__int64 __fastcall CTrackingTooltip::Initialize(
        CTrackingTooltip *this,
        const struct tagPOINT *a2,
        unsigned __int16 *a3)
{
  unsigned int v4; // edi
  HWND TrackingTooltip; // rax

  *((struct tagPOINT *)this + 4) = *a2;
  v4 = 0;
  TrackingTooltip = CTrackingTooltip::CreateTrackingTooltip(this, a3);
  *((_QWORD *)this + 1) = TrackingTooltip;
  if ( TrackingTooltip )
  {
    GetWindowRect(TrackingTooltip, (LPRECT)this + 1);
    SendMessageW(*((HWND *)this + 1), 0x411u, 1uLL, (LPARAM)this + 40);
    CTrackingTooltip::UpdateTooltipLocation(this);
    *(_BYTE *)this = 1;
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v4;
}
