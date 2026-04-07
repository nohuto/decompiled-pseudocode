/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180029380
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180028130 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x1800295D0 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x1800296B0 (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 *     ?UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ @ 0x180029774 (-UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SetBounds@CClientArea@@QEAAJXZ @ 0x180029900 (-SetBounds@CClientArea@@QEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x180029978 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateHolographicSlateBounds@CTopLevelWindow@@AEAAJXZ @ 0x180029B00 (-UpdateHolographicSlateBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x180029B8C (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CClientArea **this)
{
  int updated; // ebx
  CClientArea *v3; // rcx

  updated = CTopLevelWindow::EnsureClientAreaNode((CTopLevelWindow *)this);
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1500u, 0LL);
  }
  else
  {
    v3 = this[60];
    if ( v3 )
    {
      updated = CClientArea::SetBounds(v3);
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1505u, 0LL);
      }
      else
      {
        updated = CTopLevelWindow::UpdateRemoteAppRenderTargetBounds((CTopLevelWindow *)this);
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1507u, 0LL);
        }
        else
        {
          updated = CVisualProxy::SetSize(
                      *((CVisualProxy **)this[60] + 2),
                      (double)(*((_DWORD *)this[89] + 61) - *((_DWORD *)this[89] + 59)),
                      (double)(*((_DWORD *)this[89] + 62) - *((_DWORD *)this[89] + 60)));
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x150Cu, 0LL);
          }
          else
          {
            updated = CTopLevelWindow::SendBoundsToSwapchainTarget((CTopLevelWindow *)this);
            if ( updated < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x150Fu, 0LL);
            }
            else
            {
              updated = CTopLevelWindow::UpdateHolographicSlateBounds((CTopLevelWindow *)this);
              if ( updated < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1511u, 0LL);
              }
              else
              {
                updated = CTopLevelWindow::UpdateWindowTarget((CTopLevelWindow *)this);
                if ( updated < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1513u, 0LL);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)updated;
}
