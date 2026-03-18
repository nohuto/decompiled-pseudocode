/*
 * XREFs of ?ContainsBrush@CRenderingTechnique@@QEBA_NPEBVCBrush@@@Z @ 0x18008BDE4
 * Callers:
 *     ?AdjustNotification@CBrushRenderingGraph@@QEBAXPEAW4Flags@NotificationEventArgs@@PEBVCBrush@@@Z @ 0x18008DBC4 (-AdjustNotification@CBrushRenderingGraph@@QEBAXPEAW4Flags@NotificationEventArgs@@PEBVCBrush@@@Z.c)
 * Callees:
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x18008A2B0 (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 */

bool __fastcall CRenderingTechnique::ContainsBrush(CRenderingTechnique *this, const struct CBrush *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rdx

  for ( i = 0; i < *((_DWORD *)this + 65); ++i )
  {
    v5 = 44LL * i;
    if ( !*((_BYTE *)this + v5 + 84)
      && CBrushRenderingGraph::GetNamedInput(*(CBrushRenderingGraph **)this, *(_DWORD *)((char *)this + v5 + 80)) == a2 )
    {
      break;
    }
  }
  return i < *((_DWORD *)this + 65);
}
